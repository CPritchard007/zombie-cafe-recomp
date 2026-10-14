/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028d4b0 FUN_0028d4b0 */

/* WARNING: Function: __gnu_thumb1_case_si replaced with injection: switch32_si_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028d59c) */
/* WARNING: Removing unreachable block (ram,0x0028d59c) */

void FUN_0028d4b0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar2 = DAT_0028d868;
  iVar8 = *param_1;
  puVar4 = *(undefined4 **)(DAT_0028d864 + 0x28d4bc);
  iVar7 = param_1[1];
  uVar5 = *puVar4;
  *(int **)(&stack0x00000014 + DAT_0028d868) = param_1;
  *(int *)(&stack0x00000080 + DAT_0028d868) = iVar7;
  *(undefined4 *)(&stack0x000002c0 + DAT_0028d868) = uVar5;
  iVar7 = *(int *)(iVar8 + 0x10);
  *(int *)(&stack0x00000010 + DAT_0028d868) = iVar8;
  uVar11 = *(undefined4 *)(iVar8 + 0x20);
  uVar5 = *(undefined4 *)(iVar8 + 0x24);
  bVar1 = *(byte *)(*(int *)(iVar7 + 0xc) + 0x4d);
  *(int *)(&stack0x00000024 + DAT_0028d868) = param_1[2];
  *(undefined4 *)(&stack0x0000004c + DAT_0028d868) = uVar11;
  *(uint *)(&stack0x00000040 + DAT_0028d868) = (uint)bVar1;
  iVar7 = param_1[0x1c];
  *(undefined4 *)(&stack0x00000050 + DAT_0028d868) = uVar5;
  *(undefined4 **)(&stack0x00000110 + DAT_0028d868) = puVar4;
  if (iVar7 != 0) {
    FUN_002624d0();
  }
  iVar8 = *(int *)(&stack0x00000014 + iVar2);
  iVar7 = 0;
  if (*(int *)(iVar8 + 0x58) == 7) {
    FUN_0029288c();
  }
  iVar10 = *(int *)(&stack0x00000010 + iVar2);
  *(int *)(iVar8 + 0x58) = iVar7;
  *(int *)(iVar8 + 0x14) = iVar7;
  *(int *)(iVar10 + 0x1b4) = iVar7;
  piVar6 = (int *)(iVar10 + 0xe0);
  iVar10 = *piVar6;
  if (iVar10 != iVar7) {
    FUN_002928da();
    iVar10 = extraout_r1;
  }
  iVar7 = piVar6[0xd];
  uVar5 = *(undefined4 *)(iVar8 + 0x54);
  *(int *)(&stack0x00000044 + iVar2) = iVar10;
  *(int *)(&stack0x0000010c + iVar2) = iVar7;
  *(undefined4 *)(&stack0x00000028 + iVar2) = uVar5;
  *(int *)(&stack0x00000068 + iVar2) = iVar10;
  *(int *)(&stack0x00000018 + iVar2) = iVar10;
  *(int *)(&stack0x0000008c + iVar2) = iVar10;
  *(int *)(&stack0x00000064 + iVar2) = iVar10;
  if (*(char *)(*(int *)(&stack0x00000010 + iVar2) + 0x36) != '\0') {
    FUN_00292890();
  }
  if (*(int *)(&stack0x0000010c + iVar2) != 0) {
    iVar7 = *(int *)(&stack0x00000010 + iVar2);
    if (*(int *)(iVar7 + 0x11c) == *(int *)(&stack0x0000008c + iVar2)) {
      iVar7 = (**(code **)(iVar7 + 0x114))(*(undefined4 *)(iVar7 + 0x118));
      if (iVar7 != 0) {
        iVar7 = FUN_00292812();
      }
      *(int *)(&stack0x0000008c + iVar2) = iVar7;
    }
    *(int *)(&stack0x0000008c + iVar2) = *(int *)(&stack0x0000008c + iVar2) + 1;
  }
  pbVar9 = (byte *)(*(int *)(&stack0x00000080 + iVar2) + *(int *)(&stack0x00000028 + iVar2) * 0x14);
  if ((int)((uint)pbVar9[2] << 0x1e) < 0) {
    iVar7 = *(int *)(&stack0x00000024 + iVar2) + *(int *)(pbVar9 + 8) * 0x28;
    *(int *)(&stack0x00000018 + iVar2) = iVar7;
    if ((*(ushort *)(iVar7 + 0x1c) & DAT_0028d86c) != 0) {
      FUN_002636e8(*(undefined4 *)(&stack0x00000018 + iVar2));
    }
    *(undefined2 *)(*(int *)(&stack0x00000018 + iVar2) + 0x1c) = 4;
  }
  uVar3 = *pbVar9 - 1;
  if (0x93 < uVar3) {
    uVar3 = FUN_00292802();
  }
                    /* WARNING: Could not recover jumptable at 0x0028d59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0028d5a1 + *(int *)(&UNK_0028d5a0 + uVar3 * 4) * 4))();
  return;
}


