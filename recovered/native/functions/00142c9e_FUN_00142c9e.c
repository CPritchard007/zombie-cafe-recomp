/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00142c9e FUN_00142c9e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00142c9e(void)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  FollowTask *this;
  StealFoodTask *this_00;
  int iVar6;
  CapcomLinkedList<CharacterInstance*> *this_01;
  CleanupTask *this_02;
  ServeTask *this_03;
  void *pvVar7;
  MoveTask *pMVar8;
  AttackTask *pAVar9;
  Cafe *pCVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  Furniture *pFVar14;
  CafeObject *pCVar15;
  int iVar16;
  int iVar17;
  void *unaff_r4;
  CharacterInstance *pCVar18;
  Character *this_04;
  GameStateFriendCafe *unaff_r5;
  CafeObject *unaff_r6;
  int *piVar19;
  CafeObject *pCVar20;
  CharacterInstance *pCVar21;
  float fVar22;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  operator_delete(unaff_r4);
LAB_00142ca4:
  iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
  if (iVar6 == 0) {
    GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)unaff_r6);
  }
  (**(code **)(*(int *)unaff_r6 + 0x1c))(unaff_r6,in_stack_0000001c);
  fVar22 = (float)CapcomOrderableList<CafeObject*>::sort
                            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
                             unaff_r6);
  in_stack_0000000c = in_stack_0000000c + 1;
  if (in_stack_0000000c < *(int *)(in_stack_00000028 + 4) + 1) {
    unaff_r6 = *(CafeObject **)(in_stack_0000000c * 4 + *(int *)(in_stack_00000028 + 8));
    sVar1 = *(short *)((CharacterInstance *)unaff_r6 + 0x2c);
    iVar6 = **(int **)(in_stack_00000014 + _DAT_00142c10);
    uVar3 = __divsi3((int)sVar1,iVar6);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar3 & 0xffff | ((int)sVar1 - uVar3 * iVar6) * 0x10000) >> 0x10,
               (int)(short)uVar3);
    pCVar20 = *(CafeObject **)((CharacterInstance *)unaff_r6 + 0x88);
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0)
    ;
    if (iVar6 == 0) {
      unaff_r5[0x104] = (GameStateFriendCafe)0x0;
    }
    else if (unaff_r6 == (CafeObject *)*(CharacterInstance **)(unaff_r5 + 0x15c)) {
      *(undefined4 *)(unaff_r5 + 0x15c) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)0x0);
    }
    if ((unaff_r5[0xc4] == (GameStateFriendCafe)0x0) ||
       ((iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                                (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c)), iVar6 != 0
        && (iVar6 = __aeabi_fcmple(*(undefined4 *)
                                    (*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0),
           iVar6 == 0)))) {
      unaff_r5[0x105] = (GameStateFriendCafe)0x0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0)
    ;
    if (((((iVar6 == 0) &&
          (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                                  (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c)), iVar6 != 0
          )) && (in_stack_00000024 != 0)) && (*(int *)(unaff_r5 + 0x128) != 0)) &&
       ((piVar4 = *(int **)(*(int *)(unaff_r5 + 0x128) + 0x88), piVar4 == (int *)0x0 ||
        (iVar6 = (**(code **)(*piVar4 + 0x14))(), iVar6 != 3)))) {
      CharacterInstance::clearTasks();
      *(CafeObject **)(*(int *)(unaff_r5 + 0x128) + 0x88) = unaff_r6;
    }
    iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                           (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
    if (iVar6 != 0) {
      if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
        in_stack_00000020 = 1;
      }
      unaff_r5[0x106] = (GameStateFriendCafe)0x1;
      *(undefined1 *)(*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar20 != (CafeObject *)0x0) &&
       (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c)),
       iVar6 == 0)) {
      *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
      CharacterInstance::stopTasks((CharacterInstance *)unaff_r6);
    }
    if (*(int *)((CharacterInstance *)unaff_r6 + 0x7c) == 0) {
      iVar16 = *(int *)((CharacterInstance *)unaff_r6 + 0x8c);
      iVar6 = __aeabi_fcmple(*(undefined4 *)(iVar16 + 0x40),0);
      if (iVar6 == 0) {
        if (unaff_r5[0xc4] == (GameStateFriendCafe)0x0) {
          if (pCVar20 == (CafeObject *)0x0) {
            if (*(char *)(iVar16 + 0x44) != '\x04') goto LAB_00142ca4;
            TutorialSystem::triggerEvent
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00142c24),' ',false);
            iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),
                                   (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
            if (iVar6 != 0) {
              iVar6 = Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(unaff_r5 + 0x34),'\x03',
                                 (int)*(short *)((CharacterInstance *)unaff_r6 + 0x2c));
              *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
              bVar2 = false;
              do {
                puVar13 = *(undefined4 **)(iVar6 + 0x10);
                if (puVar13 == (undefined4 *)0x0) {
                  FUN_00143570();
                }
                piVar4 = (int *)*puVar13;
                *(undefined4 *)(iVar6 + 0x10) = puVar13[2];
                if (piVar4 == (int *)0x0) {
                  FUN_00143570();
                }
                if (bVar2) {
                  FUN_00143570();
                }
                iVar16 = __aeabi_fcmple(*(undefined4 *)(piVar4[0x23] + 0x40),0);
                if (((iVar16 == 0) &&
                    (iVar16 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)(short)piVar4[0xb]),
                    iVar16 != 0)) && (iVar16 = (**(code **)(*piVar4 + 0x20))(piVar4), iVar16 != 2))
                {
                  bVar2 = true;
                  *(int **)((CharacterInstance *)unaff_r6 + 0x88) = piVar4;
                }
              } while( true );
            }
            iVar16 = **(int **)(in_stack_00000014 + _DAT_00142c14);
            iVar6 = **(int **)(in_stack_00000014 + _DAT_00142c28);
            iVar17 = **(int **)(in_stack_00000014 + _DAT_00142c18);
            CharacterInstance::groan((CharacterInstance *)unaff_r6);
            lVar5 = Cafe::diamondToStaggeredCoords
                              ((iVar17 + -1) * 0x10000 | iVar16 + iVar6 + 1U & 0xffff);
            iVar6 = Cafe::staggeredCoordsToIndex(lVar5);
            this = (FollowTask *)operator_new(0x48);
            MoveTask::MoveTask((MoveTask *)this,(CharacterInstance *)unaff_r6,
                               *(Cafe **)(unaff_r5 + 0x34),iVar6,'\0',false);
          }
          else {
            iVar6 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
            if (iVar6 == 3) {
              iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
              if ((iVar6 == 0) &&
                 (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c)
                                        ), iVar6 != 0)) {
                FUN_0014355a();
              }
              *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
              goto LAB_00142ca4;
            }
            iVar6 = (**(code **)(*(int *)pCVar20 + 0x14))(pCVar20);
            if (iVar6 != 1) goto LAB_00142ca4;
            iVar6 = CafeObject::isAdjacentTo(unaff_r6,(int)*(short *)(pCVar20 + 0x2c));
            if (iVar6 != 0) {
              this_00 = (StealFoodTask *)operator_new(0x48);
              StealFoodTask::StealFoodTask
                        (this_00,(CharacterInstance *)unaff_r6,*(Cafe **)(unaff_r5 + 0x34));
              CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this_00);
              Task::addFinishedListener
                        ((Task *)this_00,
                         *(_func_void_void_ptr_Task_ptr **)(in_stack_00000014 + _DAT_00142c20),
                         unaff_r5);
              goto LAB_00142ca4;
            }
            this = (FollowTask *)operator_new(0x50);
            FollowTask::FollowTask
                      (this,(CharacterInstance *)unaff_r6,pCVar20,*(Cafe **)(unaff_r5 + 0x34),'\0',
                       false);
          }
        }
        else {
          lVar5 = Cafe::diamondToStaggeredCoords
                            ((**(int **)(in_stack_00000014 + _DAT_00142c18) + 5) * 0x10000 |
                             **(int **)(in_stack_00000014 + _DAT_00142c14) + 2U & 0xffff);
          iVar6 = Cafe::staggeredCoordsToIndex(lVar5);
          this = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this,(CharacterInstance *)unaff_r6,
                             *(Cafe **)(unaff_r5 + 0x34),iVar6,'\0',false);
        }
        CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this);
      }
    }
    goto LAB_00142ca4;
  }
  if (unaff_r5[0x38] != (GameStateFriendCafe)0x3) {
    if (unaff_r5[0x104] == (GameStateFriendCafe)0x0) {
      if (unaff_r5[0x105] != (GameStateFriendCafe)0x0) {
        if (in_stack_00000010 == 0) {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,1,fVar22,false);
        }
        else {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,2,fVar22,false);
          unaff_r5[0xd8] = (GameStateFriendCafe)0x1;
        }
        unaff_r5[0x38] = (GameStateFriendCafe)0x3;
        GameStateFriendCafe::initRaidRewards(unaff_r5);
      }
    }
    else {
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,fVar22,false);
      unaff_r5[0x38] = (GameStateFriendCafe)0x3;
      GameStateFriendCafe::initRaidRewards(unaff_r5);
      *(undefined4 *)(unaff_r5 + 0xe0) = 0;
    }
  }
  iVar6 = *(int *)(unaff_r5 + 0x128);
  if (iVar6 != 0) {
    iVar16 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar6 + 0x8c) + 0x40),0);
    if (iVar16 == 0) {
      pCVar18 = *(CharacterInstance **)(iVar6 + 0x88);
      if (*(int *)(iVar6 + 0x7c) == 0) {
        if ((pCVar18 != (CharacterInstance *)0x0) &&
           (iVar6 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18), iVar6 == 3)) {
          iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
          if ((iVar6 != 0) ||
             (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c)),
             iVar6 == 0)) goto LAB_00142df0;
          pAVar9 = (AttackTask *)operator_new(0x40);
          pCVar21 = *(CharacterInstance **)(unaff_r5 + 0x128);
          AttackTask::AttackTask(pAVar9,pCVar21,pCVar18,*(Cafe **)(unaff_r5 + 0x34));
          CharacterInstance::addTask(pCVar21,(Task *)pAVar9);
        }
      }
      else if (((pCVar18 != (CharacterInstance *)0x0) &&
               (iVar6 = (**(code **)(*(int *)pCVar18 + 0x14))(pCVar18), iVar6 == 3)) &&
              ((iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0),
               iVar6 != 0 ||
               (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar18 + 0x2c)),
               iVar6 == 0)))) {
LAB_00142df0:
        *(undefined4 *)(*(int *)(unaff_r5 + 0x128) + 0x88) = 0;
        CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
      }
    }
    else {
      *(undefined1 *)(iVar6 + 0x84) = 0;
    }
    pCVar18 = *(CharacterInstance **)(unaff_r5 + 0x128);
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar18);
    }
    (**(code **)(**(int **)(unaff_r5 + 0x128) + 0x1c))
              (*(int **)(unaff_r5 + 0x128),in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               *(CafeObject **)(unaff_r5 + 0x128));
  }
  if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) goto LAB_00142fa8;
  if ((*(int *)(*(int *)(unaff_r5 + 0x34) + 0xc0) != -1) ||
     (this_01 = (CapcomLinkedList<CharacterInstance*> *)0x0,
     *(int *)(*(int *)(unaff_r5 + 0x34) + 0xa8) != -1)) {
    this_01 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
    *(undefined4 *)(this_01 + 4) = 0;
    *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
    *(undefined4 *)(this_01 + 0x10) = 0;
    *(undefined4 *)(this_01 + 0xc) = 0;
    for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x130) + 1; iVar6 = iVar6 + 1) {
      CapcomLinkedList<CharacterInstance*>::add
                (this_01,*(CharacterInstance **)(iVar6 * 4 + *(int *)(unaff_r5 + 0x134)));
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
    pFVar14 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xc4);
    do {
      if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f1c;
      iVar6 = CapcomMath::random(*(int *)(this_01 + 0x10));
      pCVar18 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar6);
    } while ((*(char *)(*(int *)(pCVar18 + 0x8c) + 0x44) != '\x01') ||
            (*(int *)(pCVar18 + 0x7c) != 0));
    this_02 = (CleanupTask *)operator_new(0x44);
    CleanupTask::CleanupTask(this_02,pCVar18,*(Cafe **)(unaff_r5 + 0x34),pFVar14);
    CharacterInstance::addTask(pCVar18,(Task *)this_02);
  }
LAB_00142f1c:
  if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
     (iVar6 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar6 != 0)) {
    pCVar18 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
    do {
      if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f80;
      iVar6 = CapcomMath::random(*(int *)(this_01 + 0x10));
      pCVar21 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar6);
    } while ((*(char *)(*(int *)(pCVar21 + 0x8c) + 0x44) != '\x01') ||
            (*(int *)(pCVar21 + 0x7c) != 0));
    this_03 = (ServeTask *)operator_new(0x4c);
    ServeTask::ServeTask(this_03,pCVar21,*(Cafe **)(unaff_r5 + 0x34),pCVar18);
    CharacterInstance::addTask(pCVar21,(Task *)this_03);
  }
LAB_00142f80:
  if (this_01 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
    if (*(int *)(this_01 + 0x10) != 0) {
      while (pvVar7 = *(void **)(this_01 + 4), pvVar7 != (void *)0x0) {
        uVar11 = *(undefined4 *)((int)pvVar7 + 4);
        operator_delete(pvVar7);
        *(undefined4 *)(this_01 + 4) = uVar11;
      }
      *(undefined4 *)(this_01 + 0x10) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_01 + 8) = this_01;
      *(undefined4 *)(this_01 + 0xc) = 0;
    }
    operator_delete(this_01);
  }
LAB_00142fa8:
  for (in_stack_00000010 = 0; in_stack_00000010 < *(int *)(unaff_r5 + 0x130) + 1;
      in_stack_00000010 = in_stack_00000010 + 1) {
    pCVar18 = *(CharacterInstance **)(in_stack_00000010 * 4 + *(int *)(unaff_r5 + 0x134));
    if (in_stack_00000020 != 0) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar18 + 0x88) = 0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      pCVar21 = *(CharacterInstance **)(pCVar18 + 0x88);
      if (*(int *)(pCVar18 + 0x7c) == 0) {
        if (pCVar21 == (CharacterInstance *)0x0) {
          in_stack_0000000c = 0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; in_stack_0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                in_stack_0000000c = in_stack_0000000c + 1) {
              iVar16 = *(int *)(in_stack_0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar16 + 0x8c) + 0x40),0);
              if ((iVar6 == 0) &&
                 (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar16 + 0x2c))
                 , iVar6 != 0)) {
                *(int *)(pCVar18 + 0x88) = iVar16;
                break;
              }
            }
          }
        }
        else {
          iVar6 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
          if (iVar6 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar18,0);
            iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
            if ((iVar6 == 0) &&
               (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar21 + 0x2c)),
               iVar6 != 0)) {
              pAVar9 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar9,pCVar18,pCVar21,*(Cafe **)(unaff_r5 + 0x34));
            }
            else {
              *(undefined4 *)(pCVar18 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar18);
              piVar19 = *(int **)(in_stack_00000014 + DAT_001433f4);
              piVar4 = *(int **)(in_stack_00000014 + DAT_001433f8);
              do {
                pCVar10 = *(Cafe **)(unaff_r5 + 0x34);
                iVar6 = CapcomMath::random(*piVar19 * *piVar4);
                iVar16 = Cafe::isInside(pCVar10,iVar6);
              } while (iVar16 == 0);
              pAVar9 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar9,pCVar18,*(Cafe **)(unaff_r5 + 0x34),iVar6,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar18,(Task *)pAVar9);
          }
        }
      }
      else if (((pCVar21 != (CharacterInstance *)0x0) &&
               (iVar6 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21), iVar6 == 3)) &&
              ((iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0),
               iVar6 != 0 ||
               (iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar21 + 0x2c)),
               iVar6 == 0)))) {
        *(undefined4 *)(pCVar18 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar18);
      }
    }
    else {
      pCVar18[0x84] = (CharacterInstance)0x0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
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
      for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x148) + 1; iVar6 = iVar6 + 1) {
        piVar4 = *(int **)(iVar6 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar4 + 0x1c))(piVar4,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar16 = 0;
        in_stack_00000014 = 0;
        for (iVar6 = 0; iVar6 < *(int *)(unaff_r5 + 0x13c) + 1; iVar6 = iVar6 + 1) {
          iVar12 = *(int *)(iVar6 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar17 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar12 + 0x2c));
          if (iVar17 != 0) {
            if (*(char *)(**(int **)(iVar12 + 0x8c) + DAT_001435d0) == '\0') {
              iVar16 = iVar16 + 1;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar16,in_stack_00000014);
      }
      return;
    }
    pCVar20 = *(CafeObject **)(in_stack_00000010 * 4 + *(int *)(unaff_r5 + 0x140));
    (**(code **)(*(int *)pCVar20 + 0x1c))(pCVar20,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),pCVar20);
    if ((unaff_r5[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(pCVar20 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar20);
    }
    if ((*(int *)(pCVar20 + 0x7c) == 0) &&
       (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0), iVar6 == 0)) {
      piVar4 = *(int **)(pCVar20 + 0x88);
      if (piVar4 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar4 + 0x14))(piVar4);
        if (iVar6 == 3) {
          iVar6 = CafeObject::isAdjacentTo(pCVar20,(int)(short)piVar4[0xb]);
          if (((iVar6 == 0) ||
              (iVar6 = __aeabi_fcmple(*(undefined4 *)(piVar4[0x23] + 0x40),0), iVar6 != 0)) ||
             ((CafeObject *)piVar4[0x22] != pCVar20)) {
            pCVar15 = pCVar20 + 0x88;
            uVar11 = 0;
LAB_001433be:
            *(undefined4 *)pCVar15 = uVar11;
          }
        }
        else {
          iVar6 = CafeObject::isAdjacentTo(pCVar20,(int)(short)piVar4[0xb]);
          if (iVar6 == 0) {
            *(undefined4 *)(pCVar20 + 0x88) = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar20 + 0x2c));
      if (iVar6 != 0) {
        if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
          iVar6 = CapcomMath::random(2);
          if (iVar6 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMVar8 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar8,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x34),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar6 = *(int *)(pCVar20 + 0x98) + 1;
          *(int *)(pCVar20 + 0x98) = iVar6;
          if (iVar6 < **(int **)(in_stack_00000014 + DAT_001433fc)) {
            piVar19 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar4 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar10 = *(Cafe **)(unaff_r5 + 0x34);
              in_stack_0000000c = CapcomMath::random(*piVar19 * *piVar4);
              iVar6 = Cafe::isInside(pCVar10,in_stack_0000000c);
            } while (iVar6 == 0);
          }
          else {
            lVar5 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            in_stack_0000000c = Cafe::staggeredCoordsToIndex(lVar5);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar8 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar8,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x34),
                               in_stack_0000000c,'\0',false);
          }
          else {
            pMVar8 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar8,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x34),
                               in_stack_0000000c,'\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)pCVar20,(Task *)pMVar8);
        goto LAB_00143410;
      }
      pCVar10 = *(Cafe **)(unaff_r5 + 0x34);
      if ((*(short *)(pCVar10 + 0x98) != *(short *)(pCVar20 + 0x2c)) &&
         (*(short *)(pCVar10 + 0x9a) != *(short *)(pCVar20 + 0x2c))) {
        if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
          iVar6 = CapcomMath::random(2);
          if (iVar6 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          in_stack_0000000c = (int)sVar1;
          pMVar8 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar8,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x34),
                             in_stack_0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar20,(Task *)pMVar8);
          pCVar15 = pCVar20 + 0x98;
          uVar11 = 1;
          goto LAB_001433be;
        }
        iVar6 = CapcomMath::random(2);
        if (iVar6 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
        }
        pMVar8 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar8,(CharacterInstance *)pCVar20,*(Cafe **)(unaff_r5 + 0x34),
                           (int)sVar1,'\0',false);
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar10,pCVar20);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0x138),in_stack_00000010);
      this_04 = *(Character **)(pCVar20 + 0x8c);
      if (this_04 != (Character *)0x0) {
        Character::~Character(this_04);
        operator_delete(this_04);
      }
      (**(code **)(*(int *)pCVar20 + 4))(pCVar20);
      in_stack_00000010 = in_stack_00000010 + -1;
    }
    else {
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
      if (iVar6 != 0) {
        pCVar20[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar20 + 0x8c) + 0x40),0);
      if (iVar6 == 0) {
        GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)pCVar20);
      }
    }
    in_stack_00000010 = in_stack_00000010 + 1;
  } while( true );
}


