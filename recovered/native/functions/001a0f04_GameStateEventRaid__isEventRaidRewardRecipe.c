/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a0f04 GameStateEventRaid::isEventRaidRewardRecipe */

/* GameStateEventRaid::isEventRaidRewardRecipe() */

bool GameStateEventRaid::isEventRaidRewardRecipe(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ZombieCafe *this;
  StringBuffer aSStack_2c [28];
  
  StringBuffer::StringBuffer(aSStack_2c);
  iVar2 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar2 + 4);
  iVar2 = ZombieCafe::getEventRaid_cafeLevel(this);
  ZombieCafe::getEventRaid_cafeLevelNext(this);
  iVar3 = ZombieCafe::getEventRaid_Theme(this);
  iVar4 = ZombieCafe::isEventRaid_FirstHalf();
  if (iVar4 == 0) {
    piVar5 = (int *)(DAT_001a0f70 + 0x1a0f44);
  }
  else {
    piVar5 = (int *)(DAT_001a0f6c + 0x1a0f3e);
  }
  sVar1 = *(short *)(*(int *)(*piVar5 + iVar3 * 4) + iVar2 * 0x10);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return (ushort)(sVar1 - 5U) < 2;
}


