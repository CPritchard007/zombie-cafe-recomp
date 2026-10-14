/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa36c javaShowWebViewInfobar */

void javaShowWebViewInfobar
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002aa3a8;
  FUN_002a8162(*(undefined4 *)(DAT_002aa3a8 + 0x2aa378),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2aa380),
             *(undefined4 *)(javaShowFixWebView + DAT_002aa3ac),param_1,param_2,param_3,param_4,
             uVar2);
  return;
}


