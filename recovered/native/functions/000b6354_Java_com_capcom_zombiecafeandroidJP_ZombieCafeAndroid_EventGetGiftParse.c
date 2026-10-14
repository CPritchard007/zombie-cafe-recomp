/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6354 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_EventGetGiftParse */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_EventGetGiftParse
               (_jarray *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               int param_9)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *local_48;
  char *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  char *local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_1c;
  
  local_28 = (undefined4 *)param_6;
  local_24 = (undefined4 *)param_5;
  local_30 = (char *)param_8;
  local_2c = param_7;
  local_48 = *(int **)(DAT_000b64d4 + 0xb6374);
  local_1c = *local_48;
  local_44 = (char *)FUN_000b5440(param_1,param_3);
  local_3c = (undefined4 *)((int)&local_48 - (param_9 * 4 + 0xeU & 0xfffffff8));
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  local_34 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_4,iVar1,local_34);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  local_38 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,local_24,iVar1,local_38);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  local_24 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,local_28,iVar1,local_24);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  local_28 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,local_2c,iVar1,local_28);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar2 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,local_30,iVar1,puVar2);
  local_30 = (char *)(DAT_000b64d8 + 0xb6436);
  local_2c = 0;
  puVar6 = local_3c;
  local_40 = puVar2;
  for (iVar1 = 0; iVar1 < param_9; iVar1 = iVar1 + 1) {
    if (iVar1 == 0) {
      pcVar3 = strtok(local_44,(char *)(DAT_000b64dc + 0xb644a));
      *local_3c = pcVar3;
    }
    else {
      pcVar3 = strtok((char *)0x0,local_30);
      *puVar6 = pcVar3;
    }
    iVar5 = *(int *)(DAT_000b64e0 + 0xb6466);
    pcVar3 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    strncpy((char *)(iVar1 * 0x94 + iVar5),pcVar3,0x80);
    uVar4 = *local_34;
    local_34 = local_34 + 1;
    iVar5 = local_2c + iVar5;
    *(undefined4 *)(iVar5 + 0x80) = uVar4;
    uVar4 = *local_38;
    local_38 = local_38 + 1;
    *(undefined4 *)(iVar5 + 0x84) = uVar4;
    uVar4 = *local_24;
    local_24 = local_24 + 1;
    *(undefined4 *)(iVar5 + 0x88) = uVar4;
    uVar4 = *local_28;
    local_28 = local_28 + 1;
    *(undefined4 *)(iVar5 + 0x8c) = uVar4;
    uVar4 = *local_40;
    local_40 = local_40 + 1;
    local_2c = local_2c + 0x94;
    *(undefined4 *)(iVar5 + 0x90) = uVar4;
  }
  if (local_1c != *local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


