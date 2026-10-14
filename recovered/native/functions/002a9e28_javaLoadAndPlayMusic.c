/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9e28 javaLoadAndPlayMusic */

void javaLoadAndPlayMusic(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  _jmethodID *p_Var2;
  undefined4 uVar3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9e6c;
  FUN_002a8162(*(undefined4 *)(DAT_002a9e6c + 0x2a9e34),local_1c);
  p_Var2 = *(_jmethodID **)(iVar1 + 0x2a9e3c);
  uVar3 = *(undefined4 *)(DAT_002a9e70 + 0x2a9e66);
  __extendsfdf2(param_3);
  _JNIEnv::CallStaticVoidMethod(local_1c[0],p_Var2,uVar3,param_1,param_2);
  return;
}


