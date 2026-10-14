/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f860 GameStateSurvivalMenu::checkEndTime */

/* GameStateSurvivalMenu::checkEndTime() */

int GameStateSurvivalMenu::checkEndTime(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(DAT_0018f888 + 0x18f868) + 0x90);
  Platform::getAppTime();
  iVar1 = __fixunsdfsi();
  uVar3 = iVar2 - iVar1;
  return (uint)(uVar3 <= DAT_0018f88c) - ((int)uVar3 >> 0x1f);
}


