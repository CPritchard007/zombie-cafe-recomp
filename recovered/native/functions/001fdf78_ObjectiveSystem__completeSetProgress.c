/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fdf78 ObjectiveSystem::completeSetProgress */

/* ObjectiveSystem::completeSetProgress() */

void __thiscall ObjectiveSystem::completeSetProgress(ObjectiveSystem *this)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  MALTAHoover *pMVar6;
  SServer *pSVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  char *__format;
  int iVar17;
  uint uVar18;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar12 = *(int **)(DAT_001fe0fc + 0x1fdf84);
  local_1c = *piVar12;
  iVar17 = 0;
  for (iVar11 = 0; iVar11 < *(int *)(this + 8) + 1; iVar11 = iVar11 + 1) {
    iVar13 = *(int *)(iVar11 * 4 + *(int *)(this + 0xc));
    if (*(int *)(iVar13 + 4) < *(int *)(iVar13 + 8)) {
      iVar17 = iVar17 + 1;
    }
    *(int *)(iVar13 + 4) = *(int *)(iVar13 + 8);
  }
  iVar1 = CCSecondsSince1970();
  iVar11 = DAT_001fe108;
  iVar1 = iVar1 - *(int *)(this + 0x1c);
  __format = (char *)(DAT_001fe100 + 0x1fdfc2);
  uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)this + DAT_001fe104));
  pZVar3 = *(ZombieCafe **)this;
  uVar9 = *(undefined4 *)(pZVar3 + 0x680);
  uVar14 = *(undefined4 *)(pZVar3 + DAT_001fe10c);
  uVar10 = *(undefined4 *)(pZVar3 + DAT_001fe110);
  uVar4 = ZombieCafe::getToxin(pZVar3);
  iVar13 = iVar1;
  uVar5 = __divsi3(*(undefined4 *)(this + 0x14),1000);
  snprintf(acStack_9c,0x80,__format,(char *)(iVar11 + 0x1fdfd6),uVar2,uVar9,uVar14,uVar10,uVar4,
           iVar13,uVar5,iVar17);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)this + DAT_001fe114),DAT_001fe118 + 0x1fe020,acStack_9c);
  pMVar6 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar6,(char *)(DAT_001fe11c + 0x1fe03c),(char *)(DAT_001fe120 + 0x1fe03e),
                    (char *)(iVar11 + 0x1fdfd6));
  memset(acStack_11c,0,0x40);
  pSVar7 = (SServer *)MALTAHoover::GetInstance();
  iVar11 = MALTAHoover::getFBID(pSVar7,(char *)**(undefined4 **)(DAT_001fe124 + 0x1fe058));
  if (iVar11 == 0) {
    L_PrintLog((char *)(DAT_001fe128 + 0x1fe06a),acStack_11c);
  }
  memset(acStack_dc,0,0x40);
  iVar11 = DAT_001fe12c;
  uVar2 = __divsi3(*(undefined4 *)(this + 0x14),1000);
  snprintf(acStack_dc,0x40,(char *)(iVar11 + 0x1fe08e),acStack_11c,iVar17,iVar1,uVar2);
  L_PrintLog((char *)(DAT_001fe130 + 0x1fe0a2),(char *)(DAT_001fe134 + 0x1fe0a4));
  pMVar6 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar18 = *(uint *)(*(ZombieCafe **)this + 0x680);
  uVar8 = ZombieCafe::getToxin(*(ZombieCafe **)this);
  pZVar3 = *(ZombieCafe **)this;
  uVar16 = *(uint *)(pZVar3 + DAT_001fe10c);
  uVar15 = *(uint *)(pZVar3 + DAT_001fe110);
  iVar11 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_001fe138]);
  MALTAHoover::send(pMVar6,(char *)(DAT_001fe140 + 0x1fe0da),uVar18,uVar8,uVar15,uVar16,iVar11,
                    acStack_dc,*(char **)(DAT_001fe13c + 0x1fe0d6));
  if (local_1c != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


