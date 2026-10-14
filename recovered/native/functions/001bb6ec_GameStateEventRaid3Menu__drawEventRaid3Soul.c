/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb6ec GameStateEventRaid3Menu::drawEventRaid3Soul */

/* GameStateEventRaid3Menu::drawEventRaid3Soul() */

void __thiscall GameStateEventRaid3Menu::drawEventRaid3Soul(GameStateEventRaid3Menu *this)

{
  int iVar1;
  
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),1);
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
  (**(code **)(**(int **)(this + 0x40) + 0x20))(*(int **)(this + 0x40),0);
  (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),0);
  iVar1 = ZombieCafe::getEventRaid3_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      if (iVar1 != 1) {
        return;
      }
      goto LAB_001bb740;
    }
    (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),1);
  }
  (**(code **)(**(int **)(this + 0x40) + 0x20))(*(int **)(this + 0x40),1);
LAB_001bb740:
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),1);
  return;
}


