/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c1c7c GameStateWeekRaidMenu::Layout_Default */

/* GameStateWeekRaidMenu::Layout_Default() */

void __thiscall GameStateWeekRaidMenu::Layout_Default(GameStateWeekRaidMenu *this)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),1);
  iVar1 = ZombieCafe::getWeekRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 == 3) {
    piVar2 = *(int **)(this + 0xac);
    (**(code **)(*piVar2 + 0x20))(piVar2,0);
  }
  else {
    piVar2 = *(int **)(this + 0xac);
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
    drawReOpenTimer(this);
  }
  drawWeekRaidSoul(this);
  return;
}


