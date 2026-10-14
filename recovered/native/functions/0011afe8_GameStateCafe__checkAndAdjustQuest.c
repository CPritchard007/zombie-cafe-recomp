/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011afe8 GameStateCafe::checkAndAdjustQuest */

/* GameStateCafe::checkAndAdjustQuest() */

undefined8 __thiscall GameStateCafe::checkAndAdjustQuest(GameStateCafe *this)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  GameStateCafe *pGVar5;
  
  psVar2 = *(short **)(DAT_0011b0b4 + 0x11aff4);
  pGVar5 = this;
  for (iVar3 = 0; iVar3 < *psVar2; iVar3 = iVar3 + 1) {
    piVar1 = (int *)QuestData::getData(iVar3);
    Quest::checkQuestState(*(Quest **)(*(int *)(this + 0xc) + 0x40),*piVar1);
    piVar1 = (int *)QuestData::getData(iVar3);
    Quest::changedQuestState(*(Quest **)(*(int *)(this + 0xc) + 0x40),*piVar1,1,2);
  }
  for (iVar3 = 0; iVar3 < *psVar2; iVar3 = iVar3 + 1) {
    iVar4 = *(int *)(*(int *)(this + 0xc) + 0x40);
    QuestData::getData(iVar3);
    Platform::getAppTime();
    Quest::addActiveQuest(iVar4,(double)CONCAT44(psVar2,pGVar5));
  }
  Quest::checkCompleteStartGame(*(Quest **)(*(int *)(this + 0xc) + 0x40));
  Quest::adjustedActiveState(*(Quest **)(*(int *)(this + 0xc) + 0x40));
  Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),0,(int *)0xffffffff);
  Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),0x21,(int *)0xffffffff);
  Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),0x27,(int *)0xffffffff);
  if (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x40) + 0x3c) == 1) {
    *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + 0x40) + 0x3c) = 0;
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),4,true);
    PullMenuElement::ifIsCloseNewIndicatorPull();
  }
  return CONCAT44(psVar2,pGVar5);
}


