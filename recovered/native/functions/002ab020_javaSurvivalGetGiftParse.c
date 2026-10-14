/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab020 javaSurvivalGetGiftParse */

undefined8 javaSurvivalGetGiftParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab06c;
  pcVar4 = (char *)(DAT_002ab064 + 0x2ab02c);
  puVar3 = (undefined4 *)(DAT_002ab06c + 0x2ab030);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab068 + 0x2ab034));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab038),*(undefined4 *)(DAT_002ab070 + 0x2ab09c),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab074 + 0x2ab05e));
  return CONCAT44(local_14,param_1);
}


