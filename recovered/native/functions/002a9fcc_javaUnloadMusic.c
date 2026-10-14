/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9fcc javaUnloadMusic */

undefined8 javaUnloadMusic(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9ff4;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9ff4 + 0x2a9fd8),&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2a9fe0),
                     *(undefined4 *)(DAT_002a9ff8 + 0x2aa01e),param_1);
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


