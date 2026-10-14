// Retry functions that exceeded the bulk-export timeout, preserving the index.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;
public class RetryNative extends GhidraScript {
 public void run() throws Exception {
  File out=new File(getScriptArgs()[0]);Path index=new File(out,"functions.tsv").toPath();
  List<String> rows=Files.readAllLines(index);
  DecompInterface d=new DecompInterface();
  DecompileOptions options=new DecompileOptions();options.setMaxPayloadMBytes(128);
  d.setOptions(options);d.toggleSyntaxTree(false);d.openProgram(currentProgram);
  try {
   for(int i=1;i<rows.size();i++) {
    String[] r=rows.get(i).split("\t");if(!r[2].equals("failed")) continue;
    Function f=currentProgram.getFunctionManager().getFunctionAt(toAddr(r[0]));
    DecompileResults result=d.decompileFunction(f,120,monitor);
    if(result.decompileCompleted() && result.getDecompiledFunction()!=null) {
     try(PrintWriter w=new PrintWriter(new File(out,r[3]))) {
      w.println("/* Decompiled reference pseudocode. Not original or buildable C++. */");
      w.println("/* "+r[0]+" "+r[1]+" */");w.println(result.getDecompiledFunction().getC());
     }
     r[2]="ok";rows.set(i,String.join("\t",r));println("RETRY SUCCESS: "+r[1]);
    } else println("RETRY FAILED: "+r[1]+" "+result.getErrorMessage());
   }
  } finally {d.dispose();Files.write(index,rows);}
 }
}
