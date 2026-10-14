/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a98a4 javaInitDialog */

void javaInitDialog(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9900;
  FUN_002a8162(*(undefined4 *)(DAT_002a9900 + 0x2a98b0),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar4 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar5 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a98b8),
             *(undefined4 *)((int)&DAT_002a9904 + DAT_002a9904 + 2),param_1,uVar2,uVar3,uVar4,uVar5)
  ;
  return;
}


