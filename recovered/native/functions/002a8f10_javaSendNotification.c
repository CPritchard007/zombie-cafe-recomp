/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8f10 javaSendNotification */

void javaSendNotification
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a8f48;
  FUN_002a8162(*(undefined4 *)(DAT_002a8f48 + 0x2a8f1c),local_1c);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_1c[0]);
  _JNIEnv::CallStaticVoidMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a8f24),*(undefined4 *)(iVar1 + 0x2a8f30),
             param_1,uVar2,param_3,param_4);
  return;
}


