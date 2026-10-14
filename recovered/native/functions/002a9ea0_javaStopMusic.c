/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9ea0 javaStopMusic */

undefined8 javaStopMusic(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9ec4;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9ec4 + 0x2a9eac),&local_14);
  _JNIEnv::CallStaticBooleanMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9eb4),*(undefined4 *)(DAT_002a9ec8 + 0x2a9eda),
             param_1);
  return CONCAT44(local_14,param_1);
}


