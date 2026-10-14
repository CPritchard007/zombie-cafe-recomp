/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6b74 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_JSONTakeOverDataParse */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_JSONTakeOverDataParse
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  JSONTakeOverData *this;
  
  pcVar1 = (char *)FUN_000b5440(param_1,param_4);
  pcVar2 = (char *)FUN_000b5440(param_1,param_5);
  pcVar3 = (char *)FUN_000b5440(param_1,param_6);
  pcVar4 = (char *)FUN_000b5440(param_1,param_7);
  this = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  JSONTakeOverData::parseSetTransfer(this,param_3,pcVar1,pcVar2,pcVar3,pcVar4);
  L_PrintLog((char *)(DAT_000b6be0 + 0xb6bbc),pcVar1);
  L_PrintLog((char *)(DAT_000b6be4 + 0xb6bc6),pcVar2);
  L_PrintLog((char *)(DAT_000b6be8 + 0xb6bd0),pcVar3);
  L_PrintLog((char *)(DAT_000b6bec + 0xb6bda),pcVar4);
  return;
}


