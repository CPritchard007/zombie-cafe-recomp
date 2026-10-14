/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001662b8 GameStateMap::emailBodySuccessCb */

/* GameStateMap::emailBodySuccessCb(void*, char const*, unsigned int) */

void GameStateMap::emailBodySuccessCb(void *param_1,char *param_2,uint param_3)

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
  
  piVar7 = *(int **)(DAT_00166368 + 0x1662c4);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    *(undefined1 *)((int)param_1 + DAT_0016636c) = 0;
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_00166370));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_00166374);
    uVar6 = *(undefined4 *)(this + DAT_00166378);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0016637c + 0x166310),DAT_00166380 + 0x166316,uVar2,uVar4,
             uVar5,uVar6,uVar3,1,
             *(int *)(*(int *)(*(int *)((int)param_1 + DAT_00166384) + 0x60) + 4) + 1);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_00166388),DAT_0016638c + 0x16633e,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_00166390));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


