/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00138c9a FUN_00138c9a */

void FUN_00138c9a(void)

{
  short sVar1;
  int *piVar2;
  ColosseumRewardScreen *pCVar3;
  ScreenElement *pSVar4;
  String *this;
  GameStateCafe *this_00;
  GameStateLoading *this_01;
  GameStateSurvivalMenu *this_02;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  FollowTask *this_03;
  int iVar8;
  AttackTask *this_04;
  undefined4 uVar9;
  CharacterData *this_05;
  GameStateColosseum GVar10;
  code *pcVar11;
  char *pcVar12;
  GameStateColosseum *pGVar13;
  int iVar14;
  int iVar15;
  GameStateColosseum *unaff_r5;
  CharacterInstance *pCVar16;
  Character *this_06;
  ConfirmDialog *pCVar17;
  CapcomGame *this_07;
  CafeObject *pCVar18;
  int iVar19;
  float extraout_s0;
  float fVar20;
  float extraout_s0_00;
  float extraout_s0_01;
  int in_stack_0000001c;
  long in_stack_00000020;
  int iStack00000028;
  int iStack0000002c;
  int in_stack_000000a4;
  int in_stack_000000a8;
  
  GameStateColosseum::tickColorShift(unaff_r5,in_stack_00000020);
  GameStateColosseum::tickDefault(unaff_r5,in_stack_00000020);
  pGVar13 = unaff_r5 + 0x2c;
  Cafe::tick(*(Cafe **)(unaff_r5 + 0x70),in_stack_00000020);
  GVar10 = *pGVar13;
  if (GVar10 == (GameStateColosseum)0x0) {
    *(undefined4 *)(unaff_r5 + 0x4c) = 0;
    *(undefined4 *)(unaff_r5 + 0x48) = 0;
    *(undefined4 *)(unaff_r5 + 0x54) = 0;
    for (iVar14 = 0; iVar14 < *(int *)(unaff_r5 + 0x118) + 1; iVar14 = iVar14 + 1) {
      pCVar16 = *(CharacterInstance **)(iVar14 * 4 + *(int *)(unaff_r5 + 0x11c));
      iVar15 = GameStateColosseum::getLaunchNumber(unaff_r5,iVar14);
      CharacterInstance::setColosseumSelect(pCVar16,iVar15 != -1);
    }
    (**(code **)(**(int **)(unaff_r5 + 0x6c) + 0x20))(*(int **)(unaff_r5 + 0x6c),1);
    piVar2 = *(int **)(unaff_r5 + 0xc0);
    uVar9 = 1;
    pcVar11 = *(code **)(*piVar2 + 0x20);
  }
  else if (GVar10 == (GameStateColosseum)0x1) {
    *pGVar13 = (GameStateColosseum)0x2;
    GameStateColosseum::setPlayerZombieCafePos();
    GameStateColosseum::setSelectMarkOff(unaff_r5);
    CharacterCommandBar::removeButton(*(int *)(unaff_r5 + 0x9c));
    (**(code **)(**(int **)(unaff_r5 + 0x6c) + 0x20))(*(int **)(unaff_r5 + 0x6c),0);
    pGVar13 = unaff_r5 + 0xc0;
LAB_0013908a:
    piVar2 = *(int **)pGVar13;
    uVar9 = 0;
    pcVar11 = *(code **)(*piVar2 + 0x20);
  }
  else {
    if (GVar10 == (GameStateColosseum)0x2) {
      *(int *)(unaff_r5 + 0x4c) = *(int *)(unaff_r5 + 0x4c) + in_stack_00000020;
      GameStateColosseum::updateTimerText(unaff_r5);
      GameStateColosseum::setZombieAttackStart(unaff_r5);
      GameStateColosseum::addEnemyZombie(unaff_r5,in_stack_00000020);
      iVar14 = GameStateColosseum::playerLoseCheck();
      if (iVar14 == 0) goto LAB_001390fc;
      iVar14 = 0;
      iVar15 = 0;
      do {
        iVar19 = iVar14 + 0x140;
        iVar14 = iVar14 + 1;
        iVar15 = iVar15 + (uint)(unaff_r5[iVar19] != (GameStateColosseum)0xff);
      } while (iVar14 != 6);
      iVar14 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
      if (iVar14 < iVar15) {
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,extraout_s0,false);
        unaff_r5[0x2c] = (GameStateColosseum)0x6;
        *(undefined4 *)(unaff_r5 + 0x50) = 0;
        HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x74),true);
        goto LAB_001390fc;
      }
      pCVar17 = *(ConfirmDialog **)(unaff_r5 + 0x8c);
      String::String((String *)&stack0x00000038,(char *)(DAT_00138ef8 + 0x138d98));
      String::valueOf((int)&stack0x00000040);
      String::operator+((String *)&stack0x00000048,&stack0x00000038,&stack0x00000040);
      String::String((String *)&stack0x00000050,(char *)(DAT_00138efc + 0x138db8));
      String::operator+((String *)&stack0x00000058,&stack0x00000048,&stack0x00000050);
      Vector<String>::elementAt((int)&stack0x00000060);
      Vector<String>::elementAt((int)&stack0x00000068);
      ConfirmDialog::show(pCVar17,&stack0x00000058,&stack0x00000060,&stack0x00000068);
      String::~String((String *)&stack0x00000068);
      String::~String((String *)&stack0x00000060);
      String::~String((String *)&stack0x00000058);
      String::~String((String *)&stack0x00000050);
      String::~String((String *)&stack0x00000048);
      String::~String((String *)&stack0x00000040);
      this = (String *)&stack0x00000038;
LAB_00139018:
      String::~String(this);
      goto LAB_001390fc;
    }
    if (GVar10 == (GameStateColosseum)0x4) {
      *(int *)(unaff_r5 + 0x50) = *(int *)(unaff_r5 + 0x50) + in_stack_00000020;
      GameStateColosseum::tickWinDemo((long)unaff_r5);
      goto LAB_001390fc;
    }
    if (GVar10 == (GameStateColosseum)0x6) {
      *(int *)(unaff_r5 + 0x50) = *(int *)(unaff_r5 + 0x50) + in_stack_00000020;
      GameStateColosseum::tickLoseDemo((long)unaff_r5);
      goto LAB_001390fc;
    }
    if (GVar10 == (GameStateColosseum)0x5) {
      *pGVar13 = (GameStateColosseum)0xb;
      pCVar3 = (ColosseumRewardScreen *)operator_new(0xc0);
      ColosseumRewardScreen::ColosseumRewardScreen
                (pCVar3,*(int *)(unaff_r5 + 0x58),*(long *)(unaff_r5 + 0x4c));
      *(ColosseumRewardScreen **)(unaff_r5 + 0x14) = pCVar3;
      (**(code **)(*(int *)pCVar3 + 0x1c))(pCVar3,0x12);
      iVar14 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
      (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x14))
                (*(int **)(unaff_r5 + 0x14),(iVar14 >> 0x10) - (iVar14 >> 0x1f) >> 1,
                 (int)(short)iVar14 / 2);
      pSVar4 = *(ScreenElement **)(unaff_r5 + 0x14);
      pcVar12 = *(char **)(in_stack_0000001c + DAT_00138f10);
    }
    else {
      if (GVar10 != (GameStateColosseum)0x7) {
        if (GVar10 == (GameStateColosseum)0x8) {
          if (*(int *)(unaff_r5 + 0x148) != 1) {
            if (*(int *)(unaff_r5 + 0x148) != 2) {
              GameStateColosseum::drawConnectWindow(unaff_r5,in_stack_00000020);
              goto LAB_001390fc;
            }
            pCVar17 = *(ConfirmDialog **)(unaff_r5 + 0x8c);
            if ((pCVar17 == (ConfirmDialog *)0x0) || (*(int *)(unaff_r5 + 0x90) == 0))
            goto LAB_001390fc;
            String::String((String *)&stack0x00000070,(char *)(DAT_00139294 + 0x138fd2));
            String::String((String *)&stack0x00000078,(char *)(DAT_00139298 + 0x138fdc));
            String::String((String *)&stack0x00000080,(char *)(DAT_0013929c + 0x138fe6));
            ConfirmDialog::show(pCVar17,&stack0x00000070,&stack0x00000078,&stack0x00000080);
            String::~String((String *)&stack0x00000080);
            String::~String((String *)&stack0x00000078);
            this = (String *)&stack0x00000070;
            goto LAB_00139018;
          }
          GVar10 = (GameStateColosseum)0xc;
        }
        else {
          if (GVar10 != (GameStateColosseum)0x9) {
            if (GVar10 != (GameStateColosseum)0xa) {
              if (GVar10 == (GameStateColosseum)0xb) {
                if ((*(ColosseumRewardScreen **)(unaff_r5 + 0x14) == (ColosseumRewardScreen *)0x0)
                   || (iVar14 = ColosseumRewardScreen::isActive
                                          (*(ColosseumRewardScreen **)(unaff_r5 + 0x14)),
                      iVar14 != 0)) goto LAB_001390fc;
                this_07 = *(CapcomGame **)(unaff_r5 + 0xc);
                this_00 = (GameStateCafe *)operator_new(0x200);
                GameStateCafe::GameStateCafe(this_00);
                this_01 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
              }
              else {
                if (((GVar10 != (GameStateColosseum)0xc) ||
                    (*(ColosseumRewardScreen **)(unaff_r5 + 0x14) == (ColosseumRewardScreen *)0x0))
                   || (iVar14 = ColosseumRewardScreen::isActive
                                          (*(ColosseumRewardScreen **)(unaff_r5 + 0x14)),
                      iVar14 != 0)) goto LAB_001390fc;
                this_07 = *(CapcomGame **)(unaff_r5 + 0xc);
                this_02 = (GameStateSurvivalMenu *)operator_new(0xc4);
                GameStateSurvivalMenu::GameStateSurvivalMenu(this_02);
                this_01 = (GameStateLoading *)operator_new(0x2c);
                GameStateLoading::GameStateLoading(this_01,(GameState *)this_02);
              }
              CapcomGame::setNextState(this_07,(GameState *)this_01);
              goto LAB_001390fc;
            }
            unaff_r5[0x2c] = (GameStateColosseum)0xc;
            (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),0);
            (**(code **)(**(int **)(unaff_r5 + 0xb8) + 0x20))(*(int **)(unaff_r5 + 0xb8),0);
            pGVar13 = unaff_r5 + 0xbc;
            goto LAB_0013908a;
          }
          (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),0);
          (**(code **)(**(int **)(unaff_r5 + 0xb8) + 0x20))(*(int **)(unaff_r5 + 0xb8),0);
          (**(code **)(**(int **)(unaff_r5 + 0xbc) + 0x20))(*(int **)(unaff_r5 + 0xbc),0);
          javaIsConnected();
          GameStateColosseum::sendResult(unaff_r5);
          GVar10 = (GameStateColosseum)0x8;
        }
        *pGVar13 = GVar10;
        goto LAB_001390fc;
      }
      *(undefined4 *)(unaff_r5 + 0x14c) = 0;
      GameStateColosseum::sendResult(unaff_r5);
      memset(&stack0x000000ac,0,0x80);
      snprintf(&stack0x000000ac,0x80,(char *)(DAT_00139280 + 0x138f3c),
               *(undefined4 *)(unaff_r5 + 0x58));
      GameStateColosseum::sendMalta(unaff_r5,(char *)(DAT_00139284 + 0x138f4c),&stack0x000000ac);
      *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0013928c) = DAT_00139288;
      *pGVar13 = (GameStateColosseum)0x8;
      pCVar3 = (ColosseumRewardScreen *)operator_new(0xc0);
      ColosseumRewardScreen::ColosseumRewardScreen
                (pCVar3,*(int *)(unaff_r5 + 0x58),*(long *)(unaff_r5 + 0x4c));
      *(ColosseumRewardScreen **)(unaff_r5 + 0x14) = pCVar3;
      (**(code **)(*(int *)pCVar3 + 0x1c))(pCVar3,0x12);
      iVar14 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
      (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x14))
                (*(int **)(unaff_r5 + 0x14),(iVar14 >> 0x10) - (iVar14 >> 0x1f) >> 1,
                 (int)(short)iVar14 / 2);
      pSVar4 = *(ScreenElement **)(unaff_r5 + 0x14);
      pcVar12 = *(char **)(in_stack_0000001c + DAT_00139290);
    }
    ScreenElement::setOrder(pSVar4,(int)*pcVar12);
    piVar2 = *(int **)(unaff_r5 + 0x78);
    uVar9 = *(undefined4 *)(unaff_r5 + 0x14);
    pcVar11 = *(code **)(*piVar2 + 0x2c);
  }
  (*pcVar11)(piVar2,uVar9);
LAB_001390fc:
  fVar20 = (float)GameStateColosseum::updateKillCountScale(unaff_r5);
  if ((unaff_r5[0xd1] != (GameStateColosseum)0x0) && (unaff_r5[0xd5] == (GameStateColosseum)0x0)) {
    unaff_r5[0xd5] = (GameStateColosseum)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,fVar20,false);
    unaff_r5[0x2c] = (GameStateColosseum)0x6;
    *(undefined4 *)(unaff_r5 + 0x50) = 0;
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x74),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x74),true);
  }
  iStack00000028 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x118) + 1 <= iStack00000028) {
      fVar20 = (float)__floatsisf(in_stack_00000020);
      GameStateColosseum::tickStaffAI(unaff_r5,fVar20);
      fVar20 = (float)Vector<int>::Vector((Vector<int> *)&stack0x000000a0);
      for (iVar14 = 0; iVar14 < *(int *)(unaff_r5 + 0x124) + 1; iVar14 = iVar14 + 1) {
        iVar15 = *(int *)(*(int *)(unaff_r5 + 0x128) + iVar14 * 4);
        if ((*(char *)(iVar15 + 0x34) == '\x06') &&
           (iVar15 = (**(code **)(**(int **)(iVar15 + 0x90) + 0x1c))(), iVar15 != 0)) {
          fVar20 = (float)Vector<int>::addElement((Vector<int> *)&stack0x000000a0,iVar14);
        }
        else {
          piVar2 = *(int **)(*(int *)(unaff_r5 + 0x128) + iVar14 * 4);
          fVar20 = (float)(**(code **)(*piVar2 + 0x1c))(piVar2,in_stack_00000020);
        }
      }
      iStack00000028 = in_stack_000000a4 << 2;
      for (iVar14 = in_stack_000000a4; -1 < iVar14; iVar14 = iVar14 + -1) {
        pCVar18 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(unaff_r5 + 0x120),
                             *(int *)(in_stack_000000a8 + iStack00000028));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x70) + 0x20),pCVar18);
        this_06 = *(Character **)(pCVar18 + 0x8c);
        this_05 = *(CharacterData **)this_06;
        *(undefined4 *)this_06 = 0;
        *(undefined4 *)(pCVar18 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar18 + 4))(pCVar18);
        Character::~Character(this_06);
        operator_delete(this_06);
        fVar20 = extraout_s0_00;
        if (this_05 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_05);
          operator_delete(this_05);
          fVar20 = extraout_s0_01;
        }
        iStack00000028 = iStack00000028 + -4;
      }
      if (unaff_r5[0xd2] == (GameStateColosseum)0x0) {
        unaff_r5[0xd2] = (GameStateColosseum)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,7,fVar20,false);
      }
      if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0013963c) != '\0') {
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0013963c) = 0;
        pCVar17 = *(ConfirmDialog **)(unaff_r5 + 0x8c);
        String::String((String *)&stack0x00000098,(char *)(DAT_00139640 + 0x139522));
        Vector<String>::elementAt((int)&stack0x00000088);
        Vector<String>::elementAt((int)&stack0x00000090);
        ConfirmDialog::show(pCVar17,&stack0x00000098,&stack0x00000088,&stack0x00000090);
        String::~String((String *)&stack0x00000090);
        String::~String((String *)&stack0x00000088);
        String::~String((String *)&stack0x00000098);
      }
      Vector<int>::~Vector((Vector<int> *)&stack0x000000a0);
      FUN_00139672();
      return;
    }
    pCVar16 = *(CharacterInstance **)(iStack00000028 * 4 + *(int *)(unaff_r5 + 0x11c));
    sVar1 = *(short *)(pCVar16 + 0x2c);
    piVar2 = *(int **)(in_stack_0000001c + DAT_001392a8);
    iVar14 = *piVar2;
    uVar5 = __divsi3((int)sVar1,iVar14);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar5 & 0xffff | ((int)sVar1 - uVar5 * iVar14) * 0x10000) >> 0x10,
               (int)(short)uVar5);
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    pCVar18 = *(CafeObject **)(pCVar16 + 0x88);
    if (iVar14 == 0) {
      unaff_r5[0xd4] = (GameStateColosseum)0x0;
      if (pCVar18 == (CafeObject *)0x0) goto LAB_00139650;
      iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x70),(int)*(short *)(pCVar18 + 0x2c));
      if (iVar14 == 0) {
        *(undefined4 *)(pCVar16 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar16);
      }
      iVar14 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
      if ((iVar14 == 3) &&
         (iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0), iVar14 != 0))
      {
        *(undefined4 *)(pCVar16 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar16 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar16 == *(CharacterInstance **)(unaff_r5 + 0x13c)) {
        *(undefined4 *)(unaff_r5 + 0x13c) = 0;
        Cafe::select(*(Cafe **)(unaff_r5 + 0x70),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar16 + 0x88) = 0;
LAB_00139650:
      pCVar18 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar16 + 0x7c) == 0) {
      iVar15 = *(int *)(pCVar16 + 0x8c);
      iVar14 = __aeabi_fcmple(*(undefined4 *)(iVar15 + 0x40),0);
      if ((iVar14 == 0) && (unaff_r5[0xd1] == (GameStateColosseum)0x0)) {
        if (pCVar18 == (CafeObject *)0x0) {
          if (*(char *)(iVar15 + 0x44) == '\x04') {
            iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x70),(int)*(short *)(pCVar16 + 0x2c));
            if (iVar14 == 0) {
              iVar15 = **(int **)(in_stack_0000001c + iRam00139630);
              iVar14 = **(int **)(in_stack_0000001c + DAT_00139634);
              uVar5 = **(int **)(in_stack_0000001c + DAT_00139638) + 1;
              CharacterInstance::groan(pCVar16);
              iVar14 = Cafe::diamondToStaggeredCoords
                                 ((int)(((iVar15 + -1) - iVar14) * 0x10000 | uVar5 & 0xffff) >> 0x10
                                  ,(int)(short)uVar5);
              iVar15 = *piVar2;
              this_03 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_03,pCVar16,*(Cafe **)(unaff_r5 + 0x70),
                                 (iVar14 >> 0x10) + (short)iVar14 * iVar15,'\0',false);
              goto LAB_00139382;
            }
            iVar14 = *(int *)(unaff_r5 + 0x10c) + 1;
            if (0 < iVar14) {
              iVar15 = CapcomMath::random(iVar14);
              iStack0000002c = 0;
              do {
                if (iVar14 <= iVar15) {
                  iVar15 = 0;
                }
                iVar19 = *(int *)(iVar15 * 4 + *(int *)(unaff_r5 + 0x110));
                if (((iVar19 != 0) &&
                    (iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar19 + 0x8c) + 0x40),0),
                    iVar8 == 0)) &&
                   (iVar8 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x70),
                                           (int)*(short *)(iVar19 + 0x2c)), iVar8 != 0)) {
                  *(int *)(pCVar16 + 0x88) = iVar19;
                }
                iVar15 = iVar15 + 1;
                iStack0000002c = iStack0000002c + 1;
              } while (iStack0000002c < iVar14);
            }
          }
        }
        else {
          iVar14 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
          if (iVar14 == 3) {
            iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
            if ((iVar14 == 0) &&
               (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x70),(int)*(short *)(pCVar18 + 0x2c))
               , iVar14 != 0)) {
              this_04 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_04,pCVar16,(CharacterInstance *)pCVar18,*(Cafe **)(unaff_r5 + 0x70));
              CharacterInstance::addTask(pCVar16,(Task *)this_04);
              puVar6 = (undefined1 *)operator_new(0xc);
              *puVar6 = 1;
              uVar9 = *(undefined4 *)(in_stack_0000001c + iRam0013962c);
              *(GameStateColosseum **)(puVar6 + 8) = unaff_r5;
              *(undefined4 *)(puVar6 + 4) = uVar9;
              puVar7 = (undefined4 *)operator_new(8);
              puVar7[1] = 0;
              *(undefined4 **)(*(int *)(this_04 + 0x10) + 4) = puVar7;
              *(undefined4 **)(this_04 + 0x10) = puVar7;
              *puVar7 = puVar6;
              *(undefined4 *)(*(int *)(this_04 + 0x10) + 4) = 0;
              *(int *)(this_04 + 0x18) = *(int *)(this_04 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar16 + 0x88) = 0;
            }
          }
          else {
            iVar14 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
            if (iVar14 == 1) {
              this_03 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_03,pCVar16,pCVar18,*(Cafe **)(unaff_r5 + 0x70),'\0',false)
              ;
LAB_00139382:
              CharacterInstance::addTask(pCVar16,(Task *)this_03);
            }
          }
        }
      }
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      GameStateColosseum::checkOverlap(unaff_r5,pCVar16);
    }
    (**(code **)(*(int *)pCVar16 + 0x1c))(pCVar16,in_stack_00000020);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x70) + 0x20),
               (CafeObject *)pCVar16);
    iStack00000028 = iStack00000028 + 1;
  } while( true );
}


