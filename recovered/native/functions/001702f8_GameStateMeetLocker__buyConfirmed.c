/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001702f8 GameStateMeetLocker::buyConfirmed */

/* GameStateMeetLocker::buyConfirmed(GameStateMeetLocker*) */

void __thiscall
GameStateMeetLocker::buyConfirmed(GameStateMeetLocker *this,GameStateMeetLocker *param_1)

{
  undefined4 uVar1;
  ZombieCafe *pZVar2;
  undefined4 uVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  float in_s0;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  iVar6 = DAT_0017046c;
  piVar13 = *(int **)(DAT_00170468 + 0x170304);
  local_1c = *piVar13;
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  ZombieCafe::spendToxin(*(ZombieCafe **)(this + 0xc),5);
  ZombieCafe::addLockerSize(*(ZombieCafe **)(this + 0xc),5);
  Quest::runQuest(*(int *)(*(int *)(this + 0xc) + 0x40),0x27,(int *)0xffffffff);
  save();
  uVar1 = CCServer::GetMyUserID(*(void **)(*(int *)(this + 0xc) + DAT_00170470));
  pZVar2 = *(ZombieCafe **)(this + 0xc);
  uVar8 = *(undefined4 *)(pZVar2 + 0x680);
  uVar9 = *(undefined4 *)(pZVar2 + DAT_00170474);
  uVar10 = *(undefined4 *)(pZVar2 + DAT_00170478);
  uVar3 = ZombieCafe::getToxin(pZVar2);
  snprintf(acStack_9c,0x80,(char *)(DAT_0017047c + 0x170380),(char *)(iVar6 + 0x170342),uVar1,uVar8,
           uVar9,uVar10,uVar3,*(undefined4 *)(*(int *)(this + 0xc) + 0x5b8));
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)(this + 0xc) + DAT_00170480),DAT_00170484 + 0x170396,acStack_9c
            );
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar4,(char *)(DAT_00170488 + 0x1703b2),(char *)(DAT_0017048c + 0x1703b4),
                    (char *)(iVar6 + 0x170342));
  memset(acStack_11c,0,0x40);
  pSVar5 = (SServer *)MALTAHoover::GetInstance();
  iVar6 = MALTAHoover::getFBID(pSVar5,(char *)**(undefined4 **)(DAT_00170490 + 0x1703d0));
  if (iVar6 == 0) {
    L_PrintLog((char *)(DAT_00170494 + 0x1703e2),acStack_11c);
  }
  memset(acStack_dc,0,0x40);
  snprintf(acStack_dc,0x40,(char *)(DAT_00170498 + 0x1703fc),acStack_11c,
           *(undefined4 *)(*(int *)(this + 0xc) + 0x5b8));
  L_PrintLog((char *)(DAT_0017049c + 0x17040c),(char *)(DAT_001704a0 + 0x17040e));
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar11 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  pZVar2 = *(ZombieCafe **)(this + 0xc);
  uVar12 = *(uint *)(pZVar2 + DAT_00170478);
  uVar14 = *(uint *)(pZVar2 + DAT_00170474);
  iVar6 = ZombieCafe::calUserRankId(pZVar2,(uint)(byte)pZVar2[DAT_001704a4]);
  MALTAHoover::send(pMVar4,(char *)(DAT_001704ac + 0x170448),uVar11,uVar7,uVar12,uVar14,iVar6,
                    acStack_dc,*(char **)(DAT_001704a8 + 0x170442));
  if (local_1c != *piVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


