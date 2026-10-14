/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8e8c javaGetDate */

void javaGetDate(undefined4 param_1,_jclass *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a8eac;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a8eac + 0x2a8e98),&local_14,param_3,param_4,param_1);
  _JNIEnv::CallStaticIntMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a8ea0),*(undefined4 *)(iVar1 + 0x2a8ea8),param_1);
  return;
}


