/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001abf64 GameStateEventRaid2::tick */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateEventRaid2::tick(long) */

void __thiscall GameStateEventRaid2::tick(GameStateEventRaid2 *this,long param_1)

{
  short sVar1;
  GameStateLoading *this_00;
  CharacterCommandBar *this_01;
  undefined1 *puVar2;
  undefined4 *puVar3;
  FollowTask *this_02;
  long lVar4;
  int iVar5;
  int *piVar6;
  AttackTask *this_03;
  int iVar7;
  CharacterData *this_04;
  int iVar8;
  GameStateEventRaid2 *pGVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  GameStateMainMenu *unaff_r6;
  CafeObject *pCVar13;
  int iVar14;
  Character *this_05;
  ConfirmDialog *pCVar15;
  CapcomGame *this_06;
  CharacterInstance *pCVar16;
  float fVar17;
  float extraout_s0;
  float extraout_s0_00;
  int iStack_10c;
  int iStack_108;
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  Vector<int> aVStack_a8 [4];
  int iStack_a4;
  int iStack_a0;
  undefined4 local_1c;
  
  iVar7 = DAT_001ac2d8 + 0x1abf74;
  local_1c = **(undefined4 **)(iVar7 + DAT_001ac2dc);
  ZombieCafe::tickPlaySecAnalysis_survival(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  this_06 = *(CapcomGame **)(this + 0xc);
  if (this_06[DAT_001ac2e0] == (CapcomGame)0x0) {
    unaff_r6 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(unaff_r6);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)unaff_r6);
    CapcomGame::setNextState(this_06,(GameState *)this_00);
    this[0x11] = (GameStateEventRaid2)0x1;
    FUN_001acafe();
  }
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  pGVar9 = this + 0xcc;
  iVar8 = *(int *)pGVar9;
  *(int *)pGVar9 = iVar8 - param_1;
  if ((iVar8 - param_1 < 1) && (this[0xd8] == (GameStateEventRaid2)0x0)) {
    *(undefined4 *)pGVar9 = **(undefined4 **)(iVar7 + DAT_001ac2e4);
  }
  pGVar9 = this + 0xfc;
  if (*(int *)(this + 0x144) == 0) {
    this_01 = *(CharacterCommandBar **)(this + 0xac);
    if ((byte)this_01[0xb8] - 1 < 2) {
      CharacterCommandBar::close(this_01);
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0xac) + 0xb8) - 1) {
    Cafe::select(*(Cafe **)(this + 0x80),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x144) = 0;
  }
  (**(code **)(**(int **)(this + 0x88) + 8))(*(int **)(this + 0x88),param_1);
  if (*(char *)(*(int *)(this + 0x94) + 0x14) != '\0') {
    FUN_001acafe();
  }
  if (*(char *)(*(int *)(this + 0x9c) + 0x14) != '\0') {
    FUN_001acafe();
  }
  if (*(char *)(*(int *)(this + 0xa0) + 0x14) != '\0') {
    FUN_001acafe();
  }
  uVar10 = (uint)*(byte *)(*(int *)(this + 0x98) + 0x14);
  if (uVar10 != 0) {
    FUN_001acafe();
  }
  FUN_001aca78();
  if (*(char *)(uVar10 + 0x14) != '\0') {
    FUN_001acafe();
  }
  FUN_001aca82();
  do {
    pCVar16 = *(CharacterInstance **)((int)pGVar9 * 4 + *(int *)(unaff_r6 + 8));
    iVar8 = getLaunchNumber(this,(int)pGVar9);
    CharacterInstance::setColosseumSelect(pCVar16,iVar8 != -1);
    pGVar9 = pGVar9 + 1;
  } while ((int)pGVar9 < *(int *)(unaff_r6 + 4) + 1);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
  fVar17 = (float)(**(code **)(**(int **)(this + 0xc4) + 0x20))(*(int **)(this + 0xc4),1);
  if ((this[0xd9] != (GameStateEventRaid2)0x0) && (this[0xdd] == (GameStateEventRaid2)0x0)) {
    this[0xdd] = (GameStateEventRaid2)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,fVar17,false);
    this[0x2c] = (GameStateEventRaid2)0x6;
    *(undefined4 *)(this + 0x54) = 0;
    HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  }
  iStack_10c = 0;
  do {
    if (*(int *)(this + 0x120) + 1 <= iStack_10c) {
      fVar17 = (float)__floatsisf(param_1);
      tickStaffAI(this,fVar17);
      fVar17 = (float)Vector<int>::Vector(aVStack_a8);
      for (iVar8 = 0; iVar8 < *(int *)(this + 300) + 1; iVar8 = iVar8 + 1) {
        iVar12 = *(int *)(*(int *)(this + 0x130) + iVar8 * 4);
        if ((*(char *)(iVar12 + 0x34) == '\x06') &&
           (iVar12 = (**(code **)(**(int **)(iVar12 + 0x90) + 0x1c))(), iVar12 != 0)) {
          fVar17 = (float)Vector<int>::addElement(aVStack_a8,iVar8);
        }
        else {
          piVar6 = *(int **)(*(int *)(this + 0x130) + iVar8 * 4);
          fVar17 = (float)(**(code **)(*piVar6 + 0x1c))(piVar6,param_1);
        }
      }
      iStack_10c = iStack_a4 << 2;
      for (iVar8 = iStack_a4; -1 < iVar8; iVar8 = iVar8 + -1) {
        pCVar13 = (CafeObject *)
                  Vector<CharacterInstance*>::removeElementAt
                            ((Vector<CharacterInstance*> *)(this + 0x128),
                             *(int *)(iStack_a0 + iStack_10c));
        CapcomOrderableList<CafeObject*>::remove
                  ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x80) + 0x20),pCVar13);
        this_05 = *(Character **)(pCVar13 + 0x8c);
        this_04 = *(CharacterData **)this_05;
        *(undefined4 *)this_05 = 0;
        *(undefined4 *)(pCVar13 + 0x8c) = 0;
        (**(code **)(*(int *)pCVar13 + 4))(pCVar13);
        Character::~Character(this_05);
        operator_delete(this_05);
        fVar17 = extraout_s0;
        if (this_04 != (CharacterData *)0x0) {
          CharacterData::~CharacterData(this_04);
          operator_delete(this_04);
          fVar17 = extraout_s0_00;
        }
        iStack_10c = iStack_10c + -4;
      }
      if (this[0xda] == (GameStateEventRaid2)0x0) {
        this[0xda] = (GameStateEventRaid2)0x1;
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,7,fVar17,false);
      }
      if (*(char *)(*(int *)(this + 0xc) + DAT_001aca64) != '\0') {
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_001aca64) = 0;
        iVar8 = HudElement::isButtonAvailability(*(HudElement **)(this + 0x84),8);
        if (iVar8 != 0) {
          pCVar15 = *(ConfirmDialog **)(this + 0x9c);
          String::String(aSStack_b0,(char *)(DAT_001aca68 + 0x1ac97e));
          Vector<String>::elementAt((int)aSStack_c0);
          Vector<String>::elementAt((int)aSStack_b8);
          ConfirmDialog::show(pCVar15,aSStack_b0,aSStack_c0,aSStack_b8,
                              *(undefined4 *)(iVar7 + DAT_001aca74),this);
          String::~String(aSStack_b8);
          String::~String(aSStack_c0);
          String::~String(aSStack_b0);
        }
      }
      Vector<int>::~Vector(aVStack_a8);
      FUN_001acafe();
      return;
    }
    pCVar16 = *(CharacterInstance **)(iStack_10c * 4 + *(int *)(this + 0x124));
    sVar1 = *(short *)(pCVar16 + 0x2c);
    iVar8 = **(int **)(iVar7 + DAT_001ac62c);
    uVar10 = __divsi3((int)sVar1,iVar8);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar10 & 0xffff | ((int)sVar1 - uVar10 * iVar8) * 0x10000) >> 0x10,
               (int)(short)uVar10);
    iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    pCVar13 = *(CafeObject **)(pCVar16 + 0x88);
    if (iVar8 == 0) {
      this[0xdc] = (GameStateEventRaid2)0x0;
      if (pCVar13 == (CafeObject *)0x0) goto LAB_001acada;
      iVar8 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar13 + 0x2c));
      if (iVar8 == 0) {
        *(undefined4 *)(pCVar16 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar16);
      }
      iVar8 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
      if ((iVar8 == 3) &&
         (iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar13 + 0x8c) + 0x40),0), iVar8 != 0)) {
        *(undefined4 *)(pCVar16 + 0x88) = 0;
        CharacterInstance::clearTasks();
        *(undefined1 *)(*(int *)(pCVar16 + 0x8c) + 0x44) = 4;
      }
    }
    else {
      if (pCVar16 == *(CharacterInstance **)(this + 0x144)) {
        *(undefined4 *)(this + 0x144) = 0;
        Cafe::select(*(Cafe **)(this + 0x80),(CafeObject *)0x0);
      }
      *(undefined4 *)(pCVar16 + 0x88) = 0;
LAB_001acada:
      pCVar13 = (CafeObject *)0x0;
    }
    if (*(int *)(pCVar16 + 0x7c) == 0) {
      iVar12 = *(int *)(pCVar16 + 0x8c);
      iVar8 = __aeabi_fcmple(*(undefined4 *)(iVar12 + 0x40),0);
      if ((iVar8 == 0) && (this[0xd9] == (GameStateEventRaid2)0x0)) {
        if (pCVar13 == (CafeObject *)0x0) {
          if (*(char *)(iVar12 + 0x44) == '\x04') {
            iVar8 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar16 + 0x2c));
            if (iVar8 == 0) {
              iVar12 = **(int **)(iVar7 + DAT_001aca58);
              iVar8 = **(int **)(iVar7 + DAT_001aca5c);
              uVar10 = **(int **)(iVar7 + DAT_001aca60) + 1;
              CharacterInstance::groan(pCVar16);
              lVar4 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar12 + -1) - iVar8) * 0x10000 | uVar10 & 0xffff) >> 0x10,
                                 (int)(short)uVar10);
              iVar8 = Cafe::staggeredCoordsToIndex(lVar4);
              this_02 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_02,pCVar16,*(Cafe **)(this + 0x80),iVar8,'\0',
                                 false);
              goto LAB_001ac7c2;
            }
            iVar8 = *(int *)(this + 0x114) + 1;
            if (0 < iVar8) {
              iVar12 = CapcomMath::random(iVar8);
              iStack_108 = 0;
              do {
                if (iVar8 <= iVar12) {
                  iVar12 = 0;
                }
                iVar14 = *(int *)(iVar12 * 4 + *(int *)(this + 0x118));
                if (((iVar14 != 0) &&
                    (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0),
                    iVar5 == 0)) &&
                   (iVar5 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(iVar14 + 0x2c)),
                   iVar5 != 0)) {
                  *(int *)(pCVar16 + 0x88) = iVar14;
                }
                iVar12 = iVar12 + 1;
                iStack_108 = iStack_108 + 1;
              } while (iStack_108 < iVar8);
            }
          }
        }
        else {
          iVar8 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
          if (iVar8 == 3) {
            iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar13 + 0x8c) + 0x40),0);
            if ((iVar8 == 0) &&
               (iVar8 = Cafe::isInside(*(Cafe **)(this + 0x80),(int)*(short *)(pCVar13 + 0x2c)),
               iVar8 != 0)) {
              this_03 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask
                        (this_03,pCVar16,(CharacterInstance *)pCVar13,*(Cafe **)(this + 0x80));
              CharacterInstance::addTask(pCVar16,(Task *)this_03);
              puVar2 = (undefined1 *)operator_new(0xc);
              *puVar2 = 1;
              uVar11 = *(undefined4 *)(iVar7 + _DAT_001aca54);
              *(GameStateEventRaid2 **)(puVar2 + 8) = this;
              *(undefined4 *)(puVar2 + 4) = uVar11;
              puVar3 = (undefined4 *)operator_new(8);
              puVar3[1] = 0;
              *(undefined4 **)(*(int *)(this_03 + 0x10) + 4) = puVar3;
              *(undefined4 **)(this_03 + 0x10) = puVar3;
              *puVar3 = puVar2;
              *(undefined4 *)(*(int *)(this_03 + 0x10) + 4) = 0;
              *(int *)(this_03 + 0x18) = *(int *)(this_03 + 0x18) + 1;
            }
            else {
              *(undefined4 *)(pCVar16 + 0x88) = 0;
            }
          }
          else {
            iVar8 = (**(code **)(*(int *)pCVar13 + 0x14))(pCVar13);
            if (iVar8 == 1) {
              this_02 = (FollowTask *)operator_new(0x50);
              FollowTask::FollowTask(this_02,pCVar16,pCVar13,*(Cafe **)(this + 0x80),'\0',false);
LAB_001ac7c2:
              CharacterInstance::addTask(pCVar16,(Task *)this_02);
            }
          }
        }
      }
    }
    iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (iVar8 == 0) {
      checkOverlap(this,pCVar16);
    }
    (**(code **)(*(int *)pCVar16 + 0x1c))(pCVar16,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x80) + 0x20),
               (CafeObject *)pCVar16);
    iStack_10c = iStack_10c + 1;
  } while( true );
}


