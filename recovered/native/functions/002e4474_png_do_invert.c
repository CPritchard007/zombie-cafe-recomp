/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4474 png_do_invert */

void png_do_invert(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    for (iVar3 = 0; iVar3 != iVar1; iVar3 = iVar3 + 1) {
      param_2[iVar3] = ~param_2[iVar3];
    }
  }
  else if (*(ushort *)(param_1 + 8) == DAT_002e44cc) {
    uVar2 = *(uint *)(param_1 + 4);
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 2) {
      param_2[uVar4] = ~param_2[uVar4];
    }
  }
  else if (*(ushort *)(param_1 + 8) == DAT_002e44d0) {
    uVar2 = *(uint *)(param_1 + 4);
    for (pbVar5 = param_2; (uint)((int)pbVar5 - (int)param_2) < uVar2; pbVar5 = pbVar5 + 4) {
      *pbVar5 = ~*pbVar5;
      pbVar5[1] = ~pbVar5[1];
    }
  }
  return;
}


