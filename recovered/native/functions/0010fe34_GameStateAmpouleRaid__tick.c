/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010fe34 GameStateAmpouleRaid::tick */

/* GameStateAmpouleRaid::tick(long) */

void __thiscall GameStateAmpouleRaid::tick(GameStateAmpouleRaid *this,long param_1)

{
  short sVar1;
  GameStateMainMenu *this_00;
  GameStateLoading *pGVar2;
  CharacterCommandBar *this_01;
  GameStateCafe *pGVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  FollowTask *this_02;
  int iVar7;
  AttackTask *this_03;
  int iVar8;
  CharacterData *this_04;
  GameStateAmpouleRaid GVar9;
  int iVar10;
  GameStateAmpouleRaid *pGVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  CharacterInstance *pCVar15;
  Character *this_05;
  ConfirmDialog *pCVar16;
  CapcomGame *pCVar17;
  CafeObject *pCVar18;
  int iVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar20;
  int local_84;
  int local_80;
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
  int local_20;
  int local_1c;
  
  iVar8 = DAT_00110170 + 0x10fe44;
  ZombieCafe::tickPlaySecAnalysis_raid(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar17 = *(CapcomGame **)(this + 0xc);
  if (pCVar17[DAT_00110174] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pGVar2 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar2,(GameState *)this_00);
    CapcomGame::setNextState(pCVar17,(GameState *)pGVar2);
    this[0x11] = (GameStateAmpouleRaid)0x1;
    FUN_001106dc();
  }
  *(undefined4 *)(this + 0x11c) = 0xffffffff;
  pGVar11 = this + 0xb4;
  iVar10 = *(int *)pGVar11;
  *(int *)pGVar11 = iVar10 - param_1;
  if ((iVar10 - param_1 < 1) && (this[0xbc] == (GameStateAmpouleRaid)0x0)) {
    *(undefined4 *)pGVar11 = **(undefined4 **)(iVar8 + DAT_00110178);
  }
  if (*(int *)(this + 0x128) == 0) {
    this_01 = *(CharacterCommandBar **)(this + 0x90);
    if ((byte)this_01[0xb8] - 1 < 2) {
      CharacterCommandBar::close(this_01);
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0x90) + 0xb8) - 1) {
    Cafe::select(*(Cafe **)(this + 100),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x128) = 0;
  }
  (**(code **)(**(int **)(this + 0x6c) + 8))(*(int **)(this + 0x6c),param_1);
  if (*(char *)(*(int *)(this + 0x78) + 0x14) != '\0') {
    FUN_001106dc();
  }
  if (*(char *)(*(int *)(this + 0x80) + 0x14) != '\0') {
    FUN_001106dc();
    return;
  }
  if (*(char *)(*(int *)(this + 0x84) + 0x14) != '\0') {
    FUN_001106dc();
    return;
  }
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    FUN_001106dc();
    return;
  }
  tickColorShift(this,param_1);
  tickDefault(this,param_1);
  fVar20 = (float)Cafe::tick(*(Cafe **)(this + 100),param_1);
  GVar9 = this[0x20];
  if (GVar9 == (GameStateAmpouleRaid)0x0) {
    for (iVar10 = 0; iVar10 < *(int *)(this + 0x104) + 1; iVar10 = iVar10 + 1) {
      pCVar15 = *(CharacterInstance **)(iVar10 * 4 + *(int *)(this + 0x108));
      iVar14 = getLaunchNumber(this,iVar10);
      fVar20 = (float)CharacterInstance::setColosseumSelect(pCVar15,iVar14 != -1);
    }
  }
  else if (GVar9 == (GameStateAmpouleRaid)0x1) {
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    this[0x20] = (GameStateAmpouleRaid)0x2;
    setPlayerZombieCafePos();
    fVar20 = (float)setSelectMarkOff(this);
  }
  else if (GVar9 == (GameStateAmpouleRaid)0x2) {
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + param_1;
    setZombieAttackStart(this);
    iVar10 = playerLoseCheck();
    if (iVar10 == 0) {
      iVar10 = playerWinCheck();
      fVar20 = extraout_s0_00;
      if (iVar10 != 0) {
        this[0x20] = (GameStateAmpouleRaid)0x4;
        *(undefined4 *)(this + 0x44) = 0;
        fVar20 = (float)HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
        fVar20 = (float)ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar20,false);
        this[0xbc] = (GameStateAmpouleRaid)0x1;
      }
    }
    else {
      iVar10 = 0;
      iVar14 = 0;
      do {
        iVar19 = iVar10 + 300;
        iVar10 = iVar10 + 1;
        iVar14 = iVar14 + (uint)(this[iVar19] != (GameStateAmpouleRaid)0xff);
      } while (iVar10 != 6);
      iVar10 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
      if (iVar10 < iVar14) {
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,extraout_s0,false);
        this[0x20] = (GameStateAmpouleRaid)0x8;
        *(undefined4 *)(this + 0x44) = 0;
        fVar20 = (float)HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
      }
      else {
        pCVar16 = *(ConfirmDialog **)(this + 0x80);
        String::String(aSStack_74,(char *)(DAT_0011017c + 0x10ffc6));
        String::valueOf((int)aSStack_6c);
        String::operator+(aSStack_64,aSStack_74,aSStack_6c);
        String::String(aSStack_5c,(char *)(DAT_00110180 + 0x10ffe4));
        String::operator+(aSStack_54,aSStack_64,aSStack_5c);
        Vector<String>::elementAt((int)aSStack_4c);
        Vector<String>::elementAt((int)aSStack_44);
        ConfirmDialog::show(pCVar16,aSStack_54,aSStack_4c,aSStack_44,
                            *(undefined4 *)(iVar8 + DAT_0011018c),
                            *(undefined4 *)(iVar8 + DAT_00110190),this,0,0);
        String::~String(aSStack_44);
        String::~String(aSStack_4c);
        String::~String(aSStack_54);
        String::~String(aSStack_5c);
        String::~String(aSStack_64);
        String::~String(aSStack_6c);
        fVar20 = (float)String::~String(aSStack_74);
      }
    }
  }
  else if (GVar9 == (GameStateAmpouleRaid)0x4) {
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + param_1;
    fVar20 = (float)tickWinDemo((long)this);
  }
  else {
    if (GVar9 == (GameStateAmpouleRaid)0x5) {
      if (*(char *)(*(int *)(this + 0x14) + 0x14) != '\0') goto LAB_001101be;
      fVar20 = (float)(**(code **)(**(int **)(this + 0x18) + 0x20))(*(int **)(this + 0x18),1);
      GVar9 = (GameStateAmpouleRaid)0x6;
    }
    else {
      if (GVar9 == (GameStateAmpouleRaid)0x6) {
        if (*(char *)(*(int *)(this + 0x18) + 0x14) == '\0') {
          fVar20 = (float)tickAmpouleGetDemo(this);
        }
        goto LAB_001101be;
      }
      if (GVar9 == (GameStateAmpouleRaid)0x8) {
        *(int *)(this + 0x44) = *(int *)(this + 0x44) + param_1;
        fVar20 = (float)tickLoseDemo((long)this);
        goto LAB_001101be;
      }
      if (GVar9 == (GameStateAmpouleRaid)0x7) {
        GVar9 = (GameStateAmpouleRaid)0xd;
      }
      else {
        if (GVar9 != (GameStateAmpouleRaid)0x9) {
          if (GVar9 == (GameStateAmpouleRaid)0xd) {
            if ((*(AmpouleRaidRewardScreen **)(this + 0x14) == (AmpouleRaidRewardScreen *)0x0) ||
               (iVar10 = AmpouleRaidRewardScreen::isActive
                                   (*(AmpouleRaidRewardScreen **)(this + 0x14)),
               fVar20 = extraout_s0_01, iVar10 != 0)) goto LAB_001101be;
            pCVar17 = *(CapcomGame **)(this + 0xc);
            pGVar3 = (GameStateCafe *)operator_new(0x200);
            GameStateCafe::GameStateCafe(pGVar3);
            pGVar2 = (GameStateLoading *)operator_new(0x2c);
            GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar3);
          }
          else {
            if (GVar9 != (GameStateAmpouleRaid)0xe) goto LAB_001101be;
            pCVar17 = *(CapcomGame **)(this + 0xc);
            pGVar3 = (GameStateCafe *)operator_new(0x200);
            GameStateCafe::GameStateCafe(pGVar3);
            pGVar2 = (GameStateLoading *)operator_new(0x2c);
            GameStateLoading::GameStateLoading(pGVar2,(GameState *)pGVar3);
          }
          fVar20 = (float)CapcomGame::setNextState(pCVar17,(GameState *)pGVar2);
          goto LAB_001101be;
        }
        ZombieCafe::setAmpouleRaid_status(*(ZombieCafe **)(this + 0xc),1);
        fVar20 = (float)enemyStatusSave(this);
        GVar9 = (GameStateAmpouleRaid)0xe;
      }
    }
    this[0x20] = GVar9;
  }
LAB_001101be:
  if ((this[0xbd] != (GameStateAmpouleRaid)0x0) && (this[0xc1] == (GameStateAmpouleRaid)0x0)) {
    this[0xc1] = (GameStateAmpouleRaid)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,fVar20,false);
    this[0x20] = (GameStateAmpouleRaid)0x8;
    *(undefined4 *)(this + 0x44) = 0;
    HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  }
  local_84 = 0;
  do {
    if (*(int *)(this + 0x104) + 1 <= local_84) {
      fVar20 = (float)__floatsisf(param_1);
      tickStaffAI(this,fVar20);
      fVar20 = (float)Vector<int>::Vector(aVStack_24);
      for (iVar10 = 0; iVar10 < *(int *)(this + 0x110) + 1; iVar10 = iVar10 + 1) {
        iVar14 = *(int *)(*(int *)(this + 0x114) + iVar10 * 4);
        if ((*(char *)(iVar14 + 0x34) == '\x06') &&
           (iVar14 = (**(code **)(**(int **)(iVar14 + 0x90) + 0x1c))(), iVar14 != 0)) {
          fVar20 = (float)Vector<int>::addElement(aVStack_24,iVar10);
        }
        else {
          piVar12 = *(int **)(*(int *)(this + 0x114) + iVar10 * 4);
          fVar20 = (float)(**(code **)(*piVar12 + 0x1c))(piVar12,param_1);
        }
      }
      local_84 = local_20 << 2;
      for (iVar10 = local_20; -1 < iVar10; iVar10 = iVar10 + -1) {
        pCVar18 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(this + 0x10c),
                             *(int *)(local_1c + local_84));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 100) + 0x20),pCVar18);
        this_05 = *(Character **)(pCVar18 + 0x8c);
        this_04 = *(CharacterData **)this_05;
        *(undefined4 *)this_05 = 0;
        *(undefined4 *)(pCVar18 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar18 + 4))(pCVar18);
        Character::~Character(this_05);
        operator_delete(this_05);
        fVar20 = extraout_s0_02;
        if (this_04 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_04);
          operator_delete(this_04);
          fVar20 = extraout_s0_03;
        }
        local_84 = local_84 + -4;
      }
      if (this[0xbe] == (GameStateAmpouleRaid)0x0) {
        this[0xbe] = (GameStateAmpouleRaid)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,7,fVar20,false);
      }
      if (*(char *)(*(int *)(this + 0xc) + DAT_001106e0) != '\0') {
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_001106e0) = 0;
        iVar10 = HudElement::isButtonAvailability(*(HudElement **)(this + 0x68),8);
        if (iVar10 != 0) {
          pCVar16 = *(ConfirmDialog **)(this + 0x80);
          String::String(aSStack_2c,(char *)(DAT_001106e4 + 0x1105bc));
          Vector<String>::elementAt((int)aSStack_3c);
          Vector<String>::elementAt((int)aSStack_34);
          ConfirmDialog::show(pCVar16,aSStack_2c,aSStack_3c,aSStack_34,
                              *(undefined4 *)(iVar8 + DAT_001106f0),this);
          String::~String(aSStack_34);
          String::~String(aSStack_3c);
          String::~String(aSStack_2c);
        }
      }
      Vector<int>::~Vector(aVStack_24);
      FUN_001106dc();
      return;
    }
    pCVar15 = *(CharacterInstance **)(local_84 * 4 + *(int *)(this + 0x108));
    sVar1 = *(short *)(pCVar15 + 0x2c);
    piVar12 = *(int **)(iVar8 + DAT_00110510);
    iVar10 = *piVar12;
    uVar4 = __divsi3((int)sVar1,iVar10);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar4 & 0xffff | ((int)sVar1 - uVar4 * iVar10) * 0x10000) >> 0x10,
               (int)(short)uVar4);
    iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar15 + 0x8c) + 0x40),0);
    pCVar18 = *(CafeObject **)(pCVar15 + 0x88);
    if (iVar10 == 0) {
      this[0xc0] = (GameStateAmpouleRaid)0x0;
      if (pCVar18 == (CafeObject *)0x0) goto LAB_001106ba;
      iVar10 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar18 + 0x2c));
      if (iVar10 == 0) {
        *(undefined4 *)(pCVar15 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar15);
      }
      iVar10 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
      if ((iVar10 == 3) &&
         (iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0), iVar10 != 0))
      {
        *(undefined4 *)(pCVar15 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar15 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar15 == *(CharacterInstance **)(this + 0x128)) {
        *(undefined4 *)(this + 0x128) = 0;
        Cafe::select(*(Cafe **)(this + 100),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar15 + 0x88) = 0;
LAB_001106ba:
      pCVar18 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar15 + 0x7c) == 0) {
      iVar14 = *(int *)(pCVar15 + 0x8c);
      iVar10 = __aeabi_fcmple(*(undefined4 *)(iVar14 + 0x40),0);
      if ((iVar10 == 0) && (this[0xbd] == (GameStateAmpouleRaid)0x0)) {
        if (pCVar18 == (CafeObject *)0x0) {
          if (*(char *)(iVar14 + 0x44) == '\x04') {
            iVar10 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar15 + 0x2c));
            if (iVar10 == 0) {
              iVar14 = **(int **)(iVar8 + DAT_00110518);
              iVar10 = **(int **)(iVar8 + DAT_0011051c);
              uVar4 = **(int **)(iVar8 + DAT_00110520) + 1;
              CharacterInstance::groan(pCVar15);
              iVar10 = Cafe::diamondToStaggeredCoords
                                 ((int)(((iVar14 + -1) - iVar10) * 0x10000 | uVar4 & 0xffff) >> 0x10
                                  ,(int)(short)uVar4);
              iVar14 = *piVar12;
              this_02 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_02,pCVar15,*(Cafe **)(this + 100),
                                 (iVar10 >> 0x10) + (short)iVar10 * iVar14,'\0',false);
              goto LAB_00110400;
            }
            iVar10 = *(int *)(this + 0xf8) + 1;
            if (0 < iVar10) {
              iVar14 = CapcomMath::random(iVar10);
              local_80 = 0;
              do {
                if (iVar10 <= iVar14) {
                  iVar14 = 0;
                }
                iVar19 = *(int *)(iVar14 * 4 + *(int *)(this + 0xfc));
                if (((iVar19 != 0) &&
                    (iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar19 + 0x8c) + 0x40),0),
                    iVar7 == 0)) &&
                   (iVar7 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(iVar19 + 0x2c)),
                   iVar7 != 0)) {
                  *(int *)(pCVar15 + 0x88) = iVar19;
                }
                iVar14 = iVar14 + 1;
                local_80 = local_80 + 1;
              } while (local_80 < iVar10);
            }
          }
        }
        else {
          iVar10 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
          if (iVar10 == 3) {
            iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
            if ((iVar10 == 0) &&
               (iVar10 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(pCVar18 + 0x2c)),
               iVar10 != 0)) {
              this_03 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_03,pCVar15,(CharacterInstance *)pCVar18,*(Cafe **)(this + 100));
              CharacterInstance::addTask(pCVar15,(Task *)this_03);
              puVar5 = (undefined1 *)operator_new(0xc);
              *puVar5 = 1;
              uVar13 = *(undefined4 *)(iVar8 + DAT_00110514);
              *(GameStateAmpouleRaid **)(puVar5 + 8) = this;
              *(undefined4 *)(puVar5 + 4) = uVar13;
              puVar6 = (undefined4 *)operator_new(8);
              puVar6[1] = 0;
              *(undefined4 **)(*(int *)(this_03 + 0x10) + 4) = puVar6;
              *(undefined4 **)(this_03 + 0x10) = puVar6;
              *puVar6 = puVar5;
              *(undefined4 *)(*(int *)(this_03 + 0x10) + 4) = 0;
              *(int *)(this_03 + 0x18) = *(int *)(this_03 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar15 + 0x88) = 0;
            }
          }
          else {
            iVar10 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
            if (iVar10 == 1) {
              this_02 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_02,pCVar15,pCVar18,*(Cafe **)(this + 100),'\0',false);
LAB_00110400:
              CharacterInstance::addTask(pCVar15,(Task *)this_02);
            }
          }
        }
      }
    }
    iVar10 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar15 + 0x8c) + 0x40),0);
    if (iVar10 == 0) {
      checkOverlap(this,pCVar15);
    }
    (**(code **)(*(int *)pCVar15 + 0x1c))(pCVar15,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 100) + 0x20),
               (CafeObject *)pCVar15);
    local_84 = local_84 + 1;
  } while( true );
}


