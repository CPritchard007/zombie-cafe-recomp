/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa144 javaNickNameUpdatePage */

undefined8 javaNickNameUpdatePage(undefined4 param_1,_jclass *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _jclass *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_002aa184;
  pcVar3 = (char *)(DAT_002aa17c + 0x2aa150);
  puVar2 = (undefined4 *)(DAT_002aa184 + 0x2aa154);
  local_14 = param_2;
  uStack_10 = param_3;
  L_PrintLog(pcVar3,(char *)(DAT_002aa180 + 0x2aa156));
  FUN_002a8162(*puVar2,&local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa15c),*(undefined4 *)(DAT_002aa188 + 0x2aa172));
  L_PrintLog(pcVar3,(char *)(DAT_002aa18c + 0x2aa176));
  return CONCAT44(local_14,param_1);
}


