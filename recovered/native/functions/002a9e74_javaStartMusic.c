/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9e74 javaStartMusic */

undefined8 javaStartMusic(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9e98;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9e98 + 0x2a9e80),&local_14);
  _JNIEnv::CallStaticBooleanMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9e88),*(undefined4 *)(DAT_002a9e9c + 0x2a9eaa),
             param_1);
  return CONCAT44(local_14,param_1);
}


