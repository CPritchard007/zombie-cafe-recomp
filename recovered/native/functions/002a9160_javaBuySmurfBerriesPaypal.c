/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9160 javaBuySmurfBerriesPaypal */

undefined8 javaBuySmurfBerriesPaypal(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002a9184;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_002a8162(*(undefined4 *)(DAT_002a9184 + 0x2a916c),&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a9174),*(undefined4 *)(DAT_002a9188 + 0x2a91f6),
             param_1);
  return CONCAT44(local_14,param_1);
}


