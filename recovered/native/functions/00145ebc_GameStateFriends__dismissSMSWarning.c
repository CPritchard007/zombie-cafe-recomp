/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00145ebc GameStateFriends::dismissSMSWarning */

/* GameStateFriends::dismissSMSWarning(void*) */

void GameStateFriends::dismissSMSWarning(void *param_1)

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
  
  piVar7 = *(int **)(DAT_00145f60 + 0x145ec8);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_00145f64));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_00145f68);
    uVar6 = *(undefined4 *)(this + DAT_00145f6c);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_00145f70 + 0x145f12),DAT_00145f74 + 0x145f14,uVar2,uVar4,
             uVar5,uVar6,uVar3,2,*(int *)(*(int *)(*(int *)((int)param_1 + 0x5c) + 0x60) + 4) + 1);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_00145f78),DAT_00145f7c + 0x145f36,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_00145f80));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


