/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9d1c javaIsEffectPlaying */

undefined8 javaIsEffectPlaying(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9d44;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9d44 + 0x2a9d28),&local_14);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_14,*(_jmethodID **)(iVar1 + 0x2a9d30),
                     *(undefined4 *)(DAT_002a9d48 + 0x2a9d3e),param_1);
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


