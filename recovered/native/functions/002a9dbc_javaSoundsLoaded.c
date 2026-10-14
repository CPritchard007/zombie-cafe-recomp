/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9dbc javaSoundsLoaded */

undefined8 javaSoundsLoaded(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9de0;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9de0 + 0x2a9dc6),&local_c);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_c,*(_jmethodID **)(iVar1 + 0x2a9dce),
                     *(undefined4 *)(DAT_002a9de4 + 0x2a9e50));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


