/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193f38 GameStateDoJo::lottery */

/* GameStateDoJo::lottery() */

int __thiscall GameStateDoJo::lottery(GameStateDoJo *this)

{
  int extraout_r1;
  GameStateDoJo *pGVar1;
  GameStateDoJo *pGVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  pGVar2 = this;
  for (iVar3 = 0; pGVar2 = pGVar2 + 2, iVar3 < *(int *)(this + 0x690); iVar3 = iVar3 + 1) {
    iVar5 = iVar5 + (uint)(byte)pGVar2[DAT_00193f94];
  }
  if (iVar5 != 0) {
    iVar3 = arc4random();
    __aeabi_idivmod(iVar3 + (iVar3 >> 0x1f) ^ iVar3 >> 0x1f,iVar5);
    iVar5 = extraout_r1;
  }
  iVar3 = 0;
  pGVar2 = this + 0x690;
  iVar4 = 0;
  while( true ) {
    if (*(int *)pGVar2 <= iVar3) {
      return 0;
    }
    pGVar1 = this + DAT_00193f98;
    this = this + 2;
    iVar4 = iVar4 + (uint)(byte)*pGVar1;
    if (iVar5 <= iVar4) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


