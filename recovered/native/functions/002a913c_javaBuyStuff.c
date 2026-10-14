/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a913c javaBuyStuff */

undefined8 javaBuyStuff(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a915c;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a915c + 0x2a9148),&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9150),*(undefined4 *)((int)&DAT_002a9188 + iVar1)
             ,param_1);
  return CONCAT44(local_14,param_1);
}


