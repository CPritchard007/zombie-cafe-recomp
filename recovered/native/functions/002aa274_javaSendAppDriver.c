/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa274 javaSendAppDriver */

undefined8 javaSendAppDriver(undefined4 param_1,_jclass *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  _jclass *local_14;
  
  iVar1 = DAT_002aa2c0;
  pcVar4 = (char *)(DAT_002aa2b8 + 0x2aa280);
  puVar3 = (undefined4 *)(DAT_002aa2c0 + 0x2aa284);
  local_14 = param_2;
  L_PrintLog(pcVar4,(char *)(DAT_002aa2bc + 0x2aa288));
  FUN_002a8162(*puVar3,&local_14);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_14);
  _JNIEnv::CallStaticVoidMethod
            (local_14,*(_jmethodID **)(iVar1 + 0x2aa28c),
             *(undefined4 *)((int)&DAT_002aa2bc + DAT_002aa2c4),uVar2);
  L_PrintLog(pcVar4,(char *)(DAT_002aa2c8 + 0x2aa2b2));
  return CONCAT44(local_14,param_1);
}


