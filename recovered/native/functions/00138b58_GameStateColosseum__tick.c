/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00138b58 GameStateColosseum::tick */

/* GameStateColosseum::tick(long) */

void __thiscall GameStateColosseum::tick(GameStateColosseum *this,long param_1)

{
  short sVar1;
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar2;
  CharacterCommandBar *this_01;
  int *piVar3;
  ColosseumRewardScreen *pCVar4;
  ScreenElement *pSVar5;
  String *this_02;
  GameStateCafe *this_03;
  GameStateSurvivalMenu *this_04;
  undefined1 *puVar6;
  undefined4 *puVar7;
  FollowTask *this_05;
  int iVar8;
  AttackTask *this_06;
  int iVar9;
  undefined4 uVar10;
  CharacterData *this_07;
  int iVar11;
  GameStateColosseum GVar12;
  GameStateColosseum *pGVar13;
  uint uVar14;
  code *pcVar15;
  char *pcVar16;
  int iVar17;
  CharacterInstance *pCVar18;
  Character *this_08;
  ConfirmDialog *pCVar19;
  CapcomGame *pCVar20;
  CafeObject *pCVar21;
  int iVar22;
  float extraout_s0;
  float fVar23;
  float extraout_s0_00;
  float extraout_s0_01;
  int iStack_120;
  int iStack_11c;
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  Vector<int> aVStack_a8 [4];
  int iStack_a4;
  int iStack_a0;
  char acStack_9c [128];
  undefined4 local_1c;
  
  iVar9 = DAT_00138ee4 + 0x138b68;
  local_1c = **(undefined4 **)(iVar9 + DAT_00138ee8);
  ZombieCafe::tickPlaySecAnalysis_survival(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar20 = *(CapcomGame **)(this + 0xc);
  if (pCVar20[DAT_00138eec] != (CapcomGame)0x0) {
    FUN_00139672();
  }
  if (pCVar20[DAT_00138ef0] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
    CapcomGame::setNextState(pCVar20,(GameState *)pGVar2);
    this[0x11] = (GameStateColosseum)0x1;
    FUN_00139672();
  }
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  pGVar13 = this + 200;
  iVar11 = *(int *)pGVar13;
  *(int *)pGVar13 = iVar11 - param_1;
  if ((iVar11 - param_1 < 1) && (this[0xd0] == (GameStateColosseum)0x0)) {
    *(undefined4 *)pGVar13 = **(undefined4 **)(iVar9 + DAT_00138ef4);
  }
  if (*(int *)(this + 0x13c) == 0) {
    this_01 = *(CharacterCommandBar **)(this + 0x9c);
    if ((byte)this_01[0xb8] - 1 < 2) {
      CharacterCommandBar::close(this_01);
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0x9c) + 0xb8) - 1) {
    Cafe::select(*(Cafe **)(this + 0x70),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x13c) = 0;
  }
  (**(code **)(**(int **)(this + 0x78) + 8))(*(int **)(this + 0x78),param_1);
  if (*(char *)(*(int *)(this + 0x84) + 0x14) != '\0') {
    FUN_00139672();
  }
  if (*(char *)(*(int *)(this + 0x8c) + 0x14) != '\0') {
    FUN_00139672();
  }
  if (*(char *)(*(int *)(this + 0x90) + 0x14) != '\0') {
    FUN_00139672();
  }
  uVar14 = (uint)*(byte *)(*(int *)(this + 0x88) + 0x14);
  if (uVar14 != 0) {
    FUN_00139672();
  }
  FUN_00139612();
  uVar14 = (uint)*(byte *)(uVar14 + 0x14);
  if (uVar14 != 0) {
    FUN_00139672();
  }
  FUN_0013961c();
  if ((*(char *)(uVar14 + 0x14) != '\0') && (*(int *)(this + 0x148) == 0)) {
    FUN_00139672();
  }
  tickColorShift(this,param_1);
  tickDefault(this,param_1);
  pGVar13 = this + 0x2c;
  Cafe::tick(*(Cafe **)(this + 0x70),param_1);
  GVar12 = *pGVar13;
  if (GVar12 == (GameStateColosseum)0x0) {
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    for (iVar11 = 0; iVar11 < *(int *)(this + 0x118) + 1; iVar11 = iVar11 + 1) {
      pCVar18 = *(CharacterInstance **)(iVar11 * 4 + *(int *)(this + 0x11c));
      iVar17 = getLaunchNumber(this,iVar11);
      CharacterInstance::setColosseumSelect(pCVar18,iVar17 != -1);
    }
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
    piVar3 = *(int **)(this + 0xc0);
    uVar10 = 1;
    pcVar15 = *(code **)(*piVar3 + 0x20);
  }
  else if (GVar12 == (GameStateColosseum)0x1) {
    *pGVar13 = (GameStateColosseum)0x2;
    setPlayerZombieCafePos();
    setSelectMarkOff(this);
    CharacterCommandBar::removeButton(*(int *)(this + 0x9c));
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
    pGVar13 = this + 0xc0;
LAB_0013908a:
    piVar3 = *(int **)pGVar13;
    uVar10 = 0;
    pcVar15 = *(code **)(*piVar3 + 0x20);
  }
  else {
    if (GVar12 == (GameStateColosseum)0x2) {
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + param_1;
      updateTimerText(this);
      setZombieAttackStart(this);
      addEnemyZombie(this,param_1);
      iVar11 = playerLoseCheck();
      if (iVar11 == 0) goto LAB_001390fc;
      iVar11 = 0;
      iVar17 = 0;
      do {
        iVar22 = iVar11 + 0x140;
        iVar11 = iVar11 + 1;
        iVar17 = iVar17 + (uint)(this[iVar22] != (GameStateColosseum)0xff);
      } while (iVar11 != 6);
      iVar11 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
      if (iVar11 < iVar17) {
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,extraout_s0,false);
        this[0x2c] = (GameStateColosseum)0x6;
        *(undefined4 *)(this + 0x50) = 0;
        HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
        goto LAB_001390fc;
      }
      pCVar19 = *(ConfirmDialog **)(this + 0x8c);
      String::String(aSStack_110,(char *)(DAT_00138ef8 + 0x138d98));
      String::valueOf((int)aSStack_108);
      String::operator+(aSStack_100,aSStack_110,aSStack_108);
      String::String(aSStack_f8,(char *)(DAT_00138efc + 0x138db8));
      String::operator+(aSStack_f0,aSStack_100,aSStack_f8);
      Vector<String>::elementAt((int)aSStack_e8);
      Vector<String>::elementAt((int)aSStack_e0);
      ConfirmDialog::show(pCVar19,aSStack_f0,aSStack_e8,aSStack_e0,
                          *(undefined4 *)(iVar9 + DAT_00138f08),
                          *(undefined4 *)(iVar9 + DAT_00138f0c),this,0,0);
      String::~String(aSStack_e0);
      String::~String(aSStack_e8);
      String::~String(aSStack_f0);
      String::~String(aSStack_f8);
      String::~String(aSStack_100);
      String::~String(aSStack_108);
      this_02 = aSStack_110;
LAB_00139018:
      String::~String(this_02);
      goto LAB_001390fc;
    }
    if (GVar12 == (GameStateColosseum)0x4) {
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + param_1;
      tickWinDemo((long)this);
      goto LAB_001390fc;
    }
    if (GVar12 == (GameStateColosseum)0x6) {
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + param_1;
      tickLoseDemo((long)this);
      goto LAB_001390fc;
    }
    if (GVar12 == (GameStateColosseum)0x5) {
      *pGVar13 = (GameStateColosseum)0xb;
      pCVar4 = (ColosseumRewardScreen *)operator_new(0xc0);
      ColosseumRewardScreen::ColosseumRewardScreen
                (pCVar4,*(int *)(this + 0x58),*(long *)(this + 0x4c));
      *(ColosseumRewardScreen **)(this + 0x14) = pCVar4;
      (**(code **)(*(int *)pCVar4 + 0x1c))(pCVar4,0x12);
      iVar11 = *(int *)(*(int *)(this + 0xc) + 0x10);
      (**(code **)(**(int **)(this + 0x14) + 0x14))
                (*(int **)(this + 0x14),(iVar11 >> 0x10) - (iVar11 >> 0x1f) >> 1,
                 (int)(short)iVar11 / 2);
      pSVar5 = *(ScreenElement **)(this + 0x14);
      pcVar16 = *(char **)(iVar9 + DAT_00138f10);
    }
    else {
      if (GVar12 != (GameStateColosseum)0x7) {
        if (GVar12 == (GameStateColosseum)0x8) {
          if (*(int *)(this + 0x148) != 1) {
            if (*(int *)(this + 0x148) != 2) {
              drawConnectWindow(this,param_1);
              goto LAB_001390fc;
            }
            pCVar19 = *(ConfirmDialog **)(this + 0x8c);
            if ((pCVar19 == (ConfirmDialog *)0x0) || (*(int *)(this + 0x90) == 0))
            goto LAB_001390fc;
            String::String(aSStack_d8,(char *)(DAT_00139294 + 0x138fd2));
            String::String(aSStack_d0,(char *)(DAT_00139298 + 0x138fdc));
            String::String(aSStack_c8,(char *)(DAT_0013929c + 0x138fe6));
            ConfirmDialog::show(pCVar19,aSStack_d8,aSStack_d0,aSStack_c8,
                                *(undefined4 *)(iVar9 + DAT_001392a0),
                                *(undefined4 *)(iVar9 + DAT_001392a4),this,0,0);
            String::~String(aSStack_c8);
            String::~String(aSStack_d0);
            this_02 = aSStack_d8;
            goto LAB_00139018;
          }
          GVar12 = (GameStateColosseum)0xc;
        }
        else {
          if (GVar12 != (GameStateColosseum)0x9) {
            if (GVar12 != (GameStateColosseum)0xa) {
              if (GVar12 == (GameStateColosseum)0xb) {
                if ((*(ColosseumRewardScreen **)(this + 0x14) == (ColosseumRewardScreen *)0x0) ||
                   (iVar11 = ColosseumRewardScreen::isActive
                                       (*(ColosseumRewardScreen **)(this + 0x14)), iVar11 != 0))
                goto LAB_001390fc;
                pCVar20 = *(CapcomGame **)(this + 0xc);
                this_03 = (GameStateCafe *)operator_new(0x200);
                GameStateCafe::GameStateCafe(this_03);
                pGVar2 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_03);
              }
              else {
                if (((GVar12 != (GameStateColosseum)0xc) ||
                    (*(ColosseumRewardScreen **)(this + 0x14) == (ColosseumRewardScreen *)0x0)) ||
                   (iVar11 = ColosseumRewardScreen::isActive
                                       (*(ColosseumRewardScreen **)(this + 0x14)), iVar11 != 0))
                goto LAB_001390fc;
                pCVar20 = *(CapcomGame **)(this + 0xc);
                this_04 = (GameStateSurvivalMenu *)operator_new(0xc4);
                GameStateSurvivalMenu::GameStateSurvivalMenu(this_04);
                pGVar2 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_04);
              }
              CapcomGame::setNextState(pCVar20,(GameState *)pGVar2);
              goto LAB_001390fc;
            }
            this[0x2c] = (GameStateColosseum)0xc;
            (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
            (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
            pGVar13 = this + 0xbc;
            goto LAB_0013908a;
          }
          (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
          (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
          (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
          javaIsConnected();
          sendResult(this);
          GVar12 = (GameStateColosseum)0x8;
        }
        *pGVar13 = GVar12;
        goto LAB_001390fc;
      }
      *(undefined4 *)(this + 0x14c) = 0;
      sendResult(this);
      memset(acStack_9c,0,0x80);
      snprintf(acStack_9c,0x80,(char *)(DAT_00139280 + 0x138f3c),*(undefined4 *)(this + 0x58),
               *(undefined4 *)(this + 0x4c));
      sendMalta(this,(char *)(DAT_00139284 + 0x138f4c),acStack_9c);
      *(undefined4 *)(*(int *)(this + 0xc) + DAT_0013928c) = DAT_00139288;
      *pGVar13 = (GameStateColosseum)0x8;
      pCVar4 = (ColosseumRewardScreen *)operator_new(0xc0);
      ColosseumRewardScreen::ColosseumRewardScreen
                (pCVar4,*(int *)(this + 0x58),*(long *)(this + 0x4c));
      *(ColosseumRewardScreen **)(this + 0x14) = pCVar4;
      (**(code **)(*(int *)pCVar4 + 0x1c))(pCVar4,0x12);
      iVar11 = *(int *)(*(int *)(this + 0xc) + 0x10);
      (**(code **)(**(int **)(this + 0x14) + 0x14))
                (*(int **)(this + 0x14),(iVar11 >> 0x10) - (iVar11 >> 0x1f) >> 1,
                 (int)(short)iVar11 / 2);
      pSVar5 = *(ScreenElement **)(this + 0x14);
      pcVar16 = *(char **)(iVar9 + DAT_00139290);
    }
    ScreenElement::setOrder(pSVar5,(int)*pcVar16);
    piVar3 = *(int **)(this + 0x78);
    uVar10 = *(undefined4 *)(this + 0x14);
    pcVar15 = *(code **)(*piVar3 + 0x2c);
  }
  (*pcVar15)(piVar3,uVar10);
LAB_001390fc:
  fVar23 = (float)updateKillCountScale(this);
  if ((this[0xd1] != (GameStateColosseum)0x0) && (this[0xd5] == (GameStateColosseum)0x0)) {
    this[0xd5] = (GameStateColosseum)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,fVar23,false);
    this[0x2c] = (GameStateColosseum)0x6;
    *(undefined4 *)(this + 0x50) = 0;
    HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
  }
  iStack_120 = 0;
  do {
    if (*(int *)(this + 0x118) + 1 <= iStack_120) {
      fVar23 = (float)__floatsisf(param_1);
      tickStaffAI(this,fVar23);
      fVar23 = (float)Vector<int>::Vector(aVStack_a8);
      for (iVar11 = 0; iVar11 < *(int *)(this + 0x124) + 1; iVar11 = iVar11 + 1) {
        iVar17 = *(int *)(*(int *)(this + 0x128) + iVar11 * 4);
        if ((*(char *)(iVar17 + 0x34) == '\x06') &&
           (iVar17 = (**(code **)(**(int **)(iVar17 + 0x90) + 0x1c))(), iVar17 != 0)) {
          fVar23 = (float)Vector<int>::addElement(aVStack_a8,iVar11);
        }
        else {
          piVar3 = *(int **)(*(int *)(this + 0x128) + iVar11 * 4);
          fVar23 = (float)(**(code **)(*piVar3 + 0x1c))(piVar3,param_1);
        }
      }
      iStack_120 = iStack_a4 << 2;
      for (iVar11 = iStack_a4; -1 < iVar11; iVar11 = iVar11 + -1) {
        pCVar21 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(this + 0x120),
                             *(int *)(iStack_a0 + iStack_120));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x70) + 0x20),pCVar21);
        this_08 = *(Character **)(pCVar21 + 0x8c);
        this_07 = *(CharacterData **)this_08;
        *(undefined4 *)this_08 = 0;
        *(undefined4 *)(pCVar21 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar21 + 4))(pCVar21);
        Character::~Character(this_08);
        operator_delete(this_08);
        fVar23 = extraout_s0_00;
        if (this_07 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_07);
          operator_delete(this_07);
          fVar23 = extraout_s0_01;
        }
        iStack_120 = iStack_120 + -4;
      }
      if (this[0xd2] == (GameStateColosseum)0x0) {
        this[0xd2] = (GameStateColosseum)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,7,fVar23,false);
      }
      if (*(char *)(*(int *)(this + 0xc) + DAT_0013963c) != '\0') {
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_0013963c) = 0;
        pCVar19 = *(ConfirmDialog **)(this + 0x8c);
        String::String(aSStack_b0,(char *)(DAT_00139640 + 0x139522));
        Vector<String>::elementAt((int)aSStack_c0);
        Vector<String>::elementAt((int)aSStack_b8);
        ConfirmDialog::show(pCVar19,aSStack_b0,aSStack_c0,aSStack_b8,
                            *(undefined4 *)(iVar9 + DAT_0013964c),this);
        String::~String(aSStack_b8);
        String::~String(aSStack_c0);
        String::~String(aSStack_b0);
      }
      Vector<int>::~Vector(aVStack_a8);
      FUN_00139672();
      return;
    }
    pCVar18 = *(CharacterInstance **)(iStack_120 * 4 + *(int *)(this + 0x11c));
    sVar1 = *(short *)(pCVar18 + 0x2c);
    piVar3 = *(int **)(iVar9 + DAT_001392a8);
    iVar11 = *piVar3;
    uVar14 = __divsi3((int)sVar1,iVar11);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar14 & 0xffff | ((int)sVar1 - uVar14 * iVar11) * 0x10000) >> 0x10,
               (int)(short)uVar14);
    iVar11 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    pCVar21 = *(CafeObject **)(pCVar18 + 0x88);
    if (iVar11 == 0) {
      this[0xd4] = (GameStateColosseum)0x0;
      if (pCVar21 == (CafeObject *)0x0) goto LAB_00139650;
      iVar11 = Cafe::isInside(*(Cafe **)(this + 0x70),(int)*(short *)(pCVar21 + 0x2c));
      if (iVar11 == 0) {
        *(undefined4 *)(pCVar18 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar18);
      }
      iVar11 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
      if ((iVar11 == 3) &&
         (iVar11 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0), iVar11 != 0))
      {
        *(undefined4 *)(pCVar18 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar18 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar18 == *(CharacterInstance **)(this + 0x13c)) {
        *(undefined4 *)(this + 0x13c) = 0;
        Cafe::select(*(Cafe **)(this + 0x70),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar18 + 0x88) = 0;
LAB_00139650:
      pCVar21 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar18 + 0x7c) == 0) {
      iVar17 = *(int *)(pCVar18 + 0x8c);
      iVar11 = __aeabi_fcmple(*(undefined4 *)(iVar17 + 0x40),0);
      if ((iVar11 == 0) && (this[0xd1] == (GameStateColosseum)0x0)) {
        if (pCVar21 == (CafeObject *)0x0) {
          if (*(char *)(iVar17 + 0x44) == '\x04') {
            iVar11 = Cafe::isInside(*(Cafe **)(this + 0x70),(int)*(short *)(pCVar18 + 0x2c));
            if (iVar11 == 0) {
              iVar17 = **(int **)(iVar9 + iRam00139630);
              iVar11 = **(int **)(iVar9 + DAT_00139634);
              uVar14 = **(int **)(iVar9 + DAT_00139638) + 1;
              CharacterInstance::groan(pCVar18);
              iVar11 = Cafe::diamondToStaggeredCoords
                                 ((int)(((iVar17 + -1) - iVar11) * 0x10000 | uVar14 & 0xffff) >>
                                  0x10,(int)(short)uVar14);
              iVar17 = *piVar3;
              this_05 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_05,pCVar18,*(Cafe **)(this + 0x70),
                                 (iVar11 >> 0x10) + (short)iVar11 * iVar17,'\0',false);
              goto LAB_00139382;
            }
            iVar11 = *(int *)(this + 0x10c) + 1;
            if (0 < iVar11) {
              iVar17 = CapcomMath::random(iVar11);
              iStack_11c = 0;
              do {
                if (iVar11 <= iVar17) {
                  iVar17 = 0;
                }
                iVar22 = *(int *)(iVar17 * 4 + *(int *)(this + 0x110));
                if (((iVar22 != 0) &&
                    (iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar22 + 0x8c) + 0x40),0),
                    iVar8 == 0)) &&
                   (iVar8 = Cafe::isInside(*(Cafe **)(this + 0x70),(int)*(short *)(iVar22 + 0x2c)),
                   iVar8 != 0)) {
                  *(int *)(pCVar18 + 0x88) = iVar22;
                }
                iVar17 = iVar17 + 1;
                iStack_11c = iStack_11c + 1;
              } while (iStack_11c < iVar11);
            }
          }
        }
        else {
          iVar11 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
          if (iVar11 == 3) {
            iVar11 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
            if ((iVar11 == 0) &&
               (iVar11 = Cafe::isInside(*(Cafe **)(this + 0x70),(int)*(short *)(pCVar21 + 0x2c)),
               iVar11 != 0)) {
              this_06 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_06,pCVar18,(CharacterInstance *)pCVar21,*(Cafe **)(this + 0x70));
              CharacterInstance::addTask(pCVar18,(Task *)this_06);
              puVar6 = (undefined1 *)operator_new(0xc);
              *puVar6 = 1;
              uVar10 = *(undefined4 *)(iVar9 + iRam0013962c);
              *(GameStateColosseum **)(puVar6 + 8) = this;
              *(undefined4 *)(puVar6 + 4) = uVar10;
              puVar7 = (undefined4 *)operator_new(8);
              puVar7[1] = 0;
              *(undefined4 **)(*(int *)(this_06 + 0x10) + 4) = puVar7;
              *(undefined4 **)(this_06 + 0x10) = puVar7;
              *puVar7 = puVar6;
              *(undefined4 *)(*(int *)(this_06 + 0x10) + 4) = 0;
              *(int *)(this_06 + 0x18) = *(int *)(this_06 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar18 + 0x88) = 0;
            }
          }
          else {
            iVar11 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
            if (iVar11 == 1) {
              this_05 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_05,pCVar18,pCVar21,*(Cafe **)(this + 0x70),'\0',false);
LAB_00139382:
              CharacterInstance::addTask(pCVar18,(Task *)this_05);
            }
          }
        }
      }
    }
    iVar11 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar11 == 0) {
      checkOverlap(this,pCVar18);
    }
    (**(code **)(*(int *)pCVar18 + 0x1c))(pCVar18,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x70) + 0x20),
               (CafeObject *)pCVar18);
    iStack_120 = iStack_120 + 1;
  } while( true );
}


