/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa508 javaWebControlView */

/* javaWebControlView(char const*, bool) */

ulonglong javaWebControlView(char *param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_r2;
  _jclass *in_r3;
  _jclass *local_14;
  
  iVar1 = DAT_002aa538;
  uVar3 = (uint)param_2;
  local_14 = in_r3;
  FUN_002a8162(*(undefined4 *)(DAT_002aa538 + 0x2aa514),&local_14,in_r2,in_r3,param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa51c),*(undefined4 *)(DAT_002aa53c + 0x2aa52c),
             uVar2);
  return (ulonglong)CONCAT14(param_2,uVar3);
}


