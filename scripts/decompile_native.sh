#!/bin/sh
set -eu
cd "$(dirname "$0")/.."
mkdir -p recovered/native .tools/ghidra-home reports
# JAVA_HOME must point to JDK 21+; this default matches this machine.
JAVA_HOME=${JAVA_HOME:-/opt/homebrew/opt/java}
export JAVA_HOME
JAVA_TOOL_OPTIONS="-Duser.home=$PWD/.tools/ghidra-home"
export JAVA_TOOL_OPTIONS
.tools/ghidra_11.3.2_PUBLIC/support/analyzeHeadless recovered/native project \
 -import recovered/apk/lib/armeabi/libZombieCafeAndroid.so -overwrite \
 -scriptPath "$PWD/scripts" -preScript ConfigureNative.java -postScript ExportNative.java "$PWD/recovered/native/functions" \
 -postScript RetryNative.java "$PWD/recovered/native/functions" \
 -analysisTimeoutPerFile 600 > reports/ghidra.log 2>&1
