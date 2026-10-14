/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa4b8 javaWebControlShow */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* javaWebControlShow() */

undefined8 javaWebControlShow(void)

{
  int iVar1;
  undefined4 in_r0;
  _jclass *in_r1;
  _jclass *local_c;
  
  iVar1 = DAT_002aa4d8;
  local_c = in_r1;
  FUN_002a8162(*(undefined4 *)(DAT_002aa4d8 + 0x2aa4c2),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2aa4ca),*(undefined4 *)(DAT_002aa4dc + 0x2aa510));
  return CONCAT44(local_c,in_r0);
}


