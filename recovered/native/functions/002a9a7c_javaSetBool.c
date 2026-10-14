/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9a7c javaSetBool */

undefined4 javaSetBool(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  
  iVar1 = DAT_002a9ab0;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9ab0 + 0x2a9a88),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9a90),*(undefined4 *)(DAT_002a9ab4 + 0x2a9adc),
             uVar2,param_2);
  return param_2;
}


