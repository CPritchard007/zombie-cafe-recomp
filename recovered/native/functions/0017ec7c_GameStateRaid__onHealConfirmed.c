/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017ec7c GameStateRaid::onHealConfirmed */

/* GameStateRaid::onHealConfirmed(GameStateRaid*) */

void GameStateRaid::onHealConfirmed(GameStateRaid *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  undefined4 uVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  undefined8 uVar18;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  iVar16 = *(int *)(param_1 + 0x114);
  piVar13 = *(int **)(DAT_0017eea0 + 0x17ec8a);
  local_1c = *piVar13;
  iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar16 + 0x8c) + 0x40),0);
  if (iVar1 == 0) {
    fVar17 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(*(Character **)(iVar16 + 0x8c),fVar17);
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),1);
    iVar1 = DAT_0017eea8;
    uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_0017eea4));
    pZVar3 = *(ZombieCafe **)(param_1 + 0xc);
    uVar9 = *(undefined4 *)(pZVar3 + 0x680);
    uVar12 = *(undefined4 *)(pZVar3 + DAT_0017eeac);
    uVar7 = *(undefined4 *)(pZVar3 + DAT_0017eeb0);
    uVar4 = ZombieCafe::getToxin(pZVar3);
    uVar10 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x114) + 0x8c) + DAT_0017eeb4);
    pcVar14 = (char *)(DAT_0017eeb8 + 0x17ed0a);
    uVar18 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x114) + 0x8c))[0x10]);
    snprintf(acStack_9c,0x80,pcVar14,(char *)(iVar1 + 0x17ed06),uVar2,uVar9,uVar12,uVar7,uVar4,
             uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),1);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0017eebc),DAT_0017eec0 + 0x17ed30,
               acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_0017eec4 + 0x17ed4c),(char *)(DAT_0017eec8 + 0x17ed4e),
                      (char *)(iVar1 + 0x17ed06));
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar1 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(DAT_0017eecc + 0x17ed68));
    if (iVar1 == 0) {
      L_PrintLog((char *)(DAT_0017eed0 + 0x17ed7a),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    pcVar14 = (char *)(DAT_0017eed4 + 0x17ed9a);
    uVar10 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x114) + 0x8c) + DAT_0017eeb4);
    uVar18 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x114) + 0x8c))[0x10]);
    snprintf(acStack_dc,0x40,pcVar14,acStack_11c,uVar10,uVar9,(int)uVar18,
             (int)((ulonglong)uVar18 >> 0x20));
    L_PrintLog((char *)(DAT_0017eed8 + 0x17edbc),(char *)(DAT_0017eedc + 0x17edbe));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar11 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
    uVar10 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    pZVar3 = *(ZombieCafe **)(param_1 + 0xc);
    uVar8 = *(uint *)(pZVar3 + DAT_0017eeac);
    uVar15 = *(uint *)(pZVar3 + DAT_0017eeb0);
    iVar1 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_0017eee0]);
    MALTAHoover::send(pMVar5,(char *)(DAT_0017eee8 + 0x17ee04),uVar11,uVar10,uVar15,uVar8,iVar1,
                      acStack_dc,*(char **)(DAT_0017eee4 + 0x17edf4));
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(char *)(**(int **)(*(int *)(param_1 + 0x114) + 0x8c) + DAT_0017eeec) == '\0') {
      fVar17 = (float)CapcomMath::random(2);
    }
    else {
      fVar17 = (float)CapcomMath::random(2);
    }
    ZombieCafe::playEffect(iVar1,fVar17);
    iVar1 = DAT_0017eef0;
    iVar16 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0017eef0),'\x1d');
    if ((iVar16 != 0) &&
       (iVar16 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),' '), iVar16 == 0)
       ) {
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),'\x1e');
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),'\x1f');
    }
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),'\x1a',true);
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),'7',true);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0017eef4) = 1;
  }
  if (local_1c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


