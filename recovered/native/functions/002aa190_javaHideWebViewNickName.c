/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa190 javaHideWebViewNickName */

undefined8 javaHideWebViewNickName(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa1d0;
  pcVar3 = (char *)(DAT_002aa1c8 + 0x2aa19c);
  puVar2 = (undefined4 *)(DAT_002aa1d0 + 0x2aa1a0);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002aa1cc + 0x2aa1a2));
  FUN_002a8162(*puVar2,&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa1a8),*(undefined4 *)(DAT_002aa1d4 + 0x2aa1ba));
  L_PrintLog(pcVar3,(char *)(DAT_002aa1d8 + 0x2aa1c2));
  return CONCAT44(local_14,param_1);
}


