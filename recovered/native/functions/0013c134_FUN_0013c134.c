/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c134 FUN_0013c134 */

void FUN_0013c134(int param_1)

{
  undefined4 uVar1;
  ZombieCafe *pZVar2;
  undefined4 uVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  uint uVar17;
  CharacterInstance *this;
  float fVar18;
  undefined8 uVar19;
  char acStack_15c [64];
  char acStack_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  piVar15 = *(int **)(DAT_0013c34c + 0x13c140);
  this = *(CharacterInstance **)(param_1 + 0x15c);
  local_1c = *piVar15;
  fVar18 = (float)Character::getMaxEnergy();
  CharacterInstance::setCurrentEnergy(this,fVar18);
  ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),1);
  iVar6 = DAT_0013c354;
  uVar1 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_0013c350));
  pZVar2 = *(ZombieCafe **)(param_1 + 0xc);
  uVar8 = *(undefined4 *)(pZVar2 + 0x680);
  uVar10 = *(undefined4 *)(pZVar2 + DAT_0013c358);
  uVar13 = *(undefined4 *)(pZVar2 + DAT_0013c35c);
  uVar3 = ZombieCafe::getToxin(pZVar2);
  piVar14 = *(int **)(*(int *)(param_1 + 0x15c) + 0x8c);
  uVar11 = (uint)*(ushort *)(*piVar14 + DAT_0013c360);
  pcVar16 = (char *)(DAT_0013c364 + 0x13c1b2);
  uVar19 = __extendsfdf2(piVar14[0x10]);
  snprintf(acStack_11c,0x80,(char *)(iVar6 + 0x13c1ae),pcVar16,uVar1,uVar8,uVar10,uVar13,uVar3,
           uVar11,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20),2);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0013c368),DAT_0013c36c + 0x13c1d8,
             acStack_11c);
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar4,(char *)(DAT_0013c370 + 0x13c1f4),(char *)(DAT_0013c374 + 0x13c1f6),
                    pcVar16);
  memset(acStack_15c,0,0x40);
  pSVar5 = (SServer *)MALTAHoover::GetInstance();
  iVar6 = MALTAHoover::getFBID(pSVar5,(char *)**(undefined4 **)(DAT_0013c378 + 0x13c210));
  if (iVar6 == 0) {
    L_PrintLog((char *)(DAT_0013c37c + 0x13c224),acStack_15c);
  }
  memset(acStack_9c,0,0x80);
  piVar14 = *(int **)(*(int *)(param_1 + 0x15c) + 0x8c);
  pcVar16 = (char *)(DAT_0013c380 + 0x13c244);
  uVar11 = (uint)*(ushort *)(*piVar14 + DAT_0013c360);
  uVar19 = __extendsfdf2(piVar14[0x10]);
  snprintf(acStack_9c,0x80,pcVar16,acStack_15c,uVar11,uVar8,(int)uVar19,
           (int)((ulonglong)uVar19 >> 0x20));
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar12 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
  uVar11 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  pZVar2 = *(ZombieCafe **)(param_1 + 0xc);
  uVar9 = *(uint *)(pZVar2 + DAT_0013c358);
  uVar17 = *(uint *)(pZVar2 + DAT_0013c35c);
  iVar6 = ZombieCafe::calUserRankId(pZVar2,(uint)(byte)pZVar2[DAT_0013c384]);
  MALTAHoover::send(pMVar4,(char *)(DAT_0013c38c + 0x13c296),uVar12,uVar11,uVar17,uVar9,iVar6,
                    acStack_9c,*(char **)(DAT_0013c388 + 0x13c292));
  L_PrintLog((char *)(DAT_0013c390 + 0x13c2b0),(char *)(DAT_0013c394 + 0x13c2b2));
  iVar6 = *(int *)(param_1 + 0xc);
  if (*(char *)(**(int **)(*(int *)(param_1 + 0x15c) + 0x8c) + DAT_0013c398) == '\0') {
    fVar18 = (float)CapcomMath::random(2);
  }
  else {
    fVar18 = (float)CapcomMath::random(2);
  }
  ZombieCafe::playEffect(iVar6,fVar18);
  iVar6 = DAT_0013c39c;
  iVar7 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0013c39c),'\x1d');
  if ((iVar7 != 0) &&
     (iVar7 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar6),' '), iVar7 == 0)) {
    TutorialSystem::setTutorialCompleted
              (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar6),'\x1e');
    TutorialSystem::setTutorialCompleted
              (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar6),'\x1f');
  }
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar6),'\x1a',true);
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar6),'7',true);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0013c3a0) = 1;
  if (local_1c != *piVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


