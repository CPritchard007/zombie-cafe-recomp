/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a922c javaEndLoading */

undefined8 javaEndLoading(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9248;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9248 + 0x2a9236),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a923e),*(undefined4 *)(iVar1 + 0x2a928a));
  return CONCAT44(local_c,param_1);
}


