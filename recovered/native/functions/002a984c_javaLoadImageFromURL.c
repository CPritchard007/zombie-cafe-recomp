/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a984c javaLoadImageFromURL */

void javaLoadImageFromURL(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a989c;
  FUN_002a8162(*(undefined4 *)(DAT_002a989c + 0x2a9858),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  uVar4 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9860),*(undefined4 *)(DAT_002a98a0 + 0x2a98f8)
             ,uVar2,uVar3,uVar4,in_r3);
  return;
}


