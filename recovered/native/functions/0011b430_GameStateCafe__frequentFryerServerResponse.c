/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b430 GameStateCafe::frequentFryerServerResponse */

/* GameStateCafe::frequentFryerServerResponse(GameStateCafe*, unsigned long) */

void GameStateCafe::frequentFryerServerResponse(GameStateCafe *param_1,ulong param_2)

{
  CapcomDate *this;
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ZombieCafe *this_00;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  GameStateCafe *this_01;
  undefined4 *puVar9;
  FrequentFryerDialog *this_02;
  char *pcVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uStack_4;
  undefined4 *puVar13;
  
  iVar3 = DAT_0011b628;
  puVar9 = *(undefined4 **)(DAT_0011b624 + 0x11b43c);
  puVar12 = (uint *)(&stack0xffffffec + DAT_0011b628);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0011b628);
  *(ulong *)(&stack0x00000008 + DAT_0011b628) = param_2;
  uVar8 = *puVar9;
  pcVar10 = (char *)(DAT_0011b62c + 0x11b448);
  *(GameStateCafe **)(&stack0x0000000c + DAT_0011b628) = param_1;
  *(undefined4 *)(&stack0x000002a8 + DAT_0011b628) = uVar8;
  L_PrintLog(pcVar10,(char *)(DAT_0011b630 + 0x11b44a));
  iVar4 = CapcomApp::getInstance();
  iVar4 = *(int *)(iVar4 + 4);
  *(undefined4 **)(&stack0x00000010 + iVar3) = puVar9;
  this_01 = *(GameStateCafe **)(iVar4 + 8);
  if (this_01 == *(GameStateCafe **)(&stack0x0000000c + iVar3)) {
    this_01[0x1d4] = (GameStateCafe)0x0;
    this = (CapcomDate *)(&stack0x00000020 + iVar3);
    CapcomDate::now((CapcomDate *)(&stack0x00000018 + iVar3));
    CapcomDate::from1970Offset(this,*(ulong *)(&stack0x00000008 + iVar3));
    memset(&stack0x000000a8 + iVar3,0,0x100);
    sprintf(&stack0x000000a8 + iVar3,(char *)(DAT_0011b638 + 0x11b498),
            *(undefined4 *)(&stack0x00000008 + iVar3));
    L_PrintLog(pcVar10,&stack0x000000a8 + iVar3);
    memset(&stack0x000000a8 + iVar3,0,0x100);
    sVar2 = *(short *)this;
    bVar1 = (&stack0x00000022)[iVar3];
    *puVar12 = (uint)(byte)(&stack0x00000023)[iVar3];
    sprintf(&stack0x000000a8 + iVar3,(char *)(DAT_0011b63c + 0x11b4bc),(int)sVar2,(uint)bVar1);
    L_PrintLog(pcVar10,&stack0x000000a8 + iVar3);
    memcpy((void *)(*(int *)(this_01 + 0xc) + DAT_0011b640),&stack0x00000018 + iVar3,7);
    *(undefined4 *)(&stack0x00000008 + iVar3) = *(undefined4 *)(this_01 + 0xc);
    uVar8 = CapcomDate::secondsBetween
                      (*(undefined4 *)(&stack0x00000018 + iVar3),
                       *(undefined4 *)(&stack0x0000001c + iVar3),
                       *(undefined4 *)(&stack0x00000020 + iVar3),
                       *(undefined4 *)(&stack0x00000024 + iVar3));
    *(undefined4 *)(*(int *)(&stack0x00000008 + iVar3) + 0x8b0) = uVar8;
    iVar5 = ZombieCafe::checkGetLottery();
    if (((iVar5 != 0) &&
        (iVar5 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar4 + DAT_0011b644),'Q')
        , iVar5 != 0)) && (*(char *)(iVar4 + 0x950) == '\0')) {
      iVar4 = CapcomDate::daysBetween
                        (*(undefined4 *)(*(int *)(this_01 + 0xc) + 0x890),
                         *(undefined4 *)(*(int *)(this_01 + 0xc) + 0x894),
                         *(undefined4 *)(&stack0x00000018 + iVar3),
                         *(undefined4 *)(&stack0x0000001c + iVar3));
      if (iVar4 == 0) goto LAB_0011b60e;
      uVar8 = ZombieCafe::frequentFryerLevelGet(*(ZombieCafe **)(this_01 + 0xc));
      sprintf(&stack0x000001a8 + iVar3,(char *)(DAT_0011b648 + 0x11b53e),uVar8);
      L_PrintLog((char *)(DAT_0011b64c + 0x11b548),&stack0x000001a8 + iVar3);
      memcpy((void *)(*(int *)(this_01 + 0xc) + 0x890),this,7);
      ZombieCafe::frequentFryerLevelAdd(*(ZombieCafe **)(this_01 + 0xc));
      this_02 = *(FrequentFryerDialog **)(this_01 + 0x90);
      iVar4 = ZombieCafe::frequentFryerLevelGet(*(ZombieCafe **)(this_01 + 0xc));
      FrequentFryerDialog::show(this_02,iVar4);
      sendCookingBonusLog(this_01);
      CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this_01 + 0xc) + 0x840));
      ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this_01 + 0xc));
      CRAMHoover::addEventIntProperty
                (*(char **)(*(int *)(this_01 + 0xc) + 0x840),DAT_0011b654 + 0x11b59c);
      CRAMHoover::endTrackEvent();
      uVar8 = CCServer::GetMyUserID(*(void **)(*(int *)(this_01 + 0xc) + DAT_0011b65c));
      this_00 = *(ZombieCafe **)(this_01 + 0xc);
      uVar11 = *(undefined4 *)(this_00 + 0x680);
      *(undefined4 *)(&stack0x00000008 + iVar3) = *(undefined4 *)(this_00 + DAT_0011b660);
      *(undefined4 *)(&stack0x0000000c + iVar3) = *(undefined4 *)(this_00 + DAT_0011b664);
      uVar6 = ZombieCafe::getToxin(this_00);
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar11;
      *(undefined4 *)(&stack0xfffffff4 + iVar3) = *(undefined4 *)(&stack0x00000008 + iVar3);
      uVar11 = *(undefined4 *)(&stack0x0000000c + iVar3);
      *(undefined4 *)((int)&uStack_4 + iVar3) = uVar6;
      *puVar13 = uVar8;
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar11;
      snprintf(&stack0x00000028 + iVar3,0x80,(char *)(DAT_0011b668 + 0x11b5dc),
               DAT_0011b66c + 0x11b5de);
      CCMarketing_RecordAnalyticsEvent
                (*(undefined4 *)(*(int *)(this_01 + 0xc) + DAT_0011b670),DAT_0011b674 + 0x11b5f6,
                 &stack0x00000028 + iVar3);
      L_PrintLog(pcVar10,&stack0x00000028 + iVar3);
    }
    pcVar10 = (char *)(DAT_0011b678 + 0x11b60a);
    pcVar7 = (char *)(DAT_0011b67c + 0x11b60c);
  }
  else {
    pcVar7 = (char *)(DAT_0011b634 + 0x11b46a);
  }
  L_PrintLog(pcVar10,pcVar7);
LAB_0011b60e:
  if (*(int *)(&stack0x000002a8 + iVar3) == **(int **)(&stack0x00000010 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


