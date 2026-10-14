/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6150 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_SurvivalInfo */

undefined8
Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_SurvivalInfo
          (_jarray *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  
  uVar10 = param_3;
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar2 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_3,iVar1,puVar2,param_4,param_2,uVar10);
  iVar1 = DAT_000b62f4;
  iVar8 = *(int *)(DAT_000b62f0 + 0xb617e);
  *(undefined4 *)(iVar8 + 0x80) = *puVar2;
  *(undefined4 *)(iVar8 + 0x84) = puVar2[1];
  *(undefined4 *)(iVar8 + 0x88) = puVar2[2];
  *(undefined4 *)(iVar8 + 0x8c) = puVar2[3];
  *(undefined4 *)(iVar8 + 0x90) = puVar2[4];
  *(undefined4 *)(iVar8 + 0x94) = puVar2[6];
  *(undefined4 *)(iVar8 + 0x98) = puVar2[7];
  *(undefined4 *)(iVar8 + 0x9c) = puVar2[8];
  *(undefined4 *)(iVar8 + 0xa0) = puVar2[9];
  uVar3 = _JNIEnv::GetArrayLength(param_1);
  pvVar4 = malloc(uVar3 * 0x90);
  piVar9 = *(int **)(iVar1 + 0xb61d6);
  *piVar9 = (int)pvVar4;
  puVar5 = (undefined4 *)malloc(uVar3 * 4);
  FUN_000b542a(param_1,param_4,uVar3,puVar5);
  iVar8 = 0;
  uVar3 = uVar3 & 0x3fffffff;
  puVar2 = puVar5;
  for (iVar1 = 0; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
    if (param_4 == 0) {
      iVar7 = *piVar9;
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar2;
      iVar7 = *piVar9;
    }
    *(undefined4 *)(iVar7 + iVar8) = uVar10;
    iVar8 = iVar8 + 0x90;
    puVar2 = puVar2 + 1;
  }
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar2 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_5,iVar1,puVar2);
  iVar8 = *piVar9;
  iVar1 = iVar8;
  for (iVar7 = 0; iVar7 < (int)uVar3; iVar7 = iVar7 + 1) {
    if (param_5 == 0) {
      *(undefined4 *)(iVar8 + 4) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = *puVar2;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 0x90;
    iVar8 = iVar8 + 0x90;
  }
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar2 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_6,iVar1,puVar2);
  iVar8 = *piVar9;
  iVar1 = iVar8;
  for (iVar7 = 0; iVar7 < (int)uVar3; iVar7 = iVar7 + 1) {
    if (param_6 == 0) {
      *(undefined4 *)(iVar8 + 8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 8) = *puVar2;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 0x90;
    iVar8 = iVar8 + 0x90;
  }
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  puVar6 = (undefined4 *)malloc(iVar1 << 2);
  FUN_000b542a(param_1,param_7,iVar1,puVar6);
  iVar8 = *piVar9;
  puVar2 = puVar6;
  iVar1 = iVar8;
  for (iVar7 = 0; iVar7 < (int)uVar3; iVar7 = iVar7 + 1) {
    if (param_7 == 0) {
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = *puVar2;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 0x90;
    iVar8 = iVar8 + 0x90;
  }
  **(undefined4 **)(DAT_000b62f8 + 0xb62ea) = param_8;
  return CONCAT44(puVar5,puVar6);
}


