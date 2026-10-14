/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9cf4 javaFreeSound */

undefined8 javaFreeSound(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9d14;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9d14 + 0x2a9cfe),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a9d06),*(undefined4 *)(DAT_002a9d18 + 0x2a9d10));
  return CONCAT44(local_c,param_1);
}


