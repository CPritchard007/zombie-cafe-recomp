/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c1398 GameStateWeekRaidMenu::getTitleID */

/* GameStateWeekRaidMenu::getTitleID() */

undefined4 __thiscall GameStateWeekRaidMenu::getTitleID(GameStateWeekRaidMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ZombieCafe::getWeekRaidTheme(*(ZombieCafe **)(this + 0xc));
  uVar2 = 0x51;
  if ((((1 < iVar1 - 0x7fU) && (uVar2 = 0x50, iVar1 != 0x7e)) && (uVar2 = 0x5f, iVar1 != 0x8b)) &&
     (((iVar1 != 0x83 && (iVar1 != 0x9d)) && (uVar2 = 0x3d, iVar1 == 0x90)))) {
    uVar2 = 0x5f;
  }
  return uVar2;
}


