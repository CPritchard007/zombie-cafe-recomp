/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aa80 CapcomMath::sqrt */

/* CapcomMath::sqrt(int) */

int CapcomMath::sqrt(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_1 < 0) {
    iVar1 = -1;
  }
  else {
    uVar2 = 0;
    uVar3 = 0xf;
    do {
      iVar1 = uVar2 + (1 << (uVar3 & 0xff)) << (uVar3 & 0xff);
      if (iVar1 <= param_1) {
        param_1 = param_1 - iVar1;
        uVar2 = uVar2 | 2 << (uVar3 & 0xff);
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
    iVar1 = (int)uVar2 >> 1;
  }
  return iVar1;
}


