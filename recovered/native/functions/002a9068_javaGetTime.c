/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9068 javaGetTime */

void javaGetTime(undefined4 param_1,_jclass *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *local_c;
  
  iVar1 = DAT_002a9084;
  local_c = param_2;
  FUN_002a8162(*(undefined4 *)(DAT_002a9084 + 0x2a9072),&local_c,param_3,param_4,param_1);
  _JNIEnv::CallStaticLongMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2a907a),
             *(undefined4 *)((int)&DAT_002a90a4 + iVar1 + 2));
  return;
}


