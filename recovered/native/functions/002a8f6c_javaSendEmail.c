/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8f6c javaSendEmail */

undefined8 javaSendEmail(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a8f88;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a8f88 + 0x2a8f76),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a8f7e),*(undefined4 *)(iVar1 + 0x2a8f82));
  return CONCAT44(local_c,param_1);
}


