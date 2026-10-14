/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab384 javaEnableRemoteNotification */

undefined8 javaEnableRemoteNotification(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002ab3a8;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002ab3a8 + 0x2ab390),&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab398),*(undefined4 *)(DAT_002ab3ac + 0x2ab406),
             param_1);
  return CONCAT44(local_14,param_1);
}


