/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa300 javaHideInfobar */

void javaHideInfobar(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa330;
  FUN_002a8162(*(undefined4 *)(DAT_002aa330 + 0x2aa30c),local_1c);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa314),
             *(undefined4 *)(javaShowWebViewInfobar + DAT_002aa334),param_1,param_2,param_3);
  return;
}


