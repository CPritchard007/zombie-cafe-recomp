/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa1dc javaWebNickNameFaild */

undefined8 javaWebNickNameFaild(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa21c;
  pcVar3 = (char *)(DAT_002aa214 + 0x2aa1e8);
  puVar2 = (undefined4 *)(DAT_002aa21c + 0x2aa1ec);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002aa218 + 0x2aa1ee));
  FUN_002a8162(*puVar2,&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa1f4),*(undefined4 *)(DAT_002aa220 + 0x2aa20e));
  L_PrintLog(pcVar3,(char *)(DAT_002aa224 + 0x2aa20e));
  return CONCAT44(local_14,param_1);
}


