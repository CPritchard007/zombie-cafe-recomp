/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aafc8 javaSurvivalCheckGiftParse */

undefined8 javaSurvivalCheckGiftParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab014;
  pcVar4 = (char *)(DAT_002ab00c + 0x2aafd4);
  puVar3 = (undefined4 *)(DAT_002ab014 + 0x2aafd8);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab010 + 0x2aafdc));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aafe0),*(undefined4 *)(DAT_002ab018 + 0x2ab040),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab01c + 0x2ab006));
  return CONCAT44(local_14,param_1);
}


