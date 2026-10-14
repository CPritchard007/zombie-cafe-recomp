/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118d38 GameStateCafe::onHealConfirmed */

/* GameStateCafe::onHealConfirmed(GameStateCafe*) */

void GameStateCafe::onHealConfirmed(GameStateCafe *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieCafe *pZVar5;
  undefined4 uVar6;
  MALTAHoover *pMVar7;
  SServer *pSVar8;
  CharacterInstance *this;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  char *__format;
  uint uVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  iVar16 = *(int *)(param_1 + 0x54);
  piVar14 = *(int **)(DAT_00118fb0 + 0x118d44);
  local_1c = *piVar14;
  iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar16 + 0x8c) + 0x40),0);
  if (iVar3 == 0) {
    fVar18 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(*(Character **)(iVar16 + 0x8c),fVar18);
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),1);
    iVar16 = DAT_00118fbc;
    iVar3 = DAT_00118fb8;
    uVar4 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_00118fb4));
    pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
    uVar9 = *(undefined4 *)(pZVar5 + 0x680);
    uVar10 = *(undefined4 *)(pZVar5 + DAT_00118fc0);
    uVar13 = *(undefined4 *)(pZVar5 + DAT_00118fc4);
    uVar6 = ZombieCafe::getToxin(pZVar5);
    iVar2 = DAT_00118fc8;
    uVar11 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_00118fc8);
    uVar19 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x54) + 0x8c))[0x10]);
    snprintf(acStack_9c,0x80,(char *)(iVar3 + 0x118dbc),(char *)(iVar16 + 0x118dbe),uVar4,uVar9,
             uVar10,uVar13,uVar6,uVar11,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00118fcc),DAT_00118fd0 + 0x118de2,
               acStack_9c);
    pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar7,(char *)(DAT_00118fd4 + 0x118dfe),(char *)(DAT_00118fd8 + 0x118e00),
                      (char *)(iVar16 + 0x118dbe));
    memset(acStack_11c,0,0x40);
    pSVar8 = (SServer *)MALTAHoover::GetInstance();
    iVar3 = MALTAHoover::getFBID(pSVar8,(char *)**(undefined4 **)(DAT_00118fdc + 0x118e1a));
    if (iVar3 == 0) {
      L_PrintLog((char *)(DAT_00118fe0 + 0x118e2c),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    __format = (char *)(DAT_00118fe4 + 0x118e46);
    uVar11 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + iVar2);
    uVar19 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x54) + 0x8c))[0x10]);
    snprintf(acStack_dc,0x40,__format,acStack_11c,uVar11,uVar9,(int)uVar19,
             (int)((ulonglong)uVar19 >> 0x20));
    L_PrintLog((char *)(DAT_00118fe8 + 0x118e68),(char *)(DAT_00118fec + 0x118e6a));
    pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar12 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
    uVar11 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
    uVar15 = *(uint *)(pZVar5 + DAT_00118fc4);
    uVar17 = *(uint *)(pZVar5 + DAT_00118fc0);
    iVar3 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_00118ff0]);
    MALTAHoover::send(pMVar7,(char *)(DAT_00118ff8 + 0x118ea8),uVar12,uVar11,uVar15,uVar17,iVar3,
                      acStack_dc,*(char **)(DAT_00118ff4 + 0x118e9e));
    iVar3 = *(int *)(param_1 + 0xc);
    if (*(char *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_00118ffc) == '\0') {
      fVar18 = (float)CapcomMath::random(2);
    }
    else {
      fVar18 = (float)CapcomMath::random(2);
    }
    ZombieCafe::playEffect(iVar3,fVar18);
    iVar3 = DAT_00119000;
    iVar16 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_00119000),'\x1d');
    if ((iVar16 != 0) &&
       (iVar16 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),' '), iVar16 == 0)
       ) {
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1e');
      TutorialSystem::setTutorialCompleted
                (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1f');
    }
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'\x1a',true);
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'7',true);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_00119004) = 1;
    this = *(CharacterInstance **)(param_1 + 0x54);
    bVar1 = *(byte *)(*(int *)(this + 0x8c) + 0x44);
    if (2 < bVar1) {
      if (bVar1 < 5) {
        CharacterInstance::stopTasks(this);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x44) = 1;
      }
      else if (bVar1 == 5) {
        if (*(StatusNote **)(this + 0x30) != (StatusNote *)0x0) {
          Cafe::removeStatusNote
                    (*(Cafe **)(*(int *)(param_1 + 0xc) + 0x7e8),*(StatusNote **)(this + 0x30));
          if (*(int **)(*(int *)(param_1 + 0x54) + 0x30) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 4))();
            *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x30) = 0;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x30) = 0;
        }
        CharacterInstance::stopTasks(*(CharacterInstance **)(param_1 + 0x54));
        TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar3),'=',true)
        ;
      }
    }
  }
  if (local_1c == *piVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


