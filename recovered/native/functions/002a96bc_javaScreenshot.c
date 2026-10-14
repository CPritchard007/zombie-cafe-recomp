/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a96bc javaScreenshot */

undefined8 javaScreenshot(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a96e4;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a96e4 + 0x2a96c8),&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a96d0),*(undefined4 *)(iVar1 + 0x2a9744),uVar2);
  return CONCAT44(local_14,param_1);
}


