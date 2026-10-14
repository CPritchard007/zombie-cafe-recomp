/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b68f0 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetGameInfoHCOSettingParse */

undefined8
Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetGameInfoHCOSettingParse
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          int param_13)

{
  JSONGetGameInfo *this;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  size_t __size;
  
  this = (JSONGetGameInfo *)JSONGetGameInfo::getInstance();
  JSONGetGameInfo::reset(this);
  puVar1 = (undefined4 *)JSONGetGameInfo::getInstance();
  *puVar1 = param_3;
  iVar2 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(iVar2 + 4) = param_4;
  iVar2 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(iVar2 + 8) = param_9;
  iVar2 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(iVar2 + 0xc) = param_11;
  iVar2 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(iVar2 + 0x10) = param_5;
  iVar2 = JSONGetGameInfo::getInstance();
  *(undefined4 *)(iVar2 + 0x14) = param_7;
  iVar2 = JSONGetGameInfo::getInstance();
  *(int *)(iVar2 + 0x18) = param_13;
  iVar2 = JSONGetGameInfo::getInstance();
  __size = param_13 * 4;
  pvVar3 = malloc(__size);
  *(void **)(iVar2 + 0x1c) = pvVar3;
  iVar2 = JSONGetGameInfo::getInstance();
  pvVar3 = malloc(__size);
  *(void **)(iVar2 + 0x20) = pvVar3;
  iVar2 = JSONGetGameInfo::getInstance();
  pvVar3 = malloc(__size);
  *(void **)(iVar2 + 0x24) = pvVar3;
  iVar2 = JSONGetGameInfo::getInstance();
  pvVar3 = malloc(__size);
  *(void **)(iVar2 + 0x28) = pvVar3;
  iVar2 = JSONGetGameInfo::getInstance();
  pvVar3 = malloc(__size);
  *(void **)(iVar2 + 0x2c) = pvVar3;
  return CONCAT44(param_5,param_1);
}


