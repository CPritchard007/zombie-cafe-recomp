/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aaa44 javaQuitGame */

undefined8 javaQuitGame(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002aaa68;
  local_c = param_2;
  if (*(int *)(DAT_002aaa68 + 0x2aaa50) != 0) {
    FUN_002a8162(*(undefined4 *)(DAT_002aaa68 + 0x2aaa4c),&local_c);
    _JNIEnv::CallStaticVoidMethod
              (local_c,*(_jmethodID **)(iVar1 + 0x2aaa54),*(undefined4 *)(DAT_002aaa6c + 0x2aaa7a));
  }
  return CONCAT44(local_c,param_1);
}


