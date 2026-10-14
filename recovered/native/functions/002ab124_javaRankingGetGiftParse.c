/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab124 javaRankingGetGiftParse */

undefined8 javaRankingGetGiftParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab170;
  pcVar4 = (char *)(DAT_002ab168 + 0x2ab130);
  puVar3 = (undefined4 *)(DAT_002ab170 + 0x2ab134);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab16c + 0x2ab138));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab13c),*(undefined4 *)(DAT_002ab174 + 0x2ab1ac),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab178 + 0x2ab162));
  return CONCAT44(local_14,param_1);
}


