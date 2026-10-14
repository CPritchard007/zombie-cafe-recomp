/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6bf0 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_JSONTakeOverDataParse2 */

undefined8
Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_JSONTakeOverDataParse2
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  JSONTakeOverData *this;
  char *pcVar4;
  
  pcVar1 = (char *)FUN_000b5440(param_1,param_4,param_3,param_4,param_1,param_2,param_3);
  pcVar2 = (char *)FUN_000b5440(param_1,param_5);
  pcVar3 = (char *)FUN_000b5440(param_1,param_6);
  this = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar4 = pcVar3;
  JSONTakeOverData::parseGetTransfer(this,param_3,pcVar1,pcVar2,pcVar3);
  L_PrintLog((char *)(DAT_000b6c44 + 0xb6c2a),pcVar1);
  L_PrintLog((char *)(DAT_000b6c48 + 0xb6c34),pcVar2);
  L_PrintLog((char *)(DAT_000b6c4c + 0xb6c3e),pcVar3);
  return CONCAT44(param_2,pcVar4);
}


