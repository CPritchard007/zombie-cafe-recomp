/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9c38 javaSetUInt */

/* javaSetUInt(char const*, int) */

int javaSetUInt(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9c78;
  FUN_002a8162(*(undefined4 *)(DAT_002a9c78 + 0x2a9c44),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  L_PrintLog((char *)(DAT_002a9c7c + 0x2a9c5e),param_1);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9c4c),
             *(undefined4 *)(javaInitSound + DAT_002a9c80 + 2),uVar2,param_2);
  return param_2;
}


