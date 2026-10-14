/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f654 GameStateSurvivalMenu::isPointGiftZombie */

/* GameStateSurvivalMenu::isPointGiftZombie() */

int __thiscall GameStateSurvivalMenu::isPointGiftZombie(GameStateSurvivalMenu *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0xc) + DAT_0018f698);
  piVar3 = (int *)(**(int **)(DAT_0018f6a0 + 0x18f670) + iVar2 * 0x90);
  iVar1 = 0;
  for (; iVar2 < **(int **)(DAT_0018f69c + 0x18f668); iVar2 = iVar2 + 1) {
    if (*piVar3 <= *(int *)(this + 0xac)) {
      iVar1 = iVar1 + (uint)(piVar3[1] == 0xc);
    }
    piVar3 = piVar3 + 0x24;
  }
  return iVar1;
}


