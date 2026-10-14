/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9ef8 javaStopEffect */

undefined8 javaStopEffect(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9f1c;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9f1c + 0x2a9f04),&local_14);
  _JNIEnv::CallStaticBooleanMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9f0c),*(undefined4 *)(DAT_002a9f20 + 0x2a9f3a),
             param_1);
  return CONCAT44(local_14,param_1);
}


