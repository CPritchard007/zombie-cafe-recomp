import ghidra.app.script.GhidraScript;
public class ConfigureNative extends GhidraScript {
 public void run() throws Exception {
  // This legacy ARM library triggers false non-return inference (e.g. String::~String).
  // Keep known libc non-return functions, but do not infer additional ones.
  setAnalysisOption(currentProgram, "Non-Returning Functions - Discovered", "false");
 }
}
