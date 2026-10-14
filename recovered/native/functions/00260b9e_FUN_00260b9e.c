/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260b9e FUN_00260b9e */

uint FUN_00260b9e(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int extraout_r1;
  byte *pbVar4;
  byte *pbVar5;
  byte *local_1c [2];
  
  pbVar4 = (byte *)(param_2 + (uint)*(byte *)(param_1 + 6));
  if (*(char *)(param_1 + 2) == '\0') {
    if ((int)(uint)*pbVar4 << 0x18 < 0) {
      iVar3 = FUN_00260a18(pbVar4,local_1c);
    }
    else {
      iVar3 = 1;
      local_1c[0] = (byte *)(uint)*pbVar4;
    }
    pbVar4 = pbVar4 + iVar3;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      local_1c[0] = (byte *)0x0;
    }
    else {
      if ((int)(uint)*pbVar4 << 0x18 < 0) {
        iVar3 = FUN_00260a18(pbVar4,local_1c);
      }
      else {
        iVar3 = 1;
        local_1c[0] = (byte *)(uint)*pbVar4;
      }
      pbVar4 = pbVar4 + iVar3;
    }
    iVar3 = 9;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if (-1 < (int)((uint)bVar1 << 0x18)) break;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = *(ushort *)(param_1 + 8);
  if ((byte *)(uint)uVar2 < local_1c[0]) {
    pbVar5 = (byte *)(uint)*(ushort *)(param_1 + 10);
    __aeabi_uidivmod((int)local_1c[0] - (int)pbVar5,*(int *)(*(int *)(param_1 + 0x34) + 0x24) + -4);
    local_1c[0] = pbVar5 + extraout_r1;
    if ((byte *)(uint)uVar2 < pbVar5 + extraout_r1) {
      local_1c[0] = pbVar5;
    }
    local_1c[0] = local_1c[0] + 4;
  }
  local_1c[0] = pbVar4 + ((int)local_1c[0] - param_2);
  if (local_1c[0] < (byte *)0x4) {
    local_1c[0] = (byte *)0x4;
  }
  return (uint)local_1c[0] & 0xffff;
}


