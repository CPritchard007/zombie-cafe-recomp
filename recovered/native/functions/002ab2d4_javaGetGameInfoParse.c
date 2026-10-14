/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab2d4 javaGetGameInfoParse */

undefined8 javaGetGameInfoParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab320;
  pcVar4 = (char *)(DAT_002ab318 + 0x2ab2e0);
  puVar3 = (undefined4 *)(DAT_002ab320 + 0x2ab2e4);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab31c + 0x2ab2e8));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab2ec),
             *(undefined4 *)((int)&DAT_002ab328 + DAT_002ab324),uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab328 + 0x2ab312));
  return CONCAT44(local_14,param_1);
}


