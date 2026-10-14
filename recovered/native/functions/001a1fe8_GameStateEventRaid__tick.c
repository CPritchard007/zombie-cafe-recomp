/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a1fe8 GameStateEventRaid::tick */

/* GameStateEventRaid::tick(long) */

void __thiscall GameStateEventRaid::tick(GameStateEventRaid *this,long param_1)

{
  short sVar1;
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar2;
  CharacterCommandBar *this_01;
  String *this_02;
  GameStateEventRaidMenu *pGVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  FollowTask *this_03;
  long lVar6;
  int iVar7;
  int *piVar8;
  AttackTask *this_04;
  int iVar9;
  CharacterData *this_05;
  int iVar10;
  GameStateEventRaid GVar11;
  GameStateEventRaid *pGVar12;
  undefined4 uVar13;
  int iVar14;
  CharacterInstance *this_06;
  Character *this_07;
  ConfirmDialog *pCVar15;
  CapcomGame *pCVar16;
  uint uVar17;
  uint uVar18;
  CafeObject *pCVar19;
  int iVar20;
  float extraout_s0;
  float extraout_s0_00;
  float fVar21;
  int iStack_9c;
  int iStack_94;
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  String aSStack_2c [8];
  Vector<int> aVStack_24 [4];
  int iStack_20;
  int iStack_1c;
  
  iVar9 = DAT_001a2350 + 0x1a1ff8;
  ZombieCafe::tickPlaySecAnalysis_raid(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar16 = *(CapcomGame **)(this + 0xc);
  if (pCVar16[DAT_001a2354] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
    CapcomGame::setNextState(pCVar16,(GameState *)pGVar2);
    this[0x11] = (GameStateEventRaid)0x1;
    FUN_001a28f4();
  }
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  pGVar12 = this + 0xb0;
  iVar10 = *(int *)pGVar12;
  *(int *)pGVar12 = iVar10 - param_1;
  if ((iVar10 - param_1 < 1) && (this[0xb8] == (GameStateEventRaid)0x0)) {
    *(undefined4 *)pGVar12 = **(undefined4 **)(iVar9 + DAT_001a2358);
  }
  if (*(int *)(this + 0x124) == 0) {
    this_01 = *(CharacterCommandBar **)(this + 0x88);
    if ((byte)this_01[0xb8] - 1 < 2) {
      CharacterCommandBar::close(this_01);
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0x88) + 0xb8) - 1) {
    Cafe::select(*(Cafe **)(this + 0x5c),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x124) = 0;
  }
  (**(code **)(**(int **)(this + 100) + 8))(*(int **)(this + 100),param_1);
  if (*(char *)(*(int *)(this + 0x70) + 0x14) != '\0') {
    FUN_001a28f4();
  }
  if (*(char *)(*(int *)(this + 0x78) + 0x14) != '\0') {
    FUN_001a28f4();
  }
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    FUN_001a28f4();
  }
  uVar17 = (uint)*(byte *)(*(int *)(this + 0x74) + 0x14);
  if (uVar17 != 0) {
    FUN_001a28f4();
  }
  tickColorShift(this,param_1);
  tickDefault(this,param_1);
  fVar21 = (float)Cafe::tick(*(Cafe **)(this + 0x5c),param_1);
  GVar11 = this[0x18];
  if (GVar11 == (GameStateEventRaid)0x0) {
    fVar21 = (float)FUN_001a2104();
  }
  if (GVar11 == (GameStateEventRaid)0x1) {
    *(uint *)(this + 0x38) = uVar17;
    *(uint *)(this + 0x34) = uVar17;
    *(uint *)(this + 0x40) = uVar17;
    this[0x18] = (GameStateEventRaid)0x2;
    setPlayerZombieCafePos(this);
    setSelectMarkOff(this);
    goto LAB_001a23d8;
  }
  if (GVar11 == (GameStateEventRaid)0x2) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + param_1;
    setZombieAttackStart(this);
    iVar10 = playerLoseCheck();
    if (iVar10 == 0) {
      iVar10 = playerWinCheck();
      if (iVar10 != 0) {
        this[0x18] = (GameStateEventRaid)0x4;
        *(undefined4 *)(this + 0x3c) = 0;
        fVar21 = (float)HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar21,false);
        this[0xb8] = (GameStateEventRaid)0x1;
      }
      goto LAB_001a23d8;
    }
    HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
    uVar18 = uVar17;
    do {
      iVar10 = uVar18 + 0x128;
      uVar18 = uVar18 + 1;
      uVar17 = uVar17 + (this[iVar10] != (GameStateEventRaid)0xff);
    } while (uVar18 != 6);
    iVar10 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    GVar11 = (GameStateEventRaid)0xf;
    if (iVar10 < (int)uVar17) goto LAB_001a2336;
    pCVar15 = *(ConfirmDialog **)(this + 0x78);
    String::String(aSStack_8c,(char *)(DAT_001a235c + 0x1a2184));
    String::valueOf((int)aSStack_84);
    String::operator+(aSStack_7c,aSStack_8c,aSStack_84);
    String::String(aSStack_74,(char *)(DAT_001a2360 + 0x1a21a0));
    String::operator+(aSStack_6c,aSStack_7c,aSStack_74);
    Vector<String>::elementAt((int)aSStack_64);
    Vector<String>::elementAt((int)aSStack_5c);
    ConfirmDialog::show(pCVar15,aSStack_6c,aSStack_64,aSStack_5c,
                        *(undefined4 *)(iVar9 + DAT_001a236c),*(undefined4 *)(iVar9 + DAT_001a2370),
                        this,0,0);
    String::~String(aSStack_5c);
    String::~String(aSStack_64);
    String::~String(aSStack_6c);
    String::~String(aSStack_74);
    String::~String(aSStack_7c);
    String::~String(aSStack_84);
    this_02 = aSStack_8c;
  }
  else {
    if (GVar11 != (GameStateEventRaid)0xf) {
      if (GVar11 == (GameStateEventRaid)0x4) {
        *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + param_1;
        tickWinDemo((long)this);
        goto LAB_001a23d8;
      }
      if (GVar11 == (GameStateEventRaid)0x5) {
        if (*(char *)(*(int *)(this + 0x94) + 0x14) == '\0') {
          tickEvolutionDemo(this);
        }
        goto LAB_001a23d8;
      }
      if (GVar11 == (GameStateEventRaid)0x7) {
        fVar21 = (float)ZombieCafe::stopMusic(fVar21);
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),1,6,fVar21,false);
        *(undefined4 *)(this + 0x3c) = 0;
        GVar11 = (GameStateEventRaid)0x8;
      }
      else {
        if (GVar11 != (GameStateEventRaid)0x6) {
          if (GVar11 == (GameStateEventRaid)0x8) {
            *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + param_1;
            tickLoseDemo((long)this);
          }
          else {
            if (GVar11 == (GameStateEventRaid)0xb) {
              if ((*(EventRaidRewardScreen **)(this + 0x14) == (EventRaidRewardScreen *)0x0) ||
                 (iVar10 = EventRaidRewardScreen::isActive(*(EventRaidRewardScreen **)(this + 0x14))
                 , iVar10 != 0)) goto LAB_001a23d8;
              pCVar16 = *(CapcomGame **)(this + 0xc);
              pGVar3 = (GameStateEventRaidMenu *)operator_new(0xbc);
              GameStateEventRaidMenu::GameStateEventRaidMenu(pGVar3);
              pGVar2 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar3);
            }
            else {
              if (GVar11 != (GameStateEventRaid)0xc) goto LAB_001a23d8;
              pCVar16 = *(CapcomGame **)(this + 0xc);
              pGVar3 = (GameStateEventRaidMenu *)operator_new(0xbc);
              GameStateEventRaidMenu::GameStateEventRaidMenu(pGVar3);
              pGVar2 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar3);
            }
            CapcomGame::setNextState(pCVar16,(GameState *)pGVar2);
          }
          goto LAB_001a23d8;
        }
        GVar11 = (GameStateEventRaid)0xb;
      }
LAB_001a2336:
      this[0x18] = GVar11;
      goto LAB_001a23d8;
    }
    ZombieCafe::subEventRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
    iVar10 = ZombieCafe::getEventRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
    if (iVar10 < 1) {
      this[0x18] = (GameStateEventRaid)0x7;
      HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
      goto LAB_001a23d8;
    }
    pCVar15 = *(ConfirmDialog **)(this + 0x78);
    String::String(aSStack_54,(char *)(DAT_001a2374 + 0x1a2270));
    Vector<String>::elementAt((int)aSStack_4c);
    Vector<String>::elementAt((int)aSStack_44);
    ConfirmDialog::show(pCVar15,aSStack_54,aSStack_4c,aSStack_44,
                        *(undefined4 *)(iVar9 + DAT_001a2378),*(undefined4 *)(iVar9 + DAT_001a237c),
                        this,0,0);
    String::~String(aSStack_44);
    String::~String(aSStack_4c);
    this_02 = aSStack_54;
  }
  String::~String(this_02);
LAB_001a23d8:
  if ((this[0xb9] != (GameStateEventRaid)0x0) && (this[0xbd] == (GameStateEventRaid)0x0)) {
    this[0xbd] = (GameStateEventRaid)0x1;
    ZombieCafe::subEventRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
    this[0x18] = (GameStateEventRaid)0x7;
    *(undefined4 *)(this + 0x3c) = 0;
    HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  }
  iStack_9c = 0;
  do {
    if (*(int *)(this + 0x100) + 1 <= iStack_9c) {
      fVar21 = (float)__floatsisf(param_1);
      tickStaffAI(this,fVar21);
      fVar21 = (float)Vector<int>::Vector(aVStack_24);
      for (iVar10 = 0; iVar10 < *(int *)(this + 0x10c) + 1; iVar10 = iVar10 + 1) {
        iVar14 = *(int *)(*(int *)(this + 0x110) + iVar10 * 4);
        if ((*(char *)(iVar14 + 0x34) == '\x06') &&
           (iVar14 = (**(code **)(**(int **)(iVar14 + 0x90) + 0x1c))(), iVar14 != 0)) {
          fVar21 = (float)Vector<int>::addElement(aVStack_24,iVar10);
        }
        else {
          piVar8 = *(int **)(*(int *)(this + 0x110) + iVar10 * 4);
          fVar21 = (float)(**(code **)(*piVar8 + 0x1c))(piVar8,param_1);
        }
      }
      iStack_9c = iStack_20 << 2;
      for (iVar10 = iStack_20; -1 < iVar10; iVar10 = iVar10 + -1) {
        pCVar19 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(this + 0x108),
                             *(int *)(iStack_1c + iStack_9c));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x5c) + 0x20),pCVar19);
        this_07 = *(Character **)(pCVar19 + 0x8c);
        this_05 = *(CharacterData **)this_07;
        *(undefined4 *)this_07 = 0;
        *(undefined4 *)(pCVar19 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar19 + 4))(pCVar19);
        Character::~Character(this_07);
        operator_delete(this_07);
        fVar21 = extraout_s0;
        if (this_05 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_05);
          operator_delete(this_05);
          fVar21 = extraout_s0_00;
        }
        iStack_9c = iStack_9c + -4;
      }
      if (this[0xba] == (GameStateEventRaid)0x0) {
        this[0xba] = (GameStateEventRaid)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,7,fVar21,false);
      }
      iVar10 = isBackKeyEnable(this);
      if ((iVar10 != 0) && (*(char *)(*(int *)(this + 0xc) + DAT_001a28f8) != '\0')) {
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_001a28f8) = 0;
        pCVar15 = *(ConfirmDialog **)(this + 0x78);
        String::String(aSStack_2c,(char *)(DAT_001a28fc + 0x1a27c2));
        Vector<String>::elementAt((int)aSStack_3c);
        Vector<String>::elementAt((int)aSStack_34);
        ConfirmDialog::show(pCVar15,aSStack_2c,aSStack_3c,aSStack_34,
                            *(undefined4 *)(iVar9 + DAT_001a2908),this);
        String::~String(aSStack_34);
        String::~String(aSStack_3c);
        String::~String(aSStack_2c);
      }
      Vector<int>::~Vector(aVStack_24);
      FUN_001a28f4();
      return;
    }
    this_06 = *(CharacterInstance **)(iStack_9c * 4 + *(int *)(this + 0x104));
    sVar1 = *(short *)(this_06 + 0x2c);
    iVar10 = **(int **)(iVar9 + DAT_001a2718);
    uVar17 = __divsi3((int)sVar1,iVar10);
    Cafe::staggeredToDiamondCoords
              ((int)(((int)sVar1 - uVar17 * iVar10) * 0x10000 | uVar17 & 0xffff) >> 0x10,
               (int)(short)uVar17);
    iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_06 + 0x8c) + 0x40),0);
    pCVar19 = *(CafeObject **)(this_06 + 0x88);
    if (iVar10 == 0) {
      this[0xbc] = (GameStateEventRaid)0x0;
      if (pCVar19 == (CafeObject *)0x0) goto LAB_001a28d2;
      iVar10 = Cafe::isInside(*(Cafe **)(this + 0x5c),(int)*(short *)(pCVar19 + 0x2c));
      if (iVar10 == 0) {
        *(undefined4 *)(this_06 + 0x88) = 0;
        CharacterInstance::stopTasks(this_06);
      }
      iVar10 = (**(code **)(*(int *)pCVar19 + 0x14))(pCVar19);
      if ((iVar10 == 3) &&
         (iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0), iVar10 != 0))
      {
        *(undefined4 *)(this_06 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(this_06 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (this_06 == *(CharacterInstance **)(this + 0x124)) {
        *(undefined4 *)(this + 0x124) = 0;
        Cafe::select(*(Cafe **)(this + 0x5c),(CafeObject *)0x0);
      }
      *(undefined4 *)(this_06 + 0x88) = 0;
LAB_001a28d2:
      pCVar19 = (CafeObject *)0x0;
    }
    if (*(int *)(this_06 + 0x7c) == 0) {
      iVar14 = *(int *)(this_06 + 0x8c);
      iVar10 = __aeabi_fcmple(*(undefined4 *)(iVar14 + 0x40),0);
      if ((iVar10 == 0) && (this[0xb9] == (GameStateEventRaid)0x0)) {
        if (pCVar19 == (CafeObject *)0x0) {
          if (*(char *)(iVar14 + 0x44) == '\x04') {
            iVar10 = Cafe::isInside(*(Cafe **)(this + 0x5c),(int)*(short *)(this_06 + 0x2c));
            if (iVar10 == 0) {
              iVar14 = **(int **)(iVar9 + DAT_001a2720);
              iVar10 = **(int **)(iVar9 + DAT_001a2724);
              uVar17 = **(int **)(iVar9 + DAT_001a2728) + 1;
              CharacterInstance::groan(this_06);
              lVar6 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar14 + -1) - iVar10) * 0x10000 | uVar17 & 0xffff) >> 0x10
                                 ,(int)(short)uVar17);
              iVar10 = Cafe::staggeredCoordsToIndex(lVar6);
              this_03 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_03,this_06,*(Cafe **)(this + 0x5c),iVar10,'\0',
                                 false);
              goto LAB_001a2602;
            }
            iVar10 = *(int *)(this + 0xf4) + 1;
            if (0 < iVar10) {
              iVar14 = CapcomMath::random(iVar10);
              iStack_94 = 0;
              do {
                if (iVar10 <= iVar14) {
                  iVar14 = 0;
                }
                iVar20 = *(int *)(iVar14 * 4 + *(int *)(this + 0xf8));
                if (((iVar20 != 0) &&
                    (iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar20 + 0x8c) + 0x40),0),
                    iVar7 == 0)) &&
                   (iVar7 = Cafe::isInside(*(Cafe **)(this + 0x5c),(int)*(short *)(iVar20 + 0x2c)),
                   iVar7 != 0)) {
                  *(int *)(this_06 + 0x88) = iVar20;
                }
                iVar14 = iVar14 + 1;
                iStack_94 = iStack_94 + 1;
              } while (iStack_94 < iVar10);
            }
          }
        }
        else {
          iVar10 = (**(code **)(*(int *)pCVar19 + 0x14))(pCVar19);
          if (iVar10 == 3) {
            iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
            if ((iVar10 == 0) &&
               (iVar10 = Cafe::isInside(*(Cafe **)(this + 0x5c),(int)*(short *)(pCVar19 + 0x2c)),
               iVar10 != 0)) {
              this_04 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_04,this_06,(CharacterInstance *)pCVar19,*(Cafe **)(this + 0x5c));
              CharacterInstance::addTask(this_06,(Task *)this_04);
              puVar4 = (undefined1 *)operator_new(0xc);
              *puVar4 = 1;
              uVar13 = *(undefined4 *)(iVar9 + DAT_001a271c);
              *(GameStateEventRaid **)(puVar4 + 8) = this;
              *(undefined4 *)(puVar4 + 4) = uVar13;
              puVar5 = (undefined4 *)operator_new(8);
              puVar5[1] = 0;
              *(undefined4 **)(*(int *)(this_04 + 0x10) + 4) = puVar5;
              *(undefined4 **)(this_04 + 0x10) = puVar5;
              *puVar5 = puVar4;
              *(undefined4 *)(*(int *)(this_04 + 0x10) + 4) = 0;
              *(int *)(this_04 + 0x18) = *(int *)(this_04 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(this_06 + 0x88) = 0;
            }
          }
          else {
            iVar10 = (**(code **)(*(int *)pCVar19 + 0x14))(pCVar19);
            if (iVar10 == 1) {
              this_03 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_03,this_06,pCVar19,*(Cafe **)(this + 0x5c),'\0',false);
LAB_001a2602:
              CharacterInstance::addTask(this_06,(Task *)this_03);
            }
          }
        }
      }
    }
    iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_06 + 0x8c) + 0x40),0);
    if (iVar10 == 0) {
      checkOverlap(this,this_06);
    }
    (**(code **)(*(int *)this_06 + 0x1c))(this_06,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x5c) + 0x20),
               (CafeObject *)this_06);
    iStack_9c = iStack_9c + 1;
  } while( true );
}


