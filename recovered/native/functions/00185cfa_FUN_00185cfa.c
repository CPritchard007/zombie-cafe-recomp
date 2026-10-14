/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00185cfa FUN_00185cfa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00185cfa(void)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  FollowTask *this;
  StealFoodTask *this_00;
  int iVar5;
  int iVar6;
  CapcomLinkedList<CharacterInstance*> *this_01;
  undefined4 *puVar7;
  CleanupTask *this_02;
  ServeTask *this_03;
  void *pvVar8;
  CapcomOrderableList<CafeObject*> *this_04;
  MoveTask *pMVar9;
  AttackTask *this_05;
  CapcomOrderableListNode *pCVar10;
  Cafe *pCVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  ConfirmDialog *pCVar15;
  Furniture *pFVar16;
  CafeObject *pCVar17;
  short *psVar18;
  int iVar19;
  void *unaff_r4;
  Character *this_06;
  GameStateRaid *unaff_r5;
  CafeObject *unaff_r6;
  CharacterInstance *pCVar20;
  CafeObject *pCVar21;
  GameStateRaid *pGVar22;
  CharacterInstance *pCVar23;
  CapcomOrderableListNode *pCVar24;
  int *piVar25;
  float fVar26;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  operator_delete(unaff_r4);
LAB_00185d00:
  iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
  if (iVar6 == 0) {
    GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)unaff_r6);
  }
  (**(code **)(*(int *)unaff_r6 + 0x1c))(unaff_r6,in_stack_0000002c);
  fVar26 = (float)CapcomOrderableList<CafeObject*>::sort
                            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),
                             unaff_r6);
  in_stack_0000001c = in_stack_0000001c + 1;
  iVar6 = *(int *)(in_stack_00000034 + 4) + 1;
  if (in_stack_0000001c < iVar6) {
    unaff_r6 = *(CafeObject **)(in_stack_0000001c * 4 + *(int *)(in_stack_00000034 + 8));
    pCVar21 = *(CafeObject **)((CharacterInstance *)unaff_r6 + 0x88);
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0)
    ;
    if (iVar6 == 0) {
      unaff_r5[0x65] = (GameStateRaid)0x0;
      iVar6 = _DAT_00185b8c;
      iVar19 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00185b8c),'+');
      if ((iVar19 == 0) && (((CharacterInstance *)unaff_r6)[0xc4] != (CharacterInstance)0x0)) {
        *(CafeObject **)(unaff_r5 + 0x74) = unaff_r6;
        unaff_r5[0x38] = (GameStateRaid)0x1;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar6),'\"',true);
      }
    }
    else if (unaff_r6 == (CafeObject *)*(CharacterInstance **)(unaff_r5 + 0x114)) {
      *(undefined4 *)(unaff_r5 + 0x114) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)0x0);
    }
    if ((unaff_r5[0x130] == (GameStateRaid)0x0) ||
       ((iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c)), iVar6 != 0
        && (iVar6 = __aeabi_fcmple(*(undefined4 *)
                                    (*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0),
           iVar6 == 0)))) {
      unaff_r5[0x66] = (GameStateRaid)0x0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0)
    ;
    if ((((iVar6 == 0) &&
         (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                 (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c)), iVar6 != 0)
         ) && (in_stack_00000030 != 0)) &&
       ((*(int *)(unaff_r5 + 0xf8) != 0 &&
        ((piVar3 = *(int **)(*(int *)(unaff_r5 + 0xf8) + 0x88), piVar3 == (int *)0x0 ||
         (iVar6 = (**(code **)(*piVar3 + 0x14))(), iVar6 != 3)))))) {
      CharacterInstance::clearTasks();
      *(CafeObject **)(*(int *)(unaff_r5 + 0xf8) + 0x88) = unaff_r6;
    }
    iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                           (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
    if (iVar6 != 0) {
      if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
        in_stack_0000003c = 1;
      }
      unaff_r5[0x6c] = (GameStateRaid)0x1;
      *(undefined1 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar21 != (CafeObject *)0x0) &&
       (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c)),
       iVar6 == 0)) {
      *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
      CharacterInstance::stopTasks((CharacterInstance *)unaff_r6);
    }
    if (*(int *)((CharacterInstance *)unaff_r6 + 0x7c) == 0) {
      iVar19 = *(int *)((CharacterInstance *)unaff_r6 + 0x8c);
      iVar6 = __aeabi_fcmple(*(undefined4 *)(iVar19 + 0x40),0);
      if (iVar6 == 0) {
        if (unaff_r5[0x130] == (GameStateRaid)0x0) {
          if (pCVar21 == (CafeObject *)0x0) {
            if (*(char *)(iVar19 + 0x44) != '\x04') goto LAB_00185d00;
            TutorialSystem::triggerEvent
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00185f0c),' ',false);
            iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                   (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
            if (iVar6 != 0) {
              iVar6 = Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(unaff_r5 + 0x78),'\x03',
                                 (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
              *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
              bVar2 = false;
              do {
                piVar3 = *(int **)(iVar6 + 0x10);
                if (piVar3 == (int *)0x0) {
                  FUN_001869b8();
                }
                iVar19 = *piVar3;
                *(int *)(iVar6 + 0x10) = piVar3[2];
                if (iVar19 == 0) {
                  FUN_001869b8();
                }
                if (bVar2) {
                  FUN_001869b8();
                }
                if (((*(char *)(*(int *)(iVar19 + 0x8c) + 4) != '\x01') &&
                    (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar19 + 0x8c) + 0x40),0),
                    iVar5 == 0)) &&
                   (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),
                                           (int)*(short *)(iVar19 + 0x2c)), iVar5 != 0)) {
                  bVar2 = true;
                  *(int *)((CharacterInstance *)unaff_r6 + 0x88) = iVar19;
                }
              } while( true );
            }
            *(int *)(unaff_r5 + 0x184) = *(int *)(unaff_r5 + 0x184) + 1;
            if (*(int *)(unaff_r5 + 0x17c) == 0) {
              iVar6 = CCSecondsSince1970();
              *(int *)(unaff_r5 + 0x17c) = iVar6 - *(int *)(unaff_r5 + 0x178);
            }
            iVar6 = CCSecondsSince1970();
            *(int *)(unaff_r5 + 0x180) = iVar6 - *(int *)(unaff_r5 + 0x178);
            iVar19 = **(int **)(in_stack_00000024 + _DAT_00185f10);
            iVar6 = **(int **)(in_stack_00000024 + _DAT_00185f14);
            uVar14 = **(int **)(in_stack_00000024 + _DAT_00185f18) + 1;
            CharacterInstance::groan((CharacterInstance *)unaff_r6);
            lVar4 = Cafe::diamondToStaggeredCoords
                              ((int)(((iVar19 + -1) - iVar6) * 0x10000 | uVar14 & 0xffff) >> 0x10,
                               (int)(short)uVar14);
            iVar6 = Cafe::staggeredCoordsToIndex(lVar4);
            this = (FollowTask *)operator_new(0x48);
            MoveTask::MoveTask((MoveTask *)this,(CharacterInstance *)unaff_r6,
                               *(Cafe **)(unaff_r5 + 0x78),iVar6,'\0',false);
          }
          else {
            iVar6 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
            if (iVar6 == 3) {
              iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
              if ((iVar6 == 0) &&
                 (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c)
                                        ), iVar6 != 0)) {
                FUN_001869a2();
              }
              *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
              goto LAB_00185d00;
            }
            iVar6 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
            if (iVar6 != 1) goto LAB_00185d00;
            iVar6 = CafeObject::isAdjacentTo(unaff_r6,(int)*(short *)(pCVar21 + 0x2c));
            if (iVar6 != 0) {
              this_00 = (StealFoodTask *)operator_new(0x48);
              StealFoodTask::StealFoodTask
                        (this_00,(CharacterInstance *)unaff_r6,*(Cafe **)(unaff_r5 + 0x78));
              CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this_00);
              Task::addFinishedListener
                        ((Task *)this_00,
                         *(_func_void_void_ptr_Task_ptr **)(in_stack_00000024 + _DAT_00185b9c),
                         unaff_r5);
              goto LAB_00185d00;
            }
            this = (FollowTask *)operator_new(0x50);
            FollowTask::FollowTask
                      (this,(CharacterInstance *)unaff_r6,pCVar21,*(Cafe **)(unaff_r5 + 0x78),'\0',
                       false);
          }
        }
        else {
          uVar14 = **(int **)(in_stack_00000024 + _DAT_00185b90) - 5;
          lVar4 = Cafe::diamondToStaggeredCoords
                            ((int)(uVar14 & 0xffff |
                                  (**(int **)(in_stack_00000024 + _DAT_00185b94) + 2) * 0x10000) >>
                             0x10,(int)(short)uVar14);
          iVar6 = Cafe::staggeredCoordsToIndex(lVar4);
          this = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this,(CharacterInstance *)unaff_r6,
                             *(Cafe **)(unaff_r5 + 0x78),iVar6,'\0',false);
        }
        CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this);
      }
    }
    goto LAB_00185d00;
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
    iVar19 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
    if (iVar19 < iVar6) {
      FUN_001869c6();
    }
    pCVar15 = *(ConfirmDialog **)(unaff_r5 + 0x164);
    Vector<String>::elementAt((int)&stack0x00000068);
    String::valueOf((int)&stack0x00000070);
    String::operator+((String *)&stack0x00000078,&stack0x00000068,&stack0x00000070);
    Vector<String>::elementAt((int)&stack0x00000080);
    String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
    Vector<String>::elementAt((int)&stack0x00000090);
    Vector<String>::elementAt((int)&stack0x00000098);
    ConfirmDialog::show(pCVar15,&stack0x00000088,&stack0x00000090,&stack0x00000098);
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
  if (in_stack_00000020 == 0) {
    iVar19 = 0;
    if (unaff_r5[0x13] != (GameStateRaid)0x0) {
      for (; iVar19 < iVar6; iVar19 = iVar19 + 1) {
        iVar5 = __aeabi_fcmpeq(*(undefined4 *)
                                (*(int *)(*(int *)(iVar19 * 4 + *(int *)(unaff_r5 + 0xb4)) + 0x8c) +
                                0x40),0);
        if (iVar5 != 0) {
          FUN_001869f0();
        }
      }
      FUN_00185f40();
      return;
    }
    FUN_00185f40();
    return;
  }
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,fVar26,false);
  unaff_r5[100] = (GameStateRaid)0x1;
  unaff_r5[0x15c] = (GameStateRaid)0x1;
  fVar26 = (float)GameStateRaid::layoutState(unaff_r5);
  iVar6 = *(int *)(unaff_r5 + 0xf8);
  if (iVar6 != 0) {
    iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar6 + 0x8c) + 0x40),0);
    if (iVar19 == 0) {
      piVar3 = *(int **)(iVar6 + 0x88);
      if (*(int *)(iVar6 + 0x7c) == 0) {
        if (piVar3 == (int *)0x0) {
          FUN_00186a02();
        }
        iVar6 = (**(code **)(*piVar3 + 0x14))(piVar3);
        if (iVar6 != 3) {
          FUN_00186a02();
        }
        iVar6 = __aeabi_fcmple(*(undefined4 *)(piVar3[0x23] + 0x40),0);
        if ((iVar6 == 0) &&
           (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar3[0xb]), iVar6 != 0)
           ) {
          FUN_00186a1a();
        }
      }
      else if (((piVar3 == (int *)0x0) ||
               (iVar6 = (**(code **)(*piVar3 + 0x14))(piVar3), iVar6 != 3)) ||
              ((iVar6 = __aeabi_fcmple(*(undefined4 *)(piVar3[0x23] + 0x40),0), iVar6 == 0 &&
               (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar3[0xb]),
               iVar6 != 0)))) goto LAB_00186098;
      *(undefined4 *)(*(int *)(unaff_r5 + 0xf8) + 0x88) = 0;
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0xf8));
    }
    else {
      *(undefined1 *)(iVar6 + 0x84) = 0;
    }
LAB_00186098:
    pCVar20 = *(CharacterInstance **)(unaff_r5 + 0xf8);
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,pCVar20);
    }
    piVar3 = *(int **)(unaff_r5 + 0xf8);
    (**(code **)(*piVar3 + 0x1c))(piVar3,in_stack_0000002c);
    fVar26 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x78) + 0x20),*(CafeObject **)(unaff_r5 + 0xf8))
    ;
  }
  if (unaff_r5[0x6c] != (GameStateRaid)0x0) goto LAB_00186274;
  if ((*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) ||
     (this_01 = (CapcomLinkedList<CharacterInstance*> *)0x0,
     *(int *)(*(int *)(unaff_r5 + 0x78) + 0xa8) != -1)) {
    this_01 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
    *(undefined4 *)(this_01 + 4) = 0;
    in_stack_00000020 = 0;
    *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
    *(undefined4 *)(this_01 + 0x10) = 0;
    *(undefined4 *)(this_01 + 0xc) = 0;
    fVar26 = extraout_s0;
    while (in_stack_00000020 < *(int *)(unaff_r5 + 200) + 1) {
      uVar12 = *(undefined4 *)(in_stack_00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
      puVar7 = (undefined4 *)operator_new(8);
      puVar7[1] = 0;
      *(undefined4 **)(*(int *)(this_01 + 8) + 4) = puVar7;
      *(undefined4 **)(this_01 + 8) = puVar7;
      *puVar7 = uVar12;
      *(undefined4 *)(*(int *)(this_01 + 8) + 4) = 0;
      in_stack_00000020 = in_stack_00000020 + 1;
      *(int *)(this_01 + 0x10) = *(int *)(this_01 + 0x10) + 1;
      fVar26 = extraout_s0_00;
    }
  }
  pGVar22 = unaff_r5 + 0xf8;
  iVar6 = *(int *)pGVar22;
  if (((this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) && (iVar6 != 0)) &&
     (*(int *)(this_01 + 0x10) == 0)) {
    piVar3 = (int *)operator_new(8);
    piVar3[1] = 0;
    *(int **)(*(int *)(this_01 + 8) + 4) = piVar3;
    *(int **)(this_01 + 8) = piVar3;
    *piVar3 = iVar6;
    *(undefined4 *)(*(int *)(this_01 + 8) + 4) = 0;
    *(int *)(this_01 + 0x10) = *(int *)(this_01 + 0x10) + 1;
    fVar26 = (float)CharacterInstance::stopTasks(*(CharacterInstance **)pGVar22);
    *(undefined1 *)(*(int *)(*(int *)pGVar22 + 0x8c) + 0x44) = 1;
  }
  if (*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) {
    pFVar16 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xc4);
    do {
      if (*(int *)(this_01 + 0x10) == 0) goto LAB_001861e8;
      iVar6 = CapcomMath::random(*(int *)(this_01 + 0x10));
      pCVar20 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar6);
      fVar26 = extraout_s0_01;
    } while ((*(char *)(*(int *)(pCVar20 + 0x8c) + 0x44) != '\x01') ||
            (*(int *)(pCVar20 + 0x7c) != 0));
    this_02 = (CleanupTask *)operator_new(0x44);
    CleanupTask::CleanupTask(this_02,pCVar20,*(Cafe **)(unaff_r5 + 0x78),pFVar16);
    fVar26 = (float)CharacterInstance::addTask(pCVar20,(Task *)this_02);
  }
LAB_001861e8:
  if ((*(int *)(*(Cafe **)(unaff_r5 + 0x78) + 0xa8) != -1) &&
     (iVar6 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x78)), fVar26 = extraout_s0_02,
     iVar6 != 0)) {
    pCVar20 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xac);
    do {
      if (*(int *)(this_01 + 0x10) == 0) goto LAB_0018624c;
      iVar6 = CapcomMath::random(*(int *)(this_01 + 0x10));
      pCVar23 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar6);
      fVar26 = extraout_s0_03;
    } while ((*(char *)(*(int *)(pCVar23 + 0x8c) + 0x44) != '\x01') ||
            (*(int *)(pCVar23 + 0x7c) != 0));
    this_03 = (ServeTask *)operator_new(0x4c);
    ServeTask::ServeTask(this_03,pCVar23,*(Cafe **)(unaff_r5 + 0x78),pCVar20);
    fVar26 = (float)CharacterInstance::addTask(pCVar23,(Task *)this_03);
  }
LAB_0018624c:
  if (this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
    if (*(int *)(this_01 + 0x10) != 0) {
      while (pvVar8 = *(void **)(this_01 + 4), pvVar8 != (void *)0x0) {
        uVar12 = *(undefined4 *)((int)pvVar8 + 4);
        operator_delete(pvVar8);
        *(undefined4 *)(this_01 + 4) = uVar12;
      }
      *(undefined4 *)(this_01 + 0x10) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
      *(undefined4 *)(this_01 + 0xc) = 0;
    }
    operator_delete(this_01);
    fVar26 = extraout_s0_04;
  }
LAB_00186274:
  for (in_stack_00000020 = 0; in_stack_00000020 < *(int *)(unaff_r5 + 200) + 1;
      in_stack_00000020 = in_stack_00000020 + 1) {
    pCVar20 = *(CharacterInstance **)(in_stack_00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
    if (in_stack_0000003c != 0) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar20 + 0x88) = 0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      pCVar23 = *(CharacterInstance **)(pCVar20 + 0x88);
      if (*(int *)(pCVar20 + 0x7c) == 0) {
        if (pCVar23 == (CharacterInstance *)0x0) {
          if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
            this_04 = (CapcomOrderableList<CafeObject*> *)
                      Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(unaff_r5 + 0x78),'\x03',(int)*(short *)(unaff_r6 + 0x2c)
                                );
            *(undefined4 *)(this_04 + 0x10) = *(undefined4 *)(this_04 + 8);
            bVar2 = false;
            while (piVar3 = *(int **)(this_04 + 0x10), piVar3 != (int *)0x0) {
              iVar6 = *piVar3;
              *(int *)(this_04 + 0x10) = piVar3[2];
              if ((iVar6 == 0) || (bVar2)) break;
              if ((*(char *)(*(int *)(iVar6 + 0x8c) + 4) == '\x01') &&
                 ((iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar6 + 0x8c) + 0x40),0),
                  iVar19 == 0 &&
                  (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar6 + 0x2c)
                                          ), iVar19 != 0)))) {
                *(int *)(pCVar20 + 0x88) = iVar6;
                bVar2 = true;
              }
            }
            if (*(int *)(this_04 + 0x14) != 0) {
              pCVar10 = *(CapcomOrderableListNode **)(this_04 + 8);
              while (pCVar10 != (CapcomOrderableListNode *)0x0) {
                pCVar24 = *(CapcomOrderableListNode **)(pCVar10 + 8);
                CapcomOrderableList<CafeObject*>::deleteNode(this_04,pCVar10);
                pCVar10 = pCVar24;
              }
              *(undefined4 *)(this_04 + 0x14) = 0;
              *(CapcomOrderableList<CafeObject*> **)(this_04 + 0xc) = this_04;
              *(undefined4 *)(this_04 + 0x10) = *(undefined4 *)(this_04 + 8);
            }
            operator_delete(this_04);
          }
        }
        else {
          iVar6 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
          if (iVar6 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar20,0);
            iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
            if ((iVar6 == 0) &&
               (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar23 + 0x2c)),
               iVar6 != 0)) {
              this_05 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_05,pCVar20,pCVar23,*(Cafe **)(unaff_r5 + 0x78));
            }
            else {
              *(undefined4 *)(pCVar20 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar20);
              piVar3 = *(int **)(in_stack_00000024 + DAT_001866fc);
              piVar25 = *(int **)(in_stack_00000024 + DAT_00186700);
              do {
                pCVar11 = *(Cafe **)(unaff_r5 + 0x78);
                iVar6 = CapcomMath::random(*piVar3 * *piVar25);
                iVar19 = Cafe::isInside(pCVar11,iVar6);
              } while (iVar19 == 0);
              this_05 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_05,pCVar20,*(Cafe **)(unaff_r5 + 0x78),iVar6,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar20,(Task *)this_05);
          }
        }
      }
      else if (((pCVar23 != (CharacterInstance *)0x0) &&
               (iVar6 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23), iVar6 == 3)) &&
              ((iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0),
               iVar6 != 0 ||
               (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar23 + 0x2c)),
               iVar6 == 0)))) {
        *(undefined4 *)(pCVar20 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar20);
      }
    }
    else {
      pCVar20[0x84] = (CharacterInstance)0x0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,pCVar20);
    }
    (**(code **)(*(int *)pCVar20 + 0x1c))(pCVar20,in_stack_0000002c);
    fVar26 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x78) + 0x20),(CafeObject *)pCVar20);
  }
  in_stack_00000020 = 0;
  do {
    if (*(int *)(unaff_r5 + 0xbc) + 1 <= in_stack_00000020) {
      for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x100) + 1; iVar6 = iVar6 + 1) {
        piVar3 = *(int **)(iVar6 * 4 + *(int *)(unaff_r5 + 0x104));
        fVar26 = (float)(**(code **)(*piVar3 + 0x1c))(piVar3,in_stack_0000002c);
      }
      iVar6 = *(int *)(unaff_r5 + 0x158);
      *(int *)(unaff_r5 + 0x158) = iVar6 - in_stack_0000002c;
      if (iVar6 - in_stack_0000002c < 0) {
        fVar26 = (float)GameStateRaid::spawnCustomer(unaff_r5,false);
      }
      if (unaff_r5[DAT_00186a7c] == (GameStateRaid)0x0) {
        unaff_r5[DAT_00186a7c] = (GameStateRaid)0x1;
        if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
            (unaff_r5[0x14] == (GameStateRaid)0x0)) &&
           ((unaff_r5[0x16] == (GameStateRaid)0x0 && (unaff_r5[0x15] == (GameStateRaid)0x0)))) {
          iVar6 = 7;
        }
        else {
          iVar6 = 0x13;
        }
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,iVar6,fVar26,false);
      }
      if ((unaff_r5[0x15e] == (GameStateRaid)0x0) && (unaff_r5[0x6c] != (GameStateRaid)0x0)) {
        unaff_r5[0x15e] = (GameStateRaid)0x1;
        iVar19 = 0;
        in_stack_0000002c = 0;
        for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0xbc) + 1; iVar6 = iVar6 + 1) {
          iVar13 = *(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0xc0));
          iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar13 + 0x2c));
          if (iVar5 != 0) {
            if (*(char *)(**(int **)(iVar13 + 0x8c) + DAT_00186a80) == '\0') {
              iVar19 = iVar19 + 1;
            }
            else {
              in_stack_0000002c = in_stack_0000002c + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar19,in_stack_0000002c);
      }
      iVar6 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(iVar6 + DAT_00186a84) != '\0') {
        *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
      }
      if (*(char *)(iVar6 + DAT_00186a88) != '\0') {
        *(undefined1 *)(iVar6 + DAT_00186a88) = 0;
        iVar6 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00186a8c),',');
        if (iVar6 != 0) {
          pCVar15 = *(ConfirmDialog **)(unaff_r5 + 0x164);
          Vector<String>::elementAt((int)&stack0x000000b8);
          Vector<String>::elementAt((int)&stack0x000000c0);
          Vector<String>::elementAt((int)&stack0x000000c8);
          ConfirmDialog::show(pCVar15,&stack0x000000b8,&stack0x000000c0,&stack0x000000c8);
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
    pCVar21 = *(CafeObject **)(in_stack_00000020 * 4 + *(int *)(unaff_r5 + 0xc0));
    (**(code **)(*(int *)pCVar21 + 0x1c))(pCVar21,in_stack_0000002c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),pCVar21);
    if ((unaff_r5[0x6c] != (GameStateRaid)0x0) && (*(int *)(pCVar21 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar21);
    }
    if ((*(int *)(pCVar21 + 0x7c) == 0) &&
       (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0), iVar6 == 0)) {
      piVar3 = *(int **)(pCVar21 + 0x88);
      if (piVar3 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar3 + 0x14))(piVar3);
        if (iVar6 == 3) {
          iVar6 = CafeObject::isAdjacentTo(pCVar21,(int)(short)piVar3[0xb]);
          if (((iVar6 == 0) ||
              (iVar6 = __aeabi_fcmple(*(undefined4 *)(piVar3[0x23] + 0x40),0), iVar6 != 0)) ||
             ((CafeObject *)piVar3[0x22] != pCVar21)) {
            pCVar17 = pCVar21 + 0x88;
            uVar12 = 0;
LAB_001866c4:
            *(undefined4 *)pCVar17 = uVar12;
          }
        }
        else {
          iVar6 = CafeObject::isAdjacentTo(pCVar21,(int)(short)piVar3[0xb]);
          if (iVar6 == 0) {
            *(undefined4 *)(pCVar21 + 0x88) = 0;
          }
        }
        goto LAB_00186718;
      }
      iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c));
      if (iVar6 != 0) {
        if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
          iVar6 = CapcomMath::random(2);
          if (iVar6 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar21,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar6 = *(int *)(pCVar21 + 0x98) + 1;
          *(int *)(pCVar21 + 0x98) = iVar6;
          if (iVar6 < **(int **)(in_stack_00000024 + DAT_00186704)) {
            piVar25 = *(int **)(in_stack_00000024 + DAT_001866fc);
            piVar3 = *(int **)(in_stack_00000024 + DAT_00186700);
            do {
              pCVar11 = *(Cafe **)(unaff_r5 + 0x78);
              in_stack_0000001c = CapcomMath::random(*piVar25 * *piVar3);
              iVar6 = Cafe::isInside(pCVar11,in_stack_0000001c);
            } while (iVar6 == 0);
          }
          else {
            lVar4 = Cafe::diamondToStaggeredCoords
                              ((int)**(short **)(in_stack_00000024 + DAT_00186708),
                               (int)**(short **)(in_stack_00000024 + DAT_0018670c));
            in_stack_0000001c = Cafe::staggeredCoordsToIndex(lVar4);
          }
          if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar21,*(Cafe **)(unaff_r5 + 0x78),
                               in_stack_0000001c,'\0',false);
          }
          else {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar21,*(Cafe **)(unaff_r5 + 0x78),
                               in_stack_0000001c,'\t',false);
          }
        }
LAB_00186622:
        CharacterInstance::addTask((CharacterInstance *)pCVar21,(Task *)pMVar9);
        goto LAB_00186718;
      }
      pCVar11 = *(Cafe **)(unaff_r5 + 0x78);
      if ((*(short *)(pCVar11 + 0x98) != *(short *)(pCVar21 + 0x2c)) &&
         (*(short *)(pCVar11 + 0x9a) != *(short *)(pCVar21 + 0x2c))) {
        if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
          iVar6 = CapcomMath::random(2);
          if (iVar6 == 0) {
            psVar18 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            psVar18 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          sVar1 = *psVar18;
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar21,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar21,(Task *)pMVar9);
          pCVar17 = pCVar21 + 0x98;
          uVar12 = 1;
          goto LAB_001866c4;
        }
        iVar6 = CapcomMath::random(2);
        if (iVar6 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        pMVar9 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar21,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\0',false);
        goto LAB_00186622;
      }
      Cafe::removeCafeObject(pCVar11,pCVar21);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0xb8),in_stack_00000020);
      this_06 = *(Character **)(pCVar21 + 0x8c);
      if (this_06 != (Character *)0x0) {
        Character::~Character(this_06);
        operator_delete(this_06);
      }
      fVar26 = (float)(**(code **)(*(int *)pCVar21 + 4))(pCVar21);
      in_stack_00000020 = in_stack_00000020 + -1;
    }
    else {
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
      if (iVar6 != 0) {
        pCVar21[0x84] = (CafeObject)0x0;
      }
LAB_00186718:
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
      fVar26 = extraout_s0_05;
      if (iVar6 == 0) {
        fVar26 = (float)GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)pCVar21);
      }
    }
    in_stack_00000020 = in_stack_00000020 + 1;
  } while( true );
}


