/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001427ea FUN_001427ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001427ea(float param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  FollowTask *this;
  StealFoodTask *this_00;
  CapcomLinkedList<CharacterInstance*> *this_01;
  CleanupTask *this_02;
  ServeTask *this_03;
  void *pvVar6;
  MoveTask *pMVar7;
  AttackTask *this_04;
  Cafe *pCVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  CafeObject *pCVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  Character *this_05;
  GameStateFriendCafe *unaff_r5;
  int iVar15;
  CharacterInstance *pCVar16;
  CafeObject *pCVar17;
  CharacterInstance *pCVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  MoveTask *pMStack0000000c;
  uint uStack00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  int *piStack00000024;
  
  iVar15 = 0;
  pMStack0000000c = (MoveTask *)(*(int *)(unaff_r5 + 0x130) + 1);
  uStack00000010 = 1;
  piStack00000024 = (int *)0x1;
  for (iVar12 = 0; iVar12 < (int)pMStack0000000c; iVar12 = iVar12 + 1) {
    iVar13 = __aeabi_fcmple(*(undefined4 *)
                             (*(int *)(*(int *)(iVar12 * 4 + *(int *)(unaff_r5 + 0x134)) + 0x8c) +
                             0x40),0);
    if (iVar13 == 0) {
      iVar15 = iVar15 + 1;
      uStack00000010 = 0;
      piStack00000024 = (int *)0x0;
    }
    param_1 = extraout_s0;
  }
  if ((*(int *)(unaff_r5 + 0xbc) != 0) &&
     (iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r5 + 0xbc) + 0x40),0),
     param_1 = extraout_s0_00, iVar12 == 0)) {
    iVar15 = iVar15 + 1;
    uStack00000010 = 0;
  }
  for (iVar12 = 0; iVar12 < *(int *)(unaff_r5 + 0x13c) + 1; iVar12 = iVar12 + 1) {
    pMStack0000000c = *(MoveTask **)(iVar12 * 4 + *(int *)(unaff_r5 + 0x140));
    iVar13 = __aeabi_fcmple(*(undefined4 *)(*(int *)((int)pMStack0000000c + 0x8c) + 0x40),0);
    param_1 = extraout_s0_01;
    if (iVar13 == 0) {
      iVar13 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                              (int)*(short *)((int)pMStack0000000c + 0x2c));
      iVar15 = iVar15 + (uint)(iVar13 != 0);
      param_1 = extraout_s0_02;
    }
  }
  if (((iVar15 == 0) && (unaff_r5[0x38] != (GameStateFriendCafe)0x3)) &&
     (unaff_r5[0xd8] == (GameStateFriendCafe)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,param_1,false);
    iVar12 = DAT_00142c0c;
    unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
    *(undefined4 *)(unaff_r5 + 0xdc) = **(undefined4 **)(in_stack_00000014 + iVar12);
    param_1 = (float)FriendCafeHudElement::setButtonAvailability
                               (*(FriendCafeHudElement **)(unaff_r5 + 0x19c),4,false);
  }
  if (((unaff_r5[0x38] != (GameStateFriendCafe)0x3) && (unaff_r5[0xd8] != (GameStateFriendCafe)0x0))
     && (iVar12 = *(int *)(unaff_r5 + 0xdc) - in_stack_0000001c, *(int *)(unaff_r5 + 0xdc) = iVar12,
        iVar12 < 1)) {
    unaff_r5[0x38] = (GameStateFriendCafe)0x3;
    param_1 = (float)GameStateFriendCafe::initRaidRewards(unaff_r5);
  }
  unaff_r5[0x104] = (GameStateFriendCafe)0x1;
  unaff_r5[0x105] = (GameStateFriendCafe)0x1;
  bVar2 = false;
  for (pMStack0000000c = (MoveTask *)0x0; (int)pMStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
      pMStack0000000c = pMStack0000000c + 1) {
    pCVar16 = *(CharacterInstance **)((int)pMStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
    sVar1 = *(short *)(pCVar16 + 0x2c);
    iVar12 = **(int **)(in_stack_00000014 + _DAT_00142c10);
    uVar3 = __divsi3((int)sVar1,iVar12);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar3 & 0xffff | ((int)sVar1 - uVar3 * iVar12) * 0x10000) >> 0x10,
               (int)(short)uVar3);
    pCVar17 = *(CafeObject **)(pCVar16 + 0x88);
    iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (iVar12 == 0) {
      unaff_r5[0x104] = (GameStateFriendCafe)0x0;
    }
    else if (pCVar16 == *(CharacterInstance **)(unaff_r5 + 0x15c)) {
      *(undefined4 *)(unaff_r5 + 0x15c) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)0x0);
    }
    if ((unaff_r5[0xc4] == (GameStateFriendCafe)0x0) ||
       ((iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar16 + 0x2c)),
        iVar12 != 0 &&
        (iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0), iVar12 == 0)))
       ) {
      unaff_r5[0x105] = (GameStateFriendCafe)0x0;
    }
    iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (((((iVar12 == 0) &&
          (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar16 + 0x2c)),
          iVar12 != 0)) && (piStack00000024 != (int *)0x0)) && (*(int *)(unaff_r5 + 0x128) != 0)) &&
       ((piVar4 = *(int **)(*(int *)(unaff_r5 + 0x128) + 0x88), piVar4 == (int *)0x0 ||
        (iVar12 = (**(code **)(*piVar4 + 0x14))(), iVar12 != 3)))) {
      CharacterInstance::clearTasks();
      *(CharacterInstance **)(*(int *)(unaff_r5 + 0x128) + 0x88) = pCVar16;
    }
    iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar16 + 0x2c));
    if (iVar12 != 0) {
      if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
        bVar2 = true;
      }
      unaff_r5[0x106] = (GameStateFriendCafe)0x1;
      *(undefined1 *)(*(int *)(pCVar16 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar17 != (CafeObject *)0x0) &&
       (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar17 + 0x2c)),
       iVar12 == 0)) {
      *(undefined4 *)(pCVar16 + 0x88) = 0;
      CharacterInstance::stopTasks(pCVar16);
    }
    if (*(int *)(pCVar16 + 0x7c) == 0) {
      iVar15 = *(int *)(pCVar16 + 0x8c);
      iVar12 = __aeabi_fcmple(*(undefined4 *)(iVar15 + 0x40),0);
      if (iVar12 == 0) {
        if (unaff_r5[0xc4] == (GameStateFriendCafe)0x0) {
          if (pCVar17 == (CafeObject *)0x0) {
            if (*(char *)(iVar15 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00142c24),' ',false);
              iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar16 + 0x2c));
              if (iVar12 != 0) {
                iVar12 = Cafe::createDistanceSortedObjectList
                                   (*(Cafe **)(unaff_r5 + 0x34),'\x03',
                                    (int)*(short *)(pCVar16 + 0x2c));
                *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar12 + 8);
                bVar2 = false;
                do {
                  do {
                    puVar10 = *(undefined4 **)(iVar12 + 0x10);
                    if (puVar10 == (undefined4 *)0x0) {
                      FUN_00143570();
                    }
                    piVar4 = (int *)*puVar10;
                    *(undefined4 *)(iVar12 + 0x10) = puVar10[2];
                    if (piVar4 == (int *)0x0) {
                      FUN_00143570();
                    }
                    if (bVar2) {
                      FUN_00143570();
                    }
                    iVar15 = __aeabi_fcmple(*(undefined4 *)(piVar4[0x23] + 0x40),0);
                  } while (((iVar15 != 0) ||
                           (iVar15 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                                                    (int)(short)piVar4[0xb]), iVar15 == 0)) ||
                          (iVar15 = (**(code **)(*piVar4 + 0x20))(piVar4), iVar15 == 2));
                  bVar2 = true;
                  *(int **)(pCVar16 + 0x88) = piVar4;
                } while( true );
              }
              iVar15 = **(int **)(in_stack_00000014 + _DAT_00142c14);
              iVar12 = **(int **)(in_stack_00000014 + _DAT_00142c28);
              iVar13 = **(int **)(in_stack_00000014 + _DAT_00142c18);
              CharacterInstance::groan(pCVar16);
              lVar5 = Cafe::diamondToStaggeredCoords
                                ((iVar13 + -1) * 0x10000 | iVar15 + iVar12 + 1U & 0xffff);
              iVar12 = Cafe::staggeredCoordsToIndex(lVar5);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,pCVar16,*(Cafe **)(unaff_r5 + 0x34),iVar12,'\0',
                                 false);
              goto LAB_00142be6;
            }
          }
          else {
            iVar12 = (**(code **)(*(int *)pCVar17 + 0x14))(pCVar17);
            if (iVar12 == 3) {
              iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
              if ((iVar12 == 0) &&
                 (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                                          (int)*(short *)(pCVar17 + 0x2c)), iVar12 != 0)) {
                FUN_0014355a();
              }
              *(undefined4 *)(pCVar16 + 0x88) = 0;
            }
            else {
              iVar12 = (**(code **)(*(int *)pCVar17 + 0x14))(pCVar17);
              if (iVar12 == 1) {
                iVar12 = CafeObject::isAdjacentTo
                                   ((CafeObject *)pCVar16,(int)*(short *)(pCVar17 + 0x2c));
                if (iVar12 == 0) {
                  this = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask
                            (this,pCVar16,pCVar17,*(Cafe **)(unaff_r5 + 0x34),'\0',false);
                  goto LAB_00142be6;
                }
                this_00 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask(this_00,pCVar16,*(Cafe **)(unaff_r5 + 0x34));
                CharacterInstance::addTask(pCVar16,(Task *)this_00);
                Task::addFinishedListener
                          ((Task *)this_00,
                           *(_func_void_void_ptr_Task_ptr **)(in_stack_00000014 + _DAT_00142c20),
                           unaff_r5);
              }
            }
          }
        }
        else {
          lVar5 = Cafe::diamondToStaggeredCoords
                            ((**(int **)(in_stack_00000014 + _DAT_00142c18) + 5) * 0x10000 |
                             **(int **)(in_stack_00000014 + _DAT_00142c14) + 2U & 0xffff);
          iVar12 = Cafe::staggeredCoordsToIndex(lVar5);
          this = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this,pCVar16,*(Cafe **)(unaff_r5 + 0x34),iVar12,'\0',false)
          ;
LAB_00142be6:
          CharacterInstance::addTask(pCVar16,(Task *)this);
        }
      }
    }
    iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (iVar12 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar16);
    }
    (**(code **)(*(int *)pCVar16 + 0x1c))(pCVar16,in_stack_0000001c);
    param_1 = (float)CapcomOrderableList<CafeObject*>::sort
                               ((CapcomOrderableList<CafeObject*> *)
                                (*(int *)(unaff_r5 + 0x34) + 0x20),(CafeObject *)pCVar16);
  }
  if (unaff_r5[0x38] != (GameStateFriendCafe)0x3) {
    if (unaff_r5[0x104] == (GameStateFriendCafe)0x0) {
      if (unaff_r5[0x105] != (GameStateFriendCafe)0x0) {
        if (uStack00000010 == 0) {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,1,param_1,false);
        }
        else {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,param_1,false);
          unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
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
  iVar12 = *(int *)(unaff_r5 + 0x128);
  if (iVar12 == 0) goto LAB_00142e42;
  iVar15 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar12 + 0x8c) + 0x40),0);
  if (iVar15 == 0) {
    pCVar16 = *(CharacterInstance **)(iVar12 + 0x88);
    if (*(int *)(iVar12 + 0x7c) == 0) {
      if ((pCVar16 != (CharacterInstance *)0x0) &&
         (iVar12 = (**(code **)(*(int *)pCVar16 + 0x14))(pCVar16), iVar12 == 3)) {
        iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
        if ((iVar12 != 0) ||
           (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar16 + 0x2c)),
           iVar12 == 0)) goto LAB_00142df0;
        this_04 = (AttackTask *)operator_new(0x40);
        pCVar18 = *(CharacterInstance **)(unaff_r5 + 0x128);
        AttackTask::AttackTask(this_04,pCVar18,pCVar16,*(Cafe **)(unaff_r5 + 0x34));
        CharacterInstance::addTask(pCVar18,(Task *)this_04);
      }
    }
    else if (((pCVar16 != (CharacterInstance *)0x0) &&
             (iVar12 = (**(code **)(*(int *)pCVar16 + 0x14))(pCVar16), iVar12 == 3)) &&
            ((iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0),
             iVar12 != 0 ||
             (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar16 + 0x2c)),
             iVar12 == 0)))) {
LAB_00142df0:
      *(undefined4 *)(*(int *)(unaff_r5 + 0x128) + 0x88) = 0;
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
    }
  }
  else {
    *(undefined1 *)(iVar12 + 0x84) = 0;
  }
  pCVar16 = *(CharacterInstance **)(unaff_r5 + 0x128);
  iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
  if (iVar12 == 0) {
    GameStateFriendCafe::checkOverlap(unaff_r5,pCVar16);
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
      for (iVar12 = 0; iVar12 < *(int *)(unaff_r5 + 0x130) + 1; iVar12 = iVar12 + 1) {
        CapcomLinkedList<CharacterInstance*>::add
                  (this_01,*(CharacterInstance **)(iVar12 * 4 + *(int *)(unaff_r5 + 0x134)));
      }
    }
    uStack00000010 = (uint)(this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0);
    if (((uStack00000010 != 0) &&
        (*(CharacterInstance **)(unaff_r5 + 0x128) != (CharacterInstance *)0x0)) &&
       (*(int *)(this_01 + 0x10) == 0)) {
      CapcomLinkedList<CharacterInstance*>::add(this_01,*(CharacterInstance **)(unaff_r5 + 0x128));
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
      *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x128) + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(unaff_r5 + 0x34) + 0xc0) != -1) {
      pMStack0000000c = (MoveTask *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xc4);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f1c;
        iVar12 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar16 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar12);
      } while ((*(char *)(*(int *)(pCVar16 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar16 + 0x7c) != 0));
      this_02 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask
                (this_02,pCVar16,*(Cafe **)(unaff_r5 + 0x34),(Furniture *)pMStack0000000c);
      CharacterInstance::addTask(pCVar16,(Task *)this_02);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
       (iVar12 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar12 != 0)) {
      pMStack0000000c = (MoveTask *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f80;
        iVar12 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar16 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar12);
      } while ((*(char *)(*(int *)(pCVar16 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar16 + 0x7c) != 0));
      this_03 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask
                (this_03,pCVar16,*(Cafe **)(unaff_r5 + 0x34),(CharacterInstance *)pMStack0000000c);
      CharacterInstance::addTask(pCVar16,(Task *)this_03);
    }
LAB_00142f80:
    if (uStack00000010 != 0) {
      if (*(int *)(this_01 + 0x10) != 0) {
        while (pvVar6 = *(void **)(this_01 + 4), pvVar6 != (void *)0x0) {
          uVar9 = *(undefined4 *)((int)pvVar6 + 4);
          operator_delete(pvVar6);
          *(undefined4 *)(this_01 + 4) = uVar9;
        }
        *(undefined4 *)(this_01 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
        *(undefined4 *)(this_01 + 0xc) = 0;
      }
      operator_delete(this_01);
    }
  }
  for (uStack00000010 = 0; (int)uStack00000010 < *(int *)(unaff_r5 + 0x130) + 1;
      uStack00000010 = uStack00000010 + 1) {
    pCVar16 = *(CharacterInstance **)(uStack00000010 * 4 + *(int *)(unaff_r5 + 0x134));
    if (bVar2) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar16 + 0x88) = 0;
    }
    iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (iVar12 == 0) {
      pMStack0000000c = *(MoveTask **)(pCVar16 + 0x7c);
      pCVar18 = *(CharacterInstance **)(pCVar16 + 0x88);
      if (pMStack0000000c == (MoveTask *)0x0) {
        if (pCVar18 == (CharacterInstance *)0x0) {
          pMStack0000000c = (MoveTask *)0x0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; (int)pMStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                pMStack0000000c = pMStack0000000c + 1) {
              iVar15 = *(int *)((int)pMStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar15 + 0x8c) + 0x40),0);
              if ((iVar12 == 0) &&
                 (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar15 + 0x2c)
                                         ), iVar12 != 0)) {
                *(int *)(pCVar16 + 0x88) = iVar15;
                break;
              }
            }
          }
        }
        else {
          iVar12 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18);
          if (iVar12 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar16,(int)pMStack0000000c);
            iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
            if ((iVar12 == 0) &&
               (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c))
               , iVar12 != 0)) {
              pMStack0000000c = (MoveTask *)operator_new(0x40);
              AttackTask::AttackTask
                        ((AttackTask *)pMStack0000000c,pCVar16,pCVar18,*(Cafe **)(unaff_r5 + 0x34));
              pMVar7 = pMStack0000000c;
            }
            else {
              *(undefined4 *)(pCVar16 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar16);
              piVar4 = *(int **)(in_stack_00000014 + DAT_001433f4);
              piStack00000024 = *(int **)(in_stack_00000014 + DAT_001433f8);
              do {
                pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
                pMStack0000000c = (MoveTask *)CapcomMath::random(*piVar4 * *piStack00000024);
                iVar12 = Cafe::isInside(pCVar8,(int)pMStack0000000c);
              } while (iVar12 == 0);
              pMVar7 = (MoveTask *)operator_new(0x48);
              MoveTask::MoveTask(pMVar7,pCVar16,*(Cafe **)(unaff_r5 + 0x34),(int)pMStack0000000c,
                                 '\0',false);
            }
            CharacterInstance::addTask(pCVar16,(Task *)pMVar7);
          }
        }
      }
      else if (((pCVar18 != (CharacterInstance *)0x0) &&
               (iVar12 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18), iVar12 == 3)) &&
              ((iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0),
               iVar12 != 0 ||
               (iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c))
               , iVar12 == 0)))) {
        *(undefined4 *)(pCVar16 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar16);
      }
    }
    else {
      pCVar16[0x84] = (CharacterInstance)0x0;
    }
    iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
    if (iVar12 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar16);
    }
    (**(code **)(*(int *)pCVar16 + 0x1c))(pCVar16,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               (CafeObject *)pCVar16);
  }
  uStack00000010 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x13c) + 1 <= (int)uStack00000010) {
      for (iVar12 = 0; iVar12 < *(int *)(unaff_r5 + 0x148) + 1; iVar12 = iVar12 + 1) {
        piVar4 = *(int **)(iVar12 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar4 + 0x1c))(piVar4,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar15 = 0;
        in_stack_00000014 = 0;
        for (iVar12 = 0; iVar12 < *(int *)(unaff_r5 + 0x13c) + 1; iVar12 = iVar12 + 1) {
          uStack00000010 = *(int *)(iVar12 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar13 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(uStack00000010 + 0x2c)
                                 );
          if (iVar13 != 0) {
            if (*(char *)(**(int **)(uStack00000010 + 0x8c) + DAT_001435d0) == '\0') {
              iVar15 = iVar15 + 1;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar15,in_stack_00000014);
      }
      return;
    }
    pCVar17 = *(CafeObject **)(uStack00000010 * 4 + *(int *)(unaff_r5 + 0x140));
    (**(code **)(*(int *)pCVar17 + 0x1c))(pCVar17,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),pCVar17);
    if ((unaff_r5[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(pCVar17 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar17);
    }
    if ((*(int *)(pCVar17 + 0x7c) == 0) &&
       (iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0), iVar12 == 0)) {
      pMStack0000000c = (MoveTask *)(pCVar17 + 0x88);
      piVar4 = *(int **)pMStack0000000c;
      if (piVar4 != (int *)0x0) {
        iVar12 = (**(code **)(*piVar4 + 0x14))(piVar4);
        if (iVar12 == 3) {
          iVar12 = CafeObject::isAdjacentTo(pCVar17,(int)(short)piVar4[0xb]);
          if (((iVar12 == 0) ||
              (iVar12 = __aeabi_fcmple(*(undefined4 *)(piVar4[0x23] + 0x40),0), iVar12 != 0)) ||
             ((CafeObject *)piVar4[0x22] != pCVar17)) {
            pCVar11 = pCVar17 + 0x88;
            uVar9 = 0;
LAB_001433be:
            *(undefined4 *)pCVar11 = uVar9;
          }
        }
        else {
          iVar12 = CafeObject::isAdjacentTo(pCVar17,(int)(short)piVar4[0xb]);
          if (iVar12 == 0) {
            *(undefined4 *)pMStack0000000c = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar12 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar17 + 0x2c));
      if (iVar12 != 0) {
        if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
          iVar12 = CapcomMath::random(2);
          if (iVar12 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMStack0000000c = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMStack0000000c,(CharacterInstance *)pCVar17,
                             *(Cafe **)(unaff_r5 + 0x34),(int)sVar1,'\0',false);
          pMVar7 = pMStack0000000c;
        }
        else {
          iVar12 = *(int *)(pCVar17 + 0x98) + 1;
          *(int *)(pCVar17 + 0x98) = iVar12;
          if (iVar12 < **(int **)(in_stack_00000014 + DAT_001433fc)) {
            piVar14 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar4 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
              pMStack0000000c = (MoveTask *)CapcomMath::random(*piVar14 * *piVar4);
              iVar12 = Cafe::isInside(pCVar8,(int)pMStack0000000c);
            } while (iVar12 == 0);
          }
          else {
            lVar5 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            pMStack0000000c = (MoveTask *)Cafe::staggeredCoordsToIndex(lVar5);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar7 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar7,(CharacterInstance *)pCVar17,*(Cafe **)(unaff_r5 + 0x34),
                               (int)pMStack0000000c,'\0',false);
          }
          else {
            pMVar7 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar7,(CharacterInstance *)pCVar17,*(Cafe **)(unaff_r5 + 0x34),
                               (int)pMStack0000000c,'\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)pCVar17,(Task *)pMVar7);
        goto LAB_00143410;
      }
      pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
      if ((*(short *)(pCVar8 + 0x98) != *(short *)(pCVar17 + 0x2c)) &&
         (*(short *)(pCVar8 + 0x9a) != *(short *)(pCVar17 + 0x2c))) {
        if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
          iVar12 = CapcomMath::random(2);
          if (iVar12 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMStack0000000c = (MoveTask *)(int)sVar1;
          pMVar7 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar7,(CharacterInstance *)pCVar17,*(Cafe **)(unaff_r5 + 0x34),
                             (int)pMStack0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar17,(Task *)pMVar7);
          pCVar11 = pCVar17 + 0x98;
          uVar9 = 1;
          goto LAB_001433be;
        }
        iVar12 = CapcomMath::random(2);
        if (iVar12 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
        }
        pMStack0000000c = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMStack0000000c,(CharacterInstance *)pCVar17,*(Cafe **)(unaff_r5 + 0x34),
                           (int)sVar1,'\0',false);
        pMVar7 = pMStack0000000c;
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar8,pCVar17);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0x138),uStack00000010);
      this_05 = *(Character **)(pCVar17 + 0x8c);
      if (this_05 != (Character *)0x0) {
        Character::~Character(this_05);
        operator_delete(this_05);
      }
      (**(code **)(*(int *)pCVar17 + 4))(pCVar17);
      uStack00000010 = uStack00000010 + -1;
    }
    else {
      iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
      if (iVar12 != 0) {
        pCVar17[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar12 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
      if (iVar12 == 0) {
        GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)pCVar17);
      }
    }
    uStack00000010 = uStack00000010 + 1;
  } while( true );
}


