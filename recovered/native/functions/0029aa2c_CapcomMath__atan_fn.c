/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aa2c CapcomMath::atan_fn */

/* CapcomMath::atan_fn(int) */

int CapcomMath::atan_fn(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 + (param_1 >> 0x1f) ^ param_1 >> 0x1f;
  iVar3 = 1;
  if ((int)uVar2 < 0x41) {
    if ((param_1 < 1) && (iVar3 = param_1, param_1 != 0)) {
      iVar3 = -1;
    }
    iVar1 = *(int *)(uVar2 * 4 + DAT_0029aa7c + 0x29aa72);
  }
  else {
    if ((param_1 < 1) && (iVar3 = param_1, param_1 != 0)) {
      iVar3 = -1;
    }
    iVar1 = __divsi3(0x400000);
    iVar1 = 0x5a - *(int *)((iVar1 >> 10) * 4 + DAT_0029aa78 + 0x29aa58);
  }
  return iVar3 * iVar1;
}


