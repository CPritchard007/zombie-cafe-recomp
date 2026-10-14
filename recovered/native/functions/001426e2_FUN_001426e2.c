/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001426e2 FUN_001426e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001426e2(void)

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
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  Furniture *pFVar15;
  CafeObject *pCVar16;
  int iVar17;
  Character *this_04;
  GameStateFriendCafe *unaff_r5;
  CafeObject *unaff_r6;
  int iVar18;
  CharacterInstance *pCVar19;
  int *piVar20;
  int unaff_r7;
  int *piVar21;
  CafeObject *pCVar22;
  CharacterInstance *pCVar23;
  float extraout_s0;
  float fVar24;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  
  while (in_stack_00000010 = in_stack_00000010 + 1,
        in_stack_00000010 < *(int *)(in_stack_0000000c + 4) + 1) {
    if (unaff_r6 == *(CafeObject **)(in_stack_00000010 * 4 + *(int *)(in_stack_0000000c + 8))) {
      if (unaff_r6 == *(CafeObject **)(unaff_r5 + 0x15c)) {
        FUN_0014352e();
      }
      iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
      if (iVar5 != 0) {
        FUN_0014352e();
      }
      *(CafeObject **)(unaff_r5 + 0x15c) = unaff_r6;
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0014285c),'\x10',false);
      Cafe::select(*(Cafe **)(unaff_r5 + 0x34),*(CafeObject **)(unaff_r5 + 0x15c));
      CharacterCommandBar::setCharacter
                (*(CharacterCommandBar **)(unaff_r5 + unaff_r7),
                 *(CharacterInstance **)(unaff_r5 + 0x15c));
      CharacterCommandBar::resetButtons();
      CharacterCommandBar::addInfoButton
                (*(CharacterCommandBar **)(unaff_r5 + unaff_r7),
                 *(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000014 + DAT_00142860),
                 unaff_r5);
      CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(unaff_r5 + unaff_r7));
      CharacterCommandBar::addHealButton
                (*(CharacterCommandBar **)(unaff_r5 + unaff_r7),
                 *(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000014 + DAT_00142864),
                 unaff_r5);
      CharacterCommandBar::open(*(CharacterCommandBar **)(unaff_r5 + unaff_r7));
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00142868) = 1;
      CharacterInstance::groan(*(CharacterInstance **)(unaff_r5 + 0x15c));
      if (*(char *)(*(int *)(unaff_r5 + 0x15c) + 0xc6) != '\0') {
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0x1a4),0));
        *(undefined1 *)(*(int *)(unaff_r5 + 0x15c) + 0xc6) = 0;
      }
    }
  }
  iVar5 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (iVar5 == 0) {
    FUN_00143548();
  }
  iVar5 = (**(code **)(*(int *)unaff_r6 + 0x14))(unaff_r6);
  fVar24 = extraout_s0;
  if (iVar5 != 3) {
    fVar24 = (float)FUN_00143548();
  }
  if ((((*(int *)(unaff_r5 + 0x15c) != 0) &&
       (piVar21 = (int *)(*(int *)(unaff_r5 + 0x15c) + 0x88), unaff_r6 != (CafeObject *)*piVar21))
      && (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0),
         fVar24 = extraout_s0_00, iVar5 == 0)) && (unaff_r5[0xc4] == (GameStateFriendCafe)0x0)) {
    *piVar21 = (int)unaff_r6;
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0014285c),' ',false);
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x15c));
    CharacterInstance::groan(*(CharacterInstance **)(unaff_r5 + 0x15c));
    *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x15c) + 0x8c) + 0x44) = 4;
    GameStateFriendCafe::startColorShift(unaff_r5,unaff_r6);
    FUN_001427ea();
    return;
  }
  iVar5 = *(int *)(unaff_r5 + 0x130);
  iVar18 = 0;
  bVar3 = true;
  bVar2 = true;
  for (iVar17 = 0; iVar17 < iVar5 + 1; iVar17 = iVar17 + 1) {
    iVar13 = __aeabi_fcmple(*(undefined4 *)
                             (*(int *)(*(int *)(iVar17 * 4 + *(int *)(unaff_r5 + 0x134)) + 0x8c) +
                             0x40),0);
    if (iVar13 == 0) {
      iVar18 = iVar18 + 1;
      bVar3 = false;
      bVar2 = false;
    }
    fVar24 = extraout_s0_01;
  }
  if ((*(int *)(unaff_r5 + 0xbc) != 0) &&
     (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r5 + 0xbc) + 0x40),0),
     fVar24 = extraout_s0_02, iVar5 == 0)) {
    iVar18 = iVar18 + 1;
    bVar3 = false;
  }
  for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x13c) + 1; iVar5 = iVar5 + 1) {
    iVar13 = *(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x140));
    iVar17 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar13 + 0x8c) + 0x40),0);
    fVar24 = extraout_s0_03;
    if (iVar17 == 0) {
      iVar17 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar13 + 0x2c));
      iVar18 = iVar18 + (uint)(iVar17 != 0);
      fVar24 = extraout_s0_04;
    }
  }
  if (((iVar18 == 0) && (unaff_r5[0x38] != (GameStateFriendCafe)0x3)) &&
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
  for (in_stack_0000000c = 0; in_stack_0000000c < *(int *)(unaff_r5 + 0x154) + 1;
      in_stack_0000000c = in_stack_0000000c + 1) {
    pCVar19 = *(CharacterInstance **)(in_stack_0000000c * 4 + *(int *)(unaff_r5 + 0x158));
    sVar1 = *(short *)(pCVar19 + 0x2c);
    iVar5 = **(int **)(in_stack_00000014 + _DAT_00142c10);
    uVar6 = __divsi3((int)sVar1,iVar5);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar6 & 0xffff | ((int)sVar1 - uVar6 * iVar5) * 0x10000) >> 0x10,
               (int)(short)uVar6);
    pCVar22 = *(CafeObject **)(pCVar19 + 0x88);
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      unaff_r5[0x104] = (GameStateFriendCafe)0x0;
    }
    else if (pCVar19 == *(CharacterInstance **)(unaff_r5 + 0x15c)) {
      *(undefined4 *)(unaff_r5 + 0x15c) = 0;
      Cafe::select(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)0x0);
    }
    if ((unaff_r5[0xc4] == (GameStateFriendCafe)0x0) ||
       ((iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar19 + 0x2c)),
        iVar5 != 0 &&
        (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0), iVar5 == 0))))
    {
      unaff_r5[0x105] = (GameStateFriendCafe)0x0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    if (((iVar5 == 0) &&
        (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar19 + 0x2c)),
        iVar5 != 0)) &&
       (((bVar2 && (*(int *)(unaff_r5 + 0x128) != 0)) &&
        ((piVar21 = *(int **)(*(int *)(unaff_r5 + 0x128) + 0x88), piVar21 == (int *)0x0 ||
         (iVar5 = (**(code **)(*piVar21 + 0x14))(), iVar5 != 3)))))) {
      CharacterInstance::clearTasks();
      *(CharacterInstance **)(*(int *)(unaff_r5 + 0x128) + 0x88) = pCVar19;
    }
    iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar19 + 0x2c));
    if (iVar5 != 0) {
      if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
        bVar4 = true;
      }
      unaff_r5[0x106] = (GameStateFriendCafe)0x1;
      *(undefined1 *)(*(int *)(pCVar19 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar22 != (CafeObject *)0x0) &&
       (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar22 + 0x2c)),
       iVar5 == 0)) {
      *(undefined4 *)(pCVar19 + 0x88) = 0;
      CharacterInstance::stopTasks(pCVar19);
    }
    if (*(int *)(pCVar19 + 0x7c) == 0) {
      iVar17 = *(int *)(pCVar19 + 0x8c);
      iVar5 = __aeabi_fcmple(*(undefined4 *)(iVar17 + 0x40),0);
      if (iVar5 == 0) {
        if (unaff_r5[0xc4] == (GameStateFriendCafe)0x0) {
          if (pCVar22 == (CafeObject *)0x0) {
            if (*(char *)(iVar17 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + _DAT_00142c24),' ',false);
              iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar19 + 0x2c));
              if (iVar5 != 0) {
                iVar5 = Cafe::createDistanceSortedObjectList
                                  (*(Cafe **)(unaff_r5 + 0x34),'\x03',
                                   (int)*(short *)(pCVar19 + 0x2c));
                *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
                bVar2 = false;
                do {
                  puVar14 = *(undefined4 **)(iVar5 + 0x10);
                  if (puVar14 == (undefined4 *)0x0) {
                    FUN_00143570();
                  }
                  piVar21 = (int *)*puVar14;
                  *(undefined4 *)(iVar5 + 0x10) = puVar14[2];
                  if (piVar21 == (int *)0x0) {
                    FUN_00143570();
                  }
                  if (bVar2) {
                    FUN_00143570();
                  }
                  iVar17 = __aeabi_fcmple(*(undefined4 *)(piVar21[0x23] + 0x40),0);
                  if (((iVar17 == 0) &&
                      (iVar17 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)(short)piVar21[0xb])
                      , iVar17 != 0)) &&
                     (iVar17 = (**(code **)(*piVar21 + 0x20))(piVar21), iVar17 != 2)) {
                    bVar2 = true;
                    *(int **)(pCVar19 + 0x88) = piVar21;
                  }
                } while( true );
              }
              iVar17 = **(int **)(in_stack_00000014 + _DAT_00142c14);
              iVar5 = **(int **)(in_stack_00000014 + _DAT_00142c28);
              iVar18 = **(int **)(in_stack_00000014 + _DAT_00142c18);
              CharacterInstance::groan(pCVar19);
              lVar7 = Cafe::diamondToStaggeredCoords
                                ((iVar18 + -1) * 0x10000 | iVar17 + iVar5 + 1U & 0xffff);
              iVar5 = Cafe::staggeredCoordsToIndex(lVar7);
              this = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this,pCVar19,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',
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
              *(undefined4 *)(pCVar19 + 0x88) = 0;
            }
            else {
              iVar5 = (**(code **)(*(int *)pCVar22 + 0x14))(pCVar22);
              if (iVar5 == 1) {
                iVar5 = CafeObject::isAdjacentTo
                                  ((CafeObject *)pCVar19,(int)*(short *)(pCVar22 + 0x2c));
                if (iVar5 == 0) {
                  this = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask
                            (this,pCVar19,pCVar22,*(Cafe **)(unaff_r5 + 0x34),'\0',false);
                  goto LAB_00142be6;
                }
                this_00 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask(this_00,pCVar19,*(Cafe **)(unaff_r5 + 0x34));
                CharacterInstance::addTask(pCVar19,(Task *)this_00);
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
          MoveTask::MoveTask((MoveTask *)this,pCVar19,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',false);
LAB_00142be6:
          CharacterInstance::addTask(pCVar19,(Task *)this);
        }
      }
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar19);
    }
    (**(code **)(*(int *)pCVar19 + 0x1c))(pCVar19,in_stack_0000001c);
    fVar24 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x34) + 0x20),(CafeObject *)pCVar19);
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
  iVar17 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar5 + 0x8c) + 0x40),0);
  if (iVar17 == 0) {
    pCVar19 = *(CharacterInstance **)(iVar5 + 0x88);
    if (*(int *)(iVar5 + 0x7c) == 0) {
      if ((pCVar19 != (CharacterInstance *)0x0) &&
         (iVar5 = (**(code **)(*(int *)pCVar19 + 0x14))(pCVar19), iVar5 == 3)) {
        iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
        if ((iVar5 != 0) ||
           (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar19 + 0x2c)),
           iVar5 == 0)) goto LAB_00142df0;
        pAVar10 = (AttackTask *)operator_new(0x40);
        pCVar23 = *(CharacterInstance **)(unaff_r5 + 0x128);
        AttackTask::AttackTask(pAVar10,pCVar23,pCVar19,*(Cafe **)(unaff_r5 + 0x34));
        CharacterInstance::addTask(pCVar23,(Task *)pAVar10);
      }
    }
    else if (((pCVar19 != (CharacterInstance *)0x0) &&
             (iVar5 = (**(code **)(*(int *)pCVar19 + 0x14))(pCVar19), iVar5 == 3)) &&
            ((iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0), iVar5 != 0
             || (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar19 + 0x2c))
                , iVar5 == 0)))) {
LAB_00142df0:
      *(undefined4 *)(*(int *)(unaff_r5 + 0x128) + 0x88) = 0;
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x84) = 0;
  }
  pCVar19 = *(CharacterInstance **)(unaff_r5 + 0x128);
  iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
  if (iVar5 == 0) {
    GameStateFriendCafe::checkOverlap(unaff_r5,pCVar19);
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
      pFVar15 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xc4);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f1c;
        iVar5 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar19 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar5);
      } while ((*(char *)(*(int *)(pCVar19 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar19 + 0x7c) != 0));
      this_02 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_02,pCVar19,*(Cafe **)(unaff_r5 + 0x34),pFVar15);
      CharacterInstance::addTask(pCVar19,(Task *)this_02);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
       (iVar5 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar5 != 0)) {
      pCVar19 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
      do {
        if (*(int *)(this_01 + 0x10) == 0) goto LAB_00142f80;
        iVar5 = CapcomMath::random(*(int *)(this_01 + 0x10));
        pCVar23 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_01,iVar5);
      } while ((*(char *)(*(int *)(pCVar23 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar23 + 0x7c) != 0));
      this_03 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_03,pCVar23,*(Cafe **)(unaff_r5 + 0x34),pCVar19);
      CharacterInstance::addTask(pCVar23,(Task *)this_03);
    }
LAB_00142f80:
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
    }
  }
  for (in_stack_00000010 = 0; in_stack_00000010 < *(int *)(unaff_r5 + 0x130) + 1;
      in_stack_00000010 = in_stack_00000010 + 1) {
    pCVar19 = *(CharacterInstance **)(in_stack_00000010 * 4 + *(int *)(unaff_r5 + 0x134));
    if (bVar4) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar19 + 0x88) = 0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      pCVar23 = *(CharacterInstance **)(pCVar19 + 0x88);
      if (*(int *)(pCVar19 + 0x7c) == 0) {
        if (pCVar23 == (CharacterInstance *)0x0) {
          in_stack_0000000c = 0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; in_stack_0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                in_stack_0000000c = in_stack_0000000c + 1) {
              iVar17 = *(int *)(in_stack_0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar17 + 0x8c) + 0x40),0);
              if ((iVar5 == 0) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar17 + 0x2c))
                 , iVar5 != 0)) {
                *(int *)(pCVar19 + 0x88) = iVar17;
                break;
              }
            }
          }
        }
        else {
          iVar5 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23);
          if (iVar5 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar19,0);
            iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0);
            if ((iVar5 == 0) &&
               (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar23 + 0x2c)),
               iVar5 != 0)) {
              pAVar10 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar10,pCVar19,pCVar23,*(Cafe **)(unaff_r5 + 0x34));
            }
            else {
              *(undefined4 *)(pCVar19 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar19);
              piVar20 = *(int **)(in_stack_00000014 + DAT_001433f4);
              piVar21 = *(int **)(in_stack_00000014 + DAT_001433f8);
              do {
                pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
                iVar5 = CapcomMath::random(*piVar20 * *piVar21);
                iVar17 = Cafe::isInside(pCVar11,iVar5);
              } while (iVar17 == 0);
              pAVar10 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar10,pCVar19,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar19,(Task *)pAVar10);
          }
        }
      }
      else if (((pCVar23 != (CharacterInstance *)0x0) &&
               (iVar5 = (**(code **)(*(int *)pCVar23 + 0x14))(pCVar23), iVar5 == 3)) &&
              ((iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar23 + 0x8c) + 0x40),0),
               iVar5 != 0 ||
               (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar23 + 0x2c)),
               iVar5 == 0)))) {
        *(undefined4 *)(pCVar19 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar19);
      }
    }
    else {
      pCVar19[0x84] = (CharacterInstance)0x0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar19 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar19);
    }
    (**(code **)(*(int *)pCVar19 + 0x1c))(pCVar19,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               (CafeObject *)pCVar19);
  }
  in_stack_00000010 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x13c) + 1 <= in_stack_00000010) {
      for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x148) + 1; iVar5 = iVar5 + 1) {
        piVar21 = *(int **)(iVar5 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar21 + 0x1c))(piVar21,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar17 = 0;
        in_stack_00000014 = 0;
        for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x13c) + 1; iVar5 = iVar5 + 1) {
          iVar13 = *(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar18 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar13 + 0x2c));
          if (iVar18 != 0) {
            if (*(char *)(**(int **)(iVar13 + 0x8c) + DAT_001435d0) == '\0') {
              iVar17 = iVar17 + 1;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar17,in_stack_00000014);
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
       (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar22 + 0x8c) + 0x40),0), iVar5 == 0)) {
      piVar21 = *(int **)(pCVar22 + 0x88);
      if (piVar21 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar21 + 0x14))(piVar21);
        if (iVar5 == 3) {
          iVar5 = CafeObject::isAdjacentTo(pCVar22,(int)(short)piVar21[0xb]);
          if (((iVar5 == 0) ||
              (iVar5 = __aeabi_fcmple(*(undefined4 *)(piVar21[0x23] + 0x40),0), iVar5 != 0)) ||
             ((CafeObject *)piVar21[0x22] != pCVar22)) {
            pCVar16 = pCVar22 + 0x88;
            uVar12 = 0;
LAB_001433be:
            *(undefined4 *)pCVar16 = uVar12;
          }
        }
        else {
          iVar5 = CafeObject::isAdjacentTo(pCVar22,(int)(short)piVar21[0xb]);
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
            piVar20 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar21 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar11 = *(Cafe **)(unaff_r5 + 0x34);
              in_stack_0000000c = CapcomMath::random(*piVar20 * *piVar21);
              iVar5 = Cafe::isInside(pCVar11,in_stack_0000000c);
            } while (iVar5 == 0);
          }
          else {
            lVar7 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            in_stack_0000000c = Cafe::staggeredCoordsToIndex(lVar7);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                               in_stack_0000000c,'\0',false);
          }
          else {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                               in_stack_0000000c,'\t',false);
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
          in_stack_0000000c = (int)sVar1;
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)pCVar22,*(Cafe **)(unaff_r5 + 0x34),
                             in_stack_0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar22,(Task *)pMVar9);
          pCVar16 = pCVar22 + 0x98;
          uVar12 = 1;
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
    in_stack_00000010 = in_stack_00000010 + 1;
  } while( true );
}


