/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9af4 javaSetFloat */

undefined4 javaSetFloat(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9b38;
  FUN_002a8162(*(undefined4 *)(DAT_002a9b38 + 0x2a9b00),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = *(undefined4 *)(DAT_002a9b3c + 0x2a9b5e);
  uVar4 = __extendsfdf2(param_2);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9b08),uVar3,uVar2,(int)uVar4,
             (int)((ulonglong)uVar4 >> 0x20));
  return param_2;
}


