/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9304 javaLoggedIn */

undefined8 javaLoggedIn(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9324;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9324 + 0x2a930e),&local_c);
  iVar1 = _JNIEnv::CallStaticBooleanMethod
                    (local_c,*(_jmethodID **)(iVar1 + 0x2a9316),*(undefined4 *)(iVar1 + 0x2a937a));
  return CONCAT44(param_1,(uint)(iVar1 != 0));
}


