// Ghidra headless script: export recovered functions as reference pseudocode.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;
public class ExportNative extends GhidraScript {
 public void run() throws Exception {
  File out = new File(getScriptArgs()[0]); out.mkdirs();
  DecompInterface probe=new DecompInterface(); probe.openProgram(currentProgram);
  try {
   Function recipe=currentProgram.getFunctionManager().getFunctionAt(toAddr(0x00238f3a));
   DecompileResults result=probe.decompileFunction(recipe,30,monitor);
   if(!result.decompileCompleted() || !result.getDecompiledFunction().getC().contains("readShort"))
    throw new IllegalStateException("Recipe deserializer is truncated; native analysis needs correction");
   println("SPOT CHECK PASSED: Recipe deserializer includes numeric fields after String destructor");
  } finally {probe.dispose();}
  // Remove only earlier generated outputs to avoid stale functions after reanalysis.
  for(File f:out.listFiles()) if(f.getName().endsWith(".c")) f.delete();
  try (PrintWriter asm=new PrintWriter(new File(out.getParentFile(),"disassembly.txt"))) {
   InstructionIterator instructions=currentProgram.getListing().getInstructions(true);
   while(instructions.hasNext()) { Instruction ins=instructions.next(); asm.println(ins.getAddress()+"  "+ins.toString()); }
  }
  List<Function> functions=new ArrayList<>();
  FunctionIterator it=currentProgram.getFunctionManager().getFunctions(true);
  while(it.hasNext()) {Function f=it.next();if(!f.isExternal()) functions.add(f);}
  AtomicInteger next=new AtomicInteger(),ok=new AtomicInteger(),failed=new AtomicInteger();
  List<String> rows=Collections.synchronizedList(new ArrayList<>());
  ExecutorService pool=Executors.newFixedThreadPool(4);
  List<Future<?>> workers=new ArrayList<>();
  try {
   for(int worker=0;worker<4;worker++) workers.add(pool.submit(() -> {
    DecompInterface d=new DecompInterface(); d.openProgram(currentProgram);
    try {
     int i;
     while((i=next.getAndIncrement())<functions.size() && !monitor.isCancelled()) {
      Function f=functions.get(i);
      String name=f.getName(true),addr=f.getEntryPoint().toString();
      String file=addr+"_"+name.replaceAll("[^A-Za-z0-9_.-]","_");
      if(file.length()>180) file=file.substring(0,180); file+=".c";
      DecompileResults r=d.decompileFunction(f,30,monitor);
      boolean success=r.decompileCompleted() && r.getDecompiledFunction()!=null;
      try(PrintWriter w=new PrintWriter(new File(out,file))) {
       w.println("/* Decompiled reference pseudocode. Not original or buildable C++. */");
       w.println("/* "+addr+" "+name+" */");
       if(success) {w.println(r.getDecompiledFunction().getC());ok.incrementAndGet();}
       else {w.println("/* FAILED: "+r.getErrorMessage()+" */");failed.incrementAndGet();}
      }
      rows.add(addr+"\t"+name+"\t"+(success?"ok":"failed")+"\t"+file);
      if((ok.get()+failed.get())%500==0) println("EXPORTED "+ok.get()+" successful; "+failed.get()+" failed of "+functions.size());
     }
    } catch(Exception e) {throw new RuntimeException(e);} finally {d.dispose();}
   }));
   for(Future<?> w:workers) w.get();
  } finally {pool.shutdownNow();}
  Collections.sort(rows);
  try(PrintWriter index=new PrintWriter(new File(out,"functions.tsv"))) {
   index.println("address\tname\tstatus\tfile");for(String row:rows) index.println(row);
  }
  println("EXPORT COMPLETE: "+ok.get()+" successful; "+failed.get()+" failed");
 }
}
