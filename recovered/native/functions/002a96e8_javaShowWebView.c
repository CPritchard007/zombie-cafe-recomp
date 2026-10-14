/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a96e8 javaShowWebView */

undefined8 javaShowWebView(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9708;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9708 + 0x2a96f2),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a96fa),*(undefined4 *)(DAT_002a970c + 0x2a9740));
  return CONCAT44(local_c,param_1);
}


