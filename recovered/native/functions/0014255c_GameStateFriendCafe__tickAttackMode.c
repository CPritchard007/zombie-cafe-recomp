/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014255c GameStateFriendCafe::tickAttackMode */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateFriendCafe::tickAttackMode(long) */

void __thiscall GameStateFriendCafe::tickAttackMode(GameStateFriendCafe *this,long param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  CafeObject *pCVar7;
  uint uVar8;
  FollowTask *this_00;
  StealFoodTask *this_01;
  CapcomLinkedList<CharacterInstance*> *this_02;
  CleanupTask *this_03;
  ServeTask *this_04;
  void *pvVar9;
  MoveTask *pMVar10;
  AttackTask *pAVar11;
  Cafe *pCVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  Furniture *pFVar16;
  CafeObject *pCVar17;
  ZombieCafe *this_05;
  int iVar18;
  Character *this_06;
  long lVar19;
  int iVar20;
  CharacterInstance *pCVar21;
  int *piVar22;
  int *piVar23;
  CharacterInstance *pCVar24;
  float extraout_s0;
  float fVar25;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar5 = DAT_0014284c;
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  iVar5 = iVar5 + 0x142578;
  if (*(int *)(this + 0x15c) == 0) {
    if ((byte)(*(CharacterCommandBar **)(this + 0x1a4))[0xb8] - 1 < 2) {
      CharacterCommandBar::close(*(CharacterCommandBar **)(this + 0x1a4));
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0x1a4) + 0xb8) - 1) {
    Cafe::select(*(Cafe **)(this + 0x34),(CafeObject *)0x0);
    *(undefined4 *)(this + 0x15c) = 0;
  }
  this_05 = *(ZombieCafe **)(this + 0xc);
  iVar6 = ZombieCafe::unhandledTouchUpEvent(this_05);
  if (iVar6 == 0) {
    FUN_001427ea();
    return;
  }
  if ((int)**(short **)(iVar5 + DAT_00142850) < *(int *)(this_05 + DAT_00142854)) {
    FUN_001427ea();
    return;
  }
  lVar19 = *(long *)(this + 0x34);
  screenToWorldCoords(this,*(long *)(this_05 + DAT_00142858));
  pCVar7 = (CafeObject *)Cafe::pickCafeObject(lVar19);
  if ((((*(TutorialArrow **)(this + 0x1c4))[0x14] != (TutorialArrow)0x0) &&
      (iVar6 = TutorialArrow::attachedToCafeObject(*(TutorialArrow **)(this + 0x1c4)), iVar6 != 0))
     && (iVar6 = TutorialArrow::targetContains
                           (*(TutorialArrow **)(this + 0x1c4),this,
                            *(long *)(*(int *)(this + 0xc) + DAT_00142858)), iVar6 != 0)) {
    pCVar7 = *(CafeObject **)(*(int *)(this + 0x1c4) + 0x60);
  }
  if (pCVar7 == (CafeObject *)0x0) {
    FUN_001434f8();
  }
  iVar6 = (**(code **)(*(int *)pCVar7 + 0x14))(pCVar7);
  local_38 = 0;
  if (iVar6 != 2) goto LAB_001426e8;
  FUN_001434f8();
  do {
    if (pCVar7 == *(CafeObject **)(local_38 * 4 + *(int *)(this + 0x158))) {
      if (pCVar7 == *(CafeObject **)(this + 0x15c)) {
        FUN_0014352e();
      }
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0);
      if (iVar6 != 0) {
        FUN_0014352e();
      }
      *(CafeObject **)(this + 0x15c) = pCVar7;
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0014285c),'\x10',false);
      Cafe::select(*(Cafe **)(this + 0x34),*(CafeObject **)(this + 0x15c));
      CharacterCommandBar::setCharacter
                (*(CharacterCommandBar **)(this + 0x1a4),*(CharacterInstance **)(this + 0x15c));
      CharacterCommandBar::resetButtons();
      CharacterCommandBar::addInfoButton
                (*(CharacterCommandBar **)(this + 0x1a4),
                 *(_func_void_void_ptr_ScreenElement_ptr **)(iVar5 + DAT_00142860),this);
      CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(this + 0x1a4));
      CharacterCommandBar::addHealButton
                (*(CharacterCommandBar **)(this + 0x1a4),
                 *(_func_void_void_ptr_ScreenElement_ptr **)(iVar5 + DAT_00142864),this);
      CharacterCommandBar::open(*(CharacterCommandBar **)(this + 0x1a4));
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00142868) = 1;
      CharacterInstance::groan(*(CharacterInstance **)(this + 0x15c));
      if (*(char *)(*(int *)(this + 0x15c) + 0xc6) != '\0') {
        CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(this + 0x1a4),0));
        *(undefined1 *)(*(int *)(this + 0x15c) + 0xc6) = 0;
      }
    }
    local_38 = local_38 + 1;
LAB_001426e8:
  } while (local_38 < *(int *)(this + 0x154) + 1);
  iVar6 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(this + 0xc));
  if (iVar6 == 0) {
    FUN_00143548();
  }
  iVar6 = (**(code **)(*(int *)pCVar7 + 0x14))(pCVar7);
  fVar25 = extraout_s0;
  if (iVar6 != 3) {
    fVar25 = (float)FUN_00143548();
  }
  if (((*(int *)(this + 0x15c) != 0) &&
      (piVar23 = (int *)(*(int *)(this + 0x15c) + 0x88), pCVar7 != (CafeObject *)*piVar23)) &&
     ((iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0),
      fVar25 = extraout_s0_00, iVar6 == 0 && (this[0xc4] == (GameStateFriendCafe)0x0)))) {
    *piVar23 = (int)pCVar7;
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0014285c),' ',false);
    CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x15c));
    CharacterInstance::groan(*(CharacterInstance **)(this + 0x15c));
    *(undefined1 *)(*(int *)(*(int *)(this + 0x15c) + 0x8c) + 0x44) = 4;
    startColorShift(this,pCVar7);
    FUN_001427ea();
    return;
  }
  iVar6 = *(int *)(this + 0x130);
  iVar20 = 0;
  bVar3 = true;
  bVar2 = true;
  for (iVar18 = 0; iVar18 < iVar6 + 1; iVar18 = iVar18 + 1) {
    iVar13 = __aeabi_fcmple(*(undefined4 *)
                             (*(int *)(*(int *)(iVar18 * 4 + *(int *)(this + 0x134)) + 0x8c) + 0x40)
                            ,0);
    if (iVar13 == 0) {
      iVar20 = iVar20 + 1;
      bVar3 = false;
      bVar2 = false;
    }
    fVar25 = extraout_s0_01;
  }
  if ((*(int *)(this + 0xbc) != 0) &&
     (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this + 0xbc) + 0x40),0),
     fVar25 = extraout_s0_02, iVar6 == 0)) {
    iVar20 = iVar20 + 1;
    bVar3 = false;
  }
  for (iVar6 = 0; iVar6 < *(int *)(this + 0x13c) + 1; iVar6 = iVar6 + 1) {
    iVar13 = *(int *)(iVar6 * 4 + *(int *)(this + 0x140));
    iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar13 + 0x8c) + 0x40),0);
    fVar25 = extraout_s0_03;
    if (iVar18 == 0) {
      iVar18 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(iVar13 + 0x2c));
      iVar20 = iVar20 + (uint)(iVar18 != 0);
      fVar25 = extraout_s0_04;
    }
  }
  if (((iVar20 == 0) && (this[0x38] != (GameStateFriendCafe)0x3)) &&
     (this[0xd8] == (GameStateFriendCafe)0x0)) {
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar25,false);
    iVar6 = DAT_00142c0c;
    this[0xd8] = (GameStateFriendCafe)0x1;
    *(undefined4 *)(this + 0xdc) = **(undefined4 **)(iVar5 + iVar6);
    fVar25 = (float)FriendCafeHudElement::setButtonAvailability
                              (*(FriendCafeHudElement **)(this + 0x19c),4,false);
  }
  if (((this[0x38] != (GameStateFriendCafe)0x3) && (this[0xd8] != (GameStateFriendCafe)0x0)) &&
     (iVar6 = *(int *)(this + 0xdc) - param_1, *(int *)(this + 0xdc) = iVar6, iVar6 < 1)) {
    this[0x38] = (GameStateFriendCafe)0x3;
    fVar25 = (float)initRaidRewards(this);
  }
  this[0x104] = (GameStateFriendCafe)0x1;
  this[0x105] = (GameStateFriendCafe)0x1;
  bVar4 = false;
  for (local_3c = 0; local_3c < *(int *)(this + 0x154) + 1; local_3c = local_3c + 1) {
    pCVar21 = *(CharacterInstance **)(local_3c * 4 + *(int *)(this + 0x158));
    sVar1 = *(short *)(pCVar21 + 0x2c);
    iVar6 = **(int **)(iVar5 + _DAT_00142c10);
    uVar8 = __divsi3((int)sVar1,iVar6);
    Cafe::staggeredToDiamondCoords
              ((int)(uVar8 & 0xffff | ((int)sVar1 - uVar8 * iVar6) * 0x10000) >> 0x10,
               (int)(short)uVar8);
    pCVar7 = *(CafeObject **)(pCVar21 + 0x88);
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      this[0x104] = (GameStateFriendCafe)0x0;
    }
    else if (pCVar21 == *(CharacterInstance **)(this + 0x15c)) {
      *(undefined4 *)(this + 0x15c) = 0;
      Cafe::select(*(Cafe **)(this + 0x34),(CafeObject *)0x0);
    }
    if ((this[0xc4] == (GameStateFriendCafe)0x0) ||
       ((iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar21 + 0x2c)), iVar6 != 0
        && (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0), iVar6 == 0))
       )) {
      this[0x105] = (GameStateFriendCafe)0x0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
    if (((((iVar6 == 0) &&
          (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar21 + 0x2c)),
          iVar6 != 0)) && (bVar2)) && (*(int *)(this + 0x128) != 0)) &&
       ((piVar23 = *(int **)(*(int *)(this + 0x128) + 0x88), piVar23 == (int *)0x0 ||
        (iVar6 = (**(code **)(*piVar23 + 0x14))(), iVar6 != 3)))) {
      CharacterInstance::clearTasks();
      *(CharacterInstance **)(*(int *)(this + 0x128) + 0x88) = pCVar21;
    }
    iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar21 + 0x2c));
    if (iVar6 != 0) {
      if (this[0x106] == (GameStateFriendCafe)0x0) {
        bVar4 = true;
      }
      this[0x106] = (GameStateFriendCafe)0x1;
      *(undefined1 *)(*(int *)(pCVar21 + 0x8c) + 0x44) = 4;
    }
    if ((pCVar7 != (CafeObject *)0x0) &&
       (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar7 + 0x2c)), iVar6 == 0))
    {
      *(undefined4 *)(pCVar21 + 0x88) = 0;
      CharacterInstance::stopTasks(pCVar21);
    }
    if (*(int *)(pCVar21 + 0x7c) == 0) {
      iVar18 = *(int *)(pCVar21 + 0x8c);
      iVar6 = __aeabi_fcmple(*(undefined4 *)(iVar18 + 0x40),0);
      if (iVar6 == 0) {
        if (this[0xc4] == (GameStateFriendCafe)0x0) {
          if (pCVar7 == (CafeObject *)0x0) {
            if (*(char *)(iVar18 + 0x44) == '\x04') {
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + _DAT_00142c24),' ',false);
              iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar21 + 0x2c));
              if (iVar6 != 0) {
                iVar5 = Cafe::createDistanceSortedObjectList
                                  (*(Cafe **)(this + 0x34),'\x03',(int)*(short *)(pCVar21 + 0x2c));
                *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
                bVar2 = false;
                do {
                  puVar15 = *(undefined4 **)(iVar5 + 0x10);
                  if (puVar15 == (undefined4 *)0x0) {
                    FUN_00143570();
                  }
                  piVar23 = (int *)*puVar15;
                  *(undefined4 *)(iVar5 + 0x10) = puVar15[2];
                  if (piVar23 == (int *)0x0) {
                    FUN_00143570();
                  }
                  if (bVar2) {
                    FUN_00143570();
                  }
                  iVar6 = __aeabi_fcmple(*(undefined4 *)(piVar23[0x23] + 0x40),0);
                  if (((iVar6 == 0) &&
                      (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)(short)piVar23[0xb]),
                      iVar6 != 0)) && (iVar6 = (**(code **)(*piVar23 + 0x20))(piVar23), iVar6 != 2))
                  {
                    bVar2 = true;
                    *(int **)(pCVar21 + 0x88) = piVar23;
                  }
                } while( true );
              }
              iVar18 = **(int **)(iVar5 + _DAT_00142c14);
              iVar6 = **(int **)(iVar5 + _DAT_00142c28);
              iVar20 = **(int **)(iVar5 + _DAT_00142c18);
              CharacterInstance::groan(pCVar21);
              lVar19 = Cafe::diamondToStaggeredCoords
                                 ((iVar20 + -1) * 0x10000 | iVar18 + iVar6 + 1U & 0xffff);
              iVar6 = Cafe::staggeredCoordsToIndex(lVar19);
              this_00 = (FollowTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_00,pCVar21,*(Cafe **)(this + 0x34),iVar6,'\0',
                                 false);
              goto LAB_00142be6;
            }
          }
          else {
            iVar6 = (**(code **)(*(int *)pCVar7 + 0x14))(pCVar7);
            if (iVar6 == 3) {
              iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0);
              if ((iVar6 == 0) &&
                 (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar7 + 0x2c)),
                 iVar6 != 0)) {
                FUN_0014355a();
              }
              *(undefined4 *)(pCVar21 + 0x88) = 0;
            }
            else {
              iVar6 = (**(code **)(*(int *)pCVar7 + 0x14))(pCVar7);
              if (iVar6 == 1) {
                iVar6 = CafeObject::isAdjacentTo
                                  ((CafeObject *)pCVar21,(int)*(short *)(pCVar7 + 0x2c));
                if (iVar6 == 0) {
                  this_00 = (FollowTask *)operator_new(0x50);
                  FollowTask::FollowTask(this_00,pCVar21,pCVar7,*(Cafe **)(this + 0x34),'\0',false);
                  goto LAB_00142be6;
                }
                this_01 = (StealFoodTask *)operator_new(0x48);
                StealFoodTask::StealFoodTask(this_01,pCVar21,*(Cafe **)(this + 0x34));
                CharacterInstance::addTask(pCVar21,(Task *)this_01);
                Task::addFinishedListener
                          ((Task *)this_01,*(_func_void_void_ptr_Task_ptr **)(iVar5 + _DAT_00142c20)
                           ,this);
              }
            }
          }
        }
        else {
          lVar19 = Cafe::diamondToStaggeredCoords
                             ((**(int **)(iVar5 + _DAT_00142c18) + 5) * 0x10000 |
                              **(int **)(iVar5 + _DAT_00142c14) + 2U & 0xffff);
          iVar6 = Cafe::staggeredCoordsToIndex(lVar19);
          this_00 = (FollowTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this_00,pCVar21,*(Cafe **)(this + 0x34),iVar6,'\0',false);
LAB_00142be6:
          CharacterInstance::addTask(pCVar21,(Task *)this_00);
        }
      }
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      checkOverlap(this,pCVar21);
    }
    (**(code **)(*(int *)pCVar21 + 0x1c))(pCVar21,param_1);
    fVar25 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x34) + 0x20),
                               (CafeObject *)pCVar21);
  }
  if (this[0x38] != (GameStateFriendCafe)0x3) {
    if (this[0x104] == (GameStateFriendCafe)0x0) {
      if (this[0x105] != (GameStateFriendCafe)0x0) {
        if (bVar3) {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,2,fVar25,false);
          this[0xd8] = (GameStateFriendCafe)0x1;
        }
        else {
          ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,1,fVar25,false);
        }
        this[0x38] = (GameStateFriendCafe)0x3;
        initRaidRewards(this);
      }
    }
    else {
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,6,fVar25,false);
      this[0x38] = (GameStateFriendCafe)0x3;
      initRaidRewards(this);
      *(undefined4 *)(this + 0xe0) = 0;
    }
  }
  iVar6 = *(int *)(this + 0x128);
  if (iVar6 == 0) goto LAB_00142e42;
  iVar18 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar6 + 0x8c) + 0x40),0);
  if (iVar18 == 0) {
    pCVar21 = *(CharacterInstance **)(iVar6 + 0x88);
    if (*(int *)(iVar6 + 0x7c) == 0) {
      if ((pCVar21 != (CharacterInstance *)0x0) &&
         (iVar6 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21), iVar6 == 3)) {
        iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
        if ((iVar6 != 0) ||
           (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar21 + 0x2c)),
           iVar6 == 0)) goto LAB_00142df0;
        pAVar11 = (AttackTask *)operator_new(0x40);
        pCVar24 = *(CharacterInstance **)(this + 0x128);
        AttackTask::AttackTask(pAVar11,pCVar24,pCVar21,*(Cafe **)(this + 0x34));
        CharacterInstance::addTask(pCVar24,(Task *)pAVar11);
      }
    }
    else if (((pCVar21 != (CharacterInstance *)0x0) &&
             (iVar6 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21), iVar6 == 3)) &&
            ((iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0), iVar6 != 0
             || (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar21 + 0x2c)),
                iVar6 == 0)))) {
LAB_00142df0:
      *(undefined4 *)(*(int *)(this + 0x128) + 0x88) = 0;
      CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x128));
    }
  }
  else {
    *(undefined1 *)(iVar6 + 0x84) = 0;
  }
  pCVar21 = *(CharacterInstance **)(this + 0x128);
  iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
  if (iVar6 == 0) {
    checkOverlap(this,pCVar21);
  }
  (**(code **)(**(int **)(this + 0x128) + 0x1c))(*(int **)(this + 0x128),param_1);
  CapcomOrderableList<CafeObject*>::sort
            ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x34) + 0x20),
             *(CafeObject **)(this + 0x128));
LAB_00142e42:
  if (this[0x106] == (GameStateFriendCafe)0x0) {
    if ((*(int *)(*(int *)(this + 0x34) + 0xc0) != -1) ||
       (this_02 = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(this + 0x34) + 0xa8) != -1)) {
      this_02 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this_02 + 4) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_02 + 8) = this_02;
      *(undefined4 *)(this_02 + 0x10) = 0;
      *(undefined4 *)(this_02 + 0xc) = 0;
      for (iVar6 = 0; iVar6 < *(int *)(this + 0x130) + 1; iVar6 = iVar6 + 1) {
        CapcomLinkedList<CharacterInstance*>::add
                  (this_02,*(CharacterInstance **)(iVar6 * 4 + *(int *)(this + 0x134)));
      }
    }
    if (((this_02 != (CapcomLinkedList<CharacterInstance*> *)0x0) &&
        (*(CharacterInstance **)(this + 0x128) != (CharacterInstance *)0x0)) &&
       (*(int *)(this_02 + 0x10) == 0)) {
      CapcomLinkedList<CharacterInstance*>::add(this_02,*(CharacterInstance **)(this + 0x128));
      CharacterInstance::stopTasks(*(CharacterInstance **)(this + 0x128));
      *(undefined1 *)(*(int *)(*(int *)(this + 0x128) + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(this + 0x34) + 0xc0) != -1) {
      pFVar16 = (Furniture *)**(undefined4 **)(*(int *)(this + 0x34) + 0xc4);
      do {
        if (*(int *)(this_02 + 0x10) == 0) goto LAB_00142f1c;
        iVar6 = CapcomMath::random(*(int *)(this_02 + 0x10));
        pCVar21 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_02,iVar6);
      } while ((*(char *)(*(int *)(pCVar21 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar21 + 0x7c) != 0));
      this_03 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_03,pCVar21,*(Cafe **)(this + 0x34),pFVar16);
      CharacterInstance::addTask(pCVar21,(Task *)this_03);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(this + 0x34) + 0xa8) != -1) &&
       (iVar6 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x34)), iVar6 != 0)) {
      pCVar21 = (CharacterInstance *)**(undefined4 **)(*(int *)(this + 0x34) + 0xac);
      do {
        if (*(int *)(this_02 + 0x10) == 0) goto LAB_00142f80;
        iVar6 = CapcomMath::random(*(int *)(this_02 + 0x10));
        pCVar24 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_02,iVar6);
      } while ((*(char *)(*(int *)(pCVar24 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar24 + 0x7c) != 0));
      this_04 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_04,pCVar24,*(Cafe **)(this + 0x34),pCVar21);
      CharacterInstance::addTask(pCVar24,(Task *)this_04);
    }
LAB_00142f80:
    if (this_02 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_02 + 0x10) != 0) {
        while (pvVar9 = *(void **)(this_02 + 4), pvVar9 != (void *)0x0) {
          uVar14 = *(undefined4 *)((int)pvVar9 + 4);
          operator_delete(pvVar9);
          *(undefined4 *)(this_02 + 4) = uVar14;
        }
        *(undefined4 *)(this_02 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_02 + 8) = this_02;
        *(undefined4 *)(this_02 + 0xc) = 0;
      }
      operator_delete(this_02);
    }
  }
  for (local_38 = 0; local_38 < *(int *)(this + 0x130) + 1; local_38 = local_38 + 1) {
    pCVar21 = *(CharacterInstance **)(local_38 * 4 + *(int *)(this + 0x134));
    if (bVar4) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar21 + 0x88) = 0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      pCVar24 = *(CharacterInstance **)(pCVar21 + 0x88);
      if (*(int *)(pCVar21 + 0x7c) == 0) {
        if (pCVar24 == (CharacterInstance *)0x0) {
          local_3c = 0;
          if (this[0x106] != (GameStateFriendCafe)0x0) {
            for (; local_3c < *(int *)(this + 0x154) + 1; local_3c = local_3c + 1) {
              iVar18 = *(int *)(local_3c * 4 + *(int *)(this + 0x158));
              iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar18 + 0x8c) + 0x40),0);
              if ((iVar6 == 0) &&
                 (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(iVar18 + 0x2c)),
                 iVar6 != 0)) {
                *(int *)(pCVar21 + 0x88) = iVar18;
                break;
              }
            }
          }
        }
        else {
          iVar6 = (**(code **)(*(int *)pCVar24 + 0x14))(pCVar24);
          if (iVar6 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar21,0);
            iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar24 + 0x8c) + 0x40),0);
            if ((iVar6 == 0) &&
               (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar24 + 0x2c)),
               iVar6 != 0)) {
              pAVar11 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar11,pCVar21,pCVar24,*(Cafe **)(this + 0x34));
            }
            else {
              *(undefined4 *)(pCVar21 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar21);
              piVar22 = *(int **)(iVar5 + DAT_001433f4);
              piVar23 = *(int **)(iVar5 + DAT_001433f8);
              do {
                pCVar12 = *(Cafe **)(this + 0x34);
                iVar6 = CapcomMath::random(*piVar22 * *piVar23);
                iVar18 = Cafe::isInside(pCVar12,iVar6);
              } while (iVar18 == 0);
              pAVar11 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar11,pCVar21,*(Cafe **)(this + 0x34),iVar6,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar21,(Task *)pAVar11);
          }
        }
      }
      else if (((pCVar24 != (CharacterInstance *)0x0) &&
               (iVar6 = (**(code **)(*(int *)pCVar24 + 0x14))(pCVar24), iVar6 == 3)) &&
              ((iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar24 + 0x8c) + 0x40),0),
               iVar6 != 0 ||
               (iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar24 + 0x2c)),
               iVar6 == 0)))) {
        *(undefined4 *)(pCVar21 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar21);
      }
    }
    else {
      pCVar21[0x84] = (CharacterInstance)0x0;
    }
    iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
    if (iVar6 == 0) {
      checkOverlap(this,pCVar21);
    }
    (**(code **)(*(int *)pCVar21 + 0x1c))(pCVar21,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x34) + 0x20),
               (CafeObject *)pCVar21);
  }
  local_38 = 0;
  do {
    if (*(int *)(this + 0x13c) + 1 <= local_38) {
      for (iVar5 = 0; iVar5 < *(int *)(this + 0x148) + 1; iVar5 = iVar5 + 1) {
        piVar23 = *(int **)(iVar5 * 4 + *(int *)(this + 0x14c));
        (**(code **)(*piVar23 + 0x1c))(piVar23,param_1);
      }
      if ((this[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (this[0x106] != (GameStateFriendCafe)0x0)) {
        this[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar6 = 0;
        local_34 = 0;
        for (iVar5 = 0; iVar5 < *(int *)(this + 0x13c) + 1; iVar5 = iVar5 + 1) {
          iVar20 = *(int *)(iVar5 * 4 + *(int *)(this + 0x140));
          iVar18 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(iVar20 + 0x2c));
          if (iVar18 != 0) {
            if (*(char *)(**(int **)(iVar20 + 0x8c) + DAT_001435d0) == '\0') {
              iVar6 = iVar6 + 1;
            }
            else {
              local_34 = local_34 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar6,local_34);
      }
      return;
    }
    pCVar7 = *(CafeObject **)(local_38 * 4 + *(int *)(this + 0x140));
    (**(code **)(*(int *)pCVar7 + 0x1c))(pCVar7,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x34) + 0x20),pCVar7);
    if ((this[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(pCVar7 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)pCVar7);
    }
    if ((*(int *)(pCVar7 + 0x7c) == 0) &&
       (iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0), iVar6 == 0)) {
      piVar23 = *(int **)(pCVar7 + 0x88);
      if (piVar23 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar23 + 0x14))(piVar23);
        if (iVar6 == 3) {
          iVar6 = CafeObject::isAdjacentTo(pCVar7,(int)(short)piVar23[0xb]);
          if (((iVar6 == 0) ||
              (iVar6 = __aeabi_fcmple(*(undefined4 *)(piVar23[0x23] + 0x40),0), iVar6 != 0)) ||
             ((CafeObject *)piVar23[0x22] != pCVar7)) {
            pCVar17 = pCVar7 + 0x88;
            uVar14 = 0;
LAB_001433be:
            *(undefined4 *)pCVar17 = uVar14;
          }
        }
        else {
          iVar6 = CafeObject::isAdjacentTo(pCVar7,(int)(short)piVar23[0xb]);
          if (iVar6 == 0) {
            *(undefined4 *)(pCVar7 + 0x88) = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar6 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar7 + 0x2c));
      if (iVar6 != 0) {
        if (this[0x106] == (GameStateFriendCafe)0x0) {
          iVar6 = CapcomMath::random(2);
          if (iVar6 == 0) {
            sVar1 = *(short *)(*(int *)(this + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(this + 0x34) + 0x98);
          }
          pMVar10 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar7,*(Cafe **)(this + 0x34),(int)sVar1,
                             '\0',false);
        }
        else {
          iVar6 = *(int *)(pCVar7 + 0x98) + 1;
          *(int *)(pCVar7 + 0x98) = iVar6;
          if (iVar6 < **(int **)(iVar5 + DAT_001433fc)) {
            piVar22 = *(int **)(iVar5 + DAT_001433f4);
            piVar23 = *(int **)(iVar5 + DAT_001433f8);
            do {
              pCVar12 = *(Cafe **)(this + 0x34);
              local_3c = CapcomMath::random(*piVar22 * *piVar23);
              iVar6 = Cafe::isInside(pCVar12,local_3c);
            } while (iVar6 == 0);
          }
          else {
            lVar19 = Cafe::diamondToStaggeredCoords
                               (CONCAT22(**(undefined2 **)(iVar5 + DAT_00143400),
                                         **(undefined2 **)(iVar5 + DAT_00143404)));
            local_3c = Cafe::staggeredCoordsToIndex(lVar19);
          }
          if (this[0x106] == (GameStateFriendCafe)0x0) {
            pMVar10 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar7,*(Cafe **)(this + 0x34),local_3c,
                               '\0',false);
          }
          else {
            pMVar10 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar7,*(Cafe **)(this + 0x34),local_3c,
                               '\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)pCVar7,(Task *)pMVar10);
        goto LAB_00143410;
      }
      pCVar12 = *(Cafe **)(this + 0x34);
      if ((*(short *)(pCVar12 + 0x98) != *(short *)(pCVar7 + 0x2c)) &&
         (*(short *)(pCVar12 + 0x9a) != *(short *)(pCVar7 + 0x2c))) {
        if (this[0x106] != (GameStateFriendCafe)0x0) {
          iVar6 = CapcomMath::random(2);
          if (iVar6 == 0) {
            sVar1 = *(short *)(*(int *)(this + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(this + 0x34) + 0x98);
          }
          local_3c = (int)sVar1;
          pMVar10 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar7,*(Cafe **)(this + 0x34),local_3c,
                             '\t',false);
          CharacterInstance::addTask((CharacterInstance *)pCVar7,(Task *)pMVar10);
          pCVar17 = pCVar7 + 0x98;
          uVar14 = 1;
          goto LAB_001433be;
        }
        iVar6 = CapcomMath::random(2);
        if (iVar6 == 0) {
          sVar1 = *(short *)(*(int *)(this + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(this + 0x34) + 0x98);
        }
        pMVar10 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar10,(CharacterInstance *)pCVar7,*(Cafe **)(this + 0x34),(int)sVar1,
                           '\0',false);
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar12,pCVar7);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(this + 0x138),local_38);
      this_06 = *(Character **)(pCVar7 + 0x8c);
      if (this_06 != (Character *)0x0) {
        Character::~Character(this_06);
        operator_delete(this_06);
      }
      (**(code **)(*(int *)pCVar7 + 4))(pCVar7);
      local_38 = local_38 + -1;
    }
    else {
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0);
      if (iVar6 != 0) {
        pCVar7[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar6 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar7 + 0x8c) + 0x40),0);
      if (iVar6 == 0) {
        checkOverlap(this,(CharacterInstance *)pCVar7);
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}


