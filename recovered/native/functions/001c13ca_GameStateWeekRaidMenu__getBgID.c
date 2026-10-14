/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c13ca GameStateWeekRaidMenu::getBgID */

/* GameStateWeekRaidMenu::getBgID() */

undefined4 __thiscall GameStateWeekRaidMenu::getBgID(GameStateWeekRaidMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ZombieCafe::getWeekRaidTheme(*(ZombieCafe **)(this + 0xc));
  uVar2 = 2;
  if (((1 < iVar1 - 0x7fU) && (uVar2 = 0x58, iVar1 != 0x7e)) &&
     (((iVar1 == 0x8b || (iVar1 == 0x83)) || ((iVar1 != 0x9d && (uVar2 = 2, iVar1 == 0x90)))))) {
    uVar2 = 0x58;
  }
  return uVar2;
}


