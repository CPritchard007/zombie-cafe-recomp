/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa490 javaLaunchURL */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* javaLaunchURL() */

undefined8 javaLaunchURL(void)

{
  int iVar1;
  undefined4 in_r0;
  _jclass *in_r1;
  _jclass *local_c;
  
  iVar1 = DAT_002aa4b0;
  local_c = in_r1;
  FUN_002a8162(*(undefined4 *)(DAT_002aa4b0 + 0x2aa49a),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2aa4a2),*(undefined4 *)(DAT_002aa4b4 + 0x2aa510));
  return CONCAT44(local_c,in_r0);
}


