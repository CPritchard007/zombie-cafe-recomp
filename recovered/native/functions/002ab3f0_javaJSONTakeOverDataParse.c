/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab3f0 javaJSONTakeOverDataParse */

undefined8 javaJSONTakeOverDataParse(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002ab43c;
  pcVar4 = (char *)(DAT_002ab434 + 0x2ab3fc);
  puVar3 = (undefined4 *)(DAT_002ab43c + 0x2ab400);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002ab438 + 0x2ab404));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2ab408),
             *(undefined4 *)((int)&DAT_002ab48c + DAT_002ab440),uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002ab444 + 0x2ab42e));
  return CONCAT44(local_14,param_1);
}


