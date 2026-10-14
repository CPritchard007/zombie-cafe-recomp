/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9b8c javaSetString */

undefined4 javaSetString(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jclass *local_14;
  
  iVar1 = DAT_002a9bc8;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9bc8 + 0x2a9b98),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9ba0),*(undefined4 *)(DAT_002a9bcc + 0x2a9c04),
             uVar2,uVar3);
  return param_2;
}


