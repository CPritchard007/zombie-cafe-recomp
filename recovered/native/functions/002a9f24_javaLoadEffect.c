/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9f24 javaLoadEffect */

bool javaLoadEffect(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  undefined4 uVar1;
  int iVar2;
  _jclass *local_14;
  
  iVar2 = DAT_002a9f58;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9f58 + 0x2a9f30),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_14);
  iVar2 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar2 + 0x2a9f38),
                     *(undefined4 *)(DAT_002a9f5c + 0x2a9f72),param_1,uVar1);
  return iVar2 != 0;
}


