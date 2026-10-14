/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9ffc javaSetMusicLoop */

bool javaSetMusicLoop(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  _jclass *local_14;
  
  iVar1 = DAT_002aa028;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002aa028 + 0x2aa008),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2aa010),
                     *(undefined4 *)(DAT_002aa02c + 0x2aa054),param_1,param_2);
  return iVar1 != 0;
}


