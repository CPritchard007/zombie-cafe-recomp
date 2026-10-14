/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a91dc javaSetPCostArr */

undefined8
javaSetPCostArr(undefined4 param_1,undefined4 param_2,undefined4 param_3,_jclass *param_4)

{
  int iVar1;
  undefined4 uVar2;
  _jclass *local_14;
  
  iVar1 = DAT_002a9208;
  local_14 = param_4;
  FUN_002a8162(*(undefined4 *)(DAT_002a9208 + 0x2a91e8),&local_14,param_3,param_4,param_1,param_2,
               param_3);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2a91f0),*(undefined4 *)(iVar1 + 0x2a9244),param_1);
  return CONCAT44(param_2,uVar2);
}


