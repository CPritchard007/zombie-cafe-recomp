/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018548c GameStateRaid::tick */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateRaid::tick(long) */

void __thiscall GameStateRaid::tick(GameStateRaid *this,long param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  LoadingGameState *this_00;
  CharacterCommandBar *this_01;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  FollowTask *this_02;
  StealFoodTask *this_03;
  CapcomLinkedList<CharacterInstance*> *this_04;
  undefined4 *puVar8;
  CleanupTask *this_05;
  ServeTask *this_06;
  void *pvVar9;
  CapcomOrderableList<CafeObject*> *this_07;
  MoveTask *pMVar10;
  int iVar11;
  AttackTask *this_08;
  CapcomOrderableListNode *pCVar12;
  Cafe *pCVar13;
  int iVar14;
  int iVar15;
  GameStateRaid GVar16;
  GameStateRaid *pGVar17;
  uint uVar18;
  ConfirmDialog *pCVar19;
  Furniture *pFVar20;
  CafeObject *pCVar21;
  short *psVar22;
  int iVar23;
  NoticeDialog *pNVar24;
  int iVar25;
  Character *this_09;
  GameStateMainMenu *unaff_r6;
  CharacterInstance *pCVar26;
  CapcomGame *this_10;
  GameStateRaid *pGVar27;
  CafeObject *pCVar28;
  CharacterInstance *pCVar29;
  CapcomOrderableListNode *pCVar30;
  int *piVar31;
  float fVar32;
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
  int iStack_cc;
  int iStack_c8;
  int local_bc;
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [32];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar23 = DAT_001857c0 + 0x185498;
  ZombieCafe::tickPlaySecAnalysis_raid(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  this_10 = *(CapcomGame **)(this + 0xc);
  if (this_10[DAT_001857c4] == (CapcomGame)0x0) {
    unaff_r6 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(unaff_r6);
    this_00 = (LoadingGameState *)operator_new(0x2c);
    LoadingGameState::LoadingGameState(this_00,(GameState *)unaff_r6,(CapcomFont *)0x0,0);
    *(int *)this_00 = *(int *)(iVar23 + DAT_001857c8) + 8;
    this_00[0x14] = (LoadingGameState)0x0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    CapcomGame::setNextState(this_10,(GameState *)this_00);
    this[0x11] = (GameStateRaid)0x1;
    FUN_00186a78();
  }
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
  pGVar17 = this + 0x88;
  iVar14 = *(int *)pGVar17;
  *(int *)pGVar17 = iVar14 - param_1;
  if ((iVar14 - param_1 < 1) && (this[100] == (GameStateRaid)0x0)) {
    *(undefined4 *)pGVar17 = **(undefined4 **)(iVar23 + DAT_001857cc);
    saveData(this);
  }
  this_01 = *(CharacterCommandBar **)(this + 0x13c);
  if (*(int *)(this + 0x114) == 0) {
    if ((byte)this_01[0xb8] - 1 < 2) {
      CharacterCommandBar::close(this_01);
    }
  }
  else if (1 < (byte)this_01[0xb8] - 1) {
    Cafe::select(*(Cafe **)(this + 0x78),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x114) = 0;
  }
  pGVar17 = this + 0xfc;
  fVar32 = (float)(**(code **)(**(int **)(this + 0x134) + 8))(*(int **)(this + 0x134),param_1);
  TutorialArrow::tick(*(TutorialArrow **)(this + 0x150),param_1,*(long *)(this + 0x94),fVar32);
  if ((*(TutorialArrow **)(this + 0x150))[0x14] != (TutorialArrow)0x0) {
    iVar14 = TutorialArrow::attachedToCafeObject(*(TutorialArrow **)(this + 0x150));
    if (iVar14 != 0) {
      iVar14 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x14),
                                 CONCAT22(*(undefined2 *)(*(int *)(this + 0x150) + 4),
                                          *(undefined2 *)(*(int *)(this + 0x150) + 8)));
      uVar5 = __floatsisf(iVar14 >> 0x10);
      uVar5 = __divsf3(uVar5,DAT_001857d0);
      *(undefined4 *)(this + 0x8c) = uVar5;
      uVar5 = __floatsisf((int)(short)iVar14);
      uVar5 = __divsf3(uVar5,DAT_001857d0);
      *(undefined4 *)(this + 0x90) = uVar5;
    }
    pGVar17 = *(GameStateRaid **)(this + 0xc);
    iVar14 = ZombieCafe::unhandledPressOrLongEvent((ZombieCafe *)pGVar17);
    if ((iVar14 == 0) ||
       (iVar14 = TutorialArrow::targetContains
                           (*(TutorialArrow **)(this + 0x150),this,
                            *(long *)((ZombieCafe *)pGVar17 + DAT_001857d4)), iVar14 == 0)) {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_001857d8) = 1;
    }
  }
  if ((((*(char *)(*(int *)(this + 0x14c) + 0x14) == '\0') &&
       (*(char *)(*(int *)(this + 0x164) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(this + 0x168) + 0x14) == '\0')) &&
     (((*(int *)(this + 0x2c) == 0 || (*(char *)(*(int *)(this + 0x2c) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(this + 0x30) + 0x14) == '\0')))) {
    FUN_00186980();
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001857dc) = 0;
  FUN_00186a78();
  if (*(int *)(this + 0x114) != *(int *)(this + 0x74)) {
    FUN_00186a78();
  }
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001857e0),'6',true);
  FUN_00186a78();
  fVar32 = (float)Cafe::tick(*(Cafe **)(this + 0x78),param_1);
  *(char *)(*(int *)(this + 0x160) + 0x46) = (char)pGVar17;
  bVar3 = true;
  bVar2 = true;
  *(GameStateRaid **)(*(int *)(this + 0x160) + 0x70) = pGVar17;
  iVar14 = *(int *)(this + 200);
  pGVar27 = pGVar17;
  for (; (int)pGVar17 < iVar14 + 1; pGVar17 = pGVar17 + 1) {
    iVar25 = __aeabi_fcmple(*(undefined4 *)
                             (*(int *)(*(int *)((int)pGVar17 * 4 + *(int *)(this + 0xcc)) + 0x8c) +
                             0x40),0);
    if (iVar25 == 0) {
      pGVar27 = pGVar27 + 1;
      bVar3 = false;
      bVar2 = false;
    }
    fVar32 = extraout_s0;
  }
  if ((*(int *)(this + 0xf8) != 0) &&
     (iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(this + 0xf8) + 0x8c) + 0x40),0),
     fVar32 = extraout_s0_00, iVar14 == 0)) {
    pGVar27 = pGVar27 + 1;
    bVar3 = false;
  }
  for (iStack_cc = 0; iStack_cc < *(int *)(this + 0xbc) + 1; iStack_cc = iStack_cc + 1) {
    iVar25 = *(int *)(iStack_cc * 4 + *(int *)(this + 0xc0));
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar25 + 0x8c) + 0x40),0);
    fVar32 = extraout_s0_01;
    if (iVar14 == 0) {
      iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(iVar25 + 0x2c));
      pGVar27 = pGVar27 + (iVar14 != 0);
      fVar32 = extraout_s0_02;
    }
  }
  if (((pGVar27 == (GameStateRaid *)0x0) && (this[0x15c] != (GameStateRaid)0x1)) &&
     (this[100] == (GameStateRaid)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar32,false);
    iVar14 = DAT_001857e4;
    this[100] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x148) = **(undefined4 **)(iVar23 + iVar14);
    fVar32 = (float)HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
  }
  uVar18 = (uint)(byte)this[0x15c];
  if ((uVar18 != 1) && (this[100] != (GameStateRaid)0x0)) {
    if (uVar18 - 2 < 6) {
      if (uVar18 == 2) {
        fVar32 = (float)sendPresentGift(this);
        GVar16 = (GameStateRaid)0x3;
LAB_001858f2:
        this[0x15c] = GVar16;
      }
      else if (uVar18 == 3) {
        if (*(int *)(this + 0x174) == 1) {
          this[0x15c] = (GameStateRaid)0x7;
          if (((*(char *)(*(int *)(this + 0x164) + 0x14) == '\0') &&
              (pNVar24 = *(NoticeDialog **)(this + 0x30), pNVar24[0x14] == (NoticeDialog)0x0)) &&
             (*(int *)(this + 0x168) != 0)) {
            String::String(aSStack_a8,(char *)(DAT_00185b70 + 0x18581e));
            Vector<String>::elementAt((int)aSStack_a0);
            NoticeDialog::show(pNVar24,aSStack_a8,aSStack_a0,0,this);
            String::~String(aSStack_a0);
            String::~String(aSStack_a8);
            ZombieCafe::checkHeroPresentDayRecovery();
            fVar32 = (float)ZombieCafe::save();
          }
        }
        else if (*(int *)(this + 0x174) == 2) {
          pCVar19 = *(ConfirmDialog **)(this + 0x164);
          if ((pCVar19[0x14] == (ConfirmDialog)0x0) &&
             (*(char *)(*(int *)(this + 0x168) + 0x14) == '\0')) {
            String::String(aSStack_98,(char *)(DAT_00185b78 + 0x18587a));
            String::String(aSStack_90,(char *)(DAT_00185b7c + 0x185884));
            String::String(aSStack_88,(char *)(DAT_00185b80 + 0x18588e));
            ConfirmDialog::show(pCVar19,aSStack_98,aSStack_90,aSStack_88,
                                *(undefined4 *)(iVar23 + DAT_00185b84),
                                *(undefined4 *)(iVar23 + DAT_00185b88),this,0,0);
            String::~String(aSStack_88);
            String::~String(aSStack_90);
            fVar32 = (float)String::~String(aSStack_98);
          }
        }
        else {
          fVar32 = (float)drawConnectWindow(this);
        }
      }
      else {
        if (uVar18 == 4) {
          (**(code **)(**(int **)(this + 0x18) + 0x20))(*(int **)(this + 0x18),0);
          (**(code **)(**(int **)(this + 0x1c) + 0x20))(*(int **)(this + 0x1c),0);
          fVar32 = (float)(**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
          GVar16 = (GameStateRaid)0x2;
          goto LAB_001858f2;
        }
        if ((uVar18 == 5) || (uVar18 == 7)) {
          this[0x15c] = (GameStateRaid)0x1;
          (**(code **)(**(int **)(this + 0x18) + 0x20))(*(int **)(this + 0x18),0);
          (**(code **)(**(int **)(this + 0x1c) + 0x20))(*(int **)(this + 0x1c),0);
          (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
          goto LAB_00185920;
        }
      }
    }
    else {
      iVar14 = *(int *)(this + 0x148);
      *(int *)(this + 0x148) = iVar14 - param_1;
      if (iVar14 - param_1 < 1) {
        iVar14 = javaCanOpenHero();
        if (iVar14 == 0) {
LAB_001857ac:
          this[0x15c] = (GameStateRaid)0x1;
        }
        else if ((this[0x14] == (GameStateRaid)0x0) || (this[100] == (GameStateRaid)0x0)) {
          this[0x15c] = (GameStateRaid)0x1;
        }
        else {
          iVar14 = ZombieCafe::checkHeroPresentDay();
          if (iVar14 == 0) goto LAB_001857ac;
          this[0x15c] = (GameStateRaid)0x2;
        }
LAB_00185920:
        fVar32 = (float)layoutState(this);
      }
    }
  }
  iStack_cc = 0;
  bVar4 = false;
  this[0x65] = (GameStateRaid)0x1;
  this[0x66] = (GameStateRaid)0x1;
  for (; iVar14 = *(int *)(this + 0xb0) + 1, iStack_cc < iVar14; iStack_cc = iStack_cc + 1) {
    unaff_r6 = *(GameStateMainMenu **)(iStack_cc * 4 + *(int *)(this + 0xb4));
    pCVar28 = *(CafeObject **)((CharacterInstance *)unaff_r6 + 0x88);
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0
                           );
    if (iVar14 == 0) {
      this[0x65] = (GameStateRaid)0x0;
      iVar14 = _DAT_00185b8c;
      iVar25 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0xc) + _DAT_00185b8c),'+');
      if ((iVar25 == 0) && (((CharacterInstance *)unaff_r6)[0xc4] != (CharacterInstance)0x0)) {
        *(GameStateMainMenu **)(this + 0x74) = unaff_r6;
        this[0x38] = (GameStateRaid)0x1;
        TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar14),'\"',true);
      }
    }
    else if (unaff_r6 == (GameStateMainMenu *)*(CharacterInstance **)(this + 0x114)) {
      *(undefined4 *)(this + 0x114) = 0;
      Cafe::select(*(Cafe **)(this + 0x78),(CafeObject *)0x0);
    }
    if ((this[0x130] == (GameStateRaid)0x0) ||
       ((iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),
                                 (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c)), iVar14 != 0
        && (iVar14 = __aeabi_fcmple(*(undefined4 *)
                                     (*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0),
           iVar14 == 0)))) {
      this[0x66] = (GameStateRaid)0x0;
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0
                           );
    if (((((iVar14 == 0) &&
          (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),
                                   (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c)),
          iVar14 != 0)) && (bVar2)) && (*(int *)(this + 0xf8) != 0)) &&
       ((piVar6 = *(int **)(*(int *)(this + 0xf8) + 0x88), piVar6 == (int *)0x0 ||
        (iVar14 = (**(code **)(*piVar6 + 0x14))(), iVar14 != 3)))) {
      CharacterInstance::clearTasks();
      *(GameStateMainMenu **)(*(int *)(this + 0xf8) + 0x88) = unaff_r6;
    }
    iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),
                            (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
    if (iVar14 != 0) {
      if (this[0x6c] == (GameStateRaid)0x0) {
        bVar4 = true;
      }
      this[0x6c] = (GameStateRaid)0x1;
      *(undefined1 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar28 != (CafeObject *)0x0) &&
       (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar28 + 0x2c)),
       iVar14 == 0)) {
      *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
      CharacterInstance::stopTasks((CharacterInstance *)unaff_r6);
    }
    if (*(int *)((CharacterInstance *)unaff_r6 + 0x7c) == 0) {
      iVar25 = *(int *)((CharacterInstance *)unaff_r6 + 0x8c);
      iVar14 = __aeabi_fcmple(*(undefined4 *)(iVar25 + 0x40),0);
      if (iVar14 == 0) {
        if (this[0x130] == (GameStateRaid)0x0) {
          if (pCVar28 == (CafeObject *)0x0) {
            if (*(char *)(iVar25 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + _DAT_00185f0c),' ',false);
              iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),
                                      (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
              if (iVar14 != 0) {
                iVar23 = Cafe::createDistanceSortedObjectList
                                   (*(Cafe **)(this + 0x78),'\x03',
                                    (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
                *(undefined4 *)(iVar23 + 0x10) = *(undefined4 *)(iVar23 + 8);
                bVar2 = false;
                do {
                  piVar6 = *(int **)(iVar23 + 0x10);
                  if (piVar6 == (int *)0x0) {
                    FUN_001869b8();
                  }
                  iVar14 = *piVar6;
                  *(int *)(iVar23 + 0x10) = piVar6[2];
                  if (iVar14 == 0) {
                    FUN_001869b8();
                  }
                  if (bVar2) {
                    FUN_001869b8();
                  }
                  if (((*(char *)(*(int *)(iVar14 + 0x8c) + 4) != '\x01') &&
                      (iVar25 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0),
                      iVar25 == 0)) &&
                     (iVar25 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(iVar14 + 0x2c)
                                             ), iVar25 != 0)) {
                    bVar2 = true;
                    *(int *)((CharacterInstance *)unaff_r6 + 0x88) = iVar14;
                  }
                } while( true );
              }
              *(int *)(this + 0x184) = *(int *)(this + 0x184) + 1;
              if (*(int *)(this + 0x17c) == 0) {
                iVar14 = CCSecondsSince1970();
                *(int *)(this + 0x17c) = iVar14 - *(int *)(this + 0x178);
              }
              iVar14 = CCSecondsSince1970();
              *(int *)(this + 0x180) = iVar14 - *(int *)(this + 0x178);
              iVar25 = **(int **)(iVar23 + _DAT_00185f10);
              iVar14 = **(int **)(iVar23 + _DAT_00185f14);
              uVar18 = **(int **)(iVar23 + _DAT_00185f18) + 1;
              CharacterInstance::groan((CharacterInstance *)unaff_r6);
              lVar7 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar25 + -1) - iVar14) * 0x10000 | uVar18 & 0xffff) >> 0x10
                                 ,(int)(short)uVar18);
              iVar14 = Cafe::staggeredCoordsToIndex(lVar7);
              this_02 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_02,(CharacterInstance *)unaff_r6,
                                 *(Cafe **)(this + 0x78),iVar14,'\0',false);
              goto LAB_00185c6c;
            }
          }
          else {
            iVar14 = (**(code **)(*(int *)pCVar28 + 0x14))(pCVar28);
            if (iVar14 == 3) {
              iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar28 + 0x8c) + 0x40),0);
              if ((iVar14 == 0) &&
                 (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar28 + 0x2c)),
                 iVar14 != 0)) {
                FUN_001869a2();
              }
              *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
            }
            else {
              iVar14 = (**(code **)(*(int *)pCVar28 + 0x14))(pCVar28);
              if (iVar14 == 1) {
                iVar14 = CafeObject::isAdjacentTo
                                   ((CafeObject *)unaff_r6,(int)*(short *)(pCVar28 + 0x2c));
                if (iVar14 == 0) {
                  this_02 = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask
                            (this_02,(CharacterInstance *)unaff_r6,pCVar28,*(Cafe **)(this + 0x78),
                             '\0',false);
                  goto LAB_00185c6c;
                }
                this_03 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask
                          (this_03,(CharacterInstance *)unaff_r6,*(Cafe **)(this + 0x78));
                CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this_03);
                Task::addFinishedListener
                          ((Task *)this_03,
                           *(_func_void_void_ptr_Task_ptr **)(iVar23 + _DAT_00185b9c),this);
              }
            }
          }
        }
        else {
          uVar18 = **(int **)(iVar23 + _DAT_00185b90) - 5;
          lVar7 = Cafe::diamondToStaggeredCoords
                            ((int)(uVar18 & 0xffff |
                                  (**(int **)(iVar23 + _DAT_00185b94) + 2) * 0x10000) >> 0x10,
                             (int)(short)uVar18);
          iVar14 = Cafe::staggeredCoordsToIndex(lVar7);
          this_02 = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this_02,(CharacterInstance *)unaff_r6,
                             *(Cafe **)(this + 0x78),iVar14,'\0',false);
LAB_00185c6c:
          CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this_02);
        }
      }
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0
                           );
    if (iVar14 == 0) {
      checkOverlap(this,(CharacterInstance *)unaff_r6);
    }
    (**(code **)(*(int *)unaff_r6 + 0x1c))(unaff_r6,param_1);
    fVar32 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x78) + 0x20),
                               (CafeObject *)unaff_r6);
  }
  if (this[0x15c] == (GameStateRaid)0x1) {
    FUN_00185f5c();
    return;
  }
  if (this[0x65] != (GameStateRaid)0x0) {
    if (((this[0x13] == (GameStateRaid)0x0) && (this[0x15] == (GameStateRaid)0x0)) &&
       (this[0x16] == (GameStateRaid)0x0)) {
      FUN_001869c6();
    }
    iVar25 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    if (iVar25 < iVar14) {
      FUN_001869c6();
    }
    pCVar19 = *(ConfirmDialog **)(this + 0x164);
    Vector<String>::elementAt((int)aSStack_80);
    String::valueOf((int)aSStack_78);
    String::operator+(aSStack_70,aSStack_80,aSStack_78);
    Vector<String>::elementAt((int)aSStack_68);
    String::operator+(aSStack_60,aSStack_70,aSStack_68);
    Vector<String>::elementAt((int)aSStack_58);
    Vector<String>::elementAt((int)aSStack_50);
    ConfirmDialog::show(pCVar19,aSStack_60,aSStack_58,aSStack_50,
                        *(undefined4 *)(iVar23 + DAT_00185f2c),
                        *(undefined4 *)(iVar23 + DAT_00185f30),this,0,0);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    String::~String(aSStack_60);
    String::~String(aSStack_68);
    String::~String(aSStack_70);
    String::~String(aSStack_78);
    String::~String(aSStack_80);
    FUN_00185f5c();
    return;
  }
  if (this[0x66] == (GameStateRaid)0x0) {
    FUN_00185f5c();
    return;
  }
  if (!bVar3) {
    iVar23 = 0;
    if (this[0x13] != (GameStateRaid)0x0) {
      for (; iVar23 < iVar14; iVar23 = iVar23 + 1) {
        iVar25 = __aeabi_fcmpeq(*(undefined4 *)
                                 (*(int *)(*(int *)(iVar23 * 4 + *(int *)(this + 0xb4)) + 0x8c) +
                                 0x40),0);
        if (iVar25 != 0) {
          FUN_001869f0();
        }
      }
      FUN_00185f40();
      return;
    }
    FUN_00185f40();
    return;
  }
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar32,false);
  this[100] = (GameStateRaid)0x1;
  this[0x15c] = (GameStateRaid)0x1;
  fVar32 = (float)layoutState(this);
  iVar14 = *(int *)(this + 0xf8);
  if (iVar14 == 0) goto LAB_001860d0;
  iVar25 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0);
  if (iVar25 == 0) {
    piVar6 = *(int **)(iVar14 + 0x88);
    if (*(int *)(iVar14 + 0x7c) == 0) {
      if (piVar6 == (int *)0x0) {
        FUN_00186a02();
      }
      iVar14 = (**(code **)(*piVar6 + 0x14))(piVar6);
      if (iVar14 != 3) {
        FUN_00186a02();
      }
      iVar14 = __aeabi_fcmple(*(undefined4 *)(piVar6[0x23] + 0x40),0);
      if ((iVar14 == 0) &&
         (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)(short)piVar6[0xb]), iVar14 != 0)) {
        FUN_00186a1a();
      }
    }
    else if (((piVar6 == (int *)0x0) ||
             (iVar14 = (**(code **)(*piVar6 + 0x14))(piVar6), iVar14 != 3)) ||
            ((iVar14 = __aeabi_fcmple(*(undefined4 *)(piVar6[0x23] + 0x40),0), iVar14 == 0 &&
             (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)(short)piVar6[0xb]), iVar14 != 0)
             ))) goto LAB_00186098;
    *(undefined4 *)(*(int *)(this + 0xf8) + 0x88) = 0;
    CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0xf8));
  }
  else {
    *(undefined1 *)(iVar14 + 0x84) = 0;
  }
LAB_00186098:
  pCVar26 = *(CharacterInstance **)(this + 0xf8);
  iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar26 + 0x8c) + 0x40),0);
  if (iVar14 == 0) {
    checkOverlap(this,pCVar26);
  }
  piVar6 = *(int **)(this + 0xf8);
  (**(code **)(*piVar6 + 0x1c))(piVar6,param_1);
  fVar32 = (float)CapcomOrderableList<CafeObject*>::sort
                            ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x78) + 0x20),
                             *(CafeObject **)(this + 0xf8));
LAB_001860d0:
  if (this[0x6c] == (GameStateRaid)0x0) {
    if ((*(int *)(*(int *)(this + 0x78) + 0xc0) != -1) ||
       (this_04 = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(this + 0x78) + 0xa8) != -1)) {
      this_04 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this_04 + 4) = 0;
      iStack_c8 = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_04 + 8) = this_04;
      *(undefined4 *)(this_04 + 0x10) = 0;
      *(undefined4 *)(this_04 + 0xc) = 0;
      fVar32 = extraout_s0_03;
      while (iStack_c8 < *(int *)(this + 200) + 1) {
        uVar5 = *(undefined4 *)(iStack_c8 * 4 + *(int *)(this + 0xcc));
        puVar8 = (undefined4 *)operator_new(8);
        puVar8[1] = 0;
        *(undefined4 **)(*(int *)(this_04 + 8) + 4) = puVar8;
        *(undefined4 **)(this_04 + 8) = puVar8;
        *puVar8 = uVar5;
        *(undefined4 *)(*(int *)(this_04 + 8) + 4) = 0;
        iStack_c8 = iStack_c8 + 1;
        *(int *)(this_04 + 0x10) = *(int *)(this_04 + 0x10) + 1;
        fVar32 = extraout_s0_04;
      }
    }
    pGVar17 = this + 0xf8;
    iVar14 = *(int *)pGVar17;
    if (((this_04 != (CapcomLinkedList<CharacterInstance*> *)0x0) && (iVar14 != 0)) &&
       (*(int *)(this_04 + 0x10) == 0)) {
      piVar6 = (int *)operator_new(8);
      piVar6[1] = 0;
      *(int **)(*(int *)(this_04 + 8) + 4) = piVar6;
      *(int **)(this_04 + 8) = piVar6;
      *piVar6 = iVar14;
      *(undefined4 *)(*(int *)(this_04 + 8) + 4) = 0;
      *(int *)(this_04 + 0x10) = *(int *)(this_04 + 0x10) + 1;
      fVar32 = (float)CharacterInstance::stopTasks(*(CharacterInstance **)pGVar17);
      *(undefined1 *)(*(int *)(*(int *)pGVar17 + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(this + 0x78) + 0xc0) != -1) {
      pFVar20 = (Furniture *)**(undefined4 **)(*(int *)(this + 0x78) + 0xc4);
      do {
        if (*(int *)(this_04 + 0x10) == 0) goto LAB_001861e8;
        iVar14 = CapcomMath::random(*(int *)(this_04 + 0x10));
        pCVar26 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_04,iVar14);
        fVar32 = extraout_s0_05;
      } while ((*(char *)(*(int *)(pCVar26 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar26 + 0x7c) != 0));
      this_05 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_05,pCVar26,*(Cafe **)(this + 0x78),pFVar20);
      fVar32 = (float)CharacterInstance::addTask(pCVar26,(Task *)this_05);
    }
LAB_001861e8:
    if ((*(int *)(*(Cafe **)(this + 0x78) + 0xa8) != -1) &&
       (iVar14 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x78)), fVar32 = extraout_s0_06,
       iVar14 != 0)) {
      pCVar26 = (CharacterInstance *)**(undefined4 **)(*(int *)(this + 0x78) + 0xac);
      do {
        if (*(int *)(this_04 + 0x10) == 0) goto LAB_0018624c;
        iVar14 = CapcomMath::random(*(int *)(this_04 + 0x10));
        pCVar29 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_04,iVar14);
        fVar32 = extraout_s0_07;
      } while ((*(char *)(*(int *)(pCVar29 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar29 + 0x7c) != 0));
      this_06 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_06,pCVar29,*(Cafe **)(this + 0x78),pCVar26);
      fVar32 = (float)CharacterInstance::addTask(pCVar29,(Task *)this_06);
    }
LAB_0018624c:
    if (this_04 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_04 + 0x10) != 0) {
        while (pvVar9 = *(void **)(this_04 + 4), pvVar9 != (void *)0x0) {
          uVar5 = *(undefined4 *)((int)pvVar9 + 4);
          operator_delete(pvVar9);
          *(undefined4 *)(this_04 + 4) = uVar5;
        }
        *(undefined4 *)(this_04 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_04 + 8) = this_04;
        *(undefined4 *)(this_04 + 0xc) = 0;
      }
      operator_delete(this_04);
      fVar32 = extraout_s0_08;
    }
  }
  for (iStack_c8 = 0; iStack_c8 < *(int *)(this + 200) + 1; iStack_c8 = iStack_c8 + 1) {
    pCVar26 = *(CharacterInstance **)(iStack_c8 * 4 + *(int *)(this + 0xcc));
    if (bVar4) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar26 + 0x88) = 0;
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar26 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      pCVar29 = *(CharacterInstance **)(pCVar26 + 0x88);
      if (*(int *)(pCVar26 + 0x7c) == 0) {
        if (pCVar29 == (CharacterInstance *)0x0) {
          if (this[0x6c] != (GameStateRaid)0x0) {
            this_07 = (CapcomOrderableList<CafeObject*> *)
                      Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(this + 0x78),'\x03',(int)*(short *)(unaff_r6 + 0x2c));
            *(undefined4 *)(this_07 + 0x10) = *(undefined4 *)(this_07 + 8);
            bVar2 = false;
            while (piVar6 = *(int **)(this_07 + 0x10), piVar6 != (int *)0x0) {
              iVar14 = *piVar6;
              *(int *)(this_07 + 0x10) = piVar6[2];
              if ((iVar14 == 0) || (bVar2)) break;
              if ((*(char *)(*(int *)(iVar14 + 0x8c) + 4) == '\x01') &&
                 ((iVar25 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0),
                  iVar25 == 0 &&
                  (iVar25 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(iVar14 + 0x2c)),
                  iVar25 != 0)))) {
                *(int *)(pCVar26 + 0x88) = iVar14;
                bVar2 = true;
              }
            }
            if (*(int *)(this_07 + 0x14) != 0) {
              pCVar12 = *(CapcomOrderableListNode **)(this_07 + 8);
              while (pCVar12 != (CapcomOrderableListNode *)0x0) {
                pCVar30 = *(CapcomOrderableListNode **)(pCVar12 + 8);
                CapcomOrderableList<CafeObject*>::deleteNode(this_07,pCVar12);
                pCVar12 = pCVar30;
              }
              *(undefined4 *)(this_07 + 0x14) = 0;
              *(CapcomOrderableList<CafeObject*> **)(this_07 + 0xc) = this_07;
              *(undefined4 *)(this_07 + 0x10) = *(undefined4 *)(this_07 + 8);
            }
            operator_delete(this_07);
          }
        }
        else {
          iVar14 = (**(code **)(*(int *)pCVar29 + 0x14))(pCVar29);
          if (iVar14 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar26,0);
            iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar29 + 0x8c) + 0x40),0);
            if ((iVar14 == 0) &&
               (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar29 + 0x2c)),
               iVar14 != 0)) {
              this_08 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_08,pCVar26,pCVar29,*(Cafe **)(this + 0x78));
            }
            else {
              *(undefined4 *)(pCVar26 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar26);
              piVar6 = *(int **)(iVar23 + DAT_001866fc);
              piVar31 = *(int **)(iVar23 + DAT_00186700);
              do {
                pCVar13 = *(Cafe **)(this + 0x78);
                iVar14 = CapcomMath::random(*piVar6 * *piVar31);
                iVar25 = Cafe::isInside(pCVar13,iVar14);
              } while (iVar25 == 0);
              this_08 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_08,pCVar26,*(Cafe **)(this + 0x78),iVar14,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar26,(Task *)this_08);
          }
        }
      }
      else if (((pCVar29 != (CharacterInstance *)0x0) &&
               (iVar14 = (**(code **)(*(int *)pCVar29 + 0x14))(pCVar29), iVar14 == 3)) &&
              ((iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar29 + 0x8c) + 0x40),0),
               iVar14 != 0 ||
               (iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar29 + 0x2c)),
               iVar14 == 0)))) {
        *(undefined4 *)(pCVar26 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar26);
      }
    }
    else {
      pCVar26[0x84] = (CharacterInstance)0x0;
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar26 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      checkOverlap(this,pCVar26);
    }
    (**(code **)(*(int *)pCVar26 + 0x1c))(pCVar26,param_1);
    fVar32 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x78) + 0x20),
                               (CafeObject *)pCVar26);
  }
  iStack_c8 = 0;
  do {
    if (*(int *)(this + 0xbc) + 1 <= iStack_c8) {
      for (iVar14 = 0; iVar14 < *(int *)(this + 0x100) + 1; iVar14 = iVar14 + 1) {
        piVar6 = *(int **)(iVar14 * 4 + *(int *)(this + 0x104));
        fVar32 = (float)(**(code **)(*piVar6 + 0x1c))(piVar6,param_1);
      }
      iVar14 = *(int *)(this + 0x158);
      *(int *)(this + 0x158) = iVar14 - param_1;
      if (iVar14 - param_1 < 0) {
        fVar32 = (float)spawnCustomer(this,false);
      }
      if (this[DAT_00186a7c] == (GameStateRaid)0x0) {
        this[DAT_00186a7c] = (GameStateRaid)0x1;
        if ((((this[0x12] == (GameStateRaid)0x0) && (this[0x13] == (GameStateRaid)0x0)) &&
            (this[0x14] == (GameStateRaid)0x0)) &&
           ((this[0x16] == (GameStateRaid)0x0 && (this[0x15] == (GameStateRaid)0x0)))) {
          iVar14 = 7;
        }
        else {
          iVar14 = 0x13;
        }
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,iVar14,fVar32,false);
      }
      if ((this[0x15e] == (GameStateRaid)0x0) && (this[0x6c] != (GameStateRaid)0x0)) {
        this[0x15e] = (GameStateRaid)0x1;
        iVar25 = 0;
        local_bc = 0;
        for (iVar14 = 0; iVar14 < *(int *)(this + 0xbc) + 1; iVar14 = iVar14 + 1) {
          iVar15 = *(int *)(iVar14 * 4 + *(int *)(this + 0xc0));
          iVar11 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(iVar15 + 0x2c));
          if (iVar11 != 0) {
            if (*(char *)(**(int **)(iVar15 + 0x8c) + DAT_00186a80) == '\0') {
              iVar25 = iVar25 + 1;
            }
            else {
              local_bc = local_bc + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar25,local_bc);
      }
      iVar14 = *(int *)(this + 0xc);
      if (*(char *)(iVar14 + DAT_00186a84) != '\0') {
        *(int *)(this + 0x188) = *(int *)(this + 0x188) + 1;
      }
      if (*(char *)(iVar14 + DAT_00186a88) != '\0') {
        *(undefined1 *)(iVar14 + DAT_00186a88) = 0;
        iVar14 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00186a8c),',');
        if (iVar14 != 0) {
          pCVar19 = *(ConfirmDialog **)(this + 0x164);
          Vector<String>::elementAt((int)aSStack_30);
          Vector<String>::elementAt((int)aSStack_28);
          Vector<String>::elementAt((int)aSStack_20);
          ConfirmDialog::show(pCVar19,aSStack_30,aSStack_28,aSStack_20,
                              *(undefined4 *)(iVar23 + DAT_00186a9c),this);
          String::~String(aSStack_20);
          String::~String(aSStack_28);
          String::~String(aSStack_30);
          FUN_00186a78();
          return;
        }
        FUN_00186a78();
        return;
      }
      FUN_00186a78();
      return;
    }
    pCVar28 = *(CafeObject **)(iStack_c8 * 4 + *(int *)(this + 0xc0));
    (**(code **)(*(int *)pCVar28 + 0x1c))(pCVar28,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x78) + 0x20),pCVar28);
    if ((this[0x6c] != (GameStateRaid)0x0) && (*(int *)(pCVar28 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar28);
    }
    if ((*(int *)(pCVar28 + 0x7c) == 0) &&
       (iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar28 + 0x8c) + 0x40),0), iVar14 == 0)) {
      piVar6 = *(int **)(pCVar28 + 0x88);
      if (piVar6 != (int *)0x0) {
        iVar14 = (**(code **)(*piVar6 + 0x14))(piVar6);
        if (iVar14 == 3) {
          iVar14 = CafeObject::isAdjacentTo(pCVar28,(int)(short)piVar6[0xb]);
          if (((iVar14 == 0) ||
              (iVar14 = __aeabi_fcmple(*(undefined4 *)(piVar6[0x23] + 0x40),0), iVar14 != 0)) ||
             ((CafeObject *)piVar6[0x22] != pCVar28)) {
            pCVar21 = pCVar28 + 0x88;
            uVar5 = 0;
LAB_001866c4:
            *(undefined4 *)pCVar21 = uVar5;
          }
        }
        else {
          iVar14 = CafeObject::isAdjacentTo(pCVar28,(int)(short)piVar6[0xb]);
          if (iVar14 == 0) {
            *(undefined4 *)(pCVar28 + 0x88) = 0;
          }
        }
        goto LAB_00186718;
      }
      iVar14 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar28 + 0x2c));
      if (iVar14 != 0) {
        if (this[0x6c] == (GameStateRaid)0x0) {
          iVar14 = CapcomMath::random(2);
          if (iVar14 == 0) {
            sVar1 = *(short *)(*(int *)(this + 0x78) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(this + 0x78) + 0x98);
          }
          pMVar10 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar28,*(Cafe **)(this + 0x78),(int)sVar1
                             ,'\0',false);
        }
        else {
          iVar14 = *(int *)(pCVar28 + 0x98) + 1;
          *(int *)(pCVar28 + 0x98) = iVar14;
          if (iVar14 < **(int **)(iVar23 + DAT_00186704)) {
            piVar31 = *(int **)(iVar23 + DAT_001866fc);
            piVar6 = *(int **)(iVar23 + DAT_00186700);
            do {
              pCVar13 = *(Cafe **)(this + 0x78);
              iStack_cc = CapcomMath::random(*piVar31 * *piVar6);
              iVar14 = Cafe::isInside(pCVar13,iStack_cc);
            } while (iVar14 == 0);
          }
          else {
            lVar7 = Cafe::diamondToStaggeredCoords
                              ((int)**(short **)(iVar23 + DAT_00186708),
                               (int)**(short **)(iVar23 + DAT_0018670c));
            iStack_cc = Cafe::staggeredCoordsToIndex(lVar7);
          }
          if (this[0x6c] == (GameStateRaid)0x0) {
            pMVar10 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar28,*(Cafe **)(this + 0x78),
                               iStack_cc,'\0',false);
          }
          else {
            pMVar10 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar28,*(Cafe **)(this + 0x78),
                               iStack_cc,'\t',false);
          }
        }
LAB_00186622:
        CharacterInstance::addTask((CharacterInstance *)pCVar28,(Task *)pMVar10);
        goto LAB_00186718;
      }
      pCVar13 = *(Cafe **)(this + 0x78);
      if ((*(short *)(pCVar13 + 0x98) != *(short *)(pCVar28 + 0x2c)) &&
         (*(short *)(pCVar13 + 0x9a) != *(short *)(pCVar28 + 0x2c))) {
        if (this[0x6c] != (GameStateRaid)0x0) {
          iVar14 = CapcomMath::random(2);
          if (iVar14 == 0) {
            psVar22 = (short *)(*(int *)(this + 0x78) + 0x9a);
          }
          else {
            psVar22 = (short *)(*(int *)(this + 0x78) + 0x98);
          }
          sVar1 = *psVar22;
          pMVar10 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar28,*(Cafe **)(this + 0x78),(int)sVar1
                             ,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar28,(Task *)pMVar10);
          pCVar21 = pCVar28 + 0x98;
          uVar5 = 1;
          goto LAB_001866c4;
        }
        iVar14 = CapcomMath::random(2);
        if (iVar14 == 0) {
          sVar1 = *(short *)(*(int *)(this + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(this + 0x78) + 0x98);
        }
        pMVar10 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar28,*(Cafe **)(this + 0x78),(int)sVar1,
                           '\0',false);
        goto LAB_00186622;
      }
      Cafe::removeCafeObject(pCVar13,pCVar28);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(this + 0xb8),iStack_c8);
      this_09 = *(Character **)(pCVar28 + 0x8c);
      if (this_09 != (Character *)0x0) {
        Character::~Character(this_09);
        operator_delete(this_09);
      }
      fVar32 = (float)(**(code **)(*(int *)pCVar28 + 4))(pCVar28);
      iStack_c8 = iStack_c8 + -1;
    }
    else {
      iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar28 + 0x8c) + 0x40),0);
      if (iVar14 != 0) {
        pCVar28[0x84] = (CafeObject)0x0;
      }
LAB_00186718:
      iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar28 + 0x8c) + 0x40),0);
      fVar32 = extraout_s0_09;
      if (iVar14 == 0) {
        fVar32 = (float)checkOverlap(this,(CharacterInstance *)pCVar28);
      }
    }
    iStack_c8 = iStack_c8 + 1;
  } while( true );
}


