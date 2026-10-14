/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9c84 javaGetUInt */

/* javaGetUInt(char const*, int) */

void javaGetUInt(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  _jclass *in_r3;
  _jclass *local_14;
  
  iVar1 = DAT_002a9cb4;
  local_14 = in_r3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9cb4 + 0x2a9c90),&local_14,in_r2,in_r3,param_1,param_2);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticIntMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9c98),*(undefined4 *)(DAT_002a9cb8 + 0x2a9d00),
             uVar2,param_2);
  return;
}


