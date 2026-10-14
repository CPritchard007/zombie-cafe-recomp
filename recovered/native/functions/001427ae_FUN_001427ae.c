/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001427ae FUN_001427ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001427ae(float param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  MoveTask *pMVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  FollowTask *this;
  StealFoodTask *this_00;
  CapcomLinkedList<CharacterInstance*> *this_01;
  CleanupTask *this_02;
  ServeTask *this_03;
  void *pvVar9;
  AttackTask *pAVar10;
  Cafe *pCVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  Furniture *pFVar16;
  CafeObject *pCVar17;
  CharacterInstance *pCVar18;
  int iVar19;
  Character *this_04;
  GameStateFriendCafe *unaff_r5;
  int iVar20;
  int *piVar21;
  CafeObject *pCVar22;
  CharacterInstance *pCVar23;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  int iStack0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  
  if (*(CharacterInstance **)(unaff_r5 + 0x15c) != (CharacterInstance *)0x0) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x15c));
    *(undefined4 *)(*(int *)(unaff_r5 + 0x15c) + 0x88) = 0;
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x15c));
    pMVar5 = (MoveTask *)operator_new(0x48);
    pCVar18 = *(CharacterInstance **)(unaff_r5 + 0x15c);
    MoveTask::MoveTask(pMVar5,pCVar18,*(Cafe **)(unaff_r5 + 0x34),in_stack_00000010,'\0',false);
    param_1 = (float)CharacterInstance::addTask(pCVar18,(Task *)pMVar5);
  }
  iVar14 = *(int *)(unaff_r5 + 0x130);
  iVar20 = 0;
  bVar3 = true;
  bVar2 = true;
  for (iVar19 = 0; iVar19 < iVar14 + 1; iVar19 = iVar19 + 1) {
    iVar13 = __aeabi_fcmple(*(undefined4 *)
                             (*(int *)(*(int *)(iVar19 * 4 + *(int *)(unaff_r5 + 0x134)) + 0x8c) +
                             0x40),0);
    if (iVar13 == 0) {
      iVar20 = iVar20 + 1;
      bVar3 = false;
      bVar2 = false;
    }
    param_1 = extraout_s0;
  }
  if ((*(int *)(unaff_r5 + 0xbc) != 0) &&
     (iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r5 + 0xbc) + 0x40),0),
     param_1 = extraout_s0_00, iVar14 == 0)) {
    iVar20 = iVar20 + 1;
    bVar3 = false;
  }
  for (iVar14 = 0; iVar14 < *(int *)(unaff_r5 + 0x13c) + 1; iVar14 = iVar14 + 1) {
    iVar13 = *(int *)(iVar14 * 4 + *(int *)(unaff_r5 + 0x140));
    iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar13 + 0x8c) + 0x40),0);
    param_1 = extraout_s0_01;
    if (iVar19 == 0) {
      iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar13 + 0x2c));
      iVar20 = iVar20 + (uint)(iVar19 != 0);
      param_1 = extraout_s0_02;
    }
  }
  if (((iVar20 == 0) && (unaff_r5[0x38] != (GameStateFriendCafe)0x3)) &&
     (unaff_r5[0xd8] == (GameStateFriendCafe)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,param_1,false);
    iVar14 = DAT_00142c0c;
    unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
    *(undefined4 *)(unaff_r5 + 0xdc) = **(undefined4 **)(in_stack_00000014 + iVar14);
    param_1 = (float)FriendCafeHudElement::setButtonAvailability
                               (*(FriendCafeHudElement **)(unaff_r5 + 0x19c),4,false);
  }
  if (((unaff_r5[0x38] != (GameStateFriendCafe)0x3) && (unaff_r5[0xd8] != (GameStateFriendCafe)0x0))
     && (iVar14 = *(int *)(unaff_r5 + 0xdc) - in_stack_0000001c, *(int *)(unaff_r5 + 0xdc) = iVar14,
        iVar14 < 1)) {
    unaff_r5[0x38] = (GameStateFriendCafe)0x3;
    param_1 = (float)GameStateFriendCafe::initRaidRewards(unaff_r5);
  }
  unaff_r5[0x104] = (GameStateFriendCafe)0x1;
  unaff_r5[0x105] = (GameStateFriendCafe)0x1;
  bVar4 = false;
  for (iStack0000000c = 0; iStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
      iStack0000000c = iStack0000000c + 1) {
    pCVar18 = *(CharacterInstance **)(iStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
    sVar1 = *(short *)(pCVar18 + 0x2c);
    iVar14 = **(int **)(in_stack_00000014 + _DAT_00142c10);
    uVar6 = __divsi3((int)sVar1,iVar14);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar6 & 0xffff | ((int)sVar1 - uVar6 * iVar14) * 0x10000) >> 0x10,
               (int)(short)uVar6);
    pCVar22 = *(CafeObject **)(pCVar18 + 0x88);
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      unaff_r5[0x104] = (GameStateFriendCafe)0x0;
    }
    else if (pCVar18 == *(CharacterInstance **)(unaff_r5 + 0x15c)) {
      *(undefined4 *)(unaff_r5 + 0x15c) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)0x0);
    }
    if ((unaff_r5[0xc4] == (GameStateFriendCafe)0x0) ||
       ((iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c)),
        iVar14 != 0 &&
        (iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0), iVar14 == 0)))
       ) {
      unaff_r5[0x105] = (GameStateFriendCafe)0x0;
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (((((iVar14 == 0) &&
          (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c)),
          iVar14 != 0)) && (bVar2)) && (*(int *)(unaff_r5 + 0x128) != 0)) &&
       ((piVar7 = *(int **)(*(int *)(unaff_r5 + 0x128) + 0x88), piVar7 == (int *)0x0 ||
        (iVar14 = (**(code **)(*piVar7 + 0x14))(), iVar14 != 3)))) {
      CharacterInstance::clearTasks();
      *(CharacterInstance **)(*(int *)(unaff_r5 + 0x128) + 0x88) = pCVar18;
    }
    iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c));
    if (iVar14 != 0) {
      if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
        bVar4 = true;
      }
      unaff_r5[0x106] = (GameStateFriendCafe)0x1;
      *(undefined1 *)(*(int *)(pCVar18 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar22 != (CafeObject *)0x0) &&
       (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar22 + 0x2c)),
       iVar14 == 0)) {
      *(undefined4 *)(pCVar18 + 0x88) = 0;
      CharacterInstance::stopTasks(pCVar18);
    }
    if (*(int *)(pCVar18 + 0x7c) == 0) {
      iVar19 = *(int *)(pCVar18 + 0x8c);
      iVar14 = __aeabi_fcmple(*(undefined4 *)(iVar19 + 0x40),0);
      if (iVar14 == 0) {
        if (unaff_r5[0xc4] == (GameStateFriendCafe)0x0) {
          if (pCVar22 == (CafeObject *)0x0) {
            if (*(char *)(iVar19 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00142c24),' ',false);
              iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c));
              if (iVar14 != 0) {
                iVar14 = Cafe::createDistanceSortedObjectList
                                   (*(Cafe **)(unaff_r5 + 0x34),'\x03',
                                    (int)*(short *)(pCVar18 + 0x2c));
                *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(iVar14 + 8);
                bVar2 = false;
                do {
                  puVar15 = *(undefined4 **)(iVar14 + 0x10);
                  if (puVar15 == (undefined4 *)0x0) {
                    FUN_00143570();
                  }
                  piVar7 = (int *)*puVar15;
                  *(undefined4 *)(iVar14 + 0x10) = puVar15[2];
                  if (piVar7 == (int *)0x0) {
                    FUN_00143570();
                  }
                  if (bVar2) {
                    FUN_00143570();
                  }
                  iVar19 = __aeabi_fcmple(*(undefined4 *)(piVar7[0x23] + 0x40),0);
                  if (((iVar19 == 0) &&
                      (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)(short)piVar7[0xb]),
                      iVar19 != 0)) && (iVar19 = (**(code **)(*piVar7 + 0x20))(piVar7), iVar19 != 2)
                     ) {
                    bVar2 = true;
                    *(int **)(pCVar18 + 0x88) = piVar7;
                  }
                } while( true );
              }
              iVar19 = **(int **)(in_stack_00000014 + _DAT_00142c14);
              iVar14 = **(int **)(in_stack_00000014 + _DAT_00142c28);
              iVar20 = **(int **)(in_stack_00000014 + _DAT_00142c18);
              CharacterInstance::groan(pCVar18);
              lVar8 = Cafe::diamondToStaggeredCoords
                                ((iVar20 + -1) * 0x10000 | iVar19 + iVar14 + 1U & 0xffff);
              iVar14 = Cafe::staggeredCoordsToIndex(lVar8);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,pCVar18,*(Cafe **)(unaff_r5 + 0x34),iVar14,'\0',
                                 false);
              goto LAB_00142be6;
            }
          }
          else {
            iVar14 = (**(code **)(*(int *)pCVar22 + 0x14))(pCVar22);
            if (iVar14 == 3) {
              iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
              if ((iVar14 == 0) &&
                 (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                                          (int)*(short *)(pCVar22 + 0x2c)), iVar14 != 0)) {
                FUN_0014355a();
              }
              *(undefined4 *)(pCVar18 + 0x88) = 0;
            }
            else {
              iVar14 = (**(code **)(*(int *)pCVar22 + 0x14))(pCVar22);
              if (iVar14 == 1) {
                iVar14 = CafeObject::isAdjacentTo
                                   ((CafeObject *)pCVar18,(int)*(short *)(pCVar22 + 0x2c));
                if (iVar14 == 0) {
                  this = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask
                            (this,pCVar18,pCVar22,*(Cafe **)(unaff_r5 + 0x34),'\0',false);
                  goto LAB_00142be6;
                }
                this_00 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask(this_00,pCVar18,*(Cafe **)(unaff_r5 + 0x34));
                CharacterInstance::addTask(pCVar18,(Task *)this_00);
                Task::addFinishedListener
                          ((Task *)this_00,
                           *(_func_void_void_ptr_Task_ptr **)(in_stack_00000014 + _DAT_00142c20),
                           unaff_r5);
              }
            }
          }
        }
        else {
          lVar8 = Cafe::diamondToStaggeredCoords
                            ((**(int **)(in_stack_00000014 + _DAT_00142c18) + 5) * 0x10000 |
                             **(int **)(in_stack_00000014 + _DAT_00142c14) + 2U & 0xffff);
          iVar14 = Cafe::staggeredCoordsToIndex(lVar8);
          this = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this,pCVar18,*(Cafe **)(unaff_r5 + 0x34),iVar14,'\0',false)
          ;
LAB_00142be6:
          CharacterInstance::addTask(pCVar18,(Task *)this);
        }
      }
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar18);
    }
    (**(code **)(*(int *)pCVar18 + 0x1c))(pCVar18,in_stack_0000001c);
    param_1 = (float)CapcomOrderableList<CafeObject*>::sort
                               ((CapcomOrderableList<CafeObject*> *)
                                (*(int *)(unaff_r5 + 0x34) + 0x20),(CafeObject *)pCVar18);
  }
  if (unaff_r5[0x38] != (GameStateFriendCafe)0x3) {
    if (unaff_r5[0x104] == (GameStateFriendCafe)0x0) {
      if (unaff_r5[0x105] != (GameStateFriendCafe)0x0) {
        if (bVar3) {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,param_1,false);
          unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
        }
        else {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,1,param_1,false);
        }
        unaff_r5[0x38] = (GameStateFriendCafe)0x3;
        GameStateFriendCafe::initRaidRewards(unaff_r5);
      }
    }
    else {
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,param_1,false);
      unaff_r5[0x38] = (GameStateFriendCafe)0x3;
      GameStateFriendCafe::initRaidRewards(unaff_r5);
      *(undefined4 *)(unaff_r5 + 0xe0) = 0;
    }
  }
  iVar14 = *(int *)(unaff_r5 + 0x128);
  if (iVar14 == 0) goto LAB_00142e42;
  iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0);
  if (iVar19 == 0) {
    pCVar18 = *(CharacterInstance **)(iVar14 + 0x88);
    if (*(int *)(iVar14 + 0x7c) == 0) {
      if ((pCVar18 != (CharacterInstance *)0x0) &&
         (iVar14 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18), iVar14 == 3)) {
        iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
        if ((iVar14 != 0) ||
           (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c)),
           iVar14 == 0)) goto LAB_00142df0;
        pAVar10 = (AttackTask *)operator_new(0x40);
        pCVar23 = *(CharacterInstance **)(unaff_r5 + 0x128);
        AttackTask::AttackTask(pAVar10,pCVar23,pCVar18,*(Cafe **)(unaff_r5 + 0x34));
        CharacterInstance::addTask(pCVar23,(Task *)pAVar10);
      }
    }
    else if (((pCVar18 != (CharacterInstance *)0x0) &&
             (iVar14 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18), iVar14 == 3)) &&
            ((iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0),
             iVar14 != 0 ||
             (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c)),
             iVar14 == 0)))) {
LAB_00142df0:
      *(undefined4 *)(*(int *)(unaff_r5 + 0x128) + 0x88) = 0;
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
    }
  }
  else {
    *(undefined1 *)(iVar14 + 0x84) = 0;
  }
  pCVar18 = *(CharacterInstance **)(unaff_r5 + 0x128);
  iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
  if (iVar14 == 0) {
    GameStateFriendCafe::checkOverlap(unaff_r5,pCVar18);
  }
  (**(code **)(**(int **)(unaff_r5 + 0x128) + 0x1c))(*(int **)(unaff_r5 + 0x128),in_stack_0000001c);
  CapcomOrderableList<CafeObject*>::sort
            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
             *(CafeObject **)(unaff_r5 + 0x128));
LAB_00142e42:
  if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
    if ((*(int *)(*(int *)(unaff_r5 + 0x34) + 0xc0) != -1) ||
       (this_01 = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(unaff_r5 + 0x34) + 0xa8) != -1)) {
      this_01 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this_01 + 4) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
      *(undefined4 *)(this_01 + 0x10) = 0;
      *(undefined4 *)(this_01 + 0xc) = 0;
      for (iVar14 = 0; iVar14 < *(int *)(unaff_r5 + 0x130) + 1; iVar14 = iVar14 + 1) {
        CapcomLinkedList<CharacterInstance*>::add
                  (this_01,*(CharacterInstance **)(iVar14 * 4 + *(int *)(unaff_r5 + 0x134)));
      }
    }
    if (((this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) &&
        (*(CharacterInstance **)(unaff_r5 + 0x128) != (CharacterInstance *)0x0)) &&
       (*(int *)(this_01 + 0x10) == 0)) {
      CapcomLinkedList<CharacterInstance*>::add(this_01,*(CharacterInstance **)(unaff_r5 + 0x128));
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
      *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x128) + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(unaff_r5 + 0x34) + 0xc0) != -1) {
      pFVar16 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xc4);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f1c;
        iVar14 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar18 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar14);
      } while ((*(char *)(*(int *)(pCVar18 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar18 + 0x7c) != 0));
      this_02 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_02,pCVar18,*(Cafe **)(unaff_r5 + 0x34),pFVar16);
      CharacterInstance::addTask(pCVar18,(Task *)this_02);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
       (iVar14 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar14 != 0)) {
      pCVar18 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f80;
        iVar14 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar23 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar14);
      } while ((*(char *)(*(int *)(pCVar23 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar23 + 0x7c) != 0));
      this_03 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_03,pCVar23,*(Cafe **)(unaff_r5 + 0x34),pCVar18);
      CharacterInstance::addTask(pCVar23,(Task *)this_03);
    }
LAB_00142f80:
    if (this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_01 + 0x10) != 0) {
        while (pvVar9 = *(void **)(this_01 + 4), pvVar9 != (void *)0x0) {
          uVar12 = *(undefined4 *)((int)pvVar9 + 4);
          operator_delete(pvVar9);
          *(undefined4 *)(this_01 + 4) = uVar12;
        }
        *(undefined4 *)(this_01 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
        *(undefined4 *)(this_01 + 0xc) = 0;
      }
      operator_delete(this_01);
    }
  }
  for (in_stack_00000010 = 0; in_stack_00000010 < *(int *)(unaff_r5 + 0x130) + 1;
      in_stack_00000010 = in_stack_00000010 + 1) {
    pCVar18 = *(CharacterInstance **)(in_stack_00000010 * 4 + *(int *)(unaff_r5 + 0x134));
    if (bVar4) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar18 + 0x88) = 0;
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      pCVar23 = *(CharacterInstance **)(pCVar18 + 0x88);
      if (*(int *)(pCVar18 + 0x7c) == 0) {
        if (pCVar23 == (CharacterInstance *)0x0) {
          iStack0000000c = 0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; iStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                iStack0000000c = iStack0000000c + 1) {
              iVar19 = *(int *)(iStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar19 + 0x8c) + 0x40),0);
              if ((iVar14 == 0) &&
                 (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar19 + 0x2c)
                                         ), iVar14 != 0)) {
                *(int *)(pCVar18 + 0x88) = iVar19;
                break;
              }
            }
          }
        }
        else {
          iVar14 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
          if (iVar14 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar18,0);
            iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
            if ((iVar14 == 0) &&
               (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar23 + 0x2c))
               , iVar14 != 0)) {
              pAVar10 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar10,pCVar18,pCVar23,*(Cafe **)(unaff_r5 + 0x34));
            }
            else {
              *(undefined4 *)(pCVar18 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar18);
              piVar21 = *(int **)(in_stack_00000014 + DAT_001433f4);
              piVar7 = *(int **)(in_stack_00000014 + DAT_001433f8);
              do {
                pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
                iVar14 = CapcomMath::random(*piVar21 * *piVar7);
                iVar19 = Cafe::isInside(pCVar11,iVar14);
              } while (iVar19 == 0);
              pAVar10 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar10,pCVar18,*(Cafe **)(unaff_r5 + 0x34),iVar14,'\0'
                                 ,false);
            }
            CharacterInstance::addTask(pCVar18,(Task *)pAVar10);
          }
        }
      }
      else if (((pCVar23 != (CharacterInstance *)0x0) &&
               (iVar14 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23), iVar14 == 3)) &&
              ((iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0),
               iVar14 != 0 ||
               (iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar23 + 0x2c))
               , iVar14 == 0)))) {
        *(undefined4 *)(pCVar18 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar18);
      }
    }
    else {
      pCVar18[0x84] = (CharacterInstance)0x0;
    }
    iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar14 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar18);
    }
    (**(code **)(*(int *)pCVar18 + 0x1c))(pCVar18,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               (CafeObject *)pCVar18);
  }
  in_stack_00000010 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x13c) + 1 <= in_stack_00000010) {
      for (iVar14 = 0; iVar14 < *(int *)(unaff_r5 + 0x148) + 1; iVar14 = iVar14 + 1) {
        piVar7 = *(int **)(iVar14 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar7 + 0x1c))(piVar7,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar19 = 0;
        in_stack_00000014 = 0;
        for (iVar14 = 0; iVar14 < *(int *)(unaff_r5 + 0x13c) + 1; iVar14 = iVar14 + 1) {
          iVar13 = *(int *)(iVar14 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar20 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar13 + 0x2c));
          if (iVar20 != 0) {
            if (*(char *)(**(int **)(iVar13 + 0x8c) + DAT_001435d0) == '\0') {
              iVar19 = iVar19 + 1;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar19,in_stack_00000014);
      }
      return;
    }
    pCVar22 = *(CafeObject **)(in_stack_00000010 * 4 + *(int *)(unaff_r5 + 0x140));
    (**(code **)(*(int *)pCVar22 + 0x1c))(pCVar22,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),pCVar22);
    if ((unaff_r5[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(pCVar22 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar22);
    }
    if ((*(int *)(pCVar22 + 0x7c) == 0) &&
       (iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0), iVar14 == 0)) {
      piVar7 = *(int **)(pCVar22 + 0x88);
      if (piVar7 != (int *)0x0) {
        iVar14 = (**(code **)(*piVar7 + 0x14))(piVar7);
        if (iVar14 == 3) {
          iVar14 = CafeObject::isAdjacentTo(pCVar22,(int)(short)piVar7[0xb]);
          if (((iVar14 == 0) ||
              (iVar14 = __aeabi_fcmple(*(undefined4 *)(piVar7[0x23] + 0x40),0), iVar14 != 0)) ||
             ((CafeObject *)piVar7[0x22] != pCVar22)) {
            pCVar17 = pCVar22 + 0x88;
            uVar12 = 0;
LAB_001433be:
            *(undefined4 *)pCVar17 = uVar12;
          }
        }
        else {
          iVar14 = CafeObject::isAdjacentTo(pCVar22,(int)(short)piVar7[0xb]);
          if (iVar14 == 0) {
            *(undefined4 *)(pCVar22 + 0x88) = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar14 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar22 + 0x2c));
      if (iVar14 != 0) {
        if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
          iVar14 = CapcomMath::random(2);
          if (iVar14 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMVar5 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar5,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar14 = *(int *)(pCVar22 + 0x98) + 1;
          *(int *)(pCVar22 + 0x98) = iVar14;
          if (iVar14 < **(int **)(in_stack_00000014 + DAT_001433fc)) {
            piVar21 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar7 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
              iStack0000000c = CapcomMath::random(*piVar21 * *piVar7);
              iVar14 = Cafe::isInside(pCVar11,iStack0000000c);
            } while (iVar14 == 0);
          }
          else {
            lVar8 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            iStack0000000c = Cafe::staggeredCoordsToIndex(lVar8);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar5 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar5,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\0',false);
          }
          else {
            pMVar5 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar5,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)pCVar22,(Task *)pMVar5);
        goto LAB_00143410;
      }
      pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
      if ((*(short *)(pCVar11 + 0x98) != *(short *)(pCVar22 + 0x2c)) &&
         (*(short *)(pCVar11 + 0x9a) != *(short *)(pCVar22 + 0x2c))) {
        if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
          iVar14 = CapcomMath::random(2);
          if (iVar14 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          iStack0000000c = (int)sVar1;
          pMVar5 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar5,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                             iStack0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar22,(Task *)pMVar5);
          pCVar17 = pCVar22 + 0x98;
          uVar12 = 1;
          goto LAB_001433be;
        }
        iVar14 = CapcomMath::random(2);
        if (iVar14 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
        }
        pMVar5 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar5,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                           (int)sVar1,'\0',false);
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar11,pCVar22);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0x138),in_stack_00000010);
      this_04 = *(Character **)(pCVar22 + 0x8c);
      if (this_04 != (Character *)0x0) {
        Character::~Character(this_04);
        operator_delete(this_04);
      }
      (**(code **)(*(int *)pCVar22 + 4))(pCVar22);
      in_stack_00000010 = in_stack_00000010 + -1;
    }
    else {
      iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
      if (iVar14 != 0) {
        pCVar22[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar14 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
      if (iVar14 == 0) {
        GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)pCVar22);
      }
    }
    in_stack_00000010 = in_stack_00000010 + 1;
  } while( true );
}


