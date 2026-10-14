/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9ecc javaStartEffect */

undefined8 javaStartEffect(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9ef0;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9ef0 + 0x2a9ed8),&local_14);
  _JNIEnv::CallStaticBooleanMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9ee0),*(undefined4 *)(DAT_002a9ef4 + 0x2a9f0a),
             param_1);
  return CONCAT44(local_14,param_1);
}


