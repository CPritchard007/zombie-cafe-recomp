/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9710 javaHideWebView */

undefined8 javaHideWebView(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9730;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9730 + 0x2a971a),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a9722),
             *(undefined4 *)(javaLaunchURL2 + DAT_002a9734));
  return CONCAT44(local_c,param_1);
}


