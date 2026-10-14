/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a995c javaShowDialog */

undefined8 javaShowDialog(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a997c;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a997c + 0x2a9966),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a996e),*(undefined4 *)(DAT_002a9980 + 0x2a9998));
  return CONCAT44(local_c,param_1);
}


