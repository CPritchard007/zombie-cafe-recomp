/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9984 javaFreeDialog */

undefined8 javaFreeDialog(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a99a4;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a99a4 + 0x2a998e),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a9996),*(undefined4 *)(DAT_002a99a8 + 0x2a99c4));
  return CONCAT44(local_c,param_1);
}


