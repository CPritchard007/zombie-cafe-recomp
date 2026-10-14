/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a99d4 javaInitOptions */

undefined8 javaInitOptions(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9a00;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9a00 + 0x2a99e0),&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a99e8),*(undefined4 *)(DAT_002a9a04 + 0x2a9a26),
             uVar2);
  return CONCAT44(local_14,param_1);
}


