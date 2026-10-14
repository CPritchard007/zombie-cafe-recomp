/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00250550 ZombieCafe::tick */

/* ZombieCafe::tick(long) */

void __thiscall ZombieCafe::tick(ZombieCafe *this,long param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCSound *this_00;
  int iVar7;
  void *pvVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar9;
  int *piVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ZombieCafe ZVar16;
  float __x;
  float extraout_s0;
  int local_138;
  char acStack_11c [256];
  int local_1c;
  
  iVar15 = DAT_00250844 + 0x25055c;
  piVar10 = *(int **)(iVar15 + DAT_00250848);
  local_1c = *piVar10;
  if ((this[0x3fc] == (ZombieCafe)0x0) && (iVar3 = javaSoundsLoaded(), iVar3 != 0)) {
    this[0x3fc] = (ZombieCafe)0x1;
    setSfxVolume(this,(uchar)this[DAT_0025084c]);
  }
  iVar3 = DAT_00250854;
  if (this[DAT_00250850] != (ZombieCafe)0x0) {
    snprintf(acStack_11c,0x100,(char *)(DAT_00250858 + 0x2505a8),*(int *)(this + 0xb90),
             *(int *)(this + DAT_00250854),*(int *)(this + DAT_00250854) - *(int *)(this + 0xb90));
    L_PrintLog((char *)(DAT_0025085c + 0x2505b4),acStack_11c);
    this[DAT_00250850] = (ZombieCafe)0x0;
    recordHooverInAppPurchase
              (this,*(int *)(this + DAT_00250860),*(int *)(this + iVar3) - *(int *)(this + 0xb90));
  }
  uVar4 = *(uint *)(*(int *)(this + 4) + 0x30);
  iVar3 = *(int *)(*(int *)(this + 4) + 0x34);
  if (iVar3 < 0) {
    uVar14 = -**(int **)(iVar15 + DAT_00250864);
    iVar11 = (int)uVar14 >> 0x1f;
    if ((iVar11 != iVar3 && iVar3 <= iVar11) ||
       ((iVar11 == iVar3 && (uVar4 <= uVar14 && -uVar4 != **(int **)(iVar15 + DAT_00250864))))) {
      uVar14 = *(uint *)(this + 0x940);
      iVar15 = uVar14 - uVar4;
      iVar3 = (*(int *)(this + 0x944) - iVar3) - (uint)(uVar14 < uVar4);
      *(int *)(this + 0x940) = iVar15;
      *(int *)(this + 0x944) = iVar3;
      if ((iVar3 < 1) && ((iVar3 != 0 || (iVar15 == 0)))) {
        ZVar16 = (ZombieCafe)0x0;
      }
      else {
        ZVar16 = (ZombieCafe)(*(int *)(this + 0x690) != -1);
      }
      this[0x950] = ZVar16;
      if ((bool)ZVar16) {
        TutorialSystem::triggerEvent(*(TutorialSystem **)(this + DAT_00250868),'D',false);
      }
    }
  }
  else {
    sVar1 = (short)param_1 + *(short *)(this + 0x930);
    *(short *)(this + 0x930) = sVar1;
    if (1000 < sVar1) {
      *(short *)(this + 0x930) = sVar1 + (short)DAT_0025086c;
    }
    iVar3 = __divsi3(*(short *)(this + 0x930) * 0x168,1000);
    if (iVar3 < 0) {
      __aeabi_idivmod(-iVar3,0x168);
      iVar3 = -*(int *)(DAT_00250874 + extraout_r1_00 * 4 + 0x2506b0);
    }
    else {
      __aeabi_idivmod(iVar3,0x168);
      iVar3 = *(int *)(DAT_00250870 + extraout_r1 * 4 + 0x25069a);
    }
    *(int *)(this + DAT_00250878) = iVar3;
    this[DAT_0025087c] = (ZombieCafe)0x0;
    uVar14 = *(uint *)(this + 0x4b8);
    *(uint *)(this + DAT_00250880) = uVar14;
    uVar4 = *(uint *)(this + DAT_00250884);
    *(uint *)(this + 0x4b8) = uVar4;
    if ((uVar14 != 0) && (uVar4 != 0)) {
      uVar5 = __floatsisf(*(undefined4 *)(this + DAT_00250888));
      iVar3 = (int)(uVar14 - uVar4 & 0xffff | ((uVar14 >> 0x10) - (uVar4 >> 0x10)) * 0x10000) >>
              0x10;
      iVar11 = (int)(short)(uVar14 - uVar4);
      uVar6 = __floatsisf(iVar3 * iVar3 + iVar11 * iVar11);
      sqrtf(__x);
      __addsf3(uVar5,uVar6);
      uVar5 = __fixsfsi();
      *(undefined4 *)(this + DAT_00250888) = uVar5;
    }
    iVar11 = DAT_0025088c;
    iVar3 = DAT_00250868;
    *(undefined4 *)(this + 0x4c0) = *(undefined4 *)(this + DAT_0025088c);
    *(undefined4 *)(this + iVar11) = *(undefined4 *)(this + 0x4c8);
    *(int *)(this + 0x4d0) = *(int *)(this + 0x4d0) + param_1;
    CapcomGame::tick((long)this);
    uVar5 = __floatsisf(param_1);
    this_00 = (CCSound *)__divsf3(uVar5,DAT_00250890);
    CCSound::Tick(this_00,extraout_s0);
    TutorialSystem::tick(*(TutorialSystem **)(this + iVar3),param_1);
    ObjectiveSystem::tick(*(ObjectiveSystem **)(this + DAT_00250894),param_1);
    for (local_138 = 0; iVar3 = DAT_00250898, pbVar12 = *(byte **)(iVar15 + DAT_002508b4),
        local_138 < (int)(uint)*pbVar12; local_138 = local_138 + 1) {
      iVar13 = local_138 * 4;
      iVar11 = *(int *)(*(int *)(this + DAT_00250898) + iVar13);
      if (iVar11 != DAT_0025089c) {
        *(int *)(*(int *)(this + DAT_00250898) + iVar13) = iVar11 - param_1;
        if (*(int *)((*pbVar12 - 1) * 4 + **(int **)(iVar15 + DAT_002508a0)) <
            *(int *)(*(int *)(this + iVar3) + iVar13)) {
          *(int *)(*(int *)(this + iVar3) + iVar13) = 0;
        }
        if (*(int *)(*(int *)(this + iVar3) + iVar13) + **(int **)(iVar15 + DAT_002508a4) < 0 !=
            SBORROW4(*(int *)(*(int *)(this + iVar3) + iVar13),-**(int **)(iVar15 + DAT_002508a4)))
        {
          __aeabi_idivmod(*(undefined4 *)(this + 0x6a8),*pbVar12);
          if ((local_138 == extraout_r1_01) &&
             (iVar7 = TutorialSystem::isTutorialCompleted
                                (*(TutorialSystem **)(this + DAT_00250868),'\"'), iVar7 != 0)) {
            this[DAT_002508a8] = (ZombieCafe)0x1;
            *(undefined4 *)(this + DAT_002508b0) = **(undefined4 **)(iVar15 + DAT_002508ac);
          }
          *(int *)(*(int *)(this + iVar3) + iVar13) = DAT_0025089c;
        }
        if ((*(int *)(*(int *)(this + iVar3) + iVar13) < 1) && (0 < iVar11)) {
          reopenEnemyCafe(this,local_138);
        }
      }
    }
    pbVar12 = *(byte **)(iVar15 + DAT_002508b8);
    for (iVar15 = 0; iVar15 < (int)(uint)*pbVar12; iVar15 = iVar15 + 1) {
      piVar9 = (int *)(*(int *)(this + 0x698) + iVar15 * 4);
      iVar3 = *piVar9;
      if (0 < iVar3) {
        *piVar9 = iVar3 - param_1;
      }
    }
    for (iVar15 = 0; iVar3 = DAT_00250a28, iVar15 < *(int *)(this + 0x6b4) + 1; iVar15 = iVar15 + 1)
    {
      iVar3 = *(int *)(iVar15 * 4 + *(int *)(this + 0x6b8));
      iVar11 = *(int *)(iVar3 + 4) - param_1;
      *(int *)(iVar3 + 4) = iVar11;
      if (iVar11 < 1) {
        pvVar8 = (void *)Vector<EarlyBirdSaleBuyTimer*>::removeElementAt
                                   ((Vector<EarlyBirdSaleBuyTimer*> *)(this + 0x6b0),iVar15);
        operator_delete(pvVar8);
        iVar15 = iVar15 + -1;
      }
    }
    if ((0 < *(int *)(this + DAT_00250a28)) &&
       (iVar15 = *(int *)(this + DAT_00250a28) - param_1, *(int *)(this + DAT_00250a28) = iVar15,
       iVar15 < 0)) {
      *(undefined4 *)(this + iVar3) = 0;
    }
    iVar15 = DAT_00250a2c;
    if ((0 < *(int *)(this + DAT_00250a2c)) &&
       (iVar3 = *(int *)(this + DAT_00250a2c) - param_1, *(int *)(this + DAT_00250a2c) = iVar3,
       iVar3 < 0)) {
      *(undefined4 *)(this + iVar15) = 0;
    }
    iVar15 = getEventRaid_attackPointTimer(this);
    bVar2 = SUB41(this,0);
    if (iVar15 < 1) {
      iVar15 = checkStaminaEventTime(this);
      if ((iVar15 != 0) && (iVar15 = getStaminaEventFlag1(this), iVar15 == 0)) {
        setStaminaEventFlag1(this,1);
      }
    }
    else {
      iVar15 = getEventRaid_attackPointTimer(this);
      if ((iVar15 <= DAT_00250a30) || (iVar15 = checkGlobalPlayTime(bVar2), iVar15 != 0)) {
        subEventRaid_attackPointTimer(this,param_1);
      }
    }
    iVar15 = getWeekRaid_attackPointTimer(this);
    if ((0 < iVar15) &&
       ((iVar15 = getWeekRaid_attackPointTimer(this), iVar15 <= DAT_00250a30 ||
        (iVar15 = checkGlobalPlayTime_WeekRaid(bVar2), iVar15 != 0)))) {
      subWeekRaid_attackPointTimer(this,param_1);
    }
    iVar15 = getEventRaid2_attackPointTimer(this);
    if (iVar15 < 1) {
      iVar15 = checkStaminaEventTime(this);
      if ((iVar15 != 0) && (iVar15 = getStaminaEventFlag2(this), iVar15 == 0)) {
        setStaminaEventFlag2(this,1);
      }
    }
    else {
      iVar15 = getEventRaid2_attackPointTimer(this);
      if ((iVar15 <= DAT_00250a30) || (iVar15 = checkGlobalPlayTime_EventRaid2(bVar2), iVar15 != 0))
      {
        subEventRaid2_attackPointTimer(this,param_1);
      }
    }
    iVar15 = getEventRaid3_attackPointTimer(this);
    if ((0 < iVar15) &&
       ((iVar15 = getEventRaid3_attackPointTimer(this), iVar15 <= DAT_00250a30 ||
        (iVar15 = checkGlobalPlayTime(bVar2), iVar15 != 0)))) {
      subEventRaid3_attackPointTimer(this,param_1);
    }
    iVar15 = getAmpouleRaid_reopenTimer(this);
    if ((0 < iVar15) &&
       ((iVar15 = getAmpouleRaid_reopenTimer(this), iVar15 <= DAT_00250a30 ||
        (iVar15 = checkGlobalPlayTime_AmpouleRaid(bVar2), iVar15 != 0)))) {
      subAmpouleRaid_reopenTimer(this,param_1);
    }
  }
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


