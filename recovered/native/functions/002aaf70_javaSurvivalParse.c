/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aaf70 javaSurvivalParse */

undefined8 javaSurvivalParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002aafbc;
  pcVar4 = (char *)(DAT_002aafb4 + 0x2aaf7c);
  puVar3 = (undefined4 *)(DAT_002aafbc + 0x2aaf80);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002aafb8 + 0x2aaf84));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aaf88),*(undefined4 *)(DAT_002aafc0 + 0x2aafe4),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002aafc4 + 0x2aafae));
  return CONCAT44(local_14,param_1);
}


