/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a99ac javaDismissWithButtonClick */

undefined8 javaDismissWithButtonClick(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a99cc;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a99cc + 0x2a99b6),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a99be),*(undefined4 *)(DAT_002a99d0 + 0x2a99f0));
  return CONCAT44(local_c,param_1);
}


