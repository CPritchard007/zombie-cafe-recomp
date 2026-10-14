/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab448 javaJSONTakeOverDataParse2 */

undefined8 javaJSONTakeOverDataParse2(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab494;
  pcVar4 = (char *)(DAT_002ab48c + 0x2ab454);
  puVar3 = (undefined4 *)(DAT_002ab494 + 0x2ab458);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab490 + 0x2ab45c));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab460),*(undefined4 *)(DAT_002ab498 + 0x2ab4e8),
             uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab49c + 0x2ab486));
  return CONCAT44(local_14,param_1);
}


