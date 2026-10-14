/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00161aa4 GameStateMainMenu::setFlyPos */

/* GameStateMainMenu::setFlyPos() */

void __thiscall GameStateMainMenu::setFlyPos(GameStateMainMenu *this)

{
  uint uVar1;
  uint uVar2;
  GameStateMainMenu *pGVar3;
  int iVar4;
  
  iVar4 = 0;
  pGVar3 = this;
  do {
    uVar1 = __fixsfsi(*(undefined4 *)(pGVar3 + 0xbc));
    uVar2 = __fixsfsi(*(undefined4 *)(pGVar3 + 0xb8));
    iVar4 = iVar4 + 1;
    *(uint *)(this + 0x94) =
         ((uVar2 & 0xffff) + (*(uint *)(this + 0xa0) >> 0x10)) * 0x10000 |
         (uVar1 & 0xffff) + *(uint *)(this + 0xa0) & 0xffff;
    FUN_0016105c(*(undefined4 *)(this + 0x1c));
    pGVar3 = pGVar3 + 8;
    this = this + 4;
  } while (iVar4 != 3);
  return;
}


