/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6982 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetGameInfoHCOItemParse */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetGameInfoHCOItemParse
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  
  iVar1 = JSONGetGameInfo::getInstance();
  param_8 = param_8 * 4;
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + param_8) = param_3;
  iVar1 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x20) + param_8) = param_4;
  iVar1 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x24) + param_8) = param_5;
  iVar1 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x28) + param_8) = param_6;
  iVar1 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 0x2c) + param_8) = param_7;
  return;
}


