/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9cbc javaInitSound */

undefined4 javaInitSound(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9cec;
  FUN_002a8162(*(undefined4 *)(DAT_002a9cec + 0x2a9cc8),local_1c);
  _JNIEnv::CallStaticBooleanMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9cd0),*(undefined4 *)(DAT_002a9cf0 + 0x2a9cdc)
             ,param_1,param_2,param_3);
  return 1;
}


