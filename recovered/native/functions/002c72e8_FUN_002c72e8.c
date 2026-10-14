/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c72e8 FUN_002c72e8 */

void FUN_002c72e8(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  byte *local_148;
  uint local_144;
  int local_140;
  int local_13c;
  int local_138;
  byte local_130 [4];
  byte local_12c;
  byte local_12b;
  byte local_12a;
  byte local_129;
  byte local_128;
  byte local_127;
  byte local_126;
  byte local_125;
  byte local_124;
  byte local_123;
  byte local_122;
  byte local_121;
  byte local_120;
  byte local_11c [256];
  int local_1c;
  
  puVar5 = (undefined4 *)param_1[6];
  piVar3 = *(int **)(DAT_002c750c + 0x2c72f4);
  iVar7 = puVar5[1];
  local_1c = *piVar3;
  pbVar2 = (byte *)*puVar5;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar5[3])();
    if (iVar7 == 0) {
      uVar8 = 0;
      goto LAB_002c74f8;
    }
    pbVar2 = (byte *)*puVar5;
    iVar7 = puVar5[1];
  }
  iVar7 = iVar7 + -1;
  bVar1 = *pbVar2;
  pbVar2 = pbVar2 + 1;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar5[3])(param_1);
    if (iVar7 == 0) {
      uVar8 = 0;
      goto LAB_002c74f8;
    }
    pbVar2 = (byte *)*puVar5;
    iVar7 = puVar5[1];
  }
  local_140 = (uint)bVar1 * 0x100 + (uint)*pbVar2 + -2;
  iVar7 = iVar7 + -1;
  local_148 = pbVar2 + 1;
  while (0x10 < local_140) {
    if (iVar7 == 0) {
      iVar7 = (*(code *)puVar5[3])(param_1);
      if (iVar7 == 0) {
        uVar8 = 0;
        goto LAB_002c74f8;
      }
      local_148 = (byte *)*puVar5;
      iVar7 = puVar5[1];
    }
    pbVar2 = local_148 + 1;
    local_144 = (uint)*local_148;
    *(undefined4 *)(*param_1 + 0x14) = 0x52;
    *(uint *)(*param_1 + 0x18) = local_144;
    iVar7 = iVar7 + -1;
    (**(code **)(*param_1 + 4))(param_1,1);
    local_130[0] = 0;
    local_13c = 0;
    local_138 = 1;
    do {
      if (iVar7 == 0) {
        iVar7 = (*(code *)puVar5[3])(param_1);
        if (iVar7 == 0) {
          uVar8 = 0;
          goto LAB_002c74f8;
        }
        pbVar2 = (byte *)*puVar5;
        iVar7 = puVar5[1];
      }
      bVar1 = *pbVar2;
      iVar7 = iVar7 + -1;
      pbVar2 = pbVar2 + 1;
      local_130[local_138] = bVar1;
      local_13c = local_13c + (uint)bVar1;
      local_138 = local_138 + 1;
    } while (local_138 != 0x11);
    iVar4 = *param_1;
    *(uint *)(iVar4 + 0x18) = (uint)local_130[1];
    *(uint *)(iVar4 + 0x1c) = (uint)local_130[2];
    *(uint *)(iVar4 + 0x20) = (uint)local_130[3];
    *(uint *)(iVar4 + 0x24) = (uint)local_12c;
    *(uint *)(iVar4 + 0x28) = (uint)local_12b;
    *(uint *)(iVar4 + 0x2c) = (uint)local_12a;
    *(uint *)(iVar4 + 0x30) = (uint)local_129;
    *(uint *)(iVar4 + 0x34) = (uint)local_128;
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar4 = *param_1;
    *(uint *)(iVar4 + 0x18) = (uint)local_127;
    *(uint *)(iVar4 + 0x1c) = (uint)local_126;
    *(uint *)(iVar4 + 0x20) = (uint)local_125;
    *(uint *)(iVar4 + 0x24) = (uint)local_124;
    *(uint *)(iVar4 + 0x28) = (uint)local_123;
    *(uint *)(iVar4 + 0x2c) = (uint)local_122;
    *(uint *)(iVar4 + 0x30) = (uint)local_121;
    *(uint *)(iVar4 + 0x34) = (uint)local_120;
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((local_140 + -0x11 < local_13c) || (0x100 < local_13c)) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    memset(local_11c,0,0x100);
    for (iVar4 = 0; iVar4 < local_13c; iVar4 = iVar4 + 1) {
      if (iVar7 == 0) {
        iVar7 = (*(code *)puVar5[3])(param_1);
        uVar8 = 0;
        if (iVar7 == 0) goto LAB_002c74f8;
        pbVar2 = (byte *)*puVar5;
        iVar7 = puVar5[1];
      }
      iVar7 = iVar7 + -1;
      local_11c[iVar4] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    local_140 = (local_140 + -0x11) - local_13c;
    if ((int)(local_144 << 0x1b) < 0) {
      iVar4 = local_144 + 0x20;
      local_144 = local_144 - 0x10;
    }
    else {
      iVar4 = local_144 + 0x2c;
    }
    piVar6 = param_1 + iVar4 + 1;
    if (3 < local_144) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1f;
      *(uint *)(*param_1 + 0x18) = local_144;
      (**(code **)*param_1)(param_1);
    }
    if (*piVar6 == 0) {
      iVar4 = jpeg_alloc_huff_table(param_1);
      *piVar6 = iVar4;
    }
    memcpy((void *)*piVar6,local_130,0x11);
    memcpy((void *)(*piVar6 + 0x11),local_11c,0x100);
    local_148 = pbVar2;
  }
  if (local_140 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  *puVar5 = local_148;
  puVar5[1] = iVar7;
  uVar8 = 1;
LAB_002c74f8:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


