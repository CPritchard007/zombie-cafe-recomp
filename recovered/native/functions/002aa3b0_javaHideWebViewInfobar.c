/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa3b0 javaHideWebViewInfobar */

void javaHideWebViewInfobar(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa3e0;
  FUN_002a8162(*(undefined4 *)(DAT_002aa3e0 + 0x2aa3bc),local_1c);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa3c4),
             *(undefined4 *)((int)&DAT_002aa428 + DAT_002aa3e4),param_1,param_2,param_3);
  return;
}


