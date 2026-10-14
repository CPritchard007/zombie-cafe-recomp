/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024fff8 ZombieCafe::simulateTimers */

/* WARNING: Removing unreachable block (ram,0x002500e6) */
/* ZombieCafe::simulateTimers() */

void __thiscall ZombieCafe::simulateTimers(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ObjectiveSystem *this_00;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int extraout_r1;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  undefined4 uVar16;
  char *pcVar17;
  int iVar18;
  void *pvVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined4 in_stack_fffffeb8;
  undefined4 in_stack_fffffebc;
  char acStack_11c [256];
  int local_1c;
  
  iVar18 = DAT_00250300 + 0x250004;
  piVar15 = *(int **)(iVar18 + DAT_00250304);
  local_1c = *piVar15;
  pvVar19 = (void *)(DAT_00250308 + 0x250012);
  iVar4 = CCOptions::GetUInt64
                    (*(CCOptions **)(this + 0xa00),pvVar19,(char *)0x0,
                     CONCAT44(in_stack_fffffebc,in_stack_fffffeb8));
  iVar22 = DAT_0025030c;
  *(int *)(DAT_0025030c + 0x250038) = iVar4;
  if (iVar4 < 1) {
    L_PrintLog((char *)(DAT_00250310 + 0x250034),(char *)(DAT_00250314 + 0x250036));
  }
  else {
    uVar24 = Platform::getAppTime();
    uVar16 = *(undefined4 *)(iVar22 + 0x250038);
    uVar25 = __floatsidf(uVar16);
    __subdf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
             (int)((ulonglong)uVar25 >> 0x20));
    uVar5 = __fixdfsi();
    *(undefined4 *)(this + DAT_00250318) = uVar5;
    uVar7 = *(undefined4 *)(this + 0x880);
    pcVar17 = (char *)(DAT_00250320 + 0x250076);
    snprintf(acStack_11c,0x100,(char *)(DAT_0025031c + 0x250074),uVar5);
    L_PrintLog(pcVar17,pcVar17);
    L_PrintLog((char *)(DAT_00250324 + 0x25008c),acStack_11c);
    L_PrintLog(pcVar17,pcVar17);
    iVar4 = DAT_00250318;
    *(undefined4 *)(iVar22 + 0x250038) = 0;
    CCOptions::SetUInt64(*(CCOptions **)(this + 0xa00),pvVar19,(char *)0x0,CONCAT44(uVar16,uVar7));
    if (*(int *)(this + iVar4) < 0) {
      *(undefined4 *)(this + iVar4) = 0;
    }
    iVar22 = DAT_00250330;
    L_PrintLog((char *)(DAT_00250328 + 0x2500c0),(char *)(DAT_0025032c + 0x2500c2));
    lVar20 = **(long **)(iVar18 + DAT_00250334);
    iVar21 = *(int *)(this + iVar4);
    lVar26 = __aeabi_ldivmod(lVar20,(*(long **)(iVar18 + DAT_00250334))[1],DAT_002502f8,DAT_002502fc
                            );
    if (lVar26 < iVar21) {
      this_00 = *(ObjectiveSystem **)(this + iVar22);
    }
    else {
      L_PrintLog((char *)(DAT_00250338 + 0x2500fa),(char *)(DAT_0025033c + 0x2500fc));
      lVar20 = *(int *)(this + iVar4) * 1000;
      this_00 = *(ObjectiveSystem **)(this + iVar22);
    }
    ObjectiveSystem::tick(this_00,lVar20);
    pcVar17 = (char *)(DAT_00250340 + 0x25011a);
    snprintf(acStack_11c,0x100,(char *)(DAT_00250344 + 0x250118),DAT_00250348);
    L_PrintLog(pcVar17,pcVar17);
    L_PrintLog((char *)(DAT_0025034c + 0x250132),acStack_11c);
    L_PrintLog(pcVar17,pcVar17);
    for (iVar22 = 0; iVar10 = DAT_00250380, iVar21 = DAT_00250350,
        pbVar14 = *(byte **)(iVar18 + DAT_002503a8), iVar22 < (int)(uint)*pbVar14;
        iVar22 = iVar22 + 1) {
      iVar23 = iVar22 * 4;
      iVar10 = DAT_00250348;
      snprintf(acStack_11c,0x100,(char *)(DAT_00250354 + 0x250154),iVar22,
               *(undefined4 *)(*(int *)(this + DAT_00250350) + iVar23),DAT_00250348);
      pcVar17 = (char *)(DAT_00250358 + 0x250166);
      L_PrintLog(pcVar17,acStack_11c);
      iVar11 = *(int *)(*(int *)(this + iVar21) + iVar23);
      if (iVar11 == DAT_00250348) {
        L_PrintLog((char *)(DAT_0025035c + 0x25017e),(char *)(DAT_00250360 + 0x250180));
      }
      else {
        iVar11 = (iVar11 >> 0x1f) - iVar11;
        if (iVar11 < 0) {
          pcVar8 = (char *)(DAT_00250364 + 0x250194);
        }
        else {
          pcVar8 = (char *)(DAT_00250368 + 0x25019a);
        }
        L_PrintLog(pcVar17,pcVar8);
        piVar12 = *(int **)(iVar18 + DAT_0025036c);
        iVar9 = *piVar12;
        iVar6 = __divsi3(iVar9,1000);
        iVar2 = DAT_00250374;
        iVar1 = DAT_00250370;
        iVar13 = *(int *)(this + iVar4);
        if (iVar13 == iVar6 * 2 || iVar13 + iVar6 * -2 < 0 != SBORROW4(iVar13,iVar6 * 2)) {
          pcVar17 = (char *)(DAT_00250378 + 0x2501da);
          snprintf(acStack_11c,0x100,pcVar17,iVar22,
                   *(undefined4 *)(*(int *)(this + iVar21) + iVar23),iVar10);
          L_PrintLog((char *)(DAT_0025037c + 0x2501f0),acStack_11c);
          *(int *)(*(int *)(this + iVar21) + iVar23) =
               *(int *)(*(int *)(this + iVar21) + iVar23) +
               DAT_00250380 * *(int *)(this + DAT_00250318);
          snprintf(acStack_11c,0x100,pcVar17,iVar22,
                   *(undefined4 *)(*(int *)(this + iVar21) + iVar23));
          pcVar17 = acStack_11c;
          pcVar8 = (char *)(DAT_00250384 + 0x250220);
        }
        else {
          *(int *)(*(int *)(this + iVar21) + iVar23) = -iVar9;
          pcVar17 = (char *)(iVar1 + 0x2501cc);
          pcVar8 = (char *)(iVar2 + 0x2501ce);
        }
        L_PrintLog(pcVar8,pcVar17);
        iVar10 = *piVar12;
        if (*(int *)(*(int *)(this + iVar21) + iVar23) + iVar10 < 0 !=
            SBORROW4(*(int *)(*(int *)(this + iVar21) + iVar23),-iVar10)) {
          __aeabi_idivmod(*(undefined4 *)(this + 0x6a8),*pbVar14);
          if ((iVar22 == extraout_r1) &&
             (iVar10 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(this + DAT_00250388),'\"'), iVar10 != 0)) {
            this[DAT_0025038c] = (ZombieCafe)0x1;
            *(undefined4 *)(this + DAT_00250394) = **(undefined4 **)(iVar18 + DAT_00250390);
          }
          iVar10 = DAT_00250398;
          *(int *)(*(int *)(this + iVar21) + iVar23) = DAT_00250348;
          L_PrintLog((char *)(iVar10 + 0x250272),(char *)(DAT_0025039c + 0x250274));
        }
        if ((*(int *)(*(int *)(this + iVar21) + iVar23) < 1) && (iVar11 < 0)) {
          L_PrintLog((char *)(DAT_002503a0 + 0x25028c),(char *)(DAT_002503a4 + 0x25028e));
          reopenEnemyCafe(this,iVar22);
        }
      }
    }
    pbVar14 = *(byte **)(iVar18 + DAT_002503ac);
    for (iVar22 = 0; iVar22 < (int)(uint)*pbVar14; iVar22 = iVar22 + 1) {
      piVar12 = (int *)(*(int *)(this + 0x698) + iVar22 * 4);
      iVar21 = *piVar12;
      if ((0 < iVar21) && (iVar21 <= **(int **)(iVar18 + DAT_002503b0))) {
        *piVar12 = iVar21 + *(int *)(this + iVar4) * iVar10;
      }
    }
    for (iVar22 = 0; iVar18 = DAT_002504f0, iVar22 < *(int *)(this + 0x6b4) + 1; iVar22 = iVar22 + 1
        ) {
      iVar18 = *(int *)(iVar22 * 4 + *(int *)(this + 0x6b8));
      iVar21 = DAT_002504ec * *(int *)(this + iVar4) + *(int *)(iVar18 + 4);
      *(int *)(iVar18 + 4) = iVar21;
      if (iVar21 < 1) {
        pvVar19 = (void *)Vector<EarlyBirdSaleBuyTimer*>::removeElementAt
                                    ((Vector<EarlyBirdSaleBuyTimer*> *)(this + 0x6b0),iVar22);
        operator_delete(pvVar19);
        iVar22 = iVar22 + -1;
      }
    }
    if ((0 < *(int *)(this + DAT_002504f0)) &&
       ((DAT_002504f4 < *(int *)(this + iVar4) ||
        (iVar22 = *(int *)(this + DAT_002504f0) + DAT_002504ec * *(int *)(this + iVar4),
        *(int *)(this + DAT_002504f0) = iVar22, iVar22 < 0)))) {
      *(undefined4 *)(this + iVar18) = 0;
    }
    iVar22 = DAT_002504f8;
    if ((0 < *(int *)(this + DAT_002504f8)) &&
       ((DAT_002504f4 < *(int *)(this + iVar4) ||
        (iVar18 = *(int *)(this + DAT_002504f8) + DAT_002504ec * *(int *)(this + iVar4),
        *(int *)(this + DAT_002504f8) = iVar18, iVar18 < 0)))) {
      *(undefined4 *)(this + iVar22) = 0;
    }
    iVar22 = getEventRaid_attackPointTimer(this);
    bVar3 = SUB41(this,0);
    if ((0 < iVar22) && (iVar22 = checkGlobalPlayTime(bVar3), iVar22 != 0)) {
      subEventRaid_attackPointTimer2(this,*(int *)(this + iVar4) * 1000);
    }
    iVar22 = getWeekRaid_attackPointTimer(this);
    if ((0 < iVar22) && (iVar22 = checkGlobalPlayTime_WeekRaid(bVar3), iVar22 != 0)) {
      subWeekRaid_attackPointTimer(this,*(int *)(this + iVar4) * 1000);
    }
    iVar22 = getEventRaid2_attackPointTimer(this);
    if ((0 < iVar22) && (iVar22 = checkGlobalPlayTime_EventRaid2(bVar3), iVar22 != 0)) {
      subEventRaid2_attackPointTimer2(this,*(int *)(this + iVar4) * 1000);
    }
    iVar22 = getEventRaid3_attackPointTimer(this);
    if ((0 < iVar22) && (iVar22 = checkGlobalPlayTime(bVar3), iVar22 != 0)) {
      subEventRaid3_attackPointTimer(this,*(int *)(this + iVar4) * 1000);
    }
    iVar22 = getAmpouleRaid_reopenTimer(this);
    if ((0 < iVar22) && (iVar22 = checkGlobalPlayTime_AmpouleRaid(bVar3), iVar22 != 0)) {
      subAmpouleRaid_reopenTimer(this,*(int *)(this + iVar4) * 1000);
    }
    *(undefined4 *)(this + iVar4) = 0;
  }
  if (local_1c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


