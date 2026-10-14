/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab078 javaEventGetGiftParse */

undefined8 javaEventGetGiftParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab0c4;
  pcVar4 = (char *)(DAT_002ab0bc + 0x2ab084);
  puVar3 = (undefined4 *)(DAT_002ab0c4 + 0x2ab088);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab0c0 + 0x2ab08c));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab090),*(undefined4 *)(DAT_002ab0c8 + 0x2ab0f8),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab0cc + 0x2ab0b6));
  return CONCAT44(local_14,param_1);
}


