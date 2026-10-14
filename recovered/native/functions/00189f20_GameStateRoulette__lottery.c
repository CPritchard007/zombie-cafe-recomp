/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189f20 GameStateRoulette::lottery */

/* GameStateRoulette::lottery() */

int __thiscall GameStateRoulette::lottery(GameStateRoulette *this)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  GameStateRoulette *pGVar2;
  GameStateRoulette *pGVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00189fdc;
  if (this[DAT_00189fd8] == (GameStateRoulette)0x0) {
    iVar5 = 0;
    pGVar3 = this;
    for (iVar1 = 0; pGVar3 = pGVar3 + 4, iVar1 < *(int *)(this + 0x738); iVar1 = iVar1 + 1) {
      iVar5 = iVar5 + (uint)(byte)pGVar3[DAT_00189fe0];
    }
    if (iVar5 != 0) {
      iVar1 = arc4random();
      __aeabi_idivmod(iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,iVar5);
      iVar5 = extraout_r1_00;
    }
    pGVar3 = this + 0x738;
    iVar4 = 0;
    for (iVar1 = 0; iVar1 < *(int *)pGVar3; iVar1 = iVar1 + 1) {
      pGVar2 = this + DAT_00189fe4;
      this = this + 4;
      iVar4 = iVar4 + (uint)(byte)*pGVar2;
      if (iVar5 <= iVar4) {
        return iVar1;
      }
    }
  }
  else {
    iVar5 = 0;
    pGVar3 = this;
    for (iVar4 = 0; pGVar3 = pGVar3 + 4, iVar4 < *(int *)(this + DAT_00189fdc); iVar4 = iVar4 + 1) {
      iVar5 = iVar5 + (uint)(byte)pGVar3[DAT_00189fe0];
    }
    if (iVar5 != 0) {
      iVar4 = arc4random();
      __aeabi_idivmod(iVar4 + (iVar4 >> 0x1f) ^ iVar4 >> 0x1f,iVar5);
      iVar5 = extraout_r1;
    }
    pGVar3 = this + iVar1;
    iVar4 = 0;
    for (iVar1 = 0; iVar1 < *(int *)pGVar3; iVar1 = iVar1 + 1) {
      pGVar2 = this + DAT_00189fe4;
      this = this + 4;
      iVar4 = iVar4 + (uint)(byte)*pGVar2;
      if (iVar5 <= iVar4) {
        return iVar1;
      }
    }
  }
  return 0;
}


