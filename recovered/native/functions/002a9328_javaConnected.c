/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9328 javaConnected */

undefined8 javaConnected(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9348;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9348 + 0x2a9332),&local_c);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_c,*(_jmethodID **)(iVar1 + 0x2a933a),*(undefined4 *)(iVar1 + 0x2a93a2));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


