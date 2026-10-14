/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00185fc6 FUN_00185fc6 */

void FUN_00185fc6(void)

{
  short sVar1;
  bool bVar2;
  GuardTask *this;
  int iVar3;
  int *piVar4;
  CapcomLinkedList<CharacterInstance*> *this_00;
  undefined4 *puVar5;
  CleanupTask *this_01;
  ServeTask *this_02;
  void *pvVar6;
  CapcomOrderableList<CafeObject*> *this_03;
  int iVar7;
  long lVar8;
  MoveTask *pMVar9;
  int iVar10;
  AttackTask *this_04;
  CapcomOrderableListNode *pCVar11;
  Cafe *pCVar12;
  undefined4 uVar13;
  int iVar14;
  Furniture *pFVar15;
  CafeObject *pCVar16;
  short *psVar17;
  CharacterInstance *unaff_r4;
  CharacterInstance *pCVar18;
  Character *this_05;
  GameStateRaid *unaff_r5;
  int unaff_r6;
  CafeObject *this_06;
  ConfirmDialog *pCVar19;
  GameStateRaid *pGVar20;
  CharacterInstance *pCVar21;
  CapcomOrderableListNode *pCVar22;
  int *piVar23;
  float fVar24;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  int iStack0000001c;
  CharacterInstance *pCStack00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  if ((((unaff_r5[0x13] == (GameStateRaid)0x0) && (unaff_r5[0x14] == (GameStateRaid)0x0)) &&
      (unaff_r5[0x15] == (GameStateRaid)0x0)) && (unaff_r5[0x16] == (GameStateRaid)0x0)) {
    this = (GuardTask *)operator_new(0x40);
    pCStack00000020 = *(CharacterInstance **)(unaff_r5 + 0xf8);
    AttackTask::AttackTask((AttackTask *)this,pCStack00000020,unaff_r4,*(Cafe **)(unaff_r5 + 0x78));
  }
  else {
    this = (GuardTask *)operator_new(0x40);
    pCStack00000020 = *(CharacterInstance **)(unaff_r5 + 0xf8);
    GuardTask::GuardTask(this,pCStack00000020,unaff_r4,*(Cafe **)(unaff_r5 + 0x78));
  }
  CharacterInstance::addTask(pCStack00000020,(Task *)this);
  pCVar18 = *(CharacterInstance **)(unaff_r5 + 0xf8);
  iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
  if (iVar3 == 0) {
    GameStateRaid::checkOverlap(unaff_r5,pCVar18);
  }
  piVar4 = *(int **)(unaff_r5 + 0xf8);
  (**(code **)(*piVar4 + 0x1c))(piVar4,in_stack_0000002c);
  fVar24 = (float)CapcomOrderableList<CafeObject*>::sort
                            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),
                             *(CafeObject **)(unaff_r5 + 0xf8));
  if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
    if ((*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) ||
       (this_00 = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(unaff_r5 + 0x78) + 0xa8) != -1)) {
      this_00 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this_00 + 4) = 0;
      pCStack00000020 = (CharacterInstance *)0x0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_00 + 8) = this_00;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      fVar24 = extraout_s0;
      while ((int)pCStack00000020 < *(int *)(unaff_r5 + 200) + 1) {
        uVar13 = *(undefined4 *)((int)pCStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
        puVar5 = (undefined4 *)operator_new(8);
        puVar5[1] = 0;
        *(undefined4 **)(*(int *)(this_00 + 8) + 4) = puVar5;
        *(undefined4 **)(this_00 + 8) = puVar5;
        *puVar5 = uVar13;
        *(undefined4 *)(*(int *)(this_00 + 8) + 4) = 0;
        pCStack00000020 = (CharacterInstance *)((int)pCStack00000020 + 1);
        *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
        fVar24 = extraout_s0_00;
      }
    }
    pGVar20 = unaff_r5 + 0xf8;
    iVar3 = *(int *)pGVar20;
    if (((this_00 != (CapcomLinkedList<CharacterInstance*> *)0x0) && (iVar3 != 0)) &&
       (*(int *)(this_00 + 0x10) == 0)) {
      piVar4 = (int *)operator_new(8);
      piVar4[1] = 0;
      *(int **)(*(int *)(this_00 + 8) + 4) = piVar4;
      *(int **)(this_00 + 8) = piVar4;
      *piVar4 = iVar3;
      *(undefined4 *)(*(int *)(this_00 + 8) + 4) = 0;
      *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
      fVar24 = (float)CharacterInstance::stopTasks(*(CharacterInstance **)pGVar20);
      *(undefined1 *)(*(int *)(*(int *)pGVar20 + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) {
      pFVar15 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xc4);
      do {
        if (*(int *)(this_00 + 0x10) == 0) goto LAB_001861e8;
        iVar3 = CapcomMath::random(*(int *)(this_00 + 0x10));
        pCVar18 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_00,iVar3);
        fVar24 = extraout_s0_01;
      } while ((*(char *)(*(int *)(pCVar18 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar18 + 0x7c) != 0));
      this_01 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_01,pCVar18,*(Cafe **)(unaff_r5 + 0x78),pFVar15);
      fVar24 = (float)CharacterInstance::addTask(pCVar18,(Task *)this_01);
    }
LAB_001861e8:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x78) + 0xa8) != -1) &&
       (iVar3 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x78)), fVar24 = extraout_s0_02,
       iVar3 != 0)) {
      pCVar18 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xac);
      do {
        if (*(int *)(this_00 + 0x10) == 0) goto LAB_0018624c;
        iVar3 = CapcomMath::random(*(int *)(this_00 + 0x10));
        pCVar21 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_00,iVar3);
        fVar24 = extraout_s0_03;
      } while ((*(char *)(*(int *)(pCVar21 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar21 + 0x7c) != 0));
      this_02 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_02,pCVar21,*(Cafe **)(unaff_r5 + 0x78),pCVar18);
      fVar24 = (float)CharacterInstance::addTask(pCVar21,(Task *)this_02);
    }
LAB_0018624c:
    if (this_00 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_00 + 0x10) != 0) {
        while (pvVar6 = *(void **)(this_00 + 4), pvVar6 != (void *)0x0) {
          uVar13 = *(undefined4 *)((int)pvVar6 + 4);
          operator_delete(pvVar6);
          *(undefined4 *)(this_00 + 4) = uVar13;
        }
        *(undefined4 *)(this_00 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_00 + 8) = this_00;
        *(undefined4 *)(this_00 + 0xc) = 0;
      }
      operator_delete(this_00);
      fVar24 = extraout_s0_04;
    }
  }
  for (pCStack00000020 = (CharacterInstance *)0x0;
      (int)pCStack00000020 < *(int *)(unaff_r5 + 200) + 1;
      pCStack00000020 = (CharacterInstance *)((int)pCStack00000020 + 1)) {
    pCVar18 = *(CharacterInstance **)((int)pCStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
    if (in_stack_0000003c != 0) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar18 + 0x88) = 0;
    }
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar3 == 0) {
      pCVar21 = *(CharacterInstance **)(pCVar18 + 0x88);
      if (*(int *)(pCVar18 + 0x7c) == 0) {
        if (pCVar21 == (CharacterInstance *)0x0) {
          if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
            this_03 = (CapcomOrderableList<CafeObject*> *)
                      Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(unaff_r5 + 0x78),'\x03',(int)*(short *)(unaff_r6 + 0x2c)
                                );
            *(undefined4 *)(this_03 + 0x10) = *(undefined4 *)(this_03 + 8);
            bVar2 = false;
            while (piVar4 = *(int **)(this_03 + 0x10), piVar4 != (int *)0x0) {
              iVar3 = *piVar4;
              *(int *)(this_03 + 0x10) = piVar4[2];
              if ((iVar3 == 0) || (bVar2)) break;
              if ((*(char *)(*(int *)(iVar3 + 0x8c) + 4) == '\x01') &&
                 ((iVar7 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar3 + 0x8c) + 0x40),0),
                  iVar7 == 0 &&
                  (iVar7 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar3 + 0x2c))
                  , iVar7 != 0)))) {
                *(int *)(pCVar18 + 0x88) = iVar3;
                bVar2 = true;
              }
            }
            if (*(int *)(this_03 + 0x14) != 0) {
              pCVar11 = *(CapcomOrderableListNode **)(this_03 + 8);
              while (pCVar11 != (CapcomOrderableListNode *)0x0) {
                pCVar22 = *(CapcomOrderableListNode **)(pCVar11 + 8);
                CapcomOrderableList<CafeObject*>::deleteNode(this_03,pCVar11);
                pCVar11 = pCVar22;
              }
              *(undefined4 *)(this_03 + 0x14) = 0;
              *(CapcomOrderableList<CafeObject*> **)(this_03 + 0xc) = this_03;
              *(undefined4 *)(this_03 + 0x10) = *(undefined4 *)(this_03 + 8);
            }
            operator_delete(this_03);
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
          if (iVar3 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar18,0);
            iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
            if ((iVar3 == 0) &&
               (iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c)),
               iVar3 != 0)) {
              this_04 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_04,pCVar18,pCVar21,*(Cafe **)(unaff_r5 + 0x78));
            }
            else {
              *(undefined4 *)(pCVar18 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar18);
              piVar4 = *(int **)(in_stack_00000024 + DAT_001866fc);
              piVar23 = *(int **)(in_stack_00000024 + DAT_00186700);
              do {
                pCVar12 = *(Cafe **)(unaff_r5 + 0x78);
                iVar3 = CapcomMath::random(*piVar4 * *piVar23);
                iVar7 = Cafe::isInside(pCVar12,iVar3);
              } while (iVar7 == 0);
              this_04 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_04,pCVar18,*(Cafe **)(unaff_r5 + 0x78),iVar3,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar18,(Task *)this_04);
          }
        }
      }
      else if (((pCVar21 != (CharacterInstance *)0x0) &&
               (iVar3 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21), iVar3 == 3)) &&
              ((iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0),
               iVar3 != 0 ||
               (iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c)),
               iVar3 == 0)))) {
        *(undefined4 *)(pCVar18 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar18);
      }
    }
    else {
      pCVar18[0x84] = (CharacterInstance)0x0;
    }
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar18 + 0x8c) + 0x40),0);
    if (iVar3 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,pCVar18);
    }
    (**(code **)(*(int *)pCVar18 + 0x1c))(pCVar18,in_stack_0000002c);
    fVar24 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x78) + 0x20),(CafeObject *)pCVar18);
  }
  pCStack00000020 = (CharacterInstance *)0x0;
  do {
    if (*(int *)(unaff_r5 + 0xbc) + 1 <= (int)pCStack00000020) {
      for (iVar3 = 0; iVar3 < *(int *)(unaff_r5 + 0x100) + 1; iVar3 = iVar3 + 1) {
        piVar4 = *(int **)(iVar3 * 4 + *(int *)(unaff_r5 + 0x104));
        fVar24 = (float)(**(code **)(*piVar4 + 0x1c))(piVar4,in_stack_0000002c);
      }
      iVar3 = *(int *)(unaff_r5 + 0x158);
      *(int *)(unaff_r5 + 0x158) = iVar3 - in_stack_0000002c;
      if (iVar3 - in_stack_0000002c < 0) {
        fVar24 = (float)GameStateRaid::spawnCustomer(unaff_r5,false);
      }
      if (unaff_r5[DAT_00186a7c] == (GameStateRaid)0x0) {
        unaff_r5[DAT_00186a7c] = (GameStateRaid)0x1;
        if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
            (unaff_r5[0x14] == (GameStateRaid)0x0)) &&
           ((unaff_r5[0x16] == (GameStateRaid)0x0 && (unaff_r5[0x15] == (GameStateRaid)0x0)))) {
          iVar3 = 7;
        }
        else {
          iVar3 = 0x13;
        }
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,iVar3,fVar24,false);
      }
      if ((unaff_r5[0x15e] == (GameStateRaid)0x0) && (unaff_r5[0x6c] != (GameStateRaid)0x0)) {
        unaff_r5[0x15e] = (GameStateRaid)0x1;
        iVar7 = 0;
        in_stack_0000002c = 0;
        for (iVar3 = 0; iVar3 < *(int *)(unaff_r5 + 0xbc) + 1; iVar3 = iVar3 + 1) {
          iVar14 = *(int *)(iVar3 * 4 + *(int *)(unaff_r5 + 0xc0));
          iVar10 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar14 + 0x2c));
          if (iVar10 != 0) {
            if (*(char *)(**(int **)(iVar14 + 0x8c) + DAT_00186a80) == '\0') {
              iVar7 = iVar7 + 1;
            }
            else {
              in_stack_0000002c = in_stack_0000002c + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar7,in_stack_0000002c);
      }
      iVar3 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(iVar3 + DAT_00186a84) != '\0') {
        *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
      }
      if (*(char *)(iVar3 + DAT_00186a88) != '\0') {
        *(undefined1 *)(iVar3 + DAT_00186a88) = 0;
        iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00186a8c),',');
        if (iVar3 != 0) {
          pCVar19 = *(ConfirmDialog **)(unaff_r5 + 0x164);
          Vector<String>::elementAt((int)&stack0x000000b8);
          Vector<String>::elementAt((int)&stack0x000000c0);
          Vector<String>::elementAt((int)&stack0x000000c8);
          ConfirmDialog::show(pCVar19,&stack0x000000b8,&stack0x000000c0,&stack0x000000c8);
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
    this_06 = *(CafeObject **)((int)pCStack00000020 * 4 + *(int *)(unaff_r5 + 0xc0));
    (**(code **)(*(int *)this_06 + 0x1c))(this_06,in_stack_0000002c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),this_06);
    if ((unaff_r5[0x6c] != (GameStateRaid)0x0) && (*(int *)(this_06 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)this_06);
    }
    if ((*(int *)(this_06 + 0x7c) == 0) &&
       (iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_06 + 0x8c) + 0x40),0), iVar3 == 0)) {
      piVar4 = *(int **)(this_06 + 0x88);
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
        if (iVar3 == 3) {
          iVar3 = CafeObject::isAdjacentTo(this_06,(int)(short)piVar4[0xb]);
          if (((iVar3 == 0) ||
              (iVar3 = __aeabi_fcmple(*(undefined4 *)(piVar4[0x23] + 0x40),0), iVar3 != 0)) ||
             ((CafeObject *)piVar4[0x22] != this_06)) {
            pCVar16 = this_06 + 0x88;
            uVar13 = 0;
LAB_001866c4:
            *(undefined4 *)pCVar16 = uVar13;
          }
        }
        else {
          iVar3 = CafeObject::isAdjacentTo(this_06,(int)(short)piVar4[0xb]);
          if (iVar3 == 0) {
            *(undefined4 *)(this_06 + 0x88) = 0;
          }
        }
        goto LAB_00186718;
      }
      iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(this_06 + 0x2c));
      if (iVar3 != 0) {
        if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
          iVar3 = CapcomMath::random(2);
          if (iVar3 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)this_06,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar3 = *(int *)(this_06 + 0x98) + 1;
          *(int *)(this_06 + 0x98) = iVar3;
          if (iVar3 < **(int **)(in_stack_00000024 + DAT_00186704)) {
            piVar23 = *(int **)(in_stack_00000024 + DAT_001866fc);
            piVar4 = *(int **)(in_stack_00000024 + DAT_00186700);
            do {
              pCVar12 = *(Cafe **)(unaff_r5 + 0x78);
              iStack0000001c = CapcomMath::random(*piVar23 * *piVar4);
              iVar3 = Cafe::isInside(pCVar12,iStack0000001c);
            } while (iVar3 == 0);
          }
          else {
            lVar8 = Cafe::diamondToStaggeredCoords
                              ((int)**(short **)(in_stack_00000024 + DAT_00186708),
                               (int)**(short **)(in_stack_00000024 + DAT_0018670c));
            iStack0000001c = Cafe::staggeredCoordsToIndex(lVar8);
          }
          if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)this_06,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\0',false);
          }
          else {
            pMVar9 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar9,(CharacterInstance *)this_06,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\t',false);
          }
        }
LAB_00186622:
        CharacterInstance::addTask((CharacterInstance *)this_06,(Task *)pMVar9);
        goto LAB_00186718;
      }
      pCVar12 = *(Cafe **)(unaff_r5 + 0x78);
      if ((*(short *)(pCVar12 + 0x98) != *(short *)(this_06 + 0x2c)) &&
         (*(short *)(pCVar12 + 0x9a) != *(short *)(this_06 + 0x2c))) {
        if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
          iVar3 = CapcomMath::random(2);
          if (iVar3 == 0) {
            psVar17 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            psVar17 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          sVar1 = *psVar17;
          pMVar9 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar9,(CharacterInstance *)this_06,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)this_06,(Task *)pMVar9);
          pCVar16 = this_06 + 0x98;
          uVar13 = 1;
          goto LAB_001866c4;
        }
        iVar3 = CapcomMath::random(2);
        if (iVar3 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        pMVar9 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar9,(CharacterInstance *)this_06,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\0',false);
        goto LAB_00186622;
      }
      Cafe::removeCafeObject(pCVar12,this_06);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0xb8),(int)pCStack00000020);
      this_05 = *(Character **)(this_06 + 0x8c);
      if (this_05 != (Character *)0x0) {
        Character::~Character(this_05);
        operator_delete(this_05);
      }
      fVar24 = (float)(**(code **)(*(int *)this_06 + 4))(this_06);
      pCStack00000020 = (CharacterInstance *)((int)pCStack00000020 + -1);
    }
    else {
      iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_06 + 0x8c) + 0x40),0);
      if (iVar3 != 0) {
        this_06[0x84] = (CafeObject)0x0;
      }
LAB_00186718:
      iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_06 + 0x8c) + 0x40),0);
      fVar24 = extraout_s0_05;
      if (iVar3 == 0) {
        fVar24 = (float)GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)this_06);
      }
    }
    pCStack00000020 = (CharacterInstance *)((int)pCStack00000020 + 1);
  } while( true );
}


