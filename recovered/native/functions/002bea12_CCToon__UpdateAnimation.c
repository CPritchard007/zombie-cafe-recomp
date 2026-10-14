/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bea12 CCToon::UpdateAnimation */

/* CCToon::UpdateAnimation(ccToon*, unsigned int, ccMat2x3 const*) */

void CCToon::UpdateAnimation(ccToon *param_1,uint param_2,ccMat2x3 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar6 - 1U <= *(uint *)(param_1 + 0x14)) break;
    iVar7 = *(uint *)(param_1 + 0x14) + 1;
    uVar1 = __floatunsisf(param_2);
    iVar2 = __aeabi_fcmple(*(undefined4 *)(iVar7 * 8 + *(int *)(param_1 + 0x18)),uVar1);
    if (iVar2 == 0) break;
    *(int *)(param_1 + 0x14) = iVar7;
  }
  uVar5 = 0;
  while( true ) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 8) <= uVar5) break;
    piVar4 = (int *)(*(int *)(param_1 + 0x20) + uVar5 * 8);
    uVar3 = *piVar4 - 1;
    uVar8 = param_2;
    if (uVar3 < param_2) {
      uVar8 = uVar3;
    }
    puVar9 = (undefined4 *)(piVar4[1] + uVar8 * 0x20);
    iVar2 = uVar5 * 0x40;
    puVar10 = (undefined4 *)(iVar6 + iVar2);
    *puVar10 = *puVar9;
    uVar5 = uVar5 + 1;
    puVar10[1] = puVar9[1];
    puVar10[2] = puVar9[2];
    puVar10[3] = puVar9[3];
    puVar10[4] = puVar9[4];
    puVar10[5] = puVar9[5];
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 + 0x38) = puVar9[6];
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 + 0x3c) = puVar9[7];
  }
  FUN_002be604(&local_48,param_3,iVar6);
  *(undefined4 *)(iVar6 + 0x18) = local_48;
  *(undefined4 *)(iVar6 + 0x1c) = local_44;
  *(undefined4 *)(iVar6 + 0x20) = local_40;
  *(undefined4 *)(iVar6 + 0x24) = local_3c;
  *(undefined4 *)(iVar6 + 0x28) = local_38;
  *(undefined4 *)(iVar6 + 0x2c) = local_34;
  for (uVar5 = 1; uVar5 < *(uint *)(param_1 + 8); uVar5 = uVar5 + 1) {
    iVar6 = *(int *)(param_1 + 0xc) + uVar5 * 0x40;
    FUN_002be604(&local_30,*(int *)(param_1 + 0xc) + *(int *)(iVar6 + 0x30) * 0x40 + 0x18,iVar6);
    *(undefined4 *)(iVar6 + 0x18) = local_30;
    *(undefined4 *)(iVar6 + 0x1c) = local_2c;
    *(undefined4 *)(iVar6 + 0x20) = local_28;
    *(undefined4 *)(iVar6 + 0x24) = local_24;
    *(undefined4 *)(iVar6 + 0x28) = local_20;
    *(undefined4 *)(iVar6 + 0x2c) = local_1c;
  }
  return;
}


