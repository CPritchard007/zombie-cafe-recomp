/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ac0ce FUN_001ac0ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ac0ce(float param_1)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  EventRaid2RewardScreen *pEVar5;
  GameStateEventRaid2Menu *pGVar6;
  GameStateLoading *this;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  FollowTask *this_00;
  long lVar10;
  int iVar11;
  int *piVar12;
  AttackTask *this_01;
  char *pcVar13;
  CharacterData *this_02;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int unaff_r4;
  int iVar18;
  int iVar19;
  GameStateEventRaid2 *unaff_r5;
  CharacterInstance *this_03;
  CafeObject *pCVar20;
  int iVar21;
  Character *this_04;
  ConfirmDialog *pCVar22;
  undefined1 *unaff_r7;
  CapcomGame *this_05;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar23;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  undefined8 uVar24;
  int in_stack_00000024;
  int in_stack_00000028;
  int iStack0000002c;
  int iStack00000030;
  int in_stack_00000094;
  int in_stack_00000098;
  
  if (unaff_r4 == 1) {
    *(undefined4 *)(unaff_r5 + 0x50) = 0;
    *(undefined4 *)(unaff_r5 + 0x4c) = 0;
    *(undefined4 *)(unaff_r5 + 0x58) = 0;
    *unaff_r7 = 2;
    GameStateEventRaid2::setPlayerZombieCafePos(unaff_r5);
    GameStateEventRaid2::setSelectMarkOff(unaff_r5);
    (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),0);
    param_1 = (float)(**(code **)(**(int **)(unaff_r5 + 0xc4) + 0x20))(*(int **)(unaff_r5 + 0xc4),0)
    ;
    goto LAB_001ac558;
  }
  if (unaff_r4 == 2) {
    *(int *)(unaff_r5 + 0x50) = *(int *)(unaff_r5 + 0x50) + in_stack_00000024;
    GameStateEventRaid2::setZombieAttackStart(unaff_r5);
    GameStateEventRaid2::addEnemyZombie(unaff_r5,in_stack_00000024);
    iVar18 = GameStateEventRaid2::playerLoseCheck();
    if (iVar18 != 0) {
      iVar18 = 0;
      iVar19 = 0;
      do {
        iVar21 = iVar18 + 0x148;
        iVar18 = iVar18 + 1;
        iVar19 = iVar19 + (uint)(unaff_r5[iVar21] != (GameStateEventRaid2)0xff);
      } while (iVar18 != 6);
      iVar18 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
      if (iVar18 < iVar19) {
        FUN_001acab4();
      }
      if (unaff_r5[0x14e] != (GameStateEventRaid2)0x0) {
        FUN_001acab4();
      }
      pCVar22 = *(ConfirmDialog **)(unaff_r5 + 0x9c);
      String::String((String *)&stack0x00000040,(char *)(DAT_001ac2e8 + 0x1ac16a));
      String::valueOf((int)&stack0x00000048);
      String::operator+((String *)&stack0x00000050,&stack0x00000040,&stack0x00000048);
      String::String((String *)&stack0x00000058,(char *)(DAT_001ac2ec + 0x1ac18a));
      String::operator+((String *)&stack0x00000060,&stack0x00000050,&stack0x00000058);
      Vector<String>::elementAt((int)&stack0x00000068);
      Vector<String>::elementAt((int)&stack0x00000070);
      ConfirmDialog::show(pCVar22,&stack0x00000060,&stack0x00000068,&stack0x00000070);
      String::~String((String *)&stack0x00000070);
      String::~String((String *)&stack0x00000068);
      String::~String((String *)&stack0x00000060);
      String::~String((String *)&stack0x00000058);
      String::~String((String *)&stack0x00000050);
      String::~String((String *)&stack0x00000048);
      param_1 = (float)String::~String((String *)&stack0x00000040);
      goto LAB_001ac558;
    }
    iVar18 = GameStateEventRaid2::playerWinCheck(unaff_r5);
    param_1 = extraout_s0;
    if (iVar18 == 0) goto LAB_001ac558;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),1,2,extraout_s0,false);
    *unaff_r7 = 4;
    *(undefined4 *)(unaff_r5 + 0x54) = 0;
    param_1 = (float)FUN_001acad4(*(undefined4 *)(unaff_r5 + 0x84),8,0);
  }
  if (unaff_r4 == 4) {
    *(int *)(unaff_r5 + 0x54) = *(int *)(unaff_r5 + 0x54) + in_stack_00000024;
    param_1 = (float)GameStateEventRaid2::tickWinDemo((long)unaff_r5);
  }
  else if (unaff_r4 == 6) {
    *(int *)(unaff_r5 + 0x54) = *(int *)(unaff_r5 + 0x54) + in_stack_00000024;
    param_1 = (float)GameStateEventRaid2::tickLoseDemo((long)unaff_r5);
  }
  else {
    if (unaff_r4 == 5) {
      *unaff_r7 = 0xb;
      iVar19 = *(int *)(DAT_001ac300 + *(int *)(unaff_r5 + 0x30) * 4 + 0x1ac29e);
      iVar18 = GameStateEventRaid2::getPlayerActionCount();
      uVar17 = GameStateEventRaid2::getTokkouPoint(unaff_r5);
      uVar4 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x60));
      uVar4 = __mulsf3(uVar4,*(undefined4 *)(unaff_r5 + 0xd4));
      uVar2 = __floatsisf(iVar19 * iVar18);
      uVar4 = __addsf3(uVar4,uVar2);
      uVar17 = __floatsisf(uVar17);
      __addsf3(uVar4,uVar17);
      lVar10 = __fixsfsi();
      uVar17 = DAT_001ac610;
      if (unaff_r5[0x14e] == (GameStateEventRaid2)0x0) {
        uVar17 = 0x3f800000;
      }
      ZombieCafe::setEventRaid2_clearLevel
                (*(ZombieCafe **)(unaff_r5 + 0xc),*(int *)(unaff_r5 + 0x30));
      uVar4 = __floatsisf(lVar10);
      __mulsf3(uVar4,uVar17);
      lVar3 = __fixsfsi();
      ZombieCafe::addEventRaid2_totalPoint(*(ZombieCafe **)(unaff_r5 + 0xc),lVar3);
      ZombieCafe::save();
      pEVar5 = (EventRaid2RewardScreen *)operator_new(0xc0);
      EventRaid2RewardScreen::EventRaid2RewardScreen
                (pEVar5,*(int *)(unaff_r5 + 0x5c),*(int *)(unaff_r5 + 0x6c),
                 *(int *)(unaff_r5 + 0x60),extraout_s0_00,*(long *)(unaff_r5 + 0xd4),lVar10,
                 *(int *)(unaff_r5 + 0x50),iVar19,iVar18,extraout_s1);
      *(EventRaid2RewardScreen **)(unaff_r5 + 0x14) = pEVar5;
      (**(code **)(*(int *)pEVar5 + 0x1c))(pEVar5,0x12);
      iVar18 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
      (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x14))
                (*(int **)(unaff_r5 + 0x14),(iVar18 >> 0x10) - (iVar18 >> 0x1f) >> 1,
                 (int)(short)iVar18 / 2);
      ScreenElement::setOrder
                (*(ScreenElement **)(unaff_r5 + 0x14),
                 (int)**(char **)(in_stack_00000028 + DAT_001ac614));
      (**(code **)(**(int **)(unaff_r5 + 0x88) + 0x2c))
                (*(int **)(unaff_r5 + 0x88),*(undefined4 *)(unaff_r5 + 0x14));
      uVar17 = ZombieCafe::getEventRaid2_totalPoint(*(ZombieCafe **)(unaff_r5 + 0xc));
      memset(&stack0x0000009c,0,0x80);
      snprintf(&stack0x0000009c,0x80,(char *)(DAT_001ac618 + 0x1ac3c4),uVar17);
      pcVar13 = (char *)(DAT_001ac61c + 0x1ac3d0);
    }
    else {
      if (unaff_r4 != 7) {
        if (unaff_r4 == 0xb) {
          if ((*(EventRaid2RewardScreen **)(unaff_r5 + 0x14) == (EventRaid2RewardScreen *)0x0) ||
             (iVar18 = EventRaid2RewardScreen::isActive
                                 (*(EventRaid2RewardScreen **)(unaff_r5 + 0x14)),
             param_1 = extraout_s0_01, iVar18 != 0)) goto LAB_001ac558;
          this_05 = *(CapcomGame **)(unaff_r5 + 0xc);
          pGVar6 = (GameStateEventRaid2Menu *)operator_new(0x114);
          GameStateEventRaid2Menu::GameStateEventRaid2Menu(pGVar6);
          this = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(this,(GameState *)pGVar6);
        }
        else {
          if (((unaff_r4 != 0xc) ||
              (*(EventRaid2RewardScreen **)(unaff_r5 + 0x14) == (EventRaid2RewardScreen *)0x0)) ||
             (iVar18 = EventRaid2RewardScreen::isActive
                                 (*(EventRaid2RewardScreen **)(unaff_r5 + 0x14)),
             param_1 = extraout_s0_02, iVar18 != 0)) goto LAB_001ac558;
          this_05 = *(CapcomGame **)(unaff_r5 + 0xc);
          pGVar6 = (GameStateEventRaid2Menu *)operator_new(0x114);
          GameStateEventRaid2Menu::GameStateEventRaid2Menu(pGVar6);
          this = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(this,(GameState *)pGVar6);
        }
        param_1 = (float)CapcomGame::setNextState(this_05,(GameState *)this);
        goto LAB_001ac558;
      }
      *unaff_r7 = 0xc;
      uVar17 = GameStateEventRaid2::getTokkouPoint(unaff_r5);
      uVar4 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x60));
      uVar4 = __mulsf3(uVar4,*(undefined4 *)(unaff_r5 + 0xd4));
      uVar17 = __floatsisf(uVar17);
      __addsf3(uVar4,uVar17);
      iVar18 = __fixsfsi();
      iVar19 = *(int *)(DAT_001ac620 + *(int *)(unaff_r5 + 0x30) * 4 + 0x1ac434);
      iVar21 = 3;
      if (unaff_r5[0x14e] == (GameStateEventRaid2)0x0) {
        iVar21 = 1;
      }
      ZombieCafe::addEventRaid2_totalPoint(*(ZombieCafe **)(unaff_r5 + 0xc),iVar18 * iVar21);
      ZombieCafe::save();
      pEVar5 = (EventRaid2RewardScreen *)operator_new(0xc0);
      iVar15 = *(int *)(unaff_r5 + 0x6c);
      iVar11 = *(int *)(unaff_r5 + 0x60);
      iVar14 = *(int *)(unaff_r5 + 0x5c);
      lVar10 = *(long *)(unaff_r5 + 0xd4);
      iVar16 = *(int *)(unaff_r5 + 0x50);
      uVar24 = __floatsisf(iVar21);
      EventRaid2RewardScreen::EventRaid2RewardScreen
                (pEVar5,iVar14,iVar15,iVar11,(float)uVar24,lVar10,iVar18,iVar16,iVar19,0,
                 (float)((ulonglong)uVar24 >> 0x20));
      *(EventRaid2RewardScreen **)(unaff_r5 + 0x14) = pEVar5;
      (**(code **)(*(int *)pEVar5 + 0x1c))(pEVar5,0x12);
      iVar18 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
      (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x14))
                (*(int **)(unaff_r5 + 0x14),(iVar18 >> 0x10) - (iVar18 >> 0x1f) >> 1,
                 (int)(short)iVar18 / 2);
      ScreenElement::setOrder
                (*(ScreenElement **)(unaff_r5 + 0x14),
                 (int)**(char **)(in_stack_00000028 + DAT_001ac614));
      (**(code **)(**(int **)(unaff_r5 + 0x88) + 0x2c))
                (*(int **)(unaff_r5 + 0x88),*(undefined4 *)(unaff_r5 + 0x14));
      uVar17 = ZombieCafe::getEventRaid2_totalPoint(*(ZombieCafe **)(unaff_r5 + 0xc));
      memset(&stack0x0000009c,0,0x80);
      snprintf(&stack0x0000009c,0x80,(char *)(DAT_001ac624 + 0x1ac4da),uVar17);
      pcVar13 = (char *)(DAT_001ac628 + 0x1ac4e6);
    }
    param_1 = (float)GameStateEventRaid2::sendMalta(unaff_r5,pcVar13,&stack0x0000009c);
  }
LAB_001ac558:
  if ((unaff_r5[0xd9] != (GameStateEventRaid2)0x0) && (unaff_r5[0xdd] == (GameStateEventRaid2)0x0))
  {
    unaff_r5[0xdd] = (GameStateEventRaid2)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,param_1,false);
    unaff_r5[0x2c] = (GameStateEventRaid2)0x6;
    *(undefined4 *)(unaff_r5 + 0x54) = 0;
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x84),true);
  }
  iStack0000002c = 0;
  do {
    if (*(int *)(unaff_r5 + 0x120) + 1 <= iStack0000002c) {
      fVar23 = (float)__floatsisf(in_stack_00000024);
      GameStateEventRaid2::tickStaffAI(unaff_r5,fVar23);
      fVar23 = (float)Vector<int>::Vector((Vector<int> *)&stack0x00000090);
      for (iVar18 = 0; iVar18 < *(int *)(unaff_r5 + 300) + 1; iVar18 = iVar18 + 1) {
        iVar19 = *(int *)(*(int *)(unaff_r5 + 0x130) + iVar18 * 4);
        if ((*(char *)(iVar19 + 0x34) == '\x06') &&
           (iVar19 = (**(code **)(**(int **)(iVar19 + 0x90) + 0x1c))(), iVar19 != 0)) {
          fVar23 = (float)Vector<int>::addElement((Vector<int> *)&stack0x00000090,iVar18);
        }
        else {
          piVar12 = *(int **)(*(int *)(unaff_r5 + 0x130) + iVar18 * 4);
          fVar23 = (float)(**(code **)(*piVar12 + 0x1c))(piVar12,in_stack_00000024);
        }
      }
      iStack0000002c = in_stack_00000094 << 2;
      for (iVar18 = in_stack_00000094; -1 < iVar18; iVar18 = iVar18 + -1) {
        pCVar20 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r5 + 0x128),
                             *(int *)(in_stack_00000098 + iStack0000002c));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x80) + 0x20),pCVar20);
        this_04 = *(Character **)(pCVar20 + 0x8c);
        this_02 = *(CharacterData **)this_04;
        *(undefined4 *)this_04 = 0;
        *(undefined4 *)(pCVar20 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar20 + 4))(pCVar20);
        Character::~Character(this_04);
        operator_delete(this_04);
        fVar23 = extraout_s0_03;
        if (this_02 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_02);
          operator_delete(this_02);
          fVar23 = extraout_s0_04;
        }
        iStack0000002c = iStack0000002c + -4;
      }
      if (unaff_r5[0xda] == (GameStateEventRaid2)0x0) {
        unaff_r5[0xda] = (GameStateEventRaid2)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,7,fVar23,false);
      }
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_001aca64) != '\0') {
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_001aca64) = 0;
        iVar18 = HudElement::isButtonAvailability(*(HudElement **)(unaff_r5 + 0x84),8);
        if (iVar18 != 0) {
          pCVar22 = *(ConfirmDialog **)(unaff_r5 + 0x9c);
          String::String((String *)&stack0x00000088,(char *)(DAT_001aca68 + 0x1ac97e));
          Vector<String>::elementAt((int)&stack0x00000078);
          Vector<String>::elementAt((int)&stack0x00000080);
          ConfirmDialog::show(pCVar22,&stack0x00000088,&stack0x00000078,&stack0x00000080);
          String::~String((String *)&stack0x00000080);
          String::~String((String *)&stack0x00000078);
          String::~String((String *)&stack0x00000088);
        }
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x00000090);
      FUN_001acafe();
      return;
    }
    this_03 = *(CharacterInstance **)(iStack0000002c * 4 + *(int *)(unaff_r5 + 0x124));
    sVar1 = *(short *)(this_03 + 0x2c);
    iVar18 = **(int **)(in_stack_00000028 + DAT_001ac62c);
    uVar7 = __divsi3((int)sVar1,iVar18);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar7 & 0xffff | ((int)sVar1 - uVar7 * iVar18) * 0x10000) >> 0x10,
               (int)(short)uVar7);
    iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_03 + 0x8c) + 0x40),0);
    pCVar20 = *(CafeObject **)(this_03 + 0x88);
    if (iVar18 == 0) {
      unaff_r5[0xdc] = (GameStateEventRaid2)0x0;
      if (pCVar20 == (CafeObject *)0x0) goto LAB_001acada;
      iVar18 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),(int)*(short *)(pCVar20 + 0x2c));
      if (iVar18 == 0) {
        *(undefined4 *)(this_03 + 0x88) = 0;
        CharacterInstance::stopTasks(this_03);
      }
      iVar18 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
      if ((iVar18 == 3) &&
         (iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0), iVar18 != 0))
      {
        *(undefined4 *)(this_03 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(this_03 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (this_03 == *(CharacterInstance **)(unaff_r5 + 0x144)) {
        *(undefined4 *)(unaff_r5 + 0x144) = 0;
        Cafe::select(*(Cafe **)(unaff_r5 + 0x80),(CafeObject *)0x0);
      }
      *(undefined4 *)(this_03 + 0x88) = 0;
LAB_001acada:
      pCVar20 = (CafeObject *)0x0;
    }
    if (*(int *)(this_03 + 0x7c) == 0) {
      iVar19 = *(int *)(this_03 + 0x8c);
      iVar18 = __aeabi_fcmple(*(undefined4 *)(iVar19 + 0x40),0);
      if ((iVar18 == 0) && (unaff_r5[0xd9] == (GameStateEventRaid2)0x0)) {
        if (pCVar20 == (CafeObject *)0x0) {
          if (*(char *)(iVar19 + 0x44) == '\x04') {
            iVar18 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),(int)*(short *)(this_03 + 0x2c));
            if (iVar18 == 0) {
              iVar19 = **(int **)(in_stack_00000028 + DAT_001aca58);
              iVar18 = **(int **)(in_stack_00000028 + DAT_001aca5c);
              uVar7 = **(int **)(in_stack_00000028 + DAT_001aca60) + 1;
              CharacterInstance::groan(this_03);
              lVar10 = Cafe::diamondToStaggeredCoords
                                 ((int)(((iVar19 + -1) - iVar18) * 0x10000 | uVar7 & 0xffff) >> 0x10
                                  ,(int)(short)uVar7);
              iVar18 = Cafe::staggeredCoordsToIndex(lVar10);
              this_00 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_00,this_03,*(Cafe **)(unaff_r5 + 0x80),iVar18,'\0'
                                 ,false);
              goto LAB_001ac7c2;
            }
            iVar18 = *(int *)(unaff_r5 + 0x114) + 1;
            if (0 < iVar18) {
              iVar19 = CapcomMath::random(iVar18);
              iStack00000030 = 0;
              do {
                if (iVar18 <= iVar19) {
                  iVar19 = 0;
                }
                iVar21 = *(int *)(iVar19 * 4 + *(int *)(unaff_r5 + 0x118));
                if (((iVar21 != 0) &&
                    (iVar11 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar21 + 0x8c) + 0x40),0),
                    iVar11 == 0)) &&
                   (iVar11 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),
                                            (int)*(short *)(iVar21 + 0x2c)), iVar11 != 0)) {
                  *(int *)(this_03 + 0x88) = iVar21;
                }
                iVar19 = iVar19 + 1;
                iStack00000030 = iStack00000030 + 1;
              } while (iStack00000030 < iVar18);
            }
          }
        }
        else {
          iVar18 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
          if (iVar18 == 3) {
            iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
            if ((iVar18 == 0) &&
               (iVar18 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x80),(int)*(short *)(pCVar20 + 0x2c))
               , iVar18 != 0)) {
              this_01 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_01,this_03,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x80));
              CharacterInstance::addTask(this_03,(Task *)this_01);
              puVar8 = (undefined1 *)operator_new(0xc);
              *puVar8 = 1;
              uVar17 = *(undefined4 *)(in_stack_00000028 + _DAT_001aca54);
              *(GameStateEventRaid2 **)(puVar8 + 8) = unaff_r5;
              *(undefined4 *)(puVar8 + 4) = uVar17;
              puVar9 = (undefined4 *)operator_new(8);
              puVar9[1] = 0;
              *(undefined4 **)(*(int *)(this_01 + 0x10) + 4) = puVar9;
              *(undefined4 **)(this_01 + 0x10) = puVar9;
              *puVar9 = puVar8;
              *(undefined4 *)(*(int *)(this_01 + 0x10) + 4) = 0;
              *(int *)(this_01 + 0x18) = *(int *)(this_01 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(this_03 + 0x88) = 0;
            }
          }
          else {
            iVar18 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
            if (iVar18 == 1) {
              this_00 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_00,this_03,pCVar20,*(Cafe **)(unaff_r5 + 0x80),'\0',false)
              ;
LAB_001ac7c2:
              CharacterInstance::addTask(this_03,(Task *)this_00);
            }
          }
        }
      }
    }
    iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_03 + 0x8c) + 0x40),0);
    if (iVar18 == 0) {
      GameStateEventRaid2::checkOverlap(unaff_r5,this_03);
    }
    (**(code **)(*(int *)this_03 + 0x1c))(this_03,in_stack_00000024);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x80) + 0x20),
               (CafeObject *)this_03);
    iStack0000002c = iStack0000002c + 1;
  } while( true );
}


