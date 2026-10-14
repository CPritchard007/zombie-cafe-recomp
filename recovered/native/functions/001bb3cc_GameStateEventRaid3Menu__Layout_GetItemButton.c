/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb3cc GameStateEventRaid3Menu::Layout_GetItemButton */

/* GameStateEventRaid3Menu::Layout_GetItemButton() */

void __thiscall GameStateEventRaid3Menu::Layout_GetItemButton(GameStateEventRaid3Menu *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if (*(char *)(*(int *)(this + 100) + 0x14) == '\0') {
    iVar1 = isGetEventRaid3Item(this);
    if (iVar1 < 1) {
      return;
    }
    piVar2 = *(int **)(this + 100);
    uVar3 = 1;
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  else {
    iVar1 = isGetEventRaid3Item(this);
    if (0 < iVar1) {
      return;
    }
    piVar2 = *(int **)(this + 100);
    uVar3 = 0;
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar4)(piVar2,uVar3);
  return;
}


