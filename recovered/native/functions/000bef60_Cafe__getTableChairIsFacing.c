/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bef60 Cafe::getTableChairIsFacing */

/* Cafe::getTableChairIsFacing(Furniture*) */

uint __thiscall Cafe::getTableChairIsFacing(Cafe *this,Furniture *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = getNextTile((int)*(short *)(param_1 + 0x2c),(uint)(byte)param_1[0x34]);
  uVar2 = *(uint *)(*(int *)(iVar1 * 4 + *(int *)this) + 0x14);
  if (uVar2 != 0) {
    uVar2 = uVar2 & -(uint)(*(char *)(*(int *)(uVar2 + 0x38) + 0x44) == '\x03');
  }
  return uVar2;
}


