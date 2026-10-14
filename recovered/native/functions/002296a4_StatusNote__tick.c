/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002296a4 StatusNote::tick */

/* StatusNote::tick(long) */

void StatusNote::tick(long param_1)

{
  int in_r1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = in_r1 + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  uVar3 = (iVar1 >> 0x10) << 0x10 | iVar1 - (uint)*(ushort *)(param_1 + 0x14) & 0xffff;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (*(byte *)(param_1 + 8) < 4) {
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    iVar1 = __divsi3(iVar2 * **(int **)(DAT_002296f8 + 0x2296d0),uVar4);
    *(uint *)(param_1 + 0x10) = uVar3 - iVar1 & 0xffff | ((int)uVar3 >> 0x10) << 0x10;
    iVar1 = __divsi3(iVar2 * -0xff,uVar4);
    *(int *)(param_1 + 0x18) = iVar1 + 0xff;
  }
  return;
}


