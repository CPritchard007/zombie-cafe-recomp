/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c1104 GameStateWeekRaidMenu::drawWeekRaidSoul */

/* GameStateWeekRaidMenu::drawWeekRaidSoul() */

void __thiscall GameStateWeekRaidMenu::drawWeekRaidSoul(GameStateWeekRaidMenu *this)

{
  int iVar1;
  
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),1);
  (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),0);
  (**(code **)(**(int **)(this + 0x28) + 0x20))(*(int **)(this + 0x28),0);
  (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),0);
  iVar1 = ZombieCafe::getWeekRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      if (iVar1 != 1) {
        return;
      }
      goto LAB_001c1158;
    }
    (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),1);
  }
  (**(code **)(**(int **)(this + 0x28) + 0x20))(*(int **)(this + 0x28),1);
LAB_001c1158:
  (**(code **)(**(int **)(this + 0x24) + 0x20))(*(int **)(this + 0x24),1);
  return;
}


