/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab27c javaAppDriverGetEntryParse */

undefined8 javaAppDriverGetEntryParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab2c8;
  pcVar4 = (char *)(DAT_002ab2c0 + 0x2ab288);
  puVar3 = (undefined4 *)(DAT_002ab2c8 + 0x2ab28c);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab2c4 + 0x2ab290));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab294),
             *(undefined4 *)((int)&DAT_002ab2c8 + DAT_002ab2cc),uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab2d0 + 0x2ab2ba));
  return CONCAT44(local_14,param_1);
}


