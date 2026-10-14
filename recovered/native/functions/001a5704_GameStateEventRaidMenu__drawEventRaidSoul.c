/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5704 GameStateEventRaidMenu::drawEventRaidSoul */

/* GameStateEventRaidMenu::drawEventRaidSoul() */

void __thiscall GameStateEventRaidMenu::drawEventRaidSoul(GameStateEventRaidMenu *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  
  (**(code **)(**(int **)(this + 0x28) + 0x20))(*(int **)(this + 0x28),1);
  (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),0);
  (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),0);
  (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),0);
  iVar1 = ZombieCafe::getEventRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 == 2) {
LAB_001a574e:
    (**(code **)(**(int **)(this + 0x30) + 0x20))(*(int **)(this + 0x30),1);
  }
  else {
    if (iVar1 == 3) {
      (**(code **)(**(int **)(this + 0x34) + 0x20))(*(int **)(this + 0x34),1);
      goto LAB_001a574e;
    }
    if (iVar1 != 1) goto LAB_001a5762;
  }
  (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),1);
LAB_001a5762:
  iVar1 = ZombieCafe::getStaminaEventRecoverTime(*(ZombieCafe **)(this + 0xc),true);
  piVar2 = *(int **)(this + 0x38);
  if (iVar1 != DAT_001a5788) {
    pcVar3 = *(code **)(*piVar2 + 0x20);
  }
  else {
    pcVar3 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar3)(piVar2,iVar1 != DAT_001a5788);
  return;
}


