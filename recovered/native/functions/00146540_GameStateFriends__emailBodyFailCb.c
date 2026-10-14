/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146540 GameStateFriends::emailBodyFailCb */

/* GameStateFriends::emailBodyFailCb(void*, ccServerFailureCode) */

void GameStateFriends::emailBodyFailCb(int param_1)

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
  
  piVar7 = *(int **)(DAT_001465e4 + 0x14654c);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(int *)(this + 8)) {
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_001465e8));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_001465ec);
    uVar6 = *(undefined4 *)(this + DAT_001465f0);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_001465f4 + 0x146596),DAT_001465f8 + 0x146598,uVar2,uVar4,
             uVar5,uVar6,uVar3,1,*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x60) + 4) + 1);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_001465fc),DAT_00146600 + 0x1465ba,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_00146604));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


