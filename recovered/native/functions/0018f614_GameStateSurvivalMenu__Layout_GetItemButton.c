/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f614 GameStateSurvivalMenu::Layout_GetItemButton */

/* GameStateSurvivalMenu::Layout_GetItemButton() */

void __thiscall GameStateSurvivalMenu::Layout_GetItemButton(GameStateSurvivalMenu *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if (*(char *)(*(int *)(this + 0x4c) + 0x14) == '\0') {
    if ((this[0x68] == (GameStateSurvivalMenu)0x0) && (iVar1 = isPointGift(this), iVar1 == 0)) {
      return;
    }
    piVar2 = *(int **)(this + 0x4c);
    uVar3 = 1;
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  else {
    if (this[0x68] != (GameStateSurvivalMenu)0x0) {
      return;
    }
    iVar1 = isPointGift(this);
    if (iVar1 != 0) {
      return;
    }
    piVar2 = *(int **)(this + 0x4c);
    pcVar4 = *(code **)(*piVar2 + 0x20);
    uVar3 = 0;
  }
  (*pcVar4)(piVar2,uVar3);
  return;
}


