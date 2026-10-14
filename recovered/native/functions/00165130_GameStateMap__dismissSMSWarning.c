/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165130 GameStateMap::dismissSMSWarning */

/* GameStateMap::dismissSMSWarning(void*) */

void GameStateMap::dismissSMSWarning(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ZombieCafe *this;
  int *piVar7;
  char acStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_001651d4 + 0x16513c);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_001651d8));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_001651dc);
    uVar6 = *(undefined4 *)(this + DAT_001651e0);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_001651e4 + 0x165186),DAT_001651e8 + 0x165188,uVar2,uVar4,
             uVar5,uVar6,uVar3,2,
             *(int *)(*(int *)(*(int *)((int)param_1 + DAT_001651ec) + 0x60) + 4) + 1);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_001651f0),DAT_001651f4 + 0x1651ac,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_001651f8));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


