/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001869c6 FUN_001869c6 */

void FUN_001869c6(float param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  MoveTask *pMVar6;
  int iVar7;
  CookTask *this;
  AttackTask *this_00;
  CapcomOrderableListNode *pCVar8;
  Cafe *pCVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  CafeObject *pCVar13;
  short *psVar14;
  Character *this_01;
  GameStateRaid *unaff_r5;
  CafeObject *this_02;
  ConfirmDialog *pCVar15;
  CafeObject *unaff_r6;
  CharacterInstance *pCVar16;
  CapcomOrderableListNode *pCVar17;
  int *piVar18;
  float fVar19;
  float extraout_s0;
  int iStack0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,6,param_1,false);
  unaff_r5[0x15c] = (GameStateRaid)0x1;
  GameStateRaid::layoutState(unaff_r5);
  *(undefined4 *)(unaff_r5 + 0x11c) = 0;
  *(undefined4 *)(unaff_r5 + 0x118) = 0;
  FUN_00185f5c();
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + 0x48) == '\0') {
    FUN_00185f40();
  }
  FUN_00185e9e();
  if (*(char *)(*(int *)(unaff_r5 + 0x160) + 0x2e) != '\0') {
    FUN_0018601a();
  }
  FUN_00186038();
  if (unaff_r5[0x12] == (GameStateRaid)0x0) {
    FUN_00185fc6();
  }
  FUN_00185fde();
  this = (CookTask *)operator_new(0x34);
  CookTask::CookTask(this,*(CharacterInstance **)(unaff_r5 + 0xf8),*(Stove **)(unaff_r5 + 0x160),
                     *(Cafe **)(unaff_r5 + 0x78));
  FUN_00186044();
  do {
    if (*(int *)((CapcomOrderableList<CafeObject*> *)this + 0x14) != 0) {
      pCVar8 = *(CapcomOrderableListNode **)((CapcomOrderableList<CafeObject*> *)this + 8);
      while (pCVar8 != (CapcomOrderableListNode *)0x0) {
        pCVar17 = *(CapcomOrderableListNode **)(pCVar8 + 8);
        CapcomOrderableList<CafeObject*>::deleteNode
                  ((CapcomOrderableList<CafeObject*> *)this,pCVar8);
        pCVar8 = pCVar17;
      }
      *(undefined4 *)((CapcomOrderableList<CafeObject*> *)this + 0x14) = 0;
      *(CookTask **)((CapcomOrderableList<CafeObject*> *)this + 0xc) = this;
      *(undefined4 *)((CapcomOrderableList<CafeObject*> *)this + 0x10) =
           *(undefined4 *)((CapcomOrderableList<CafeObject*> *)this + 8);
    }
    operator_delete(this);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(unaff_r6 + 0x8c) + 0x40),0);
            if (iVar4 == 0) {
              GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)unaff_r6);
            }
            (**(code **)(*(int *)unaff_r6 + 0x1c))(unaff_r6,in_stack_0000002c);
            fVar19 = (float)CapcomOrderableList<CafeObject*>::sort
                                      ((CapcomOrderableList<CafeObject*> *)
                                       (*(int *)(unaff_r5 + 0x78) + 0x20),unaff_r6);
            in_stack_00000020 = in_stack_00000020 + 1;
            if (*(int *)(in_stack_00000034 + 4) + 1 <= in_stack_00000020) {
              in_stack_00000020 = 0;
              goto LAB_00186738;
            }
            unaff_r6 = *(CafeObject **)(in_stack_00000020 * 4 + *(int *)(in_stack_00000034 + 8));
            if (in_stack_0000003c != 0) {
              CharacterInstance::clearTasks();
              *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
            }
            iVar4 = __aeabi_fcmple(*(undefined4 *)
                                    (*(int *)((CharacterInstance *)unaff_r6 + 0x8c) + 0x40),0);
            if (iVar4 == 0) break;
            ((CharacterInstance *)unaff_r6)[0x84] = (CharacterInstance)0x0;
          }
          pCVar16 = *(CharacterInstance **)((CharacterInstance *)unaff_r6 + 0x88);
          if (*(int *)((CharacterInstance *)unaff_r6 + 0x7c) == 0) break;
          if (((pCVar16 != (CharacterInstance *)0x0) &&
              (iVar4 = (**(code **)(*(int *)pCVar16 + 0x14))(pCVar16), iVar4 == 3)) &&
             ((iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0),
              iVar4 != 0 ||
              (iVar4 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar16 + 0x2c)),
              iVar4 == 0)))) {
            *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
            CharacterInstance::stopTasks((CharacterInstance *)unaff_r6);
          }
        }
        if (pCVar16 == (CharacterInstance *)0x0) break;
        iVar4 = (**(code **)(*(int *)pCVar16 + 0x14))(pCVar16);
        if (iVar4 == 3) {
          CharacterInstance::stopReplacementInAnimation((CharacterInstance *)unaff_r6,0);
          iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar16 + 0x8c) + 0x40),0);
          if ((iVar4 == 0) &&
             (iVar4 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar16 + 0x2c)),
             iVar4 != 0)) {
            this_00 = (AttackTask *)operator_new(0x40);
            AttackTask::AttackTask
                      (this_00,(CharacterInstance *)unaff_r6,pCVar16,*(Cafe **)(unaff_r5 + 0x78));
          }
          else {
            *(undefined4 *)((CharacterInstance *)unaff_r6 + 0x88) = 0;
            CharacterInstance::stopTasks((CharacterInstance *)unaff_r6);
            piVar12 = *(int **)(in_stack_00000024 + DAT_001866fc);
            piVar18 = *(int **)(in_stack_00000024 + DAT_00186700);
            do {
              pCVar9 = *(Cafe **)(unaff_r5 + 0x78);
              iVar4 = CapcomMath::random(*piVar12 * *piVar18);
              iVar3 = Cafe::isInside(pCVar9,iVar4);
            } while (iVar3 == 0);
            this_00 = (AttackTask *)operator_new(0x48);
            MoveTask::MoveTask((MoveTask *)this_00,(CharacterInstance *)unaff_r6,
                               *(Cafe **)(unaff_r5 + 0x78),iVar4,'\0',false);
          }
          CharacterInstance::addTask((CharacterInstance *)unaff_r6,(Task *)this_00);
        }
      }
    } while (unaff_r5[0x6c] == (GameStateRaid)0x0);
    this = (CookTask *)
           Cafe::createDistanceSortedObjectList
                     (*(Cafe **)(unaff_r5 + 0x78),'\x03',(int)*(short *)(in_stack_00000038 + 0x2c));
    *(undefined4 *)((CapcomOrderableList<CafeObject*> *)this + 0x10) =
         *(undefined4 *)((CapcomOrderableList<CafeObject*> *)this + 8);
    bVar2 = false;
    while (piVar12 = *(int **)((CapcomOrderableList<CafeObject*> *)this + 0x10),
          piVar12 != (int *)0x0) {
      iVar4 = *piVar12;
      *(int *)((CapcomOrderableList<CafeObject*> *)this + 0x10) = piVar12[2];
      if ((iVar4 == 0) || (bVar2)) break;
      if ((*(char *)(*(int *)(iVar4 + 0x8c) + 4) == '\x01') &&
         ((iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar4 + 0x8c) + 0x40),0), iVar3 == 0 &&
          (iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar4 + 0x2c)),
          iVar3 != 0)))) {
        *(int *)((CharacterInstance *)unaff_r6 + 0x88) = iVar4;
        bVar2 = true;
      }
    }
  } while( true );
LAB_00186738:
  if (*(int *)(unaff_r5 + 0xbc) + 1 <= in_stack_00000020) {
    for (iVar4 = 0; iVar4 < *(int *)(unaff_r5 + 0x100) + 1; iVar4 = iVar4 + 1) {
      piVar12 = *(int **)(iVar4 * 4 + *(int *)(unaff_r5 + 0x104));
      fVar19 = (float)(**(code **)(*piVar12 + 0x1c))(piVar12,in_stack_0000002c);
    }
    iVar4 = *(int *)(unaff_r5 + 0x158);
    *(int *)(unaff_r5 + 0x158) = iVar4 - in_stack_0000002c;
    if (iVar4 - in_stack_0000002c < 0) {
      fVar19 = (float)GameStateRaid::spawnCustomer(unaff_r5,false);
    }
    if (unaff_r5[DAT_00186a7c] == (GameStateRaid)0x0) {
      unaff_r5[DAT_00186a7c] = (GameStateRaid)0x1;
      if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
          (unaff_r5[0x14] == (GameStateRaid)0x0)) &&
         ((unaff_r5[0x16] == (GameStateRaid)0x0 && (unaff_r5[0x15] == (GameStateRaid)0x0)))) {
        iVar4 = 7;
      }
      else {
        iVar4 = 0x13;
      }
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,iVar4,fVar19,false);
    }
    if ((unaff_r5[0x15e] == (GameStateRaid)0x0) && (unaff_r5[0x6c] != (GameStateRaid)0x0)) {
      unaff_r5[0x15e] = (GameStateRaid)0x1;
      iVar3 = 0;
      in_stack_0000002c = 0;
      for (iVar4 = 0; iVar4 < *(int *)(unaff_r5 + 0xbc) + 1; iVar4 = iVar4 + 1) {
        iVar11 = *(int *)(iVar4 * 4 + *(int *)(unaff_r5 + 0xc0));
        iVar7 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar11 + 0x2c));
        if (iVar7 != 0) {
          if (*(char *)(**(int **)(iVar11 + 0x8c) + DAT_00186a80) == '\0') {
            iVar3 = iVar3 + 1;
          }
          else {
            in_stack_0000002c = in_stack_0000002c + 1;
          }
        }
      }
      CharacterInstance::groupScream(iVar3,in_stack_0000002c);
    }
    iVar4 = *(int *)(unaff_r5 + 0xc);
    if (*(char *)(iVar4 + DAT_00186a84) != '\0') {
      *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
    }
    if (*(char *)(iVar4 + DAT_00186a88) != '\0') {
      *(undefined1 *)(iVar4 + DAT_00186a88) = 0;
      iVar4 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00186a8c),',');
      if (iVar4 != 0) {
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
  this_02 = *(CafeObject **)(in_stack_00000020 * 4 + *(int *)(unaff_r5 + 0xc0));
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,in_stack_0000002c);
  CapcomOrderableList<CafeObject*>::sort
            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),this_02);
  if ((unaff_r5[0x6c] != (GameStateRaid)0x0) && (*(int *)(this_02 + 0x98) == 0)) {
    CharacterInstance::stopTasks((CharacterInstance *)this_02);
  }
  if ((*(int *)(this_02 + 0x7c) == 0) &&
     (iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_02 + 0x8c) + 0x40),0), iVar4 == 0)) {
    piVar12 = *(int **)(this_02 + 0x88);
    if (piVar12 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar12 + 0x14))(piVar12);
      if (iVar4 == 3) {
        iVar4 = CafeObject::isAdjacentTo(this_02,(int)(short)piVar12[0xb]);
        if (((iVar4 == 0) ||
            (iVar4 = __aeabi_fcmple(*(undefined4 *)(piVar12[0x23] + 0x40),0), iVar4 != 0)) ||
           ((CafeObject *)piVar12[0x22] != this_02)) {
          pCVar13 = this_02 + 0x88;
          uVar10 = 0;
LAB_001866c4:
          *(undefined4 *)pCVar13 = uVar10;
        }
      }
      else {
        iVar4 = CafeObject::isAdjacentTo(this_02,(int)(short)piVar12[0xb]);
        if (iVar4 == 0) {
          *(undefined4 *)(this_02 + 0x88) = 0;
        }
      }
      goto LAB_00186718;
    }
    iVar4 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(this_02 + 0x2c));
    if (iVar4 != 0) {
      if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
        iVar4 = CapcomMath::random(2);
        if (iVar4 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        pMVar6 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar6,(CharacterInstance *)this_02,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\0',false);
      }
      else {
        iVar4 = *(int *)(this_02 + 0x98) + 1;
        *(int *)(this_02 + 0x98) = iVar4;
        if (iVar4 < **(int **)(in_stack_00000024 + DAT_00186704)) {
          piVar18 = *(int **)(in_stack_00000024 + DAT_001866fc);
          piVar12 = *(int **)(in_stack_00000024 + DAT_00186700);
          do {
            pCVar9 = *(Cafe **)(unaff_r5 + 0x78);
            iStack0000001c = CapcomMath::random(*piVar18 * *piVar12);
            iVar4 = Cafe::isInside(pCVar9,iStack0000001c);
          } while (iVar4 == 0);
        }
        else {
          lVar5 = Cafe::diamondToStaggeredCoords
                            ((int)**(short **)(in_stack_00000024 + DAT_00186708),
                             (int)**(short **)(in_stack_00000024 + DAT_0018670c));
          iStack0000001c = Cafe::staggeredCoordsToIndex(lVar5);
        }
        if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
          pMVar6 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar6,(CharacterInstance *)this_02,*(Cafe **)(unaff_r5 + 0x78),
                             iStack0000001c,'\0',false);
        }
        else {
          pMVar6 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar6,(CharacterInstance *)this_02,*(Cafe **)(unaff_r5 + 0x78),
                             iStack0000001c,'\t',false);
        }
      }
LAB_00186622:
      CharacterInstance::addTask((CharacterInstance *)this_02,(Task *)pMVar6);
      goto LAB_00186718;
    }
    pCVar9 = *(Cafe **)(unaff_r5 + 0x78);
    if ((*(short *)(pCVar9 + 0x98) != *(short *)(this_02 + 0x2c)) &&
       (*(short *)(pCVar9 + 0x9a) != *(short *)(this_02 + 0x2c))) {
      if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
        iVar4 = CapcomMath::random(2);
        if (iVar4 == 0) {
          psVar14 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          psVar14 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        sVar1 = *psVar14;
        pMVar6 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar6,(CharacterInstance *)this_02,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\t',false);
        CharacterInstance::addTask((CharacterInstance *)this_02,(Task *)pMVar6);
        pCVar13 = this_02 + 0x98;
        uVar10 = 1;
        goto LAB_001866c4;
      }
      iVar4 = CapcomMath::random(2);
      if (iVar4 == 0) {
        sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
      }
      else {
        sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
      }
      pMVar6 = (MoveTask *)operator_new(0x48);
      MoveTask::MoveTask(pMVar6,(CharacterInstance *)this_02,*(Cafe **)(unaff_r5 + 0x78),(int)sVar1,
                         '\0',false);
      goto LAB_00186622;
    }
    Cafe::removeCafeObject(pCVar9,this_02);
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(unaff_r5 + 0xb8),in_stack_00000020);
    this_01 = *(Character **)(this_02 + 0x8c);
    if (this_01 != (Character *)0x0) {
      Character::~Character(this_01);
      operator_delete(this_01);
    }
    fVar19 = (float)(**(code **)(*(int *)this_02 + 4))(this_02);
    in_stack_00000020 = in_stack_00000020 + -1;
  }
  else {
    iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_02 + 0x8c) + 0x40),0);
    if (iVar4 != 0) {
      this_02[0x84] = (CafeObject)0x0;
    }
LAB_00186718:
    iVar4 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_02 + 0x8c) + 0x40),0);
    fVar19 = extraout_s0;
    if (iVar4 == 0) {
      fVar19 = (float)GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)this_02);
    }
  }
  in_stack_00000020 = in_stack_00000020 + 1;
  goto LAB_00186738;
}


