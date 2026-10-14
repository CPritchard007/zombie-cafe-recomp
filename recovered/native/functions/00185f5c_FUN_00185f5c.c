/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00185f5c FUN_00185f5c */

void FUN_00185f5c(float param_1)

{
  short sVar1;
  bool bVar2;
  CapcomLinkedList<CharacterInstance*> *this;
  undefined4 *puVar3;
  CleanupTask *this_00;
  ServeTask *this_01;
  void *pvVar4;
  CapcomOrderableList<CafeObject*> *this_02;
  int iVar5;
  long lVar6;
  MoveTask *pMVar7;
  int iVar8;
  AttackTask *this_03;
  CapcomOrderableListNode *pCVar9;
  Cafe *pCVar10;
  undefined4 uVar11;
  int iVar12;
  Furniture *pFVar13;
  int *piVar14;
  CafeObject *pCVar15;
  short *psVar16;
  Character *this_04;
  GameStateRaid *unaff_r5;
  int unaff_r6;
  CharacterInstance *pCVar17;
  CafeObject *this_05;
  ConfirmDialog *pCVar18;
  int iVar19;
  GameStateRaid *pGVar20;
  CharacterInstance *pCVar21;
  CapcomOrderableListNode *pCVar22;
  int *piVar23;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  int iStack0000001c;
  int iStack00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  iVar19 = *(int *)(unaff_r5 + 0xf8);
  if (iVar19 == 0) goto LAB_001860d0;
  iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar19 + 0x8c) + 0x40),0);
  if (iVar5 == 0) {
    piVar14 = *(int **)(iVar19 + 0x88);
    if (*(int *)(iVar19 + 0x7c) == 0) {
      if (piVar14 == (int *)0x0) {
        FUN_00186a02();
      }
      iVar19 = (**(code **)(*piVar14 + 0x14))(piVar14);
      if (iVar19 != 3) {
        FUN_00186a02();
      }
      iVar19 = __aeabi_fcmple(*(undefined4 *)(piVar14[0x23] + 0x40),0);
      if ((iVar19 == 0) &&
         (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar14[0xb]), iVar19 != 0
         )) {
        FUN_00186a1a();
      }
    }
    else if (((piVar14 == (int *)0x0) ||
             (iVar19 = (**(code **)(*piVar14 + 0x14))(piVar14), iVar19 != 3)) ||
            ((iVar19 = __aeabi_fcmple(*(undefined4 *)(piVar14[0x23] + 0x40),0), iVar19 == 0 &&
             (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar14[0xb]),
             iVar19 != 0)))) goto LAB_00186098;
    *(undefined4 *)(*(int *)(unaff_r5 + 0xf8) + 0x88) = 0;
    CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0xf8));
  }
  else {
    *(undefined1 *)(iVar19 + 0x84) = 0;
  }
LAB_00186098:
  pCVar17 = *(CharacterInstance **)(unaff_r5 + 0xf8);
  iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
  if (iVar19 == 0) {
    GameStateRaid::checkOverlap(unaff_r5,pCVar17);
  }
  piVar14 = *(int **)(unaff_r5 + 0xf8);
  (**(code **)(*piVar14 + 0x1c))(piVar14,in_stack_0000002c);
  param_1 = (float)CapcomOrderableList<CafeObject*>::sort
                             ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20)
                              ,*(CafeObject **)(unaff_r5 + 0xf8));
LAB_001860d0:
  if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
    if ((*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) ||
       (this = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(unaff_r5 + 0x78) + 0xa8) != -1)) {
      this = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this + 4) = 0;
      iStack00000020 = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this + 8) = this;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0xc) = 0;
      param_1 = extraout_s0;
      while (iStack00000020 < *(int *)(unaff_r5 + 200) + 1) {
        uVar11 = *(undefined4 *)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
        puVar3 = (undefined4 *)operator_new(8);
        puVar3[1] = 0;
        *(undefined4 **)(*(int *)(this + 8) + 4) = puVar3;
        *(undefined4 **)(this + 8) = puVar3;
        *puVar3 = uVar11;
        *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
        iStack00000020 = iStack00000020 + 1;
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
        param_1 = extraout_s0_00;
      }
    }
    pGVar20 = unaff_r5 + 0xf8;
    iVar19 = *(int *)pGVar20;
    if (((this != (CapcomLinkedList<CharacterInstance*> *)0x0) && (iVar19 != 0)) &&
       (*(int *)(this + 0x10) == 0)) {
      piVar14 = (int *)operator_new(8);
      piVar14[1] = 0;
      *(int **)(*(int *)(this + 8) + 4) = piVar14;
      *(int **)(this + 8) = piVar14;
      *piVar14 = iVar19;
      *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      param_1 = (float)CharacterInstance::stopTasks(*(CharacterInstance **)pGVar20);
      *(undefined1 *)(*(int *)(*(int *)pGVar20 + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(unaff_r5 + 0x78) + 0xc0) != -1) {
      pFVar13 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xc4);
      do {
        if (*(int *)(this + 0x10) == 0) goto LAB_001861e8;
        iVar19 = CapcomMath::random(*(int *)(this + 0x10));
        pCVar17 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this,iVar19);
        param_1 = extraout_s0_01;
      } while ((*(char *)(*(int *)(pCVar17 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar17 + 0x7c) != 0));
      this_00 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_00,pCVar17,*(Cafe **)(unaff_r5 + 0x78),pFVar13);
      param_1 = (float)CharacterInstance::addTask(pCVar17,(Task *)this_00);
    }
LAB_001861e8:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x78) + 0xa8) != -1) &&
       (iVar19 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x78)), param_1 = extraout_s0_02,
       iVar19 != 0)) {
      pCVar17 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xac);
      do {
        if (*(int *)(this + 0x10) == 0) goto LAB_0018624c;
        iVar19 = CapcomMath::random(*(int *)(this + 0x10));
        pCVar21 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this,iVar19);
        param_1 = extraout_s0_03;
      } while ((*(char *)(*(int *)(pCVar21 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar21 + 0x7c) != 0));
      this_01 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_01,pCVar21,*(Cafe **)(unaff_r5 + 0x78),pCVar17);
      param_1 = (float)CharacterInstance::addTask(pCVar21,(Task *)this_01);
    }
LAB_0018624c:
    if (this != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this + 0x10) != 0) {
        while (pvVar4 = *(void **)(this + 4), pvVar4 != (void *)0x0) {
          uVar11 = *(undefined4 *)((int)pvVar4 + 4);
          operator_delete(pvVar4);
          *(undefined4 *)(this + 4) = uVar11;
        }
        *(undefined4 *)(this + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this + 8) = this;
        *(undefined4 *)(this + 0xc) = 0;
      }
      operator_delete(this);
      param_1 = extraout_s0_04;
    }
  }
  for (iStack00000020 = 0; iStack00000020 < *(int *)(unaff_r5 + 200) + 1;
      iStack00000020 = iStack00000020 + 1) {
    pCVar17 = *(CharacterInstance **)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
    if (in_stack_0000003c != 0) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar17 + 0x88) = 0;
    }
    iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar19 == 0) {
      pCVar21 = *(CharacterInstance **)(pCVar17 + 0x88);
      if (*(int *)(pCVar17 + 0x7c) == 0) {
        if (pCVar21 == (CharacterInstance *)0x0) {
          if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
            this_02 = (CapcomOrderableList<CafeObject*> *)
                      Cafe::createDistanceSortedObjectList
                                (*(Cafe **)(unaff_r5 + 0x78),'\x03',(int)*(short *)(unaff_r6 + 0x2c)
                                );
            *(undefined4 *)(this_02 + 0x10) = *(undefined4 *)(this_02 + 8);
            bVar2 = false;
            while (piVar14 = *(int **)(this_02 + 0x10), piVar14 != (int *)0x0) {
              iVar19 = *piVar14;
              *(int *)(this_02 + 0x10) = piVar14[2];
              if ((iVar19 == 0) || (bVar2)) break;
              if ((*(char *)(*(int *)(iVar19 + 0x8c) + 4) == '\x01') &&
                 ((iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar19 + 0x8c) + 0x40),0),
                  iVar5 == 0 &&
                  (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar19 + 0x2c)
                                         ), iVar5 != 0)))) {
                *(int *)(pCVar17 + 0x88) = iVar19;
                bVar2 = true;
              }
            }
            if (*(int *)(this_02 + 0x14) != 0) {
              pCVar9 = *(CapcomOrderableListNode **)(this_02 + 8);
              while (pCVar9 != (CapcomOrderableListNode *)0x0) {
                pCVar22 = *(CapcomOrderableListNode **)(pCVar9 + 8);
                CapcomOrderableList<CafeObject*>::deleteNode(this_02,pCVar9);
                pCVar9 = pCVar22;
              }
              *(undefined4 *)(this_02 + 0x14) = 0;
              *(CapcomOrderableList<CafeObject*> **)(this_02 + 0xc) = this_02;
              *(undefined4 *)(this_02 + 0x10) = *(undefined4 *)(this_02 + 8);
            }
            operator_delete(this_02);
          }
        }
        else {
          iVar19 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21);
          if (iVar19 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar17,0);
            iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
            if ((iVar19 == 0) &&
               (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c))
               , iVar19 != 0)) {
              this_03 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_03,pCVar17,pCVar21,*(Cafe **)(unaff_r5 + 0x78));
            }
            else {
              *(undefined4 *)(pCVar17 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar17);
              piVar14 = *(int **)(in_stack_00000024 + DAT_001866fc);
              piVar23 = *(int **)(in_stack_00000024 + DAT_00186700);
              do {
                pCVar10 = *(Cafe **)(unaff_r5 + 0x78);
                iVar19 = CapcomMath::random(*piVar14 * *piVar23);
                iVar5 = Cafe::isInside(pCVar10,iVar19);
              } while (iVar5 == 0);
              this_03 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_03,pCVar17,*(Cafe **)(unaff_r5 + 0x78),iVar19,'\0'
                                 ,false);
            }
            CharacterInstance::addTask(pCVar17,(Task *)this_03);
          }
        }
      }
      else if (((pCVar21 != (CharacterInstance *)0x0) &&
               (iVar19 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21), iVar19 == 3)) &&
              ((iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0),
               iVar19 != 0 ||
               (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c))
               , iVar19 == 0)))) {
        *(undefined4 *)(pCVar17 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar17);
      }
    }
    else {
      pCVar17[0x84] = (CharacterInstance)0x0;
    }
    iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar19 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,pCVar17);
    }
    (**(code **)(*(int *)pCVar17 + 0x1c))(pCVar17,in_stack_0000002c);
    param_1 = (float)CapcomOrderableList<CafeObject*>::sort
                               ((CapcomOrderableList<CafeObject*> *)
                                (*(int *)(unaff_r5 + 0x78) + 0x20),(CafeObject *)pCVar17);
  }
  iStack00000020 = 0;
  do {
    if (*(int *)(unaff_r5 + 0xbc) + 1 <= iStack00000020) {
      for (iVar19 = 0; iVar19 < *(int *)(unaff_r5 + 0x100) + 1; iVar19 = iVar19 + 1) {
        piVar14 = *(int **)(iVar19 * 4 + *(int *)(unaff_r5 + 0x104));
        param_1 = (float)(**(code **)(*piVar14 + 0x1c))(piVar14,in_stack_0000002c);
      }
      iVar19 = *(int *)(unaff_r5 + 0x158);
      *(int *)(unaff_r5 + 0x158) = iVar19 - in_stack_0000002c;
      if (iVar19 - in_stack_0000002c < 0) {
        param_1 = (float)GameStateRaid::spawnCustomer(unaff_r5,false);
      }
      if (unaff_r5[DAT_00186a7c] == (GameStateRaid)0x0) {
        unaff_r5[DAT_00186a7c] = (GameStateRaid)0x1;
        if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
            (unaff_r5[0x14] == (GameStateRaid)0x0)) &&
           ((unaff_r5[0x16] == (GameStateRaid)0x0 && (unaff_r5[0x15] == (GameStateRaid)0x0)))) {
          iVar19 = 7;
        }
        else {
          iVar19 = 0x13;
        }
        ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,iVar19,param_1,false);
      }
      if ((unaff_r5[0x15e] == (GameStateRaid)0x0) && (unaff_r5[0x6c] != (GameStateRaid)0x0)) {
        unaff_r5[0x15e] = (GameStateRaid)0x1;
        iVar5 = 0;
        in_stack_0000002c = 0;
        for (iVar19 = 0; iVar19 < *(int *)(unaff_r5 + 0xbc) + 1; iVar19 = iVar19 + 1) {
          iVar12 = *(int *)(iVar19 * 4 + *(int *)(unaff_r5 + 0xc0));
          iVar8 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar12 + 0x2c));
          if (iVar8 != 0) {
            if (*(char *)(**(int **)(iVar12 + 0x8c) + DAT_00186a80) == '\0') {
              iVar5 = iVar5 + 1;
            }
            else {
              in_stack_0000002c = in_stack_0000002c + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar5,in_stack_0000002c);
      }
      iVar19 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(iVar19 + DAT_00186a84) != '\0') {
        *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
      }
      if (*(char *)(iVar19 + DAT_00186a88) != '\0') {
        *(undefined1 *)(iVar19 + DAT_00186a88) = 0;
        iVar19 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00186a8c),',');
        if (iVar19 != 0) {
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
    this_05 = *(CafeObject **)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xc0));
    (**(code **)(*(int *)this_05 + 0x1c))(this_05,in_stack_0000002c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),this_05);
    if ((unaff_r5[0x6c] != (GameStateRaid)0x0) && (*(int *)(this_05 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)this_05);
    }
    if ((*(int *)(this_05 + 0x7c) == 0) &&
       (iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_05 + 0x8c) + 0x40),0), iVar19 == 0)) {
      piVar14 = *(int **)(this_05 + 0x88);
      if (piVar14 != (int *)0x0) {
        iVar19 = (**(code **)(*piVar14 + 0x14))(piVar14);
        if (iVar19 == 3) {
          iVar19 = CafeObject::isAdjacentTo(this_05,(int)(short)piVar14[0xb]);
          if (((iVar19 == 0) ||
              (iVar19 = __aeabi_fcmple(*(undefined4 *)(piVar14[0x23] + 0x40),0), iVar19 != 0)) ||
             ((CafeObject *)piVar14[0x22] != this_05)) {
            pCVar15 = this_05 + 0x88;
            uVar11 = 0;
LAB_001866c4:
            *(undefined4 *)pCVar15 = uVar11;
          }
        }
        else {
          iVar19 = CafeObject::isAdjacentTo(this_05,(int)(short)piVar14[0xb]);
          if (iVar19 == 0) {
            *(undefined4 *)(this_05 + 0x88) = 0;
          }
        }
        goto LAB_00186718;
      }
      iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(this_05 + 0x2c));
      if (iVar19 != 0) {
        if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
          iVar19 = CapcomMath::random(2);
          if (iVar19 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          pMVar7 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar7,(CharacterInstance *)this_05,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar19 = *(int *)(this_05 + 0x98) + 1;
          *(int *)(this_05 + 0x98) = iVar19;
          if (iVar19 < **(int **)(in_stack_00000024 + DAT_00186704)) {
            piVar23 = *(int **)(in_stack_00000024 + DAT_001866fc);
            piVar14 = *(int **)(in_stack_00000024 + DAT_00186700);
            do {
              pCVar10 = *(Cafe **)(unaff_r5 + 0x78);
              iStack0000001c = CapcomMath::random(*piVar23 * *piVar14);
              iVar19 = Cafe::isInside(pCVar10,iStack0000001c);
            } while (iVar19 == 0);
          }
          else {
            lVar6 = Cafe::diamondToStaggeredCoords
                              ((int)**(short **)(in_stack_00000024 + DAT_00186708),
                               (int)**(short **)(in_stack_00000024 + DAT_0018670c));
            iStack0000001c = Cafe::staggeredCoordsToIndex(lVar6);
          }
          if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
            pMVar7 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar7,(CharacterInstance *)this_05,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\0',false);
          }
          else {
            pMVar7 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar7,(CharacterInstance *)this_05,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\t',false);
          }
        }
LAB_00186622:
        CharacterInstance::addTask((CharacterInstance *)this_05,(Task *)pMVar7);
        goto LAB_00186718;
      }
      pCVar10 = *(Cafe **)(unaff_r5 + 0x78);
      if ((*(short *)(pCVar10 + 0x98) != *(short *)(this_05 + 0x2c)) &&
         (*(short *)(pCVar10 + 0x9a) != *(short *)(this_05 + 0x2c))) {
        if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
          iVar19 = CapcomMath::random(2);
          if (iVar19 == 0) {
            psVar16 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            psVar16 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          sVar1 = *psVar16;
          pMVar7 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar7,(CharacterInstance *)this_05,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)this_05,(Task *)pMVar7);
          pCVar15 = this_05 + 0x98;
          uVar11 = 1;
          goto LAB_001866c4;
        }
        iVar19 = CapcomMath::random(2);
        if (iVar19 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        pMVar7 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar7,(CharacterInstance *)this_05,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\0',false);
        goto LAB_00186622;
      }
      Cafe::removeCafeObject(pCVar10,this_05);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0xb8),iStack00000020);
      this_04 = *(Character **)(this_05 + 0x8c);
      if (this_04 != (Character *)0x0) {
        Character::~Character(this_04);
        operator_delete(this_04);
      }
      param_1 = (float)(**(code **)(*(int *)this_05 + 4))(this_05);
      iStack00000020 = iStack00000020 + -1;
    }
    else {
      iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_05 + 0x8c) + 0x40),0);
      if (iVar19 != 0) {
        this_05[0x84] = (CafeObject)0x0;
      }
LAB_00186718:
      iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_05 + 0x8c) + 0x40),0);
      param_1 = extraout_s0_05;
      if (iVar19 == 0) {
        param_1 = (float)GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)this_05);
      }
    }
    iStack00000020 = iStack00000020 + 1;
  } while( true );
}


