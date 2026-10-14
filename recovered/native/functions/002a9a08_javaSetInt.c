/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9a08 javaSetInt */

undefined4 javaSetInt(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  
  iVar1 = DAT_002a9a3c;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9a3c + 0x2a9a14),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9a1c),*(undefined4 *)(DAT_002a9a40 + 0x2a9a60),
             uVar2,param_2);
  return param_2;
}


