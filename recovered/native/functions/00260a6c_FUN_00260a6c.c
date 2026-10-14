/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260a6c FUN_00260a6c */

void FUN_00260a6c(int param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  uint local_1c [2];
  
  param_3[2] = param_2;
  uVar6 = (uint)*(byte *)(param_1 + 6);
  pbVar4 = (byte *)(param_2 + uVar6);
  if (*(char *)(param_1 + 2) == '\0') {
    param_3[3] = 0;
    if ((int)((uint)*pbVar4 << 0x18) < 0) {
      iVar5 = FUN_00260a18(pbVar4,local_1c);
    }
    else {
      iVar5 = 1;
      local_1c[0] = (uint)*pbVar4;
    }
    uVar6 = iVar5 + uVar6;
    *param_3 = local_1c[0];
    param_3[1] = 0;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      local_1c[0] = 0;
    }
    else {
      if ((int)((uint)*pbVar4 << 0x18) < 0) {
        iVar5 = FUN_00260a18(pbVar4,local_1c);
      }
      else {
        iVar5 = 1;
        local_1c[0] = (uint)*pbVar4;
      }
      uVar6 = iVar5 + uVar6 & 0xffff;
    }
    iVar5 = FUN_0025b924(param_2 + uVar6,param_3);
    uVar6 = iVar5 + uVar6;
    param_3[3] = local_1c[0];
  }
  *(short *)(param_3 + 5) = (short)uVar6;
  param_3[4] = local_1c[0];
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 < local_1c[0]) {
    uVar2 = *(ushort *)(param_1 + 10);
    __aeabi_uidivmod(local_1c[0] - uVar2,*(int *)(*(int *)(param_1 + 0x34) + 0x24) + -4);
    iVar5 = extraout_r1 + (uint)uVar2;
    if ((int)(uint)uVar1 < iVar5) {
      *(ushort *)((int)param_3 + 0x16) = uVar2;
    }
    else {
      *(short *)((int)param_3 + 0x16) = (short)iVar5;
    }
    sVar3 = (short)uVar6 + *(short *)((int)param_3 + 0x16);
    *(short *)(param_3 + 6) = sVar3;
    *(short *)((int)param_3 + 0x1a) = sVar3 + 4;
  }
  else {
    uVar6 = (uVar6 & 0xffff) + (local_1c[0] & 0xffff);
    *(short *)((int)param_3 + 0x1a) = (short)uVar6;
    if ((uVar6 & 0xffff) < 4) {
      *(undefined2 *)((int)param_3 + 0x1a) = 4;
    }
    *(short *)((int)param_3 + 0x16) = (short)local_1c[0];
    *(undefined2 *)(param_3 + 6) = 0;
  }
  return;
}


