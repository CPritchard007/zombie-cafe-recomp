/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011c024 GameStateCafe::onReviveConfirmed */

/* GameStateCafe::onReviveConfirmed(GameStateCafe*) */

void GameStateCafe::onReviveConfirmed(GameStateCafe *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  undefined4 uVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  Character *this;
  GameStateCafe *pGVar15;
  char *__format;
  uint uVar16;
  int iVar17;
  float fVar18;
  undefined8 uVar19;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  iVar17 = DAT_0011c25c + 0x11c030;
  piVar13 = *(int **)(iVar17 + DAT_0011c260);
  local_1c = *piVar13;
  if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x50)) {
    CRAMHoover::beginTrackEvent(*(char **)(*(int *)(param_1 + 0xc) + 0x840));
    ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(param_1 + 0xc));
    iVar7 = DAT_0011c268;
    CRAMHoover::endTrackEvent();
    Character::getMaxEnergy();
    this = *(Character **)(*(int *)(param_1 + 0x54) + 0x8c);
    __fixsfsi();
    fVar18 = (float)__floatsisf();
    Character::setCurrentEnergy(this,fVar18);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x50) = 0;
    pGVar15 = param_1 + 0xac;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x44) = 0;
    setRemainCharacter(param_1,*(CharacterInstance **)(param_1 + 0x54),true);
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),1);
    CharacterCommandBar::removeButton(*(int *)pGVar15);
    CharacterCommandBar::addHealButton
              (*(CharacterCommandBar **)pGVar15,
               *(_func_void_void_ptr_ScreenElement_ptr **)(iVar17 + DAT_0011c26c),param_1);
    CharacterCommandBar::addWorkButton
              (*(CharacterCommandBar **)pGVar15,
               *(_func_void_void_ptr_ScreenElement_ptr **)(iVar17 + DAT_0011c270),param_1);
    iVar1 = DAT_0011c278;
    uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_0011c274));
    pZVar3 = *(ZombieCafe **)(param_1 + 0xc);
    uVar10 = *(undefined4 *)(pZVar3 + 0x680);
    uVar14 = *(undefined4 *)(pZVar3 + DAT_0011c27c);
    uVar8 = *(undefined4 *)(pZVar3 + DAT_0011c280);
    uVar4 = ZombieCafe::getToxin(pZVar3);
    uVar11 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_0011c284);
    uVar19 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x54) + 0x8c))[0x10]);
    snprintf(acStack_9c,0x80,(char *)(iVar7 + 0x11c06c),(char *)(iVar1 + 0x11c11a),uVar2,uVar10,
             uVar14,uVar8,uVar4,uVar11,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0011c288),DAT_0011c28c + 0x11c142,
               acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_0011c290 + 0x11c15e),(char *)(DAT_0011c294 + 0x11c160),
                      (char *)(iVar1 + 0x11c11a));
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar7 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(iVar17 + DAT_0011c298));
    if (iVar7 == 0) {
      L_PrintLog((char *)(DAT_0011c29c + 0x11c18a),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    __format = (char *)(DAT_0011c2a0 + 0x11c1a6);
    uVar11 = (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_0011c284);
    uVar19 = __extendsfdf2((*(int **)(*(int *)(param_1 + 0x54) + 0x8c))[0x10]);
    snprintf(acStack_dc,0x40,__format,acStack_11c,uVar11,uVar10,(int)uVar19,
             (int)((ulonglong)uVar19 >> 0x20));
    L_PrintLog((char *)(DAT_0011c2a4 + 0x11c1c8),(char *)(DAT_0011c2a8 + 0x11c1ca));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar12 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
    uVar11 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    pZVar3 = *(ZombieCafe **)(param_1 + 0xc);
    uVar9 = *(uint *)(pZVar3 + DAT_0011c27c);
    uVar16 = *(uint *)(pZVar3 + DAT_0011c280);
    iVar7 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_0011c2ac]);
    MALTAHoover::send(pMVar5,(char *)(DAT_0011c2b4 + 0x11c212),uVar12,uVar11,uVar16,uVar9,iVar7,
                      acStack_dc,*(char **)(iVar17 + DAT_0011c2b0));
    iVar17 = *(int *)(param_1 + 0xc);
    if (*(char *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_0011c2b8) == '\0') {
      fVar18 = (float)CapcomMath::random(2);
    }
    else {
      fVar18 = (float)CapcomMath::random(2);
    }
    ZombieCafe::playEffect(iVar17,fVar18);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0011c2bc) = 1;
  }
  if (local_1c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


