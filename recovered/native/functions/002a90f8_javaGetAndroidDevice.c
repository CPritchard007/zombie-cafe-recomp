/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a90f8 javaGetAndroidDevice */

void javaGetAndroidDevice(undefined4 param_1,_jclass *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9114;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9114 + 0x2a9102),&local_c,param_3,param_4,param_1);
  _JNIEnv::CallStaticIntMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a910a),*(undefined4 *)(javaBuyStuff + iVar1 + 2));
  return;
}


