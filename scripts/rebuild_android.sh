#!/bin/sh
# Rebuild the recovered smali/resources using the original native library.
set -eu
cd "$(dirname "$0")/.."
SDK_BUILD_TOOLS=${SDK_BUILD_TOOLS:-/Users/curtispritchard/Library/Android/sdk/build-tools/35.0.0}
mkdir -p .tools/keys
java -jar .tools/apktool.jar b -p .tools/apktool-framework recovered/android -o recovered/ZombieCafe-rebuilt-unsigned.apk
"$SDK_BUILD_TOOLS/zipalign" -f -p 4 recovered/ZombieCafe-rebuilt-unsigned.apk recovered/ZombieCafe-rebuilt-aligned.apk
if [ ! -f .tools/keys/recovery-debug.p12 ]; then
 keytool -genkeypair -keystore .tools/keys/recovery-debug.p12 -storepass android -keypass android -alias recovery -keyalg RSA -keysize 2048 -validity 10000 -dname 'CN=Zombie Cafe Local Recovery'
fi
"$SDK_BUILD_TOOLS/apksigner" sign --ks .tools/keys/recovery-debug.p12 --ks-pass pass:android --key-pass pass:android --out recovered/ZombieCafe-rebuilt-debug.apk recovered/ZombieCafe-rebuilt-aligned.apk
"$SDK_BUILD_TOOLS/apksigner" verify --verbose recovered/ZombieCafe-rebuilt-debug.apk
