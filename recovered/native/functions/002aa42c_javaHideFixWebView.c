/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa42c javaHideFixWebView */

void javaHideFixWebView(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa45c;
  FUN_002a8162(*(undefined4 *)(DAT_002aa45c + 0x2aa438),local_1c);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa440),*(undefined4 *)(DAT_002aa460 + 0x2aa4ac)
             ,param_1,param_2,param_3);
  return;
}


