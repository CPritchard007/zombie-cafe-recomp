/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166394 GameStateMap::emailBodyFailCb */

/* GameStateMap::emailBodyFailCb(void*, ccServerFailureCode) */

void GameStateMap::emailBodyFailCb(int param_1)

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
  
  piVar7 = *(int **)(DAT_00166444 + 0x1663a0);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(int *)(this + 8)) {
    *(undefined1 *)(param_1 + DAT_00166448) = 0;
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_0016644c));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_00166450);
    uVar6 = *(undefined4 *)(this + DAT_00166454);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_00166458 + 0x1663ec),DAT_0016645c + 0x1663f2,uVar2,uVar4,
             uVar5,uVar6,uVar3,1,*(int *)(*(int *)(*(int *)(param_1 + DAT_00166460) + 0x60) + 4) + 1
            );
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_00166464),DAT_00166468 + 0x16641a,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_0016646c));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


