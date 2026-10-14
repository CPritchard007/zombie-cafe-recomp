/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9804 javaNewRequest */

void javaNewRequest(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9844;
  FUN_002a8162(*(undefined4 *)(DAT_002a9844 + 0x2a9810),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9818),*(undefined4 *)(DAT_002a9848 + 0x2a9860)
             ,uVar2,uVar3,param_3);
  return;
}


