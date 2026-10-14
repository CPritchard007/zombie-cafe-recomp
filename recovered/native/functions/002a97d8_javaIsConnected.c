/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a97d8 javaIsConnected */

undefined8 javaIsConnected(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a97fc;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a97fc + 0x2a97e2),&local_c);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_c,*(_jmethodID **)(iVar1 + 0x2a97ea),
                     *(undefined4 *)(DAT_002a9800 + 0x2a9820));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


