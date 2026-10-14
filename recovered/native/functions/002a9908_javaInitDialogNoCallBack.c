/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9908 javaInitDialogNoCallBack */

void javaInitDialogNoCallBack(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9954;
  FUN_002a8162(*(undefined4 *)(DAT_002a9954 + 0x2a9914),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar4 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a991c),
             *(undefined4 *)(javaShowDialog + DAT_002a9958 + 6),uVar2,uVar3,uVar4);
  return;
}


