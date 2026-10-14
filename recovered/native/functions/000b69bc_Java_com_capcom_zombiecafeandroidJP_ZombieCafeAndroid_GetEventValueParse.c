/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b69bc Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetEventValueParse */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_GetEventValueParse
               (_jarray *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               int param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_20;
  
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar2 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_3,iVar1,puVar2);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar3 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_4,iVar1,puVar3);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar4 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_5,iVar1,puVar4);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar5 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_7,iVar1,puVar5);
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  iVar7 = DAT_000b6b08 + 0xb6a4e;
  for (iVar8 = 0; iVar8 < iVar1; iVar8 = iVar8 + 1) {
    uVar6 = (**(code **)(*(int *)param_1 + 0x2b4))(param_1,param_6,iVar8);
    uVar6 = FUN_000b5440(param_1,uVar6);
    *(undefined4 *)(iVar8 * 0x18 + *(int *)(iVar7 + DAT_000b6b0c) + 0xc) = uVar6;
  }
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  for (iVar8 = 0; iVar8 < iVar1; iVar8 = iVar8 + 1) {
    uVar6 = (**(code **)(*(int *)param_1 + 0x2b4))(param_1,param_8,iVar8);
    uVar6 = FUN_000b5440(param_1,uVar6);
    *(undefined4 *)(iVar8 * 0x18 + *(int *)(iVar7 + DAT_000b6b0c) + 0x14) = uVar6;
  }
  **(int **)(iVar7 + DAT_000b6b10) = param_9;
  local_20 = 0;
  for (iVar1 = 0; local_20 = local_20 + 0x18, iVar1 < param_9; iVar1 = iVar1 + 1) {
    uVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    iVar8 = local_20 + *(int *)(iVar7 + DAT_000b6b0c);
    *(undefined4 *)(iVar8 + -0x18) = uVar6;
    uVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(iVar8 + -0x14) = uVar6;
    uVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    *(undefined4 *)(iVar8 + -0x10) = uVar6;
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    *(undefined4 *)(iVar8 + -8) = uVar6;
  }
  return;
}


