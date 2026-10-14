/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014276a FUN_0014276a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014276a(void)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  FollowTask *this;
  StealFoodTask *this_00;
  CapcomLinkedList<CharacterInstance*> *this_01;
  CleanupTask *this_02;
  ServeTask *this_03;
  void *pvVar8;
  MoveTask *pMVar9;
  AttackTask *pAVar10;
  Cafe *pCVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  Furniture *pFVar16;
  CafeObject *pCVar17;
  CafeObject *unaff_r4;
  int iVar18;
  Character *this_04;
  GameStateFriendCafe *unaff_r5;
  int iVar19;
  CharacterInstance *pCVar20;
  int *piVar21;
  CafeObject *pCVar22;
  CharacterInstance *pCVar23;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar24;
  int iStack0000000c;
  int iStack00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  
  iVar5 = (**(code **)(*(int *)unaff_r4 + 0x14))(unaff_r4);
  if ((((iVar5 == 1) && (*(char *)(*(int *)(unaff_r4 + 0x38) + 0x44) == '\x02')) &&
      (*(int *)(unaff_r5 + 0x15c) != 0)) &&
     ((piVar12 = (int *)(*(int *)(unaff_r5 + 0x15c) + 0x88), unaff_r4 != (CafeObject *)*piVar12 &&
      (unaff_r5[0xc4] == (GameStateFriendCafe)0x0)))) {
    *piVar12 = (int)unaff_r4;
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x15c));
    GameStateFriendCafe::startColorShift(unaff_r5,unaff_r4);
    FUN_001427ea();
    return;
  }
  iVar5 = *(int *)(unaff_r5 + 0x130);
  iVar19 = 0;
  bVar3 = true;
  bVar2 = true;
  fVar24 = extraout_s0;
  for (iVar18 = 0; iVar18 < iVar5 + 1; iVar18 = iVar18 + 1) {
    iVar14 = __aeabi_fcmple(*(undefined4 *)
                             (*(int *)(*(int *)(iVar18 * 4 + *(int *)(unaff_r5 + 0x134)) + 0x8c) +
                             0x40),0);
    if (iVar14 == 0) {
      iVar19 = iVar19 + 1;
      bVar3 = false;
      bVar2 = false;
    }
    fVar24 = extraout_s0_00;
  }
  if ((*(int *)(unaff_r5 + 0xbc) != 0) &&
     (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r5 + 0xbc) + 0x40),0),
     fVar24 = extraout_s0_01, iVar5 == 0)) {
    iVar19 = iVar19 + 1;
    bVar3 = false;
  }
  for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x13c) + 1; iVar5 = iVar5 + 1) {
    iVar14 = *(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x140));
    iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar14 + 0x8c) + 0x40),0);
    fVar24 = extraout_s0_02;
    if (iVar18 == 0) {
      iVar18 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar14 + 0x2c));
      iVar19 = iVar19 + (uint)(iVar18 != 0);
      fVar24 = extraout_s0_03;
    }
  }
  if (((iVar19 == 0) && (unaff_r5[0x38] != (GameStateFriendCafe)0x3)) &&
     (unaff_r5[0xd8] == (GameStateFriendCafe)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,fVar24,false);
    iVar5 = DAT_00142c0c;
    unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
    *(undefined4 *)(unaff_r5 + 0xdc) = **(undefined4 **)(in_stack_00000014 + iVar5);
    fVar24 = (float)FriendCafeHudElement::setButtonAvailability
                              (*(FriendCafeHudElement **)(unaff_r5 + 0x19c),4,false);
  }
  if (((unaff_r5[0x38] != (GameStateFriendCafe)0x3) && (unaff_r5[0xd8] != (GameStateFriendCafe)0x0))
     && (iVar5 = *(int *)(unaff_r5 + 0xdc) - in_stack_0000001c, *(int *)(unaff_r5 + 0xdc) = iVar5,
        iVar5 < 1)) {
    unaff_r5[0x38] = (GameStateFriendCafe)0x3;
    fVar24 = (float)GameStateFriendCafe::initRaidRewards(unaff_r5);
  }
  unaff_r5[0x104] = (GameStateFriendCafe)0x1;
  unaff_r5[0x105] = (GameStateFriendCafe)0x1;
  bVar4 = false;
  for (iStack0000000c = 0; iStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
      iStack0000000c = iStack0000000c + 1) {
    pCVar20 = *(CharacterInstance **)(iStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
    sVar1 = *(short *)(pCVar20 + 0x2c);
    iVar5 = **(int **)(in_stack_00000014 + _DAT_00142c10);
    uVar6 = __divsi3((int)sVar1,iVar5);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar6 & 0xffff | ((int)sVar1 - uVar6 * iVar5) * 0x10000) >> 0x10,
               (int)(short)uVar6);
    pCVar22 = *(CafeObject **)(pCVar20 + 0x88);
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      unaff_r5[0x104] = (GameStateFriendCafe)0x0;
    }
    else if (pCVar20 == *(CharacterInstance **)(unaff_r5 + 0x15c)) {
      *(undefined4 *)(unaff_r5 + 0x15c) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)0x0);
    }
    if ((unaff_r5[0xc4] == (GameStateFriendCafe)0x0) ||
       ((iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c)),
        iVar5 != 0 &&
        (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0), iVar5 == 0))))
    {
      unaff_r5[0x105] = (GameStateFriendCafe)0x0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (((((iVar5 == 0) &&
          (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c)),
          iVar5 != 0)) && (bVar2)) && (*(int *)(unaff_r5 + 0x128) != 0)) &&
       ((piVar12 = *(int **)(*(int *)(unaff_r5 + 0x128) + 0x88), piVar12 == (int *)0x0 ||
        (iVar5 = (**(code **)(*piVar12 + 0x14))(), iVar5 != 3)))) {
      CharacterInstance::clearTasks();
      *(CharacterInstance **)(*(int *)(unaff_r5 + 0x128) + 0x88) = pCVar20;
    }
    iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c));
    if (iVar5 != 0) {
      if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
        bVar4 = true;
      }
      unaff_r5[0x106] = (GameStateFriendCafe)0x1;
      *(undefined1 *)(*(int *)(pCVar20 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar22 != (CafeObject *)0x0) &&
       (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar22 + 0x2c)),
       iVar5 == 0)) {
      *(undefined4 *)(pCVar20 + 0x88) = 0;
      CharacterInstance::stopTasks(pCVar20);
    }
    if (*(int *)(pCVar20 + 0x7c) == 0) {
      iVar18 = *(int *)(pCVar20 + 0x8c);
      iVar5 = __aeabi_fcmple(*(undefined4 *)(iVar18 + 0x40),0);
      if (iVar5 == 0) {
        if (unaff_r5[0xc4] == (GameStateFriendCafe)0x0) {
          if (pCVar22 == (CafeObject *)0x0) {
            if (*(char *)(iVar18 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00142c24),' ',false);
              iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c));
              if (iVar5 != 0) {
                iVar5 = Cafe::createDistanceSortedObjectList
                                  (*(Cafe **)(unaff_r5 + 0x34),'\x03',
                                   (int)*(short *)(pCVar20 + 0x2c));
                *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
                bVar2 = false;
                do {
                  puVar15 = *(undefined4 **)(iVar5 + 0x10);
                  if (puVar15 == (undefined4 *)0x0) {
                    FUN_00143570();
                  }
                  piVar12 = (int *)*puVar15;
                  *(undefined4 *)(iVar5 + 0x10) = puVar15[2];
                  if (piVar12 == (int *)0x0) {
                    FUN_00143570();
                  }
                  if (bVar2) {
                    FUN_00143570();
                  }
                  iVar18 = __aeabi_fcmple(*(undefined4 *)(piVar12[0x23] + 0x40),0);
                  if (((iVar18 == 0) &&
                      (iVar18 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)(short)piVar12[0xb])
                      , iVar18 != 0)) &&
                     (iVar18 = (**(code **)(*piVar12 + 0x20))(piVar12), iVar18 != 2)) {
                    bVar2 = true;
                    *(int **)(pCVar20 + 0x88) = piVar12;
                  }
                } while( true );
              }
              iVar18 = **(int **)(in_stack_00000014 + _DAT_00142c14);
              iVar5 = **(int **)(in_stack_00000014 + _DAT_00142c28);
              iVar19 = **(int **)(in_stack_00000014 + _DAT_00142c18);
              CharacterInstance::groan(pCVar20);
              lVar7 = Cafe::diamondToStaggeredCoords
                                ((iVar19 + -1) * 0x10000 | iVar18 + iVar5 + 1U & 0xffff);
              iVar5 = Cafe::staggeredCoordsToIndex(lVar7);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,pCVar20,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',
                                 false);
              goto LAB_00142be6;
            }
          }
          else {
            iVar5 = (**(code **)(*(int *)pCVar22 + 0x14))(pCVar22);
            if (iVar5 == 3) {
              iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
              if ((iVar5 == 0) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar22 + 0x2c)
                                        ), iVar5 != 0)) {
                FUN_0014355a();
              }
              *(undefined4 *)(pCVar20 + 0x88) = 0;
            }
            else {
              iVar5 = (**(code **)(*(int *)pCVar22 + 0x14))(pCVar22);
              if (iVar5 == 1) {
                iVar5 = CafeObject::isAdjacentTo
                                  ((CafeObject *)pCVar20,(int)*(short *)(pCVar22 + 0x2c));
                if (iVar5 == 0) {
                  this = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask
                            (this,pCVar20,pCVar22,*(Cafe **)(unaff_r5 + 0x34),'\0',false);
                  goto LAB_00142be6;
                }
                this_00 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask(this_00,pCVar20,*(Cafe **)(unaff_r5 + 0x34));
                CharacterInstance::addTask(pCVar20,(Task *)this_00);
                Task::addFinishedListener
                          ((Task *)this_00,
                           *(_func_void_void_ptr_Task_ptr **)(in_stack_00000014 + _DAT_00142c20),
                           unaff_r5);
              }
            }
          }
        }
        else {
          lVar7 = Cafe::diamondToStaggeredCoords
                            ((**(int **)(in_stack_00000014 + _DAT_00142c18) + 5) * 0x10000 |
                             **(int **)(in_stack_00000014 + _DAT_00142c14) + 2U & 0xffff);
          iVar5 = Cafe::staggeredCoordsToIndex(lVar7);
          this = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this,pCVar20,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',false);
LAB_00142be6:
          CharacterInstance::addTask(pCVar20,(Task *)this);
        }
      }
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar20);
    }
    (**(code **)(*(int *)pCVar20 + 0x1c))(pCVar20,in_stack_0000001c);
    fVar24 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x34) + 0x20),(CafeObject *)pCVar20);
  }
  if (unaff_r5[0x38] != (GameStateFriendCafe)0x3) {
    if (unaff_r5[0x104] == (GameStateFriendCafe)0x0) {
      if (unaff_r5[0x105] != (GameStateFriendCafe)0x0) {
        if (bVar3) {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,fVar24,false);
          unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
        }
        else {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,1,fVar24,false);
        }
        unaff_r5[0x38] = (GameStateFriendCafe)0x3;
        GameStateFriendCafe::initRaidRewards(unaff_r5);
      }
    }
    else {
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,fVar24,false);
      unaff_r5[0x38] = (GameStateFriendCafe)0x3;
      GameStateFriendCafe::initRaidRewards(unaff_r5);
      *(undefined4 *)(unaff_r5 + 0xe0) = 0;
    }
  }
  iVar5 = *(int *)(unaff_r5 + 0x128);
  if (iVar5 == 0) goto LAB_00142e42;
  iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar5 + 0x8c) + 0x40),0);
  if (iVar18 == 0) {
    pCVar20 = *(CharacterInstance **)(iVar5 + 0x88);
    if (*(int *)(iVar5 + 0x7c) == 0) {
      if ((pCVar20 != (CharacterInstance *)0x0) &&
         (iVar5 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20), iVar5 == 3)) {
        iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
        if ((iVar5 != 0) ||
           (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c)),
           iVar5 == 0)) goto LAB_00142df0;
        pAVar10 = (AttackTask *)operator_new(0x40);
        pCVar23 = *(CharacterInstance **)(unaff_r5 + 0x128);
        AttackTask::AttackTask(pAVar10,pCVar23,pCVar20,*(Cafe **)(unaff_r5 + 0x34));
        CharacterInstance::addTask(pCVar23,(Task *)pAVar10);
      }
    }
    else if (((pCVar20 != (CharacterInstance *)0x0) &&
             (iVar5 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20), iVar5 == 3)) &&
            ((iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0), iVar5 != 0
             || (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c))
                , iVar5 == 0)))) {
LAB_00142df0:
      *(undefined4 *)(*(int *)(unaff_r5 + 0x128) + 0x88) = 0;
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x84) = 0;
  }
  pCVar20 = *(CharacterInstance **)(unaff_r5 + 0x128);
  iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
  if (iVar5 == 0) {
    GameStateFriendCafe::checkOverlap(unaff_r5,pCVar20);
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
      for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x130) + 1; iVar5 = iVar5 + 1) {
        CapcomLinkedList<CharacterInstance*>::add
                  (this_01,*(CharacterInstance **)(iVar5 * 4 + *(int *)(unaff_r5 + 0x134)));
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
        iVar5 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar20 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar5);
      } while ((*(char *)(*(int *)(pCVar20 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar20 + 0x7c) != 0));
      this_02 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_02,pCVar20,*(Cafe **)(unaff_r5 + 0x34),pFVar16);
      CharacterInstance::addTask(pCVar20,(Task *)this_02);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
       (iVar5 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar5 != 0)) {
      pCVar20 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f80;
        iVar5 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar23 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar5);
      } while ((*(char *)(*(int *)(pCVar23 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar23 + 0x7c) != 0));
      this_03 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_03,pCVar23,*(Cafe **)(unaff_r5 + 0x34),pCVar20);
      CharacterInstance::addTask(pCVar23,(Task *)this_03);
    }
LAB_00142f80:
    if (this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_01 + 0x10) != 0) {
        while (pvVar8 = *(void **)(this_01 + 4), pvVar8 != (void *)0x0) {
          uVar13 = *(undefined4 *)((int)pvVar8 + 4);
          operator_delete(pvVar8);
          *(undefined4 *)(this_01 + 4) = uVar13;
        }
        *(undefined4 *)(this_01 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
        *(undefined4 *)(this_01 + 0xc) = 0;
      }
      operator_delete(this_01);
    }
  }
  for (iStack00000010 = 0; iStack00000010 < *(int *)(unaff_r5 + 0x130) + 1;
      iStack00000010 = iStack00000010 + 1) {
    pCVar20 = *(CharacterInstance **)(iStack00000010 * 4 + *(int *)(unaff_r5 + 0x134));
    if (bVar4) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar20 + 0x88) = 0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      pCVar23 = *(CharacterInstance **)(pCVar20 + 0x88);
      if (*(int *)(pCVar20 + 0x7c) == 0) {
        if (pCVar23 == (CharacterInstance *)0x0) {
          iStack0000000c = 0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; iStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                iStack0000000c = iStack0000000c + 1) {
              iVar18 = *(int *)(iStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar18 + 0x8c) + 0x40),0);
              if ((iVar5 == 0) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar18 + 0x2c))
                 , iVar5 != 0)) {
                *(int *)(pCVar20 + 0x88) = iVar18;
                break;
              }
            }
          }
        }
        else {
          iVar5 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
          if (iVar5 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar20,0);
            iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
            if ((iVar5 == 0) &&
               (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar23 + 0x2c)),
               iVar5 != 0)) {
              pAVar10 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar10,pCVar20,pCVar23,*(Cafe **)(unaff_r5 + 0x34));
            }
            else {
              *(undefined4 *)(pCVar20 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar20);
              piVar21 = *(int **)(in_stack_00000014 + DAT_001433f4);
              piVar12 = *(int **)(in_stack_00000014 + DAT_001433f8);
              do {
                pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
                iVar5 = CapcomMath::random(*piVar21 * *piVar12);
                iVar18 = Cafe::isInside(pCVar11,iVar5);
              } while (iVar18 == 0);
              pAVar10 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar10,pCVar20,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar20,(Task *)pAVar10);
          }
        }
      }
      else if (((pCVar23 != (CharacterInstance *)0x0) &&
               (iVar5 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23), iVar5 == 3)) &&
              ((iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0),
               iVar5 != 0 ||
               (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar23 + 0x2c)),
               iVar5 == 0)))) {
        *(undefined4 *)(pCVar20 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar20);
      }
    }
    else {
      pCVar20[0x84] = (CharacterInstance)0x0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar20);
    }
    (**(code **)(*(int *)pCVar20 + 0x1c))(pCVar20,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               (CafeObject *)pCVar20);
  }
  iStack00000010 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x13c) + 1 <= iStack00000010) {
      for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x148) + 1; iVar5 = iVar5 + 1) {
        piVar12 = *(int **)(iVar5 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar12 + 0x1c))(piVar12,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar18 = 0;
        in_stack_00000014 = 0;
        for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x13c) + 1; iVar5 = iVar5 + 1) {
          iVar14 = *(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar14 + 0x2c));
          if (iVar19 != 0) {
            if (*(char *)(**(int **)(iVar14 + 0x8c) + DAT_001435d0) == '\0') {
              iVar18 = iVar18 + 1;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar18,in_stack_00000014);
      }
      return;
    }
    pCVar22 = *(CafeObject **)(iStack00000010 * 4 + *(int *)(unaff_r5 + 0x140));
    (**(code **)(*(int *)pCVar22 + 0x1c))(pCVar22,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),pCVar22);
    if ((unaff_r5[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(pCVar22 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar22);
    }
    if ((*(int *)(pCVar22 + 0x7c) == 0) &&
       (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0), iVar5 == 0)) {
      piVar12 = *(int **)(pCVar22 + 0x88);
      if (piVar12 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar12 + 0x14))(piVar12);
        if (iVar5 == 3) {
          iVar5 = CafeObject::isAdjacentTo(pCVar22,(int)(short)piVar12[0xb]);
          if (((iVar5 == 0) ||
              (iVar5 = __aeabi_fcmple(*(undefined4 *)(piVar12[0x23] + 0x40),0), iVar5 != 0)) ||
             ((CafeObject *)piVar12[0x22] != pCVar22)) {
            pCVar17 = pCVar22 + 0x88;
            uVar13 = 0;
LAB_001433be:
            *(undefined4 *)pCVar17 = uVar13;
          }
        }
        else {
          iVar5 = CafeObject::isAdjacentTo(pCVar22,(int)(short)piVar12[0xb]);
          if (iVar5 == 0) {
            *(undefined4 *)(pCVar22 + 0x88) = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar22 + 0x2c));
      if (iVar5 != 0) {
        if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
          iVar5 = CapcomMath::random(2);
          if (iVar5 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar5 = *(int *)(pCVar22 + 0x98) + 1;
          *(int *)(pCVar22 + 0x98) = iVar5;
          if (iVar5 < **(int **)(in_stack_00000014 + DAT_001433fc)) {
            piVar21 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar12 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
              iStack0000000c = CapcomMath::random(*piVar21 * *piVar12);
              iVar5 = Cafe::isInside(pCVar11,iStack0000000c);
            } while (iVar5 == 0);
          }
          else {
            lVar7 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            iStack0000000c = Cafe::staggeredCoordsToIndex(lVar7);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\0',false);
          }
          else {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)pCVar22,(Task *)pMVar9);
        goto LAB_00143410;
      }
      pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
      if ((*(short *)(pCVar11 + 0x98) != *(short *)(pCVar22 + 0x2c)) &&
         (*(short *)(pCVar11 + 0x9a) != *(short *)(pCVar22 + 0x2c))) {
        if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
          iVar5 = CapcomMath::random(2);
          if (iVar5 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          iStack0000000c = (int)sVar1;
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                             iStack0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar22,(Task *)pMVar9);
          pCVar17 = pCVar22 + 0x98;
          uVar13 = 1;
          goto LAB_001433be;
        }
        iVar5 = CapcomMath::random(2);
        if (iVar5 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
        }
        pMVar9 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                           (int)sVar1,'\0',false);
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar11,pCVar22);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0x138),iStack00000010);
      this_04 = *(Character **)(pCVar22 + 0x8c);
      if (this_04 != (Character *)0x0) {
        Character::~Character(this_04);
        operator_delete(this_04);
      }
      (**(code **)(*(int *)pCVar22 + 4))(pCVar22);
      iStack00000010 = iStack00000010 + -1;
    }
    else {
      iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
      if (iVar5 != 0) {
        pCVar22[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0);
      if (iVar5 == 0) {
        GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)pCVar22);
      }
    }
    iStack00000010 = iStack00000010 + 1;
  } while( true );
}


