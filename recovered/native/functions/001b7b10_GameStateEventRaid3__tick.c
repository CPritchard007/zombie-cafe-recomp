/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b7b10 GameStateEventRaid3::tick */

/* GameStateEventRaid3::tick(long) */

void __thiscall GameStateEventRaid3::tick(GameStateEventRaid3 *this,long param_1)

{
  short sVar1;
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar2;
  CharacterCommandBar *this_01;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  EventRaid3RewardScreen *pEVar6;
  GameStateEventRaid3Menu *pGVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  FollowTask *this_02;
  long lVar10;
  int iVar11;
  AttackTask *this_03;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  CharacterData *this_04;
  int iVar15;
  GameStateEventRaid3 GVar16;
  GameStateEventRaid3 *pGVar17;
  uint uVar18;
  code *pcVar19;
  NoticeDialog *pNVar20;
  int iVar21;
  CharacterInstance *pCVar22;
  CafeObject *pCVar23;
  int iVar24;
  Character *this_05;
  ConfirmDialog *pCVar25;
  CapcomGame *pCVar26;
  float fVar27;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  int iStack_130;
  int iStack_12c;
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
  
  iVar12 = DAT_001b7e60 + 0x1b7b20;
  local_1c = **(undefined4 **)(iVar12 + DAT_001b7e64);
  ZombieCafe::tickPlaySecAnalysis_survival(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar26 = *(CapcomGame **)(this + 0xc);
  if (pCVar26[DAT_001b7e68] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
    CapcomGame::setNextState(pCVar26,(GameState *)pGVar2);
    this[0x11] = (GameStateEventRaid3)0x1;
    FUN_001b8862();
  }
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  pGVar17 = this + 0xd8;
  iVar15 = *(int *)pGVar17;
  *(int *)pGVar17 = iVar15 - param_1;
  if ((iVar15 - param_1 < 1) && (this[0xe4] == (GameStateEventRaid3)0x0)) {
    *(undefined4 *)pGVar17 = **(undefined4 **)(iVar12 + DAT_001b7e6c);
  }
  if (*(int *)(this + 0x150) == 0) {
    this_01 = *(CharacterCommandBar **)(this + 0xb0);
    if ((byte)this_01[0xb8] - 1 < 2) {
      CharacterCommandBar::close(this_01);
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0xb0) + 0xb8) - 1) {
    Cafe::select(*(Cafe **)(this + 0x84),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x150) = 0;
  }
  (**(code **)(**(int **)(this + 0x8c) + 8))(*(int **)(this + 0x8c),param_1);
  if (*(char *)(*(int *)(this + 0x98) + 0x14) != '\0') {
    FUN_001b8862();
  }
  if (*(char *)(*(int *)(this + 0xa0) + 0x14) != '\0') {
    FUN_001b8862();
  }
  if (*(char *)(*(int *)(this + 0xa4) + 0x14) != '\0') {
    FUN_001b8862();
  }
  uVar18 = (uint)*(byte *)(*(int *)(this + 0x9c) + 0x14);
  if (uVar18 != 0) {
    FUN_001b8862();
  }
  FUN_001b880a();
  uVar18 = (uint)*(byte *)(uVar18 + 0x14);
  if (uVar18 != 0) {
    FUN_001b8862();
  }
  FUN_001b8814();
  if ((*(char *)(uVar18 + 0x14) != '\0') && (*(int *)(this + 0x15c) == 0)) {
    FUN_001b8862();
  }
  tickColorShift(this,param_1);
  tickDefault(this,param_1);
  pGVar17 = this + 0x2c;
  fVar27 = (float)Cafe::tick(*(Cafe **)(this + 0x84),param_1);
  GVar16 = *pGVar17;
  if (GVar16 == (GameStateEventRaid3)0x0) {
    for (iVar15 = 0; iVar15 < *(int *)(this + 300) + 1; iVar15 = iVar15 + 1) {
      pCVar22 = *(CharacterInstance **)(iVar15 * 4 + *(int *)(this + 0x130));
      iVar21 = getLaunchNumber(this,iVar15);
      CharacterInstance::setColosseumSelect(pCVar22,iVar21 != -1);
    }
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),1);
    piVar3 = *(int **)(this + 0xd0);
    uVar13 = 1;
    pcVar19 = *(code **)(*piVar3 + 0x20);
  }
  else {
    if (GVar16 != (GameStateEventRaid3)0x1) {
      if (GVar16 == (GameStateEventRaid3)0x2) {
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + param_1;
        setZombieAttackStart(this);
        addEnemyZombie(this,param_1);
        iVar15 = playerLoseCheck();
        if (iVar15 == 0) {
          iVar15 = playerWinCheck(this);
          fVar27 = extraout_s0_01;
          if (iVar15 == 0) goto LAB_001b82ea;
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),1,2,extraout_s0_01,false);
          *pGVar17 = (GameStateEventRaid3)0x4;
          *(undefined4 *)(this + 0x54) = 0;
          iVar15 = *(int *)(this + 0x88);
        }
        else {
          iVar15 = 0;
          iVar21 = 0;
          do {
            iVar24 = iVar15 + 0x154;
            iVar15 = iVar15 + 1;
            iVar21 = iVar21 + (uint)(this[iVar24] != (GameStateEventRaid3)0xff);
          } while (iVar15 != 6);
          iVar15 = checkEndTime();
          fVar27 = extraout_s0;
          if ((iVar15 == 0) &&
             (iVar15 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc)), fVar27 = extraout_s0_00,
             iVar21 <= iVar15)) {
            fVar27 = (float)FUN_001b8822();
          }
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),1,6,fVar27,false);
          this[0x2c] = (GameStateEventRaid3)0x6;
          *(undefined4 *)(this + 0x54) = 0;
          iVar15 = *(int *)(this + 0x88);
        }
        fVar27 = (float)HudElement::setButtonAvailability(iVar15,true);
        goto LAB_001b82ea;
      }
      if (GVar16 == (GameStateEventRaid3)0x4) {
        *(int *)(this + 0x54) = *(int *)(this + 0x54) + param_1;
        fVar27 = (float)tickWinDemo((long)this);
        goto LAB_001b82ea;
      }
      if (GVar16 == (GameStateEventRaid3)0x6) {
        *(int *)(this + 0x54) = *(int *)(this + 0x54) + param_1;
        fVar27 = (float)tickLoseDemo((long)this);
        goto LAB_001b82ea;
      }
      if (GVar16 == (GameStateEventRaid3)0x5) {
        iVar15 = checkEndTime();
        fVar27 = extraout_s0_02;
        if (iVar15 == 0) {
          iVar24 = *(int *)(DAT_001b8200 + *(int *)(this + 0x30) * 4 + 0x1b7f12);
          iVar15 = getPlayerActionCount();
          uVar13 = getTokkouPoint(this);
          uVar5 = __floatsisf(*(undefined4 *)(this + 0x60));
          uVar5 = __mulsf3(uVar5,*(undefined4 *)(this + 0xe0));
          uVar4 = __floatsisf(iVar24 * iVar15);
          uVar5 = __addsf3(uVar5,uVar4);
          uVar13 = __floatsisf(uVar13);
          __addsf3(uVar5,uVar13);
          lVar10 = __fixsfsi();
          ZombieCafe::setEventRaid3_clearLevel(*(ZombieCafe **)(this + 0xc),*(int *)(this + 0x30));
          *(long *)(this + 0x6c) = lVar10;
          ZombieCafe::save();
          *(undefined4 *)(this + 0x160) = 0;
          iVar11 = *(int *)(this + 0x6c);
          iVar21 = ZombieCafe::getEventRaid3_charangeCount(*(ZombieCafe **)(this + 0xc));
          sendResult(this,iVar11,iVar21);
          iVar21 = *(int *)(DAT_001b8204 + *(int *)(this + 0x30) * 4 + 0x1b7f50);
          pEVar6 = (EventRaid3RewardScreen *)operator_new(0xc0);
          EventRaid3RewardScreen::EventRaid3RewardScreen
                    (pEVar6,*(int *)(this + 0x5c),iVar21,*(int *)(this + 0x60),extraout_s0_03,
                     *(long *)(this + 0xe0),lVar10,*(int *)(this + 0x50),iVar24,iVar15);
          *(EventRaid3RewardScreen **)(this + 0x14) = pEVar6;
          (**(code **)(*(int *)pEVar6 + 0x1c))(pEVar6,0x12);
          iVar15 = *(int *)(*(int *)(this + 0xc) + 0x10);
          (**(code **)(**(int **)(this + 0x14) + 0x14))
                    (*(int **)(this + 0x14),(iVar15 >> 0x10) - (iVar15 >> 0x1f) >> 1,
                     (int)(short)iVar15 / 2);
          ScreenElement::setOrder
                    (*(ScreenElement **)(this + 0x14),(int)**(char **)(iVar12 + DAT_001b8208));
          (**(code **)(**(int **)(this + 0x8c) + 0x2c))
                    (*(int **)(this + 0x8c),*(undefined4 *)(this + 0x14));
          uVar13 = ZombieCafe::getEventRaid3_totalPoint();
          memset(acStack_9c,0,0x80);
          snprintf(acStack_9c,0x80,(char *)(DAT_001b820c + 0x1b7fb2),uVar13,lVar10);
          pcVar14 = &LAB_001b7fbe + DAT_001b8210;
LAB_001b80d6:
          fVar27 = (float)sendMalta(this,pcVar14,acStack_9c);
          GVar16 = (GameStateEventRaid3)0x8;
LAB_001b82b2:
          this[0x2c] = GVar16;
          goto LAB_001b82ea;
        }
LAB_001b7fd0:
        GVar16 = (GameStateEventRaid3)0x14;
      }
      else {
        if (GVar16 == (GameStateEventRaid3)0x7) {
          iVar15 = checkEndTime();
          fVar27 = extraout_s0_04;
          if (iVar15 == 0) {
            uVar13 = getTokkouPoint(this);
            uVar5 = __floatsisf(*(undefined4 *)(this + 0x60));
            uVar5 = __mulsf3(uVar5,*(undefined4 *)(this + 0xe0));
            uVar13 = __floatsisf(uVar13);
            __addsf3(uVar5,uVar13);
            lVar10 = __fixsfsi();
            iVar21 = *(int *)(DAT_001b8214 + *(int *)(this + 0x30) * 4 + 0x1b807c);
            *(long *)(this + 0x6c) = lVar10;
            ZombieCafe::save();
            *(undefined4 *)(this + 0x160) = 0;
            iVar24 = *(int *)(this + 0x6c);
            iVar15 = ZombieCafe::getEventRaid3_charangeCount(*(ZombieCafe **)(this + 0xc));
            sendResult(this,iVar24,iVar15);
            iVar15 = *(int *)(DAT_001b8218 + *(int *)(this + 0x30) * 4 + 0x1b806a);
            pEVar6 = (EventRaid3RewardScreen *)operator_new(0xc0);
            EventRaid3RewardScreen::EventRaid3RewardScreen
                      (pEVar6,*(int *)(this + 0x5c),iVar15,*(int *)(this + 0x60),extraout_s0_05,
                       *(long *)(this + 0xe0),lVar10,*(int *)(this + 0x50),iVar21,0);
            *(EventRaid3RewardScreen **)(this + 0x14) = pEVar6;
            (**(code **)(*(int *)pEVar6 + 0x1c))(pEVar6,0x12);
            iVar15 = *(int *)(*(int *)(this + 0xc) + 0x10);
            (**(code **)(**(int **)(this + 0x14) + 0x14))
                      (*(int **)(this + 0x14),(iVar15 >> 0x10) - (iVar15 >> 0x1f) >> 1,
                       (int)(short)iVar15 / 2);
            ScreenElement::setOrder
                      (*(ScreenElement **)(this + 0x14),(int)**(char **)(iVar12 + DAT_001b8208));
            (**(code **)(**(int **)(this + 0x8c) + 0x2c))
                      (*(int **)(this + 0x8c),*(undefined4 *)(this + 0x14));
            uVar13 = ZombieCafe::getEventRaid3_totalPoint();
            memset(acStack_9c,0,0x80);
            snprintf(acStack_9c,0x80,(char *)(DAT_001b821c + 0x1b80cc),uVar13,lVar10);
            pcVar14 = (char *)(DAT_001b8220 + 0x1b80d8);
            goto LAB_001b80d6;
          }
          goto LAB_001b7fd0;
        }
        if (GVar16 == (GameStateEventRaid3)0x8) {
          if (*(int *)(this + 0x15c) != 1) {
            if (*(int *)(this + 0x15c) != 2) {
              fVar27 = (float)drawConnectWindow(this,param_1);
              goto LAB_001b82ea;
            }
            iVar15 = checkEndTime();
            fVar27 = extraout_s0_06;
            if (iVar15 == 0) {
              pCVar25 = *(ConfirmDialog **)(this + 0xa0);
              if ((pCVar25 != (ConfirmDialog *)0x0) && (*(int *)(this + 0xa4) != 0)) {
                String::String(aSStack_e8,(char *)(DAT_001b8224 + 0x1b8136));
                String::String(aSStack_e0,(char *)(DAT_001b8228 + 0x1b8140));
                String::String(aSStack_d8,(char *)(DAT_001b822c + 0x1b814a));
                ConfirmDialog::show(pCVar25,aSStack_e8,aSStack_e0,aSStack_d8,
                                    *(undefined4 *)(iVar12 + DAT_001b8230),
                                    *(undefined4 *)(iVar12 + DAT_001b8234),this,0,0);
                String::~String(aSStack_d8);
                String::~String(aSStack_e0);
                fVar27 = (float)String::~String(aSStack_e8);
              }
              goto LAB_001b82ea;
            }
            GVar16 = (GameStateEventRaid3)0x14;
            goto LAB_001b82b2;
          }
          ZombieCafe::incEventRaid3_charangeCount(*(ZombieCafe **)(this + 0xc));
          fVar27 = (float)ZombieCafe::save();
          GVar16 = (GameStateEventRaid3)0xb;
        }
        else {
          if (GVar16 != (GameStateEventRaid3)0x9) {
            if (GVar16 == (GameStateEventRaid3)0xa) {
              this[0x2c] = (GameStateEventRaid3)0xb;
              (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
              (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
              piVar3 = *(int **)(this + 0xcc);
              uVar13 = 0;
              pcVar19 = *(code **)(*piVar3 + 0x20);
              goto LAB_001b81fc;
            }
            if (GVar16 == (GameStateEventRaid3)0xb) {
              if ((*(EventRaid3RewardScreen **)(this + 0x14) == (EventRaid3RewardScreen *)0x0) ||
                 (iVar15 = EventRaid3RewardScreen::isActive
                                     (*(EventRaid3RewardScreen **)(this + 0x14)),
                 fVar27 = extraout_s0_07, iVar15 != 0)) goto LAB_001b82ea;
              pCVar26 = *(CapcomGame **)(this + 0xc);
              pGVar7 = (GameStateEventRaid3Menu *)operator_new(0xf0);
              GameStateEventRaid3Menu::GameStateEventRaid3Menu(pGVar7);
              pGVar2 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar7);
            }
            else {
              if (GVar16 == (GameStateEventRaid3)0x14) {
                pNVar20 = *(NoticeDialog **)(this + 0x9c);
                String::String(aSStack_d0,(char *)(DAT_001b8548 + 0x1b8276));
                Vector<String>::elementAt((int)aSStack_c8);
                NoticeDialog::show(pNVar20,aSStack_d0,aSStack_c8,0,this);
                String::~String(aSStack_c8);
                fVar27 = (float)String::~String(aSStack_d0);
                GVar16 = (GameStateEventRaid3)0x15;
                goto LAB_001b82b2;
              }
              if ((GVar16 != (GameStateEventRaid3)0x15) ||
                 (*(char *)(*(int *)(this + 0x9c) + 0x14) != '\0')) goto LAB_001b82ea;
              pCVar26 = *(CapcomGame **)(this + 0xc);
              pGVar7 = (GameStateEventRaid3Menu *)operator_new(0xf0);
              GameStateEventRaid3Menu::GameStateEventRaid3Menu(pGVar7);
              pGVar2 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar7);
            }
            fVar27 = (float)CapcomGame::setNextState(pCVar26,(GameState *)pGVar2);
            goto LAB_001b82ea;
          }
          (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
          (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
          (**(code **)(**(int **)(this + 0xcc) + 0x20))(*(int **)(this + 0xcc),0);
          iVar21 = *(int *)(this + 0x6c);
          iVar15 = ZombieCafe::getEventRaid3_charangeCount(*(ZombieCafe **)(this + 0xc));
          fVar27 = (float)sendResult(this,iVar21,iVar15);
          GVar16 = (GameStateEventRaid3)0x8;
        }
      }
      *pGVar17 = GVar16;
      goto LAB_001b82ea;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *pGVar17 = (GameStateEventRaid3)0x2;
    setPlayerZombieCafePos();
    setSelectMarkOff(this);
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
    piVar3 = *(int **)(this + 0xd0);
    uVar13 = 0;
    pcVar19 = *(code **)(*piVar3 + 0x20);
  }
LAB_001b81fc:
  fVar27 = (float)(*pcVar19)(piVar3,uVar13);
LAB_001b82ea:
  if ((this[0xe5] != (GameStateEventRaid3)0x0) && (this[0xe9] == (GameStateEventRaid3)0x0)) {
    this[0xe9] = (GameStateEventRaid3)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,fVar27,false);
    this[0x2c] = (GameStateEventRaid3)0x6;
    *(undefined4 *)(this + 0x54) = 0;
    HudElement::setButtonAvailability(*(int *)(this + 0x88),true);
  }
  iStack_130 = 0;
  do {
    if (*(int *)(this + 300) + 1 <= iStack_130) {
      fVar27 = (float)__floatsisf(param_1);
      tickStaffAI(this,fVar27);
      fVar27 = (float)Vector<int>::Vector(aVStack_a8);
      for (iVar15 = 0; iVar15 < *(int *)(this + 0x138) + 1; iVar15 = iVar15 + 1) {
        iVar21 = *(int *)(*(int *)(this + 0x13c) + iVar15 * 4);
        if ((*(char *)(iVar21 + 0x34) == '\x06') &&
           (iVar21 = (**(code **)(**(int **)(iVar21 + 0x90) + 0x1c))(), iVar21 != 0)) {
          fVar27 = (float)Vector<int>::addElement(aVStack_a8,iVar15);
        }
        else {
          piVar3 = *(int **)(*(int *)(this + 0x13c) + iVar15 * 4);
          fVar27 = (float)(**(code **)(*piVar3 + 0x1c))(piVar3,param_1);
        }
      }
      iStack_130 = iStack_a4 << 2;
      for (iVar15 = iStack_a4; -1 < iVar15; iVar15 = iVar15 + -1) {
        pCVar23 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(this + 0x134),
                             *(int *)(iStack_a0 + iStack_130));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x84) + 0x20),pCVar23);
        this_05 = *(Character **)(pCVar23 + 0x8c);
        this_04 = *(CharacterData **)this_05;
        *(undefined4 *)this_05 = 0;
        *(undefined4 *)(pCVar23 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar23 + 4))(pCVar23);
        Character::~Character(this_05);
        operator_delete(this_05);
        fVar27 = extraout_s0_08;
        if (this_04 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_04);
          operator_delete(this_04);
          fVar27 = extraout_s0_09;
        }
        iStack_130 = iStack_130 + -4;
      }
      if (this[0xe6] == (GameStateEventRaid3)0x0) {
        this[0xe6] = (GameStateEventRaid3)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,7,fVar27,false);
      }
      if (*(char *)(*(int *)(this + 0xc) + DAT_001b8874) != '\0') {
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_001b8874) = 0;
        pCVar25 = *(ConfirmDialog **)(this + 0xa0);
        String::String(aSStack_b0,(char *)(DAT_001b8878 + 0x1b870c));
        Vector<String>::elementAt((int)aSStack_c0);
        Vector<String>::elementAt((int)aSStack_b8);
        ConfirmDialog::show(pCVar25,aSStack_b0,aSStack_c0,aSStack_b8,
                            *(undefined4 *)(iVar12 + DAT_001b8884),this);
        String::~String(aSStack_b8);
        String::~String(aSStack_c0);
        String::~String(aSStack_b0);
      }
      Vector<int>::~Vector(aVStack_a8);
      FUN_001b8862();
      return;
    }
    pCVar22 = *(CharacterInstance **)(iStack_130 * 4 + *(int *)(this + 0x130));
    sVar1 = *(short *)(pCVar22 + 0x2c);
    iVar15 = **(int **)(iVar12 + DAT_001b8550);
    uVar18 = __divsi3((int)sVar1,iVar15);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar18 & 0xffff | ((int)sVar1 - uVar18 * iVar15) * 0x10000) >> 0x10,
               (int)(short)uVar18);
    iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
    pCVar23 = *(CafeObject **)(pCVar22 + 0x88);
    if (iVar15 == 0) {
      this[0xe8] = (GameStateEventRaid3)0x0;
      if (pCVar23 == (CafeObject *)0x0) goto LAB_001b883e;
      iVar15 = Cafe::isInside(*(Cafe **)(this + 0x84),(int)*(short *)(pCVar23 + 0x2c));
      if (iVar15 == 0) {
        *(undefined4 *)(pCVar22 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar22);
      }
      iVar15 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
      if ((iVar15 == 3) &&
         (iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0), iVar15 != 0))
      {
        *(undefined4 *)(pCVar22 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar22 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar22 == *(CharacterInstance **)(this + 0x150)) {
        *(undefined4 *)(this + 0x150) = 0;
        Cafe::select(*(Cafe **)(this + 0x84),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar22 + 0x88) = 0;
LAB_001b883e:
      pCVar23 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar22 + 0x7c) == 0) {
      iVar21 = *(int *)(pCVar22 + 0x8c);
      iVar15 = __aeabi_fcmple(*(undefined4 *)(iVar21 + 0x40),0);
      if ((iVar15 == 0) && (this[0xe5] == (GameStateEventRaid3)0x0)) {
        if (pCVar23 == (CafeObject *)0x0) {
          if (*(char *)(iVar21 + 0x44) == '\x04') {
            iVar15 = Cafe::isInside(*(Cafe **)(this + 0x84),(int)*(short *)(pCVar22 + 0x2c));
            if (iVar15 == 0) {
              iVar21 = **(int **)(iVar12 + DAT_001b8558);
              iVar15 = **(int **)(iVar12 + DAT_001b855c);
              uVar18 = **(int **)(iVar12 + DAT_001b8560) + 1;
              CharacterInstance::groan(pCVar22);
              lVar10 = Cafe::diamondToStaggeredCoords
                                 ((int)(((iVar21 + -1) - iVar15) * 0x10000 | uVar18 & 0xffff) >>
                                  0x10,(int)(short)uVar18);
              iVar15 = Cafe::staggeredCoordsToIndex(lVar10);
              this_02 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_02,pCVar22,*(Cafe **)(this + 0x84),iVar15,'\0',
                                 false);
              goto LAB_001b853e;
            }
            iVar15 = *(int *)(this + 0x120) + 1;
            if (0 < iVar15) {
              iVar21 = CapcomMath::random(iVar15);
              iStack_12c = 0;
              do {
                if (iVar15 <= iVar21) {
                  iVar21 = 0;
                }
                iVar24 = *(int *)(iVar21 * 4 + *(int *)(this + 0x124));
                if (((iVar24 != 0) &&
                    (iVar11 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar24 + 0x8c) + 0x40),0),
                    iVar11 == 0)) &&
                   (iVar11 = Cafe::isInside(*(Cafe **)(this + 0x84),(int)*(short *)(iVar24 + 0x2c)),
                   iVar11 != 0)) {
                  *(int *)(pCVar22 + 0x88) = iVar24;
                }
                iVar21 = iVar21 + 1;
                iStack_12c = iStack_12c + 1;
              } while (iStack_12c < iVar15);
            }
          }
        }
        else {
          iVar15 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
          if (iVar15 == 3) {
            iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
            if ((iVar15 == 0) &&
               (iVar15 = Cafe::isInside(*(Cafe **)(this + 0x84),(int)*(short *)(pCVar23 + 0x2c)),
               iVar15 != 0)) {
              this_03 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_03,pCVar22,(CharacterInstance *)pCVar23,*(Cafe **)(this + 0x84));
              CharacterInstance::addTask(pCVar22,(Task *)this_03);
              puVar8 = (undefined1 *)operator_new(0xc);
              *puVar8 = 1;
              uVar13 = *(undefined4 *)(iVar12 + DAT_001b8554);
              *(GameStateEventRaid3 **)(puVar8 + 8) = this;
              *(undefined4 *)(puVar8 + 4) = uVar13;
              puVar9 = (undefined4 *)operator_new(8);
              puVar9[1] = 0;
              *(undefined4 **)(*(int *)(this_03 + 0x10) + 4) = puVar9;
              *(undefined4 **)(this_03 + 0x10) = puVar9;
              *puVar9 = puVar8;
              *(undefined4 *)(*(int *)(this_03 + 0x10) + 4) = 0;
              *(int *)(this_03 + 0x18) = *(int *)(this_03 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar22 + 0x88) = 0;
            }
          }
          else {
            iVar15 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
            if (iVar15 == 1) {
              this_02 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_02,pCVar22,pCVar23,*(Cafe **)(this + 0x84),'\0',false);
LAB_001b853e:
              CharacterInstance::addTask(pCVar22,(Task *)this_02);
            }
          }
        }
      }
    }
    iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
    if (iVar15 == 0) {
      checkOverlap(this,pCVar22);
    }
    (**(code **)(*(int *)pCVar22 + 0x1c))(pCVar22,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x84) + 0x20),
               (CafeObject *)pCVar22);
    iStack_130 = iStack_130 + 1;
  } while( true );
}


