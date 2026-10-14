/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ff2c GameStateEventRaid::setEventRaidLayoutNum */

/* GameStateEventRaid::setEventRaidLayoutNum() */

void __thiscall GameStateEventRaid::setEventRaidLayoutNum(GameStateEventRaid *this)

{
  int iVar1;
  
  iVar1 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0xc));
  if ((iVar1 - 1U < 0x1b) &&
     (iVar1 = *(int *)(*(int *)(this + 0x1c) * 4 + *(int *)(DAT_0019ff64 + 0x19ff44)), iVar1 != 0))
  {
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(*(int *)(this + 0x58) * 4 + iVar1);
  }
  *(uint *)(this + 0x150) = *(uint *)(this + 0x150) & 3;
  return;
}


