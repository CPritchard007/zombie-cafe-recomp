/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00250500 ZombieCafe::resume */

/* ZombieCafe::resume() */

void __thiscall ZombieCafe::resume(ZombieCafe *this)

{
  short sVar1;
  bool bVar2;
  ZombieCafe *this_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCSound *this_01;
  int iVar7;
  void *pvVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ZombieCafe ZVar18;
  float __x;
  float extraout_s0;
  undefined8 uVar19;
  int iStack_140;
  char acStack_124 [256];
  int iStack_24;
  undefined4 uStack_1c;
  
  if (*(int **)(this + 8) != (int *)0x0) {
    pcVar11 = *(char **)(*(int *)(**(int **)(this + 8) + -4) + 4);
    __android_log_print(4,iRam00250548 + 0x250526,iRam0025054c + 0x250528,
                        pcVar11 + (*pcVar11 == '*'));
    initPlaySecAnalysis(this);
    startPlaySecAnalysis(this);
    simulateTimers(this);
    CapcomGame::resume((CapcomGame *)this);
    return;
  }
  uVar19 = FUN_002e8c20();
  iVar9 = (int)((ulonglong)uVar19 >> 0x20);
  this_00 = (ZombieCafe *)uVar19;
  uStack_1c = 0xa7;
  iVar17 = DAT_00250844 + 0x25055c;
  piVar12 = *(int **)(iVar17 + DAT_00250848);
  iStack_24 = *piVar12;
  if ((this_00[0x3fc] == (ZombieCafe)0x0) && (iVar3 = javaSoundsLoaded(), iVar3 != 0)) {
    this_00[0x3fc] = (ZombieCafe)0x1;
    setSfxVolume(this_00,(uchar)this_00[DAT_0025084c]);
  }
  iVar3 = DAT_00250854;
  if (this_00[DAT_00250850] != (ZombieCafe)0x0) {
    snprintf(acStack_124,0x100,(char *)(DAT_00250858 + 0x2505a8),*(int *)(this_00 + 0xb90),
             *(int *)(this_00 + DAT_00250854),
             *(int *)(this_00 + DAT_00250854) - *(int *)(this_00 + 0xb90));
    L_PrintLog((char *)(DAT_0025085c + 0x2505b4),acStack_124);
    this_00[DAT_00250850] = (ZombieCafe)0x0;
    recordHooverInAppPurchase
              (this_00,*(int *)(this_00 + DAT_00250860),
               *(int *)(this_00 + iVar3) - *(int *)(this_00 + 0xb90));
  }
  uVar4 = *(uint *)(*(int *)(this_00 + 4) + 0x30);
  iVar3 = *(int *)(*(int *)(this_00 + 4) + 0x34);
  if (iVar3 < 0) {
    uVar16 = -**(int **)(iVar17 + DAT_00250864);
    iVar9 = (int)uVar16 >> 0x1f;
    if ((iVar9 != iVar3 && iVar3 <= iVar9) ||
       ((iVar9 == iVar3 && (uVar4 <= uVar16 && -uVar4 != **(int **)(iVar17 + DAT_00250864))))) {
      uVar16 = *(uint *)(this_00 + 0x940);
      iVar9 = uVar16 - uVar4;
      iVar17 = (*(int *)(this_00 + 0x944) - iVar3) - (uint)(uVar16 < uVar4);
      *(int *)(this_00 + 0x940) = iVar9;
      *(int *)(this_00 + 0x944) = iVar17;
      if ((iVar17 < 1) && ((iVar17 != 0 || (iVar9 == 0)))) {
        ZVar18 = (ZombieCafe)0x0;
      }
      else {
        ZVar18 = (ZombieCafe)(*(int *)(this_00 + 0x690) != -1);
      }
      this_00[0x950] = ZVar18;
      if ((bool)ZVar18) {
        TutorialSystem::triggerEvent(*(TutorialSystem **)(this_00 + DAT_00250868),'D',false);
      }
    }
  }
  else {
    sVar1 = (short)((ulonglong)uVar19 >> 0x20) + *(short *)(this_00 + 0x930);
    *(short *)(this_00 + 0x930) = sVar1;
    if (1000 < sVar1) {
      *(short *)(this_00 + 0x930) = sVar1 + (short)DAT_0025086c;
    }
    iVar3 = __divsi3(*(short *)(this_00 + 0x930) * 0x168,1000);
    if (iVar3 < 0) {
      __aeabi_idivmod(-iVar3,0x168);
      iVar3 = -*(int *)(DAT_00250874 + extraout_r1_00 * 4 + 0x2506b0);
    }
    else {
      __aeabi_idivmod(iVar3,0x168);
      iVar3 = *(int *)(DAT_00250870 + extraout_r1 * 4 + 0x25069a);
    }
    *(int *)(this_00 + DAT_00250878) = iVar3;
    this_00[DAT_0025087c] = (ZombieCafe)0x0;
    uVar16 = *(uint *)(this_00 + 0x4b8);
    *(uint *)(this_00 + DAT_00250880) = uVar16;
    uVar4 = *(uint *)(this_00 + DAT_00250884);
    *(uint *)(this_00 + 0x4b8) = uVar4;
    if ((uVar16 != 0) && (uVar4 != 0)) {
      uVar5 = __floatsisf(*(undefined4 *)(this_00 + DAT_00250888));
      iVar3 = (int)(uVar16 - uVar4 & 0xffff | ((uVar16 >> 0x10) - (uVar4 >> 0x10)) * 0x10000) >>
              0x10;
      iVar13 = (int)(short)(uVar16 - uVar4);
      uVar6 = __floatsisf(iVar3 * iVar3 + iVar13 * iVar13);
      sqrtf(__x);
      __addsf3(uVar5,uVar6);
      uVar5 = __fixsfsi();
      *(undefined4 *)(this_00 + DAT_00250888) = uVar5;
    }
    iVar13 = DAT_0025088c;
    iVar3 = DAT_00250868;
    *(undefined4 *)(this_00 + 0x4c0) = *(undefined4 *)(this_00 + DAT_0025088c);
    *(undefined4 *)(this_00 + iVar13) = *(undefined4 *)(this_00 + 0x4c8);
    *(int *)(this_00 + 0x4d0) = *(int *)(this_00 + 0x4d0) + iVar9;
    CapcomGame::tick((long)this_00);
    uVar5 = __floatsisf(iVar9);
    this_01 = (CCSound *)__divsf3(uVar5,DAT_00250890);
    CCSound::Tick(this_01,extraout_s0);
    TutorialSystem::tick(*(TutorialSystem **)(this_00 + iVar3),iVar9);
    ObjectiveSystem::tick(*(ObjectiveSystem **)(this_00 + DAT_00250894),iVar9);
    for (iStack_140 = 0; iVar3 = DAT_00250898, pbVar14 = *(byte **)(iVar17 + DAT_002508b4),
        iStack_140 < (int)(uint)*pbVar14; iStack_140 = iStack_140 + 1) {
      iVar15 = iStack_140 * 4;
      iVar13 = *(int *)(*(int *)(this_00 + DAT_00250898) + iVar15);
      if (iVar13 != DAT_0025089c) {
        *(int *)(*(int *)(this_00 + DAT_00250898) + iVar15) = iVar13 - iVar9;
        if (*(int *)((*pbVar14 - 1) * 4 + **(int **)(iVar17 + DAT_002508a0)) <
            *(int *)(*(int *)(this_00 + iVar3) + iVar15)) {
          *(int *)(*(int *)(this_00 + iVar3) + iVar15) = 0;
        }
        if (*(int *)(*(int *)(this_00 + iVar3) + iVar15) + **(int **)(iVar17 + DAT_002508a4) < 0 !=
            SBORROW4(*(int *)(*(int *)(this_00 + iVar3) + iVar15),-**(int **)(iVar17 + DAT_002508a4)
                    )) {
          __aeabi_idivmod(*(undefined4 *)(this_00 + 0x6a8),*pbVar14);
          if ((iStack_140 == extraout_r1_01) &&
             (iVar7 = TutorialSystem::isTutorialCompleted
                                (*(TutorialSystem **)(this_00 + DAT_00250868),'\"'), iVar7 != 0)) {
            this_00[DAT_002508a8] = (ZombieCafe)0x1;
            *(undefined4 *)(this_00 + DAT_002508b0) = **(undefined4 **)(iVar17 + DAT_002508ac);
          }
          *(int *)(*(int *)(this_00 + iVar3) + iVar15) = DAT_0025089c;
        }
        if ((*(int *)(*(int *)(this_00 + iVar3) + iVar15) < 1) && (0 < iVar13)) {
          reopenEnemyCafe(this_00,iStack_140);
        }
      }
    }
    pbVar14 = *(byte **)(iVar17 + DAT_002508b8);
    for (iVar17 = 0; iVar17 < (int)(uint)*pbVar14; iVar17 = iVar17 + 1) {
      piVar10 = (int *)(*(int *)(this_00 + 0x698) + iVar17 * 4);
      iVar3 = *piVar10;
      if (0 < iVar3) {
        *piVar10 = iVar3 - iVar9;
      }
    }
    for (iVar17 = 0; iVar3 = DAT_00250a28, iVar17 < *(int *)(this_00 + 0x6b4) + 1;
        iVar17 = iVar17 + 1) {
      iVar3 = *(int *)(iVar17 * 4 + *(int *)(this_00 + 0x6b8));
      iVar13 = *(int *)(iVar3 + 4) - iVar9;
      *(int *)(iVar3 + 4) = iVar13;
      if (iVar13 < 1) {
        pvVar8 = (void *)Vector<EarlyBirdSaleBuyTimer*>::removeElementAt
                                   ((Vector<EarlyBirdSaleBuyTimer*> *)(this_00 + 0x6b0),iVar17);
        operator_delete(pvVar8);
        iVar17 = iVar17 + -1;
      }
    }
    if ((0 < *(int *)(this_00 + DAT_00250a28)) &&
       (iVar17 = *(int *)(this_00 + DAT_00250a28) - iVar9, *(int *)(this_00 + DAT_00250a28) = iVar17
       , iVar17 < 0)) {
      *(undefined4 *)(this_00 + iVar3) = 0;
    }
    iVar17 = DAT_00250a2c;
    if ((0 < *(int *)(this_00 + DAT_00250a2c)) &&
       (iVar3 = *(int *)(this_00 + DAT_00250a2c) - iVar9, *(int *)(this_00 + DAT_00250a2c) = iVar3,
       iVar3 < 0)) {
      *(undefined4 *)(this_00 + iVar17) = 0;
    }
    iVar17 = getEventRaid_attackPointTimer(this_00);
    bVar2 = SUB81(uVar19,0);
    if (iVar17 < 1) {
      iVar17 = checkStaminaEventTime(this_00);
      if ((iVar17 != 0) && (iVar17 = getStaminaEventFlag1(this_00), iVar17 == 0)) {
        setStaminaEventFlag1(this_00,1);
      }
    }
    else {
      iVar17 = getEventRaid_attackPointTimer(this_00);
      if ((iVar17 <= DAT_00250a30) || (iVar17 = checkGlobalPlayTime(bVar2), iVar17 != 0)) {
        subEventRaid_attackPointTimer(this_00,iVar9);
      }
    }
    iVar17 = getWeekRaid_attackPointTimer(this_00);
    if ((0 < iVar17) &&
       ((iVar17 = getWeekRaid_attackPointTimer(this_00), iVar17 <= DAT_00250a30 ||
        (iVar17 = checkGlobalPlayTime_WeekRaid(bVar2), iVar17 != 0)))) {
      subWeekRaid_attackPointTimer(this_00,iVar9);
    }
    iVar17 = getEventRaid2_attackPointTimer(this_00);
    if (iVar17 < 1) {
      iVar17 = checkStaminaEventTime(this_00);
      if ((iVar17 != 0) && (iVar17 = getStaminaEventFlag2(this_00), iVar17 == 0)) {
        setStaminaEventFlag2(this_00,1);
      }
    }
    else {
      iVar17 = getEventRaid2_attackPointTimer(this_00);
      if ((iVar17 <= DAT_00250a30) || (iVar17 = checkGlobalPlayTime_EventRaid2(bVar2), iVar17 != 0))
      {
        subEventRaid2_attackPointTimer(this_00,iVar9);
      }
    }
    iVar17 = getEventRaid3_attackPointTimer(this_00);
    if ((0 < iVar17) &&
       ((iVar17 = getEventRaid3_attackPointTimer(this_00), iVar17 <= DAT_00250a30 ||
        (iVar17 = checkGlobalPlayTime(bVar2), iVar17 != 0)))) {
      subEventRaid3_attackPointTimer(this_00,iVar9);
    }
    iVar17 = getAmpouleRaid_reopenTimer(this_00);
    if ((0 < iVar17) &&
       ((iVar17 = getAmpouleRaid_reopenTimer(this_00), iVar17 <= DAT_00250a30 ||
        (iVar17 = checkGlobalPlayTime_AmpouleRaid(bVar2), iVar17 != 0)))) {
      subAmpouleRaid_reopenTimer(this_00,iVar9);
    }
  }
  if (iStack_24 == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


