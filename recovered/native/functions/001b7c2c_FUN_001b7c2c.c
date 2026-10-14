/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b7c2c FUN_001b7c2c */

void FUN_001b7c2c(void)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  EventRaid3RewardScreen *pEVar5;
  GameStateEventRaid3Menu *pGVar6;
  GameStateLoading *this;
  undefined1 *puVar7;
  undefined4 *puVar8;
  FollowTask *this_00;
  long lVar9;
  int iVar10;
  AttackTask *this_01;
  undefined4 uVar11;
  char *pcVar12;
  CharacterData *this_02;
  GameStateEventRaid3 GVar13;
  int in_r3;
  uint uVar14;
  code *pcVar15;
  NoticeDialog *pNVar16;
  int iVar17;
  int iVar18;
  GameStateEventRaid3 *unaff_r5;
  CharacterInstance *pCVar19;
  CafeObject *pCVar20;
  int iVar21;
  Character *this_03;
  ConfirmDialog *pCVar22;
  GameStateEventRaid3 *pGVar23;
  CapcomGame *this_04;
  float fVar24;
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
  int in_stack_0000001c;
  long in_stack_00000024;
  int iStack00000028;
  int iStack0000002c;
  int in_stack_000000b4;
  int in_stack_000000b8;
  
  uVar14 = (uint)*(byte *)(in_r3 + 0x14);
  if (uVar14 != 0) {
    FUN_001b8862();
  }
  FUN_001b8814();
  if ((*(char *)(uVar14 + 0x14) != '\0') && (*(int *)(unaff_r5 + 0x15c) == 0)) {
    FUN_001b8862();
  }
  GameStateEventRaid3::tickColorShift(unaff_r5,in_stack_00000024);
  GameStateEventRaid3::tickDefault(unaff_r5,in_stack_00000024);
  pGVar23 = unaff_r5 + 0x2c;
  fVar24 = (float)Cafe::tick(*(Cafe **)(unaff_r5 + 0x84),in_stack_00000024);
  GVar13 = *pGVar23;
  if (GVar13 == (GameStateEventRaid3)0x0) {
    for (iVar17 = 0; iVar17 < *(int *)(unaff_r5 + 300) + 1; iVar17 = iVar17 + 1) {
      pCVar19 = *(CharacterInstance **)(iVar17 * 4 + *(int *)(unaff_r5 + 0x130));
      iVar18 = GameStateEventRaid3::getLaunchNumber(unaff_r5,iVar17);
      CharacterInstance::setColosseumSelect(pCVar19,iVar18 != -1);
    }
    (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),1);
    piVar2 = *(int **)(unaff_r5 + 0xd0);
    uVar11 = 1;
    pcVar15 = *(code **)(*piVar2 + 0x20);
  }
  else {
    if (GVar13 != (GameStateEventRaid3)0x1) {
      if (GVar13 == (GameStateEventRaid3)0x2) {
        *(int *)(unaff_r5 + 0x50) = *(int *)(unaff_r5 + 0x50) + in_stack_00000024;
        GameStateEventRaid3::setZombieAttackStart(unaff_r5);
        GameStateEventRaid3::addEnemyZombie(unaff_r5,in_stack_00000024);
        iVar17 = GameStateEventRaid3::playerLoseCheck();
        if (iVar17 == 0) {
          iVar17 = GameStateEventRaid3::playerWinCheck(unaff_r5);
          fVar24 = extraout_s0_01;
          if (iVar17 == 0) goto LAB_001b82ea;
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),1,2,extraout_s0_01,false);
          *pGVar23 = (GameStateEventRaid3)0x4;
          *(undefined4 *)(unaff_r5 + 0x54) = 0;
          iVar17 = *(int *)(unaff_r5 + 0x88);
        }
        else {
          iVar17 = 0;
          iVar18 = 0;
          do {
            iVar21 = iVar17 + 0x154;
            iVar17 = iVar17 + 1;
            iVar18 = iVar18 + (uint)(unaff_r5[iVar21] != (GameStateEventRaid3)0xff);
          } while (iVar17 != 6);
          iVar17 = GameStateEventRaid3::checkEndTime();
          fVar24 = extraout_s0;
          if ((iVar17 == 0) &&
             (iVar17 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc)),
             fVar24 = extraout_s0_00, iVar18 <= iVar17)) {
            fVar24 = (float)FUN_001b8822();
          }
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),1,6,fVar24,false);
          unaff_r5[0x2c] = (GameStateEventRaid3)0x6;
          *(undefined4 *)(unaff_r5 + 0x54) = 0;
          iVar17 = *(int *)(unaff_r5 + 0x88);
        }
        fVar24 = (float)HudElement::setButtonAvailability(iVar17,true);
        goto LAB_001b82ea;
      }
      if (GVar13 == (GameStateEventRaid3)0x4) {
        *(int *)(unaff_r5 + 0x54) = *(int *)(unaff_r5 + 0x54) + in_stack_00000024;
        fVar24 = (float)GameStateEventRaid3::tickWinDemo((long)unaff_r5);
        goto LAB_001b82ea;
      }
      if (GVar13 == (GameStateEventRaid3)0x6) {
        *(int *)(unaff_r5 + 0x54) = *(int *)(unaff_r5 + 0x54) + in_stack_00000024;
        fVar24 = (float)GameStateEventRaid3::tickLoseDemo((long)unaff_r5);
        goto LAB_001b82ea;
      }
      if (GVar13 == (GameStateEventRaid3)0x5) {
        iVar17 = GameStateEventRaid3::checkEndTime();
        fVar24 = extraout_s0_02;
        if (iVar17 == 0) {
          iVar21 = *(int *)(DAT_001b8200 + *(int *)(unaff_r5 + 0x30) * 4 + 0x1b7f12);
          iVar17 = GameStateEventRaid3::getPlayerActionCount();
          uVar11 = GameStateEventRaid3::getTokkouPoint(unaff_r5);
          uVar4 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x60));
          uVar4 = __mulsf3(uVar4,*(long *)(unaff_r5 + 0xe0));
          uVar3 = __floatsisf(iVar21 * iVar17);
          uVar4 = __addsf3(uVar4,uVar3);
          uVar11 = __floatsisf(uVar11);
          __addsf3(uVar4,uVar11);
          lVar9 = __fixsfsi();
          ZombieCafe::setEventRaid3_clearLevel
                    (*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(unaff_r5 + 0x30));
          *(long *)(unaff_r5 + 0x6c) = lVar9;
          ZombieCafe::save();
          *(undefined4 *)(unaff_r5 + 0x160) = 0;
          iVar10 = *(int *)(unaff_r5 + 0x6c);
          iVar18 = ZombieCafe::getEventRaid3_charangeCount(*(ZombieCafe **)(unaff_r5 + 0xc));
          GameStateEventRaid3::sendResult(unaff_r5,iVar10,iVar18);
          iVar18 = *(int *)(DAT_001b8204 + *(int *)(unaff_r5 + 0x30) * 4 + 0x1b7f50);
          pEVar5 = (EventRaid3RewardScreen *)operator_new(0xc0);
          EventRaid3RewardScreen::EventRaid3RewardScreen
                    (pEVar5,*(int *)(unaff_r5 + 0x5c),iVar18,*(int *)(unaff_r5 + 0x60),
                     extraout_s0_03,*(long *)(unaff_r5 + 0xe0),lVar9,*(int *)(unaff_r5 + 0x50),
                     iVar21,iVar17);
          *(EventRaid3RewardScreen **)(unaff_r5 + 0x14) = pEVar5;
          (**(code **)(*(int *)pEVar5 + 0x1c))(pEVar5,0x12);
          iVar17 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
          (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x14))
                    (*(int **)(unaff_r5 + 0x14),(iVar17 >> 0x10) - (iVar17 >> 0x1f) >> 1,
                     (int)(short)iVar17 / 2);
          ScreenElement::setOrder
                    (*(ScreenElement **)(unaff_r5 + 0x14),
                     (int)**(char **)(in_stack_0000001c + DAT_001b8208));
          (**(code **)(**(int **)(unaff_r5 + 0x8c) + 0x2c))
                    (*(int **)(unaff_r5 + 0x8c),*(undefined4 *)(unaff_r5 + 0x14));
          uVar11 = ZombieCafe::getEventRaid3_totalPoint();
          memset(&stack0x000000bc,0,0x80);
          snprintf(&stack0x000000bc,0x80,(char *)(DAT_001b820c + 0x1b7fb2),uVar11);
          pcVar12 = &LAB_001b7fbe + DAT_001b8210;
LAB_001b80d6:
          fVar24 = (float)GameStateEventRaid3::sendMalta(unaff_r5,pcVar12,&stack0x000000bc);
          GVar13 = (GameStateEventRaid3)0x8;
LAB_001b82b2:
          unaff_r5[0x2c] = GVar13;
          goto LAB_001b82ea;
        }
LAB_001b7fd0:
        GVar13 = (GameStateEventRaid3)0x14;
      }
      else {
        if (GVar13 == (GameStateEventRaid3)0x7) {
          iVar17 = GameStateEventRaid3::checkEndTime();
          fVar24 = extraout_s0_04;
          if (iVar17 == 0) {
            uVar11 = GameStateEventRaid3::getTokkouPoint(unaff_r5);
            uVar4 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x60));
            uVar4 = __mulsf3(uVar4,*(long *)(unaff_r5 + 0xe0));
            uVar11 = __floatsisf(uVar11);
            __addsf3(uVar4,uVar11);
            lVar9 = __fixsfsi();
            iVar18 = *(int *)(DAT_001b8214 + *(int *)(unaff_r5 + 0x30) * 4 + 0x1b807c);
            *(long *)(unaff_r5 + 0x6c) = lVar9;
            ZombieCafe::save();
            *(undefined4 *)(unaff_r5 + 0x160) = 0;
            iVar21 = *(int *)(unaff_r5 + 0x6c);
            iVar17 = ZombieCafe::getEventRaid3_charangeCount(*(ZombieCafe **)(unaff_r5 + 0xc));
            GameStateEventRaid3::sendResult(unaff_r5,iVar21,iVar17);
            iVar17 = *(int *)(DAT_001b8218 + *(int *)(unaff_r5 + 0x30) * 4 + 0x1b806a);
            pEVar5 = (EventRaid3RewardScreen *)operator_new(0xc0);
            EventRaid3RewardScreen::EventRaid3RewardScreen
                      (pEVar5,*(int *)(unaff_r5 + 0x5c),iVar17,*(int *)(unaff_r5 + 0x60),
                       extraout_s0_05,*(long *)(unaff_r5 + 0xe0),lVar9,*(int *)(unaff_r5 + 0x50),
                       iVar18,0);
            *(EventRaid3RewardScreen **)(unaff_r5 + 0x14) = pEVar5;
            (**(code **)(*(int *)pEVar5 + 0x1c))(pEVar5,0x12);
            iVar17 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
            (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x14))
                      (*(int **)(unaff_r5 + 0x14),(iVar17 >> 0x10) - (iVar17 >> 0x1f) >> 1,
                       (int)(short)iVar17 / 2);
            ScreenElement::setOrder
                      (*(ScreenElement **)(unaff_r5 + 0x14),
                       (int)**(char **)(in_stack_0000001c + DAT_001b8208));
            (**(code **)(**(int **)(unaff_r5 + 0x8c) + 0x2c))
                      (*(int **)(unaff_r5 + 0x8c),*(undefined4 *)(unaff_r5 + 0x14));
            uVar11 = ZombieCafe::getEventRaid3_totalPoint();
            memset(&stack0x000000bc,0,0x80);
            snprintf(&stack0x000000bc,0x80,(char *)(DAT_001b821c + 0x1b80cc),uVar11);
            pcVar12 = (char *)(DAT_001b8220 + 0x1b80d8);
            goto LAB_001b80d6;
          }
          goto LAB_001b7fd0;
        }
        if (GVar13 == (GameStateEventRaid3)0x8) {
          if (*(int *)(unaff_r5 + 0x15c) != 1) {
            if (*(int *)(unaff_r5 + 0x15c) != 2) {
              fVar24 = (float)GameStateEventRaid3::drawConnectWindow(unaff_r5,in_stack_00000024);
              goto LAB_001b82ea;
            }
            iVar17 = GameStateEventRaid3::checkEndTime();
            fVar24 = extraout_s0_06;
            if (iVar17 == 0) {
              pCVar22 = *(ConfirmDialog **)(unaff_r5 + 0xa0);
              if ((pCVar22 != (ConfirmDialog *)0x0) && (*(int *)(unaff_r5 + 0xa4) != 0)) {
                String::String((String *)&stack0x00000070,(char *)(DAT_001b8224 + 0x1b8136));
                String::String((String *)&stack0x00000078,(char *)(DAT_001b8228 + 0x1b8140));
                String::String((String *)&stack0x00000080,(char *)(DAT_001b822c + 0x1b814a));
                ConfirmDialog::show(pCVar22,&stack0x00000070,&stack0x00000078,&stack0x00000080);
                String::~String((String *)&stack0x00000080);
                String::~String((String *)&stack0x00000078);
                fVar24 = (float)String::~String((String *)&stack0x00000070);
              }
              goto LAB_001b82ea;
            }
            GVar13 = (GameStateEventRaid3)0x14;
            goto LAB_001b82b2;
          }
          ZombieCafe::incEventRaid3_charangeCount(*(ZombieCafe **)(unaff_r5 + 0xc));
          fVar24 = (float)ZombieCafe::save();
          GVar13 = (GameStateEventRaid3)0xb;
        }
        else {
          if (GVar13 != (GameStateEventRaid3)0x9) {
            if (GVar13 == (GameStateEventRaid3)0xa) {
              unaff_r5[0x2c] = (GameStateEventRaid3)0xb;
              (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),0);
              (**(code **)(**(int **)(unaff_r5 + 200) + 0x20))(*(int **)(unaff_r5 + 200),0);
              piVar2 = *(int **)(unaff_r5 + 0xcc);
              uVar11 = 0;
              pcVar15 = *(code **)(*piVar2 + 0x20);
              goto LAB_001b81fc;
            }
            if (GVar13 == (GameStateEventRaid3)0xb) {
              if ((*(EventRaid3RewardScreen **)(unaff_r5 + 0x14) == (EventRaid3RewardScreen *)0x0)
                 || (iVar17 = EventRaid3RewardScreen::isActive
                                        (*(EventRaid3RewardScreen **)(unaff_r5 + 0x14)),
                    fVar24 = extraout_s0_07, iVar17 != 0)) goto LAB_001b82ea;
              this_04 = *(CapcomGame **)(unaff_r5 + 0xc);
              pGVar6 = (GameStateEventRaid3Menu *)operator_new(0xf0);
              GameStateEventRaid3Menu::GameStateEventRaid3Menu(pGVar6);
              this = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(this,(GameState *)pGVar6);
            }
            else {
              if (GVar13 == (GameStateEventRaid3)0x14) {
                pNVar16 = *(NoticeDialog **)(unaff_r5 + 0x9c);
                String::String((String *)&stack0x00000088,(char *)(DAT_001b8548 + 0x1b8276));
                Vector<String>::elementAt((int)&stack0x00000090);
                NoticeDialog::show(pNVar16,&stack0x00000088,&stack0x00000090,0);
                String::~String((String *)&stack0x00000090);
                fVar24 = (float)String::~String((String *)&stack0x00000088);
                GVar13 = (GameStateEventRaid3)0x15;
                goto LAB_001b82b2;
              }
              if ((GVar13 != (GameStateEventRaid3)0x15) ||
                 (*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) != '\0')) goto LAB_001b82ea;
              this_04 = *(CapcomGame **)(unaff_r5 + 0xc);
              pGVar6 = (GameStateEventRaid3Menu *)operator_new(0xf0);
              GameStateEventRaid3Menu::GameStateEventRaid3Menu(pGVar6);
              this = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(this,(GameState *)pGVar6);
            }
            fVar24 = (float)CapcomGame::setNextState(this_04,(GameState *)this);
            goto LAB_001b82ea;
          }
          (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),0);
          (**(code **)(**(int **)(unaff_r5 + 200) + 0x20))(*(int **)(unaff_r5 + 200),0);
          (**(code **)(**(int **)(unaff_r5 + 0xcc) + 0x20))(*(int **)(unaff_r5 + 0xcc),0);
          iVar18 = *(int *)(unaff_r5 + 0x6c);
          iVar17 = ZombieCafe::getEventRaid3_charangeCount(*(ZombieCafe **)(unaff_r5 + 0xc));
          fVar24 = (float)GameStateEventRaid3::sendResult(unaff_r5,iVar18,iVar17);
          GVar13 = (GameStateEventRaid3)0x8;
        }
      }
      *pGVar23 = GVar13;
      goto LAB_001b82ea;
    }
    *(undefined4 *)(unaff_r5 + 0x50) = 0;
    *(undefined4 *)(unaff_r5 + 0x4c) = 0;
    *(undefined4 *)(unaff_r5 + 0x58) = 0;
    *pGVar23 = (GameStateEventRaid3)0x2;
    GameStateEventRaid3::setPlayerZombieCafePos();
    GameStateEventRaid3::setSelectMarkOff(unaff_r5);
    (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
    piVar2 = *(int **)(unaff_r5 + 0xd0);
    uVar11 = 0;
    pcVar15 = *(code **)(*piVar2 + 0x20);
  }
LAB_001b81fc:
  fVar24 = (float)(*pcVar15)(piVar2,uVar11);
LAB_001b82ea:
  if ((unaff_r5[0xe5] != (GameStateEventRaid3)0x0) && (unaff_r5[0xe9] == (GameStateEventRaid3)0x0))
  {
    unaff_r5[0xe9] = (GameStateEventRaid3)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,fVar24,false);
    unaff_r5[0x2c] = (GameStateEventRaid3)0x6;
    *(undefined4 *)(unaff_r5 + 0x54) = 0;
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x88),true);
  }
  iStack00000028 = 0;
  do {
    if (*(int *)(unaff_r5 + 300) + 1 <= iStack00000028) {
      fVar24 = (float)__floatsisf(in_stack_00000024);
      GameStateEventRaid3::tickStaffAI(unaff_r5,fVar24);
      fVar24 = (float)Vector<int>::Vector((Vector<int> *)&stack0x000000b0);
      for (iVar17 = 0; iVar17 < *(int *)(unaff_r5 + 0x138) + 1; iVar17 = iVar17 + 1) {
        iVar18 = *(int *)(*(int *)(unaff_r5 + 0x13c) + iVar17 * 4);
        if ((*(char *)(iVar18 + 0x34) == '\x06') &&
           (iVar18 = (**(code **)(**(int **)(iVar18 + 0x90) + 0x1c))(), iVar18 != 0)) {
          fVar24 = (float)Vector<int>::addElement((Vector<int> *)&stack0x000000b0,iVar17);
        }
        else {
          piVar2 = *(int **)(*(int *)(unaff_r5 + 0x13c) + iVar17 * 4);
          fVar24 = (float)(**(code **)(*piVar2 + 0x1c))(piVar2,in_stack_00000024);
        }
      }
      iStack00000028 = in_stack_000000b4 << 2;
      for (iVar17 = in_stack_000000b4; -1 < iVar17; iVar17 = iVar17 + -1) {
        pCVar20 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r5 + 0x134),
                             *(int *)(in_stack_000000b8 + iStack00000028));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x84) + 0x20),pCVar20);
        this_03 = *(Character **)(pCVar20 + 0x8c);
        this_02 = *(CharacterData **)this_03;
        *(undefined4 *)this_03 = 0;
        *(undefined4 *)(pCVar20 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar20 + 4))(pCVar20);
        Character::~Character(this_03);
        operator_delete(this_03);
        fVar24 = extraout_s0_08;
        if (this_02 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_02);
          operator_delete(this_02);
          fVar24 = extraout_s0_09;
        }
        iStack00000028 = iStack00000028 + -4;
      }
      if (unaff_r5[0xe6] == (GameStateEventRaid3)0x0) {
        unaff_r5[0xe6] = (GameStateEventRaid3)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,7,fVar24,false);
      }
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_001b8874) != '\0') {
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_001b8874) = 0;
        pCVar22 = *(ConfirmDialog **)(unaff_r5 + 0xa0);
        String::String((String *)&stack0x000000a8,(char *)(DAT_001b8878 + 0x1b870c));
        Vector<String>::elementAt((int)&stack0x00000098);
        Vector<String>::elementAt((int)&stack0x000000a0);
        ConfirmDialog::show(pCVar22,&stack0x000000a8,&stack0x00000098,&stack0x000000a0);
        String::~String((String *)&stack0x000000a0);
        String::~String((String *)&stack0x00000098);
        String::~String((String *)&stack0x000000a8);
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x000000b0);
      FUN_001b8862();
      return;
    }
    pCVar19 = *(CharacterInstance **)(iStack00000028 * 4 + *(int *)(unaff_r5 + 0x130));
    sVar1 = *(short *)(pCVar19 + 0x2c);
    iVar17 = **(int **)(in_stack_0000001c + DAT_001b8550);
    uVar14 = __divsi3((int)sVar1,iVar17);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar14 & 0xffff | ((int)sVar1 - uVar14 * iVar17) * 0x10000) >> 0x10,
               (int)(short)uVar14);
    iVar17 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    pCVar20 = *(CafeObject **)(pCVar19 + 0x88);
    if (iVar17 == 0) {
      unaff_r5[0xe8] = (GameStateEventRaid3)0x0;
      if (pCVar20 == (CafeObject *)0x0) goto LAB_001b883e;
      iVar17 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),(int)*(short *)(pCVar20 + 0x2c));
      if (iVar17 == 0) {
        *(undefined4 *)(pCVar19 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar19);
      }
      iVar17 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
      if ((iVar17 == 3) &&
         (iVar17 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0), iVar17 != 0))
      {
        *(undefined4 *)(pCVar19 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar19 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar19 == *(CharacterInstance **)(unaff_r5 + 0x150)) {
        *(undefined4 *)(unaff_r5 + 0x150) = 0;
        Cafe::select(*(Cafe **)(unaff_r5 + 0x84),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar19 + 0x88) = 0;
LAB_001b883e:
      pCVar20 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar19 + 0x7c) == 0) {
      iVar18 = *(int *)(pCVar19 + 0x8c);
      iVar17 = __aeabi_fcmple(*(undefined4 *)(iVar18 + 0x40),0);
      if ((iVar17 == 0) && (unaff_r5[0xe5] == (GameStateEventRaid3)0x0)) {
        if (pCVar20 == (CafeObject *)0x0) {
          if (*(char *)(iVar18 + 0x44) == '\x04') {
            iVar17 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),(int)*(short *)(pCVar19 + 0x2c));
            if (iVar17 == 0) {
              iVar18 = **(int **)(in_stack_0000001c + DAT_001b8558);
              iVar17 = **(int **)(in_stack_0000001c + DAT_001b855c);
              uVar14 = **(int **)(in_stack_0000001c + DAT_001b8560) + 1;
              CharacterInstance::groan(pCVar19);
              lVar9 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar18 + -1) - iVar17) * 0x10000 | uVar14 & 0xffff) >> 0x10
                                 ,(int)(short)uVar14);
              iVar17 = Cafe::staggeredCoordsToIndex(lVar9);
              this_00 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_00,pCVar19,*(Cafe **)(unaff_r5 + 0x84),iVar17,'\0'
                                 ,false);
              goto LAB_001b853e;
            }
            iVar17 = *(int *)(unaff_r5 + 0x120) + 1;
            if (0 < iVar17) {
              iVar18 = CapcomMath::random(iVar17);
              iStack0000002c = 0;
              do {
                if (iVar17 <= iVar18) {
                  iVar18 = 0;
                }
                iVar21 = *(int *)(iVar18 * 4 + *(int *)(unaff_r5 + 0x124));
                if (((iVar21 != 0) &&
                    (iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar21 + 0x8c) + 0x40),0),
                    iVar10 == 0)) &&
                   (iVar10 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),
                                            (int)*(short *)(iVar21 + 0x2c)), iVar10 != 0)) {
                  *(int *)(pCVar19 + 0x88) = iVar21;
                }
                iVar18 = iVar18 + 1;
                iStack0000002c = iStack0000002c + 1;
              } while (iStack0000002c < iVar17);
            }
          }
        }
        else {
          iVar17 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
          if (iVar17 == 3) {
            iVar17 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
            if ((iVar17 == 0) &&
               (iVar17 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x84),(int)*(short *)(pCVar20 + 0x2c))
               , iVar17 != 0)) {
              this_01 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_01,pCVar19,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x84));
              CharacterInstance::addTask(pCVar19,(Task *)this_01);
              puVar7 = (undefined1 *)operator_new(0xc);
              *puVar7 = 1;
              uVar11 = *(undefined4 *)(in_stack_0000001c + DAT_001b8554);
              *(GameStateEventRaid3 **)(puVar7 + 8) = unaff_r5;
              *(undefined4 *)(puVar7 + 4) = uVar11;
              puVar8 = (undefined4 *)operator_new(8);
              puVar8[1] = 0;
              *(undefined4 **)(*(int *)(this_01 + 0x10) + 4) = puVar8;
              *(undefined4 **)(this_01 + 0x10) = puVar8;
              *puVar8 = puVar7;
              *(undefined4 *)(*(int *)(this_01 + 0x10) + 4) = 0;
              *(int *)(this_01 + 0x18) = *(int *)(this_01 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar19 + 0x88) = 0;
            }
          }
          else {
            iVar17 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
            if (iVar17 == 1) {
              this_00 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_00,pCVar19,pCVar20,*(Cafe **)(unaff_r5 + 0x84),'\0',false)
              ;
LAB_001b853e:
              CharacterInstance::addTask(pCVar19,(Task *)this_00);
            }
          }
        }
      }
    }
    iVar17 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    if (iVar17 == 0) {
      GameStateEventRaid3::checkOverlap(unaff_r5,pCVar19);
    }
    (**(code **)(*(int *)pCVar19 + 0x1c))(pCVar19,in_stack_00000024);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x84) + 0x20),
               (CafeObject *)pCVar19);
    iStack00000028 = iStack00000028 + 1;
  } while( true );
}


