/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c69c0 FUN_002c69c0 */

undefined4 FUN_002c69c0(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_24;
  byte *local_20;
  
  puVar9 = (undefined4 *)param_1[6];
  pbVar3 = (byte *)*puVar9;
  local_24 = puVar9[1];
  param_1[0x37] = param_2;
  param_1[0x38] = param_3;
  param_1[0x39] = param_4;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar3 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  pbVar6 = pbVar3 + 1;
  bVar1 = *pbVar3;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  bVar2 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  param_1[0x35] = (uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  pbVar3 = pbVar6 + 1;
  param_1[8] = (uint)*pbVar6 << 8;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar3 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  pbVar6 = pbVar3 + 1;
  param_1[8] = param_1[8] + (uint)*pbVar3;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  pbVar3 = pbVar6 + 1;
  param_1[7] = (uint)*pbVar6 << 8;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar3 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  local_24 = local_24 + -1;
  local_20 = pbVar3 + 1;
  param_1[7] = param_1[7] + (uint)*pbVar3;
  if (local_24 == 0) {
    iVar4 = (*(code *)puVar9[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    local_20 = (byte *)*puVar9;
    local_24 = puVar9[1];
  }
  param_1[9] = (uint)*local_20;
  iVar4 = *param_1;
  *(int *)(iVar4 + 0x18) = param_1[0x6e];
  *(int *)(iVar4 + 0x1c) = param_1[7];
  *(int *)(iVar4 + 0x20) = param_1[8];
  *(int *)(iVar4 + 0x24) = param_1[9];
  *(undefined4 *)(*param_1 + 0x14) = 0x66;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x74] + 0x10) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3d;
    (**(code **)*param_1)(param_1);
  }
  if (((param_1[8] == 0) || (param_1[7] == 0)) || (param_1[9] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
  }
  if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != param_1[9] * 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x36] == 0) {
    iVar4 = (**(code **)param_1[1])(param_1,1,param_1[9] * 0x58);
    param_1[0x36] = iVar4;
  }
  uVar10 = 0;
  do {
    local_20 = local_20 + 1;
    local_24 = local_24 + -1;
    if (param_1[9] <= (int)uVar10) {
      *(undefined4 *)(param_1[0x74] + 0x10) = 1;
      puVar9[1] = local_24;
      *puVar9 = local_20;
      return 1;
    }
    if (local_24 == 0) {
      iVar4 = (*(code *)puVar9[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      local_20 = (byte *)*puVar9;
      local_24 = puVar9[1];
    }
    uVar7 = (uint)*local_20;
    local_24 = local_24 + -1;
    puVar5 = (uint *)param_1[0x36];
    iVar4 = 0;
    puVar8 = puVar5;
    while( true ) {
      if ((int)uVar10 <= iVar4) goto LAB_002c6bcc;
      if (uVar7 == *puVar8) break;
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 0x16;
    }
    uVar7 = *puVar5;
    puVar8 = puVar5;
    for (iVar4 = 1; puVar8 = puVar8 + 0x16, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
      if ((int)uVar7 < (int)*puVar8) {
        uVar7 = *puVar8;
      }
    }
    uVar7 = uVar7 + 1;
LAB_002c6bcc:
    *puVar8 = uVar7;
    puVar8[1] = uVar10;
    if (local_24 == 0) {
      iVar4 = (*(code *)puVar9[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      local_24 = puVar9[1];
      local_20 = (byte *)*puVar9;
    }
    else {
      local_20 = local_20 + 1;
    }
    bVar1 = *local_20;
    local_20 = local_20 + 1;
    puVar8[2] = (int)(uint)bVar1 >> 4;
    local_24 = local_24 + -1;
    puVar8[3] = bVar1 & 0xf;
    if (local_24 == 0) {
      iVar4 = (*(code *)puVar9[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      local_20 = (byte *)*puVar9;
      local_24 = puVar9[1];
    }
    puVar8[4] = (uint)*local_20;
    iVar4 = *param_1;
    *(uint *)(iVar4 + 0x18) = *puVar8;
    uVar10 = uVar10 + 1;
    *(uint *)(iVar4 + 0x1c) = puVar8[2];
    *(uint *)(iVar4 + 0x20) = puVar8[3];
    *(uint *)(iVar4 + 0x24) = puVar8[4];
    *(undefined4 *)(*param_1 + 0x14) = 0x67;
    (**(code **)(*param_1 + 4))(param_1,1);
  } while( true );
}


