/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a920c javaOpenSupportPage */

undefined8 javaOpenSupportPage(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9228;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9228 + 0x2a9216),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a921e),*(undefined4 *)(iVar1 + 0x2a9266));
  return CONCAT44(local_c,param_1);
}


