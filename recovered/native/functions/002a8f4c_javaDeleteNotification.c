/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8f4c javaDeleteNotification */

undefined8 javaDeleteNotification(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a8f68;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a8f68 + 0x2a8f56),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a8f5e),*(undefined4 *)(javaSendEmail + iVar1 + 2));
  return CONCAT44(local_c,param_1);
}


