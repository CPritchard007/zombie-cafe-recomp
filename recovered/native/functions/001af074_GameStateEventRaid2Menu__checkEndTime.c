/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af074 GameStateEventRaid2Menu::checkEndTime */

/* GameStateEventRaid2Menu::checkEndTime() */

int GameStateEventRaid2Menu::checkEndTime(void)

{
  int iVar1;
  uint uVar2;
  
  Platform::getAppTime();
  iVar1 = __fixunsdfsi();
  uVar2 = *(int *)(*(int *)(DAT_001af098 + 0x1af088) + 8) - iVar1;
  return (uint)(uVar2 <= DAT_001af09c) - ((int)uVar2 >> 0x1f);
}


