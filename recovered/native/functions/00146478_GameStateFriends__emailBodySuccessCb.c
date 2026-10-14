/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146478 GameStateFriends::emailBodySuccessCb */

/* GameStateFriends::emailBodySuccessCb(void*, char const*, unsigned int) */

void GameStateFriends::emailBodySuccessCb(void *param_1,char *param_2,uint param_3)

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
  
  piVar7 = *(int **)(DAT_0014651c + 0x146484);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_00146520));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_00146524);
    uVar6 = *(undefined4 *)(this + DAT_00146528);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0014652c + 0x1464ce),DAT_00146530 + 0x1464d0,uVar2,uVar4,
             uVar5,uVar6,uVar3,1,*(int *)(*(int *)(*(int *)((int)param_1 + 0x5c) + 0x60) + 4) + 1);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_00146534),DAT_00146538 + 0x1464f2,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_0014653c));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


