/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018562a FUN_0018562a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018562a(void)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  long lVar6;
  FollowTask *this;
  StealFoodTask *this_00;
  int iVar7;
  CapcomLinkedList<CharacterInstance*> *this_01;
  undefined4 *puVar8;
  CleanupTask *this_02;
  ServeTask *this_03;
  void *pvVar9;
  CapcomOrderableList<CafeObject*> *this_04;
  MoveTask *pMVar10;
  AttackTask *this_05;
  CapcomOrderableListNode *pCVar11;
  Cafe *pCVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  GameStateRaid GVar16;
  uint uVar17;
  ConfirmDialog *pCVar18;
  Furniture *pFVar19;
  CafeObject *pCVar20;
  short *psVar21;
  int unaff_r4;
  NoticeDialog *pNVar22;
  Character *this_06;
  GameStateRaid *unaff_r5;
  CharacterInstance *unaff_r6;
  CharacterInstance *pCVar23;
  int iVar24;
  CafeObject *pCVar25;
  GameStateRaid *pGVar26;
  CharacterInstance *pCVar27;
  CapcomOrderableListNode *pCVar28;
  int *piVar29;
  float fVar30;
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
  int iStack0000001c;
  int iStack00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  
  if (*(int *)(unaff_r5 + 0x114) != *(int *)(unaff_r5 + 0x74)) {
    FUN_00186a78();
  }
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_001857e0),'6',true);
  FUN_00186a78();
  fVar30 = (float)Cafe::tick(*(Cafe **)(unaff_r5 + 0x78),in_stack_0000002c);
  *(char *)(*(int *)(unaff_r5 + 0x160) + 0x46) = (char)unaff_r4;
  bVar3 = true;
  bVar2 = true;
  *(int *)(*(int *)(unaff_r5 + 0x160) + 0x70) = unaff_r4;
  iVar13 = *(int *)(unaff_r5 + 200);
  iVar24 = unaff_r4;
  for (; unaff_r4 < iVar13 + 1; unaff_r4 = unaff_r4 + 1) {
    iVar7 = __aeabi_fcmple(*(undefined4 *)
                            (*(int *)(*(int *)(unaff_r4 * 4 + *(int *)(unaff_r5 + 0xcc)) + 0x8c) +
                            0x40),0);
    if (iVar7 == 0) {
      iVar24 = iVar24 + 1;
      bVar3 = false;
      bVar2 = false;
    }
    fVar30 = extraout_s0;
  }
  if ((*(int *)(unaff_r5 + 0xf8) != 0) &&
     (iVar13 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0xf8) + 0x8c) + 0x40),0),
     fVar30 = extraout_s0_00, iVar13 == 0)) {
    iVar24 = iVar24 + 1;
    bVar3 = false;
  }
  for (iStack0000001c = 0; iStack0000001c < *(int *)(unaff_r5 + 0xbc) + 1;
      iStack0000001c = iStack0000001c + 1) {
    iVar7 = *(int *)(iStack0000001c * 4 + *(int *)(unaff_r5 + 0xc0));
    iVar13 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar7 + 0x8c) + 0x40),0);
    fVar30 = extraout_s0_01;
    if (iVar13 == 0) {
      iVar13 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar7 + 0x2c));
      iVar24 = iVar24 + (uint)(iVar13 != 0);
      fVar30 = extraout_s0_02;
    }
  }
  if (((iVar24 == 0) && (unaff_r5[0x15c] != (GameStateRaid)0x1)) &&
     (unaff_r5[100] == (GameStateRaid)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,fVar30,false);
    iVar24 = DAT_001857e4;
    unaff_r5[100] = (GameStateRaid)0x1;
    *(undefined4 *)(unaff_r5 + 0x148) = **(undefined4 **)(in_stack_00000024 + iVar24);
    fVar30 = (float)HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
  }
  uVar17 = (uint)(byte)unaff_r5[0x15c];
  if ((uVar17 != 1) && (unaff_r5[100] != (GameStateRaid)0x0)) {
    if (uVar17 - 2 < 6) {
      if (uVar17 == 2) {
        fVar30 = (float)GameStateRaid::sendPresentGift(unaff_r5);
        GVar16 = (GameStateRaid)0x3;
LAB_001858f2:
        unaff_r5[0x15c] = GVar16;
      }
      else if (uVar17 == 3) {
        if (*(int *)(unaff_r5 + 0x174) == 1) {
          unaff_r5[0x15c] = (GameStateRaid)0x7;
          if (((*(char *)(*(int *)(unaff_r5 + 0x164) + 0x14) == '\0') &&
              (pNVar22 = *(NoticeDialog **)(unaff_r5 + 0x30), pNVar22[0x14] == (NoticeDialog)0x0))
             && (*(int *)(unaff_r5 + 0x168) != 0)) {
            String::String((String *)&stack0x00000040,(char *)(DAT_00185b70 + 0x18581e));
            Vector<String>::elementAt((int)&stack0x00000048);
            NoticeDialog::show(pNVar22,&stack0x00000040,&stack0x00000048,0);
            String::~String((String *)&stack0x00000048);
            String::~String((String *)&stack0x00000040);
            ZombieCafe::checkHeroPresentDayRecovery();
            fVar30 = (float)ZombieCafe::save();
          }
        }
        else if (*(int *)(unaff_r5 + 0x174) == 2) {
          pCVar18 = *(ConfirmDialog **)(unaff_r5 + 0x164);
          if ((pCVar18[0x14] == (ConfirmDialog)0x0) &&
             (*(char *)(*(int *)(unaff_r5 + 0x168) + 0x14) == '\0')) {
            String::String((String *)&stack0x00000050,(char *)(DAT_00185b78 + 0x18587a));
            String::String((String *)&stack0x00000058,(char *)(DAT_00185b7c + 0x185884));
            String::String((String *)&stack0x00000060,(char *)(DAT_00185b80 + 0x18588e));
            ConfirmDialog::show(pCVar18,&stack0x00000050,&stack0x00000058,&stack0x00000060);
            String::~String((String *)&stack0x00000060);
            String::~String((String *)&stack0x00000058);
            fVar30 = (float)String::~String((String *)&stack0x00000050);
          }
        }
        else {
          fVar30 = (float)GameStateRaid::drawConnectWindow(unaff_r5);
        }
      }
      else {
        if (uVar17 == 4) {
          (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x20))(*(int **)(unaff_r5 + 0x18),0);
          (**(code **)(**(int **)(unaff_r5 + 0x1c) + 0x20))(*(int **)(unaff_r5 + 0x1c),0);
          fVar30 = (float)(**(code **)(**(int **)(unaff_r5 + 0x20) + 0x20))
                                    (*(int **)(unaff_r5 + 0x20),0);
          GVar16 = (GameStateRaid)0x2;
          goto LAB_001858f2;
        }
        if ((uVar17 == 5) || (uVar17 == 7)) {
          unaff_r5[0x15c] = (GameStateRaid)0x1;
          (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x20))(*(int **)(unaff_r5 + 0x18),0);
          (**(code **)(**(int **)(unaff_r5 + 0x1c) + 0x20))(*(int **)(unaff_r5 + 0x1c),0);
          (**(code **)(**(int **)(unaff_r5 + 0x20) + 0x20))(*(int **)(unaff_r5 + 0x20),0);
          goto LAB_00185920;
        }
      }
    }
    else {
      iVar24 = *(int *)(unaff_r5 + 0x148);
      *(int *)(unaff_r5 + 0x148) = iVar24 - in_stack_0000002c;
      if (iVar24 - in_stack_0000002c < 1) {
        iVar24 = javaCanOpenHero();
        if (iVar24 == 0) {
LAB_001857ac:
          unaff_r5[0x15c] = (GameStateRaid)0x1;
        }
        else if ((unaff_r5[0x14] == (GameStateRaid)0x0) || (unaff_r5[100] == (GameStateRaid)0x0)) {
          unaff_r5[0x15c] = (GameStateRaid)0x1;
        }
        else {
          iVar24 = ZombieCafe::checkHeroPresentDay();
          if (iVar24 == 0) goto LAB_001857ac;
          unaff_r5[0x15c] = (GameStateRaid)0x2;
        }
LAB_00185920:
        fVar30 = (float)GameStateRaid::layoutState(unaff_r5);
      }
    }
  }
  iStack0000001c = 0;
  bVar4 = false;
  unaff_r5[0x65] = (GameStateRaid)0x1;
  unaff_r5[0x66] = (GameStateRaid)0x1;
  for (; iVar24 = *(int *)(unaff_r5 + 0xb0) + 1, iStack0000001c < iVar24;
      iStack0000001c = iStack0000001c + 1) {
    unaff_r6 = *(CharacterInstance **)(iStack0000001c * 4 + *(int *)(unaff_r5 + 0xb4));
    pCVar25 = *(CafeObject **)(unaff_r6 + 0x88);
    iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
    if (iVar24 == 0) {
      unaff_r5[0x65] = (GameStateRaid)0x0;
      iVar24 = _DAT_00185b8c;
      iVar13 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00185b8c),'+');
      if ((iVar13 == 0) && (unaff_r6[0xc4] != (CharacterInstance)0x0)) {
        *(CharacterInstance **)(unaff_r5 + 0x74) = unaff_r6;
        unaff_r5[0x38] = (GameStateRaid)0x1;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar24),'\"',true);
      }
    }
    else if (unaff_r6 == *(CharacterInstance **)(unaff_r5 + 0x114)) {
      *(undefined4 *)(unaff_r5 + 0x114) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)0x0);
    }
    if ((unaff_r5[0x130] == (GameStateRaid)0x0) ||
       ((iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(unaff_r6 + 0x2c)),
        iVar24 != 0 &&
        (iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0), iVar24 == 0))
       )) {
      unaff_r5[0x66] = (GameStateRaid)0x0;
    }
    iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
    if (((((iVar24 == 0) &&
          (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(unaff_r6 + 0x2c)),
          iVar24 != 0)) && (bVar2)) && (*(int *)(unaff_r5 + 0xf8) != 0)) &&
       ((piVar5 = *(int **)(*(int *)(unaff_r5 + 0xf8) + 0x88), piVar5 == (int *)0x0 ||
        (iVar24 = (**(code **)(*piVar5 + 0x14))(), iVar24 != 3)))) {
      CharacterInstance::clearTasks();
      *(CharacterInstance **)(*(int *)(unaff_r5 + 0xf8) + 0x88) = unaff_r6;
    }
    iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(unaff_r6 + 0x2c));
    if (iVar24 != 0) {
      if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
        bVar4 = true;
      }
      unaff_r5[0x6c] = (GameStateRaid)0x1;
      *(undefined1 *)(*(int *)(unaff_r6 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar25 != (CafeObject *)0x0) &&
       (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar25 + 0x2c)),
       iVar24 == 0)) {
      *(undefined4 *)(unaff_r6 + 0x88) = 0;
      CharacterInstance::stopTasks(unaff_r6);
    }
    if (*(int *)(unaff_r6 + 0x7c) == 0) {
      iVar13 = *(int *)(unaff_r6 + 0x8c);
      iVar24 = __aeabi_fcmple(*(undefined4 *)(iVar13 + 0x40),0);
      if (iVar24 == 0) {
        if (unaff_r5[0x130] == (GameStateRaid)0x0) {
          if (pCVar25 == (CafeObject *)0x0) {
            if (*(char *)(iVar13 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00185f0c),' ',false);
              iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(unaff_r6 + 0x2c));
              if (iVar24 != 0) {
                iVar24 = Cafe::createDistanceSortedObjectList
                                   (*(Cafe **)(unaff_r5 + 0x78),'\x03',
                                    (int)*(short *)(unaff_r6 + 0x2c));
                *(undefined4 *)(iVar24 + 0x10) = *(undefined4 *)(iVar24 + 8);
                bVar2 = false;
                do {
                  do {
                    piVar5 = *(int **)(iVar24 + 0x10);
                    if (piVar5 == (int *)0x0) {
                      FUN_001869b8();
                    }
                    iVar13 = *piVar5;
                    *(int *)(iVar24 + 0x10) = piVar5[2];
                    if (iVar13 == 0) {
                      FUN_001869b8();
                    }
                    if (bVar2) {
                      FUN_001869b8();
                    }
                  } while (((*(char *)(*(int *)(iVar13 + 0x8c) + 4) == '\x01') ||
                           (iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar13 + 0x8c) + 0x40),0
                                                  ), iVar7 != 0)) ||
                          (iVar7 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                                  (int)*(short *)(iVar13 + 0x2c)), iVar7 == 0));
                  bVar2 = true;
                  *(int *)(unaff_r6 + 0x88) = iVar13;
                } while( true );
              }
              *(int *)(unaff_r5 + 0x184) = *(int *)(unaff_r5 + 0x184) + 1;
              if (*(int *)(unaff_r5 + 0x17c) == 0) {
                iVar24 = CCSecondsSince1970();
                *(int *)(unaff_r5 + 0x17c) = iVar24 - *(int *)(unaff_r5 + 0x178);
              }
              iVar24 = CCSecondsSince1970();
              *(int *)(unaff_r5 + 0x180) = iVar24 - *(int *)(unaff_r5 + 0x178);
              iVar13 = **(int **)(in_stack_00000024 + _DAT_00185f10);
              iVar24 = **(int **)(in_stack_00000024 + _DAT_00185f14);
              uVar17 = **(int **)(in_stack_00000024 + _DAT_00185f18) + 1;
              CharacterInstance::groan(unaff_r6);
              lVar6 = Cafe::diamondToStaggeredCoords
                                ((int)(((iVar13 + -1) - iVar24) * 0x10000 | uVar17 & 0xffff) >> 0x10
                                 ,(int)(short)uVar17);
              iVar24 = Cafe::staggeredCoordsToIndex(lVar6);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,unaff_r6,*(Cafe **)(unaff_r5 + 0x78),iVar24,'\0',
                                 false);
              goto LAB_00185c6c;
            }
          }
          else {
            iVar24 = (**(code **)(*(int *)pCVar25 + 0x14))(pCVar25);
            if (iVar24 == 3) {
              iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar25 + 0x8c) + 0x40),0);
              if ((iVar24 == 0) &&
                 (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                          (int)*(short *)(pCVar25 + 0x2c)), iVar24 != 0)) {
                FUN_001869a2();
              }
              *(undefined4 *)(unaff_r6 + 0x88) = 0;
            }
            else {
              iVar24 = (**(code **)(*(int *)pCVar25 + 0x14))(pCVar25);
              if (iVar24 == 1) {
                iVar24 = CafeObject::isAdjacentTo
                                   ((CafeObject *)unaff_r6,(int)*(short *)(pCVar25 + 0x2c));
                if (iVar24 == 0) {
                  this = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask
                            (this,unaff_r6,pCVar25,*(Cafe **)(unaff_r5 + 0x78),'\0',false);
                  goto LAB_00185c6c;
                }
                this_00 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask(this_00,unaff_r6,*(Cafe **)(unaff_r5 + 0x78));
                CharacterInstance::addTask(unaff_r6,(Task *)this_00);
                Task::addFinishedListener
                          ((Task *)this_00,
                           *(_func_void_void_ptr_Task_ptr **)(in_stack_00000024 + _DAT_00185b9c),
                           unaff_r5);
              }
            }
          }
        }
        else {
          uVar17 = **(int **)(in_stack_00000024 + _DAT_00185b90) - 5;
          lVar6 = Cafe::diamondToStaggeredCoords
                            ((int)(uVar17 & 0xffff |
                                  (**(int **)(in_stack_00000024 + _DAT_00185b94) + 2) * 0x10000) >>
                             0x10,(int)(short)uVar17);
          iVar24 = Cafe::staggeredCoordsToIndex(lVar6);
          this = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this,unaff_r6,*(Cafe **)(unaff_r5 + 0x78),iVar24,'\0',false
                            );
LAB_00185c6c:
          CharacterInstance::addTask(unaff_r6,(Task *)this);
        }
      }
    }
    iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
    if (iVar24 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,unaff_r6);
    }
    (**(code **)(*(int *)unaff_r6 + 0x1c))(unaff_r6,in_stack_0000002c);
    fVar30 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x78) + 0x20),(CafeObject *)unaff_r6);
  }
  if (unaff_r5[0x15c] == (GameStateRaid)0x1) {
    FUN_00185f5c();
    return;
  }
  if (unaff_r5[0x65] != (GameStateRaid)0x0) {
    if (((unaff_r5[0x13] == (GameStateRaid)0x0) && (unaff_r5[0x15] == (GameStateRaid)0x0)) &&
       (unaff_r5[0x16] == (GameStateRaid)0x0)) {
      FUN_001869c6();
    }
    iVar13 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
    if (iVar13 < iVar24) {
      FUN_001869c6();
    }
    pCVar18 = *(ConfirmDialog **)(unaff_r5 + 0x164);
    Vector<String>::elementAt((int)&stack0x00000068);
    String::valueOf((int)&stack0x00000070);
    String::operator+((String *)&stack0x00000078,&stack0x00000068,&stack0x00000070);
    Vector<String>::elementAt((int)&stack0x00000080);
    String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
    Vector<String>::elementAt((int)&stack0x00000090);
    Vector<String>::elementAt((int)&stack0x00000098);
    ConfirmDialog::show(pCVar18,&stack0x00000088,&stack0x00000090,&stack0x00000098);
    String::~String((String *)&stack0x00000098);
    String::~String((String *)&stack0x00000090);
    String::~String((String *)&stack0x00000088);
    String::~String((String *)&stack0x00000080);
    String::~String((String *)&stack0x00000078);
    String::~String((String *)&stack0x00000070);
    String::~String((String *)&stack0x00000068);
    FUN_00185f5c();
    return;
  }
  if (unaff_r5[0x66] == (GameStateRaid)0x0) {
    FUN_00185f5c();
    return;
  }
  if (!bVar3) {
    iVar13 = 0;
    if (unaff_r5[0x13] != (GameStateRaid)0x0) {
      for (; iVar13 < iVar24; iVar13 = iVar13 + 1) {
        iVar7 = __aeabi_fcmpeq(*(undefined4 *)
                                (*(int *)(*(int *)(iVar13 * 4 + *(int *)(unaff_r5 + 0xb4)) + 0x8c) +
                                0x40),0);
        if (iVar7 != 0) {
          FUN_001869f0();
        }
      }
      FUN_00185f40();
      return;
    }
    FUN_00185f40();
    return;
  }
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,fVar30,false);
  unaff_r5[100] = (GameStateRaid)0x1;
  unaff_r5[0x15c] = (GameStateRaid)0x1;
  fVar30 = (float)GameStateRaid::layoutState(unaff_r5);
  iVar24 = *(int *)(unaff_r5 + 0xf8);
  if (iVar24 == 0) goto LAB_001860d0;
  iVar13 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar24 + 0x8c) + 0x40),0);
  if (iVar13 == 0) {
    piVar5 = *(int **)(iVar24 + 0x88);
    if (*(int *)(iVar24 + 0x7c) == 0) {
      if (piVar5 == (int *)0x0) {
        FUN_00186a02();
      }
      iVar24 = (**(code **)(*piVar5 + 0x14))(piVar5);
      if (iVar24 != 3) {
        FUN_00186a02();
      }
      iVar24 = __aeabi_fcmple(*(undefined4 *)(piVar5[0x23] + 0x40),0);
      if ((iVar24 == 0) &&
         (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar5[0xb]), iVar24 != 0)
         ) {
        FUN_00186a1a();
      }
    }
    else if (((piVar5 == (int *)0x0) ||
             (iVar24 = (**(code **)(*piVar5 + 0x14))(piVar5), iVar24 != 3)) ||
            ((iVar24 = __aeabi_fcmple(*(undefined4 *)(piVar5[0x23] + 0x40),0), iVar24 == 0 &&
             (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar5[0xb]),
             iVar24 != 0)))) goto LAB_00186098;
    *(undefined4 *)(*(int *)(unaff_r5 + 0xf8) + 0x88) = 0;
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0xf8));
  }
  else {
    *(undefined1 *)(iVar24 + 0x84) = 0;
  }
LAB_00186098:
  pCVar23 = *(CharacterInstance **)(unaff_r5 + 0xf8);
  iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
  if (iVar24 == 0) {
    GameStateRaid::checkOverlap(unaff_r5,pCVar23);
  }
  piVar5 = *(int **)(unaff_r5 + 0xf8);
  (**(code **)(*piVar5 + 0x1c))(piVar5,in_stack_0000002c);
  fVar30 = (float)CapcomOrderableList<CafeObject*>::sort
                            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),
                             *(CafeObject **)(unaff_r5 + 0xf8));
LAB_001860d0:
  if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
    if ((*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) ||
       (this_01 = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(unaff_r5 + 0x78) + 0xa8) != -1)) {
      this_01 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this_01 + 4) = 0;
      iStack00000020 = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
      *(undefined4 *)(this_01 + 0x10) = 0;
      *(undefined4 *)(this_01 + 0xc) = 0;
      fVar30 = extraout_s0_03;
      while (iStack00000020 < *(int *)(unaff_r5 + 200) + 1) {
        uVar14 = *(undefined4 *)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
        puVar8 = (undefined4 *)operator_new(8);
        puVar8[1] = 0;
        *(undefined4 **)(*(int *)(this_01 + 8) + 4) = puVar8;
        *(undefined4 **)(this_01 + 8) = puVar8;
        *puVar8 = uVar14;
        *(undefined4 *)(*(int *)(this_01 + 8) + 4) = 0;
        iStack00000020 = iStack00000020 + 1;
        *(int *)(this_01 + 0x10) = *(int *)(this_01 + 0x10) + 1;
        fVar30 = extraout_s0_04;
      }
    }
    pGVar26 = unaff_r5 + 0xf8;
    iVar24 = *(int *)pGVar26;
    if (((this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) && (iVar24 != 0)) &&
       (*(int *)(this_01 + 0x10) == 0)) {
      piVar5 = (int *)operator_new(8);
      piVar5[1] = 0;
      *(int **)(*(int *)(this_01 + 8) + 4) = piVar5;
      *(int **)(this_01 + 8) = piVar5;
      *piVar5 = iVar24;
      *(undefined4 *)(*(int *)(this_01 + 8) + 4) = 0;
      *(int *)(this_01 + 0x10) = *(int *)(this_01 + 0x10) + 1;
      fVar30 = (float)CharacterInstance::stopTasks(*(CharacterInstance **)pGVar26);
      *(undefined1 *)(*(int *)(*(int *)pGVar26 + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) {
      pFVar19 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xc4);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_001861e8;
        iVar24 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar23 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar24);
        fVar30 = extraout_s0_05;
      } while ((*(char *)(*(int *)(pCVar23 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar23 + 0x7c) != 0));
      this_02 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_02,pCVar23,*(Cafe **)(unaff_r5 + 0x78),pFVar19);
      fVar30 = (float)CharacterInstance::addTask(pCVar23,(Task *)this_02);
    }
LAB_001861e8:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x78) + 0xa8) != -1) &&
       (iVar24 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x78)), fVar30 = extraout_s0_06,
       iVar24 != 0)) {
      pCVar23 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xac);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_0018624c;
        iVar24 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar27 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar24);
        fVar30 = extraout_s0_07;
      } while ((*(char *)(*(int *)(pCVar27 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar27 + 0x7c) != 0));
      this_03 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_03,pCVar27,*(Cafe **)(unaff_r5 + 0x78),pCVar23);
      fVar30 = (float)CharacterInstance::addTask(pCVar27,(Task *)this_03);
    }
LAB_0018624c:
    if (this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_01 + 0x10) != 0) {
        while (pvVar9 = *(void **)(this_01 + 4), pvVar9 != (void *)0x0) {
          uVar14 = *(undefined4 *)((int)pvVar9 + 4);
          operator_delete(pvVar9);
          *(undefined4 *)(this_01 + 4) = uVar14;
        }
        *(undefined4 *)(this_01 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
        *(undefined4 *)(this_01 + 0xc) = 0;
      }
      operator_delete(this_01);
      fVar30 = extraout_s0_08;
    }
  }
  for (iStack00000020 = 0; iStack00000020 < *(int *)(unaff_r5 + 200) + 1;
      iStack00000020 = iStack00000020 + 1) {
    pCVar23 = *(CharacterInstance **)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
    if (bVar4) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar23 + 0x88) = 0;
    }
    iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
    if (iVar24 == 0) {
      pCVar27 = *(CharacterInstance **)(pCVar23 + 0x88);
      if (*(int *)(pCVar23 + 0x7c) == 0) {
        if (pCVar27 == (CharacterInstance *)0x0) {
          if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
            this_04 = (CapcomOrderableList<CafeObject*> *)
                      Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(unaff_r5 + 0x78),'\x03',(int)*(short *)(unaff_r6 + 0x2c)
                                );
            *(undefined4 *)(this_04 + 0x10) = *(undefined4 *)(this_04 + 8);
            bVar2 = false;
            while (piVar5 = *(int **)(this_04 + 0x10), piVar5 != (int *)0x0) {
              iVar24 = *piVar5;
              *(int *)(this_04 + 0x10) = piVar5[2];
              if ((iVar24 == 0) || (bVar2)) break;
              if ((*(char *)(*(int *)(iVar24 + 0x8c) + 4) == '\x01') &&
                 ((iVar13 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar24 + 0x8c) + 0x40),0),
                  iVar13 == 0 &&
                  (iVar13 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                           (int)*(short *)(iVar24 + 0x2c)), iVar13 != 0)))) {
                *(int *)(pCVar23 + 0x88) = iVar24;
                bVar2 = true;
              }
            }
            if (*(int *)(this_04 + 0x14) != 0) {
              pCVar11 = *(CapcomOrderableListNode **)(this_04 + 8);
              while (pCVar11 != (CapcomOrderableListNode *)0x0) {
                pCVar28 = *(CapcomOrderableListNode **)(pCVar11 + 8);
                CapcomOrderableList<CafeObject*>::deleteNode(this_04,pCVar11);
                pCVar11 = pCVar28;
              }
              *(undefined4 *)(this_04 + 0x14) = 0;
              *(CapcomOrderableList<CafeObject*> **)(this_04 + 0xc) = this_04;
              *(undefined4 *)(this_04 + 0x10) = *(undefined4 *)(this_04 + 8);
            }
            operator_delete(this_04);
          }
        }
        else {
          iVar24 = (**(code **)(*(int *)pCVar27 + 0x14))(pCVar27);
          if (iVar24 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar23,0);
            iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar27 + 0x8c) + 0x40),0);
            if ((iVar24 == 0) &&
               (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar27 + 0x2c))
               , iVar24 != 0)) {
              this_05 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_05,pCVar23,pCVar27,*(Cafe **)(unaff_r5 + 0x78));
            }
            else {
              *(undefined4 *)(pCVar23 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar23);
              piVar5 = *(int **)(in_stack_00000024 + DAT_001866fc);
              piVar29 = *(int **)(in_stack_00000024 + DAT_00186700);
              do {
                pCVar12 = *(Cafe **)(unaff_r5 + 0x78);
                iVar24 = CapcomMath::random(*piVar5 * *piVar29);
                iVar13 = Cafe::isInside(pCVar12,iVar24);
              } while (iVar13 == 0);
              this_05 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_05,pCVar23,*(Cafe **)(unaff_r5 + 0x78),iVar24,'\0'
                                 ,false);
            }
            CharacterInstance::addTask(pCVar23,(Task *)this_05);
          }
        }
      }
      else if (((pCVar27 != (CharacterInstance *)0x0) &&
               (iVar24 = (**(code **)(*(int *)pCVar27 + 0x14))(pCVar27), iVar24 == 3)) &&
              ((iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar27 + 0x8c) + 0x40),0),
               iVar24 != 0 ||
               (iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar27 + 0x2c))
               , iVar24 == 0)))) {
        *(undefined4 *)(pCVar23 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar23);
      }
    }
    else {
      pCVar23[0x84] = (CharacterInstance)0x0;
    }
    iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
    if (iVar24 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,pCVar23);
    }
    (**(code **)(*(int *)pCVar23 + 0x1c))(pCVar23,in_stack_0000002c);
    fVar30 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x78) + 0x20),(CafeObject *)pCVar23);
  }
  iStack00000020 = 0;
  do {
    if (*(int *)(unaff_r5 + 0xbc) + 1 <= iStack00000020) {
      for (iVar24 = 0; iVar24 < *(int *)(unaff_r5 + 0x100) + 1; iVar24 = iVar24 + 1) {
        piVar5 = *(int **)(iVar24 * 4 + *(int *)(unaff_r5 + 0x104));
        fVar30 = (float)(**(code **)(*piVar5 + 0x1c))(piVar5,in_stack_0000002c);
      }
      iVar24 = *(int *)(unaff_r5 + 0x158);
      *(int *)(unaff_r5 + 0x158) = iVar24 - in_stack_0000002c;
      if (iVar24 - in_stack_0000002c < 0) {
        fVar30 = (float)GameStateRaid::spawnCustomer(unaff_r5,false);
      }
      if (unaff_r5[DAT_00186a7c] == (GameStateRaid)0x0) {
        unaff_r5[DAT_00186a7c] = (GameStateRaid)0x1;
        if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
            (unaff_r5[0x14] == (GameStateRaid)0x0)) &&
           ((unaff_r5[0x16] == (GameStateRaid)0x0 && (unaff_r5[0x15] == (GameStateRaid)0x0)))) {
          iVar24 = 7;
        }
        else {
          iVar24 = 0x13;
        }
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,iVar24,fVar30,false);
      }
      if ((unaff_r5[0x15e] == (GameStateRaid)0x0) && (unaff_r5[0x6c] != (GameStateRaid)0x0)) {
        unaff_r5[0x15e] = (GameStateRaid)0x1;
        iVar13 = 0;
        in_stack_0000002c = 0;
        for (iVar24 = 0; iVar24 < *(int *)(unaff_r5 + 0xbc) + 1; iVar24 = iVar24 + 1) {
          iVar15 = *(int *)(iVar24 * 4 + *(int *)(unaff_r5 + 0xc0));
          iVar7 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar15 + 0x2c));
          if (iVar7 != 0) {
            if (*(char *)(**(int **)(iVar15 + 0x8c) + DAT_00186a80) == '\0') {
              iVar13 = iVar13 + 1;
            }
            else {
              in_stack_0000002c = in_stack_0000002c + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar13,in_stack_0000002c);
      }
      iVar24 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(iVar24 + DAT_00186a84) != '\0') {
        *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
      }
      if (*(char *)(iVar24 + DAT_00186a88) != '\0') {
        *(undefined1 *)(iVar24 + DAT_00186a88) = 0;
        iVar24 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00186a8c),',');
        if (iVar24 != 0) {
          pCVar18 = *(ConfirmDialog **)(unaff_r5 + 0x164);
          Vector<String>::elementAt((int)&stack0x000000b8);
          Vector<String>::elementAt((int)&stack0x000000c0);
          Vector<String>::elementAt((int)&stack0x000000c8);
          ConfirmDialog::show(pCVar18,&stack0x000000b8,&stack0x000000c0,&stack0x000000c8);
          String::~String((String *)&stack0x000000c8);
          String::~String((String *)&stack0x000000c0);
          String::~String((String *)&stack0x000000b8);
          FUN_00186a78();
          return;
        }
        FUN_00186a78();
        return;
      }
      FUN_00186a78();
      return;
    }
    pCVar25 = *(CafeObject **)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xc0));
    (**(code **)(*(int *)pCVar25 + 0x1c))(pCVar25,in_stack_0000002c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),pCVar25);
    if ((unaff_r5[0x6c] != (GameStateRaid)0x0) && (*(int *)(pCVar25 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar25);
    }
    if ((*(int *)(pCVar25 + 0x7c) == 0) &&
       (iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar25 + 0x8c) + 0x40),0), iVar24 == 0)) {
      piVar5 = *(int **)(pCVar25 + 0x88);
      if (piVar5 != (int *)0x0) {
        iVar24 = (**(code **)(*piVar5 + 0x14))(piVar5);
        if (iVar24 == 3) {
          iVar24 = CafeObject::isAdjacentTo(pCVar25,(int)(short)piVar5[0xb]);
          if (((iVar24 == 0) ||
              (iVar24 = __aeabi_fcmple(*(undefined4 *)(piVar5[0x23] + 0x40),0), iVar24 != 0)) ||
             ((CafeObject *)piVar5[0x22] != pCVar25)) {
            pCVar20 = pCVar25 + 0x88;
            uVar14 = 0;
LAB_001866c4:
            *(undefined4 *)pCVar20 = uVar14;
          }
        }
        else {
          iVar24 = CafeObject::isAdjacentTo(pCVar25,(int)(short)piVar5[0xb]);
          if (iVar24 == 0) {
            *(undefined4 *)(pCVar25 + 0x88) = 0;
          }
        }
        goto LAB_00186718;
      }
      iVar24 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar25 + 0x2c));
      if (iVar24 != 0) {
        if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
          iVar24 = CapcomMath::random(2);
          if (iVar24 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          pMVar10 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar25,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar24 = *(int *)(pCVar25 + 0x98) + 1;
          *(int *)(pCVar25 + 0x98) = iVar24;
          if (iVar24 < **(int **)(in_stack_00000024 + DAT_00186704)) {
            piVar29 = *(int **)(in_stack_00000024 + DAT_001866fc);
            piVar5 = *(int **)(in_stack_00000024 + DAT_00186700);
            do {
              pCVar12 = *(Cafe **)(unaff_r5 + 0x78);
              iStack0000001c = CapcomMath::random(*piVar29 * *piVar5);
              iVar24 = Cafe::isInside(pCVar12,iStack0000001c);
            } while (iVar24 == 0);
          }
          else {
            lVar6 = Cafe::diamondToStaggeredCoords
                              ((int)**(short **)(in_stack_00000024 + DAT_00186708),
                               (int)**(short **)(in_stack_00000024 + DAT_0018670c));
            iStack0000001c = Cafe::staggeredCoordsToIndex(lVar6);
          }
          if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
            pMVar10 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar25,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\0',false);
          }
          else {
            pMVar10 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar25,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\t',false);
          }
        }
LAB_00186622:
        CharacterInstance::addTask((CharacterInstance *)pCVar25,(Task *)pMVar10);
        goto LAB_00186718;
      }
      pCVar12 = *(Cafe **)(unaff_r5 + 0x78);
      if ((*(short *)(pCVar12 + 0x98) != *(short *)(pCVar25 + 0x2c)) &&
         (*(short *)(pCVar12 + 0x9a) != *(short *)(pCVar25 + 0x2c))) {
        if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
          iVar24 = CapcomMath::random(2);
          if (iVar24 == 0) {
            psVar21 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            psVar21 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          sVar1 = *psVar21;
          pMVar10 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar25,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar25,(Task *)pMVar10);
          pCVar20 = pCVar25 + 0x98;
          uVar14 = 1;
          goto LAB_001866c4;
        }
        iVar24 = CapcomMath::random(2);
        if (iVar24 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        pMVar10 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar25,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\0',false);
        goto LAB_00186622;
      }
      Cafe::removeCafeObject(pCVar12,pCVar25);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0xb8),iStack00000020);
      this_06 = *(Character **)(pCVar25 + 0x8c);
      if (this_06 != (Character *)0x0) {
        Character::~Character(this_06);
        operator_delete(this_06);
      }
      fVar30 = (float)(**(code **)(*(int *)pCVar25 + 4))(pCVar25);
      iStack00000020 = iStack00000020 + -1;
    }
    else {
      iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar25 + 0x8c) + 0x40),0);
      if (iVar24 != 0) {
        pCVar25[0x84] = (CafeObject)0x0;
      }
LAB_00186718:
      iVar24 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar25 + 0x8c) + 0x40),0);
      fVar30 = extraout_s0_09;
      if (iVar24 == 0) {
        fVar30 = (float)GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)pCVar25);
      }
    }
    iStack00000020 = iStack00000020 + 1;
  } while( true );
}


