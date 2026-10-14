/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af63c GameStateEventRaid2Menu::drawEventRaid2Soul */

/* GameStateEventRaid2Menu::drawEventRaid2Soul() */

void __thiscall GameStateEventRaid2Menu::drawEventRaid2Soul(GameStateEventRaid2Menu *this)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  
  (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),0);
  (**(code **)(**(int **)(this + 0x54) + 0x20))(*(int **)(this + 0x54),0);
  (**(code **)(**(int **)(this + 0x58) + 0x20))(*(int **)(this + 0x58),0);
  cVar3 = *(char *)(*(int *)(this + 0x4c) + 0x14);
  if (cVar3 != '\0') {
    cVar3 = '\x01';
  }
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),cVar3);
  iVar1 = ZombieCafe::getEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 == 2) {
LAB_001af69c:
    (**(code **)(**(int **)(this + 0x54) + 0x20))(*(int **)(this + 0x54),1);
  }
  else {
    if (iVar1 == 3) {
      (**(code **)(**(int **)(this + 0x58) + 0x20))(*(int **)(this + 0x58),1);
      (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
      goto LAB_001af69c;
    }
    if (iVar1 != 1) goto LAB_001af6b0;
  }
  (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),1);
LAB_001af6b0:
  iVar1 = ZombieCafe::getStaminaEventRecoverTime(*(ZombieCafe **)(this + 0xc),true);
  if (iVar1 != DAT_001af6d8) {
    piVar2 = *(int **)(this + 0xc0);
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  else {
    piVar2 = *(int **)(this + 0xc0);
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar4)(piVar2,iVar1 != DAT_001af6d8);
  return;
}


