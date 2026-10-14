/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018601a FUN_0018601a */

void FUN_0018601a(void)

{
  short sVar1;
  bool bVar2;
  Recipe *this;
  int iVar3;
  int *piVar4;
  CapcomLinkedList<CharacterInstance*> *this_00;
  undefined4 *puVar5;
  CleanupTask *this_01;
  ServeTask *this_02;
  void *pvVar6;
  CapcomOrderableList<CafeObject*> *this_03;
  long lVar7;
  MoveTask *pMVar8;
  int iVar9;
  AttackTask *this_04;
  CapcomOrderableListNode *pCVar10;
  Cafe *pCVar11;
  undefined4 uVar12;
  int iVar13;
  int in_r3;
  Furniture *pFVar14;
  CafeObject *pCVar15;
  short *psVar16;
  FoodStack *this_05;
  CharacterInstance *pCVar17;
  Character *this_06;
  GameStateRaid *unaff_r5;
  int unaff_r6;
  CafeObject *this_07;
  ConfirmDialog *pCVar18;
  int iVar19;
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
  int iStack00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_0000003c;
  
  this_05 = *(FoodStack **)(in_r3 + 100);
  if (this_05 != (FoodStack *)0x0) {
    iVar19 = *(int *)(in_r3 + 0x70);
    this = (Recipe *)FoodStack::getRecipe(this_05);
    iVar3 = Recipe::getCookTimeSeconds(this,(uchar)this_05[8]);
    if (iVar3 * 1000 <= iVar19) goto LAB_00186098;
  }
  if (in_stack_00000030 == 0) {
    FUN_00186a28();
  }
LAB_00186098:
  pCVar17 = *(CharacterInstance **)(unaff_r5 + 0xf8);
  iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
  if (iVar3 == 0) {
    GameStateRaid::checkOverlap(unaff_r5,pCVar17);
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
      iStack00000020 = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_00 + 8) = this_00;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      fVar24 = extraout_s0;
      while (iStack00000020 < *(int *)(unaff_r5 + 200) + 1) {
        uVar12 = *(undefined4 *)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
        puVar5 = (undefined4 *)operator_new(8);
        puVar5[1] = 0;
        *(undefined4 **)(*(int *)(this_00 + 8) + 4) = puVar5;
        *(undefined4 **)(this_00 + 8) = puVar5;
        *puVar5 = uVar12;
        *(undefined4 *)(*(int *)(this_00 + 8) + 4) = 0;
        iStack00000020 = iStack00000020 + 1;
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
      pFVar14 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xc4);
      do {
        if (*(int *)(this_00 + 0x10) == 0) goto LAB_001861e8;
        iVar3 = CapcomMath::random(*(int *)(this_00 + 0x10));
        pCVar17 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_00,iVar3);
        fVar24 = extraout_s0_01;
      } while ((*(char *)(*(int *)(pCVar17 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar17 + 0x7c) != 0));
      this_01 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_01,pCVar17,*(Cafe **)(unaff_r5 + 0x78),pFVar14);
      fVar24 = (float)CharacterInstance::addTask(pCVar17,(Task *)this_01);
    }
LAB_001861e8:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x78) + 0xa8) != -1) &&
       (iVar3 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x78)), fVar24 = extraout_s0_02,
       iVar3 != 0)) {
      pCVar17 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x78) + 0xac);
      do {
        if (*(int *)(this_00 + 0x10) == 0) goto LAB_0018624c;
        iVar3 = CapcomMath::random(*(int *)(this_00 + 0x10));
        pCVar21 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_00,iVar3);
        fVar24 = extraout_s0_03;
      } while ((*(char *)(*(int *)(pCVar21 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar21 + 0x7c) != 0));
      this_02 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_02,pCVar21,*(Cafe **)(unaff_r5 + 0x78),pCVar17);
      fVar24 = (float)CharacterInstance::addTask(pCVar21,(Task *)this_02);
    }
LAB_0018624c:
    if (this_00 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this_00 + 0x10) != 0) {
        while (pvVar6 = *(void **)(this_00 + 4), pvVar6 != (void *)0x0) {
          uVar12 = *(undefined4 *)((int)pvVar6 + 4);
          operator_delete(pvVar6);
          *(undefined4 *)(this_00 + 4) = uVar12;
        }
        *(undefined4 *)(this_00 + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this_00 + 8) = this_00;
        *(undefined4 *)(this_00 + 0xc) = 0;
      }
      operator_delete(this_00);
      fVar24 = extraout_s0_04;
    }
  }
  for (iStack00000020 = 0; iStack00000020 < *(int *)(unaff_r5 + 200) + 1;
      iStack00000020 = iStack00000020 + 1) {
    pCVar17 = *(CharacterInstance **)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xcc));
    if (in_stack_0000003c != 0) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar17 + 0x88) = 0;
    }
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar3 == 0) {
      pCVar21 = *(CharacterInstance **)(pCVar17 + 0x88);
      if (*(int *)(pCVar17 + 0x7c) == 0) {
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
                 ((iVar19 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar3 + 0x8c) + 0x40),0),
                  iVar19 == 0 &&
                  (iVar19 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar3 + 0x2c)
                                          ), iVar19 != 0)))) {
                *(int *)(pCVar17 + 0x88) = iVar3;
                bVar2 = true;
              }
            }
            if (*(int *)(this_03 + 0x14) != 0) {
              pCVar10 = *(CapcomOrderableListNode **)(this_03 + 8);
              while (pCVar10 != (CapcomOrderableListNode *)0x0) {
                pCVar22 = *(CapcomOrderableListNode **)(pCVar10 + 8);
                CapcomOrderableList<CafeObject*>::deleteNode(this_03,pCVar10);
                pCVar10 = pCVar22;
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
            CharacterInstance::stopReplacementInAnimation(pCVar17,0);
            iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0);
            if ((iVar3 == 0) &&
               (iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c)),
               iVar3 != 0)) {
              this_04 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(this_04,pCVar17,pCVar21,*(Cafe **)(unaff_r5 + 0x78));
            }
            else {
              *(undefined4 *)(pCVar17 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar17);
              piVar4 = *(int **)(in_stack_00000024 + DAT_001866fc);
              piVar23 = *(int **)(in_stack_00000024 + DAT_00186700);
              do {
                pCVar11 = *(Cafe **)(unaff_r5 + 0x78);
                iVar3 = CapcomMath::random(*piVar4 * *piVar23);
                iVar19 = Cafe::isInside(pCVar11,iVar3);
              } while (iVar19 == 0);
              this_04 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)this_04,pCVar17,*(Cafe **)(unaff_r5 + 0x78),iVar3,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar17,(Task *)this_04);
          }
        }
      }
      else if (((pCVar21 != (CharacterInstance *)0x0) &&
               (iVar3 = (**(code **)(*(int *)pCVar21 + 0x14))(pCVar21), iVar3 == 3)) &&
              ((iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar21 + 0x8c) + 0x40),0),
               iVar3 != 0 ||
               (iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar21 + 0x2c)),
               iVar3 == 0)))) {
        *(undefined4 *)(pCVar17 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar17);
      }
    }
    else {
      pCVar17[0x84] = (CharacterInstance)0x0;
    }
    iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar3 == 0) {
      GameStateRaid::checkOverlap(unaff_r5,pCVar17);
    }
    (**(code **)(*(int *)pCVar17 + 0x1c))(pCVar17,in_stack_0000002c);
    fVar24 = (float)CapcomOrderableList<CafeObject*>::sort
                              ((CapcomOrderableList<CafeObject*> *)
                               (*(int *)(unaff_r5 + 0x78) + 0x20),(CafeObject *)pCVar17);
  }
  iStack00000020 = 0;
  do {
    if (*(int *)(unaff_r5 + 0xbc) + 1 <= iStack00000020) {
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
        iVar19 = 0;
        in_stack_0000002c = 0;
        for (iVar3 = 0; iVar3 < *(int *)(unaff_r5 + 0xbc) + 1; iVar3 = iVar3 + 1) {
          iVar13 = *(int *)(iVar3 * 4 + *(int *)(unaff_r5 + 0xc0));
          iVar9 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(iVar13 + 0x2c));
          if (iVar9 != 0) {
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
      iVar3 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(iVar3 + DAT_00186a84) != '\0') {
        *(int *)(unaff_r5 + 0x188) = *(int *)(unaff_r5 + 0x188) + 1;
      }
      if (*(char *)(iVar3 + DAT_00186a88) != '\0') {
        *(undefined1 *)(iVar3 + DAT_00186a88) = 0;
        iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00186a8c),',');
        if (iVar3 != 0) {
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
    this_07 = *(CafeObject **)(iStack00000020 * 4 + *(int *)(unaff_r5 + 0xc0));
    (**(code **)(*(int *)this_07 + 0x1c))(this_07,in_stack_0000002c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x78) + 0x20),this_07);
    if ((unaff_r5[0x6c] != (GameStateRaid)0x0) && (*(int *)(this_07 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)this_07);
    }
    if ((*(int *)(this_07 + 0x7c) == 0) &&
       (iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_07 + 0x8c) + 0x40),0), iVar3 == 0)) {
      piVar4 = *(int **)(this_07 + 0x88);
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
        if (iVar3 == 3) {
          iVar3 = CafeObject::isAdjacentTo(this_07,(int)(short)piVar4[0xb]);
          if (((iVar3 == 0) ||
              (iVar3 = __aeabi_fcmple(*(undefined4 *)(piVar4[0x23] + 0x40),0), iVar3 != 0)) ||
             ((CafeObject *)piVar4[0x22] != this_07)) {
            pCVar15 = this_07 + 0x88;
            uVar12 = 0;
LAB_001866c4:
            *(undefined4 *)pCVar15 = uVar12;
          }
        }
        else {
          iVar3 = CafeObject::isAdjacentTo(this_07,(int)(short)piVar4[0xb]);
          if (iVar3 == 0) {
            *(undefined4 *)(this_07 + 0x88) = 0;
          }
        }
        goto LAB_00186718;
      }
      iVar3 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(this_07 + 0x2c));
      if (iVar3 != 0) {
        if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
          iVar3 = CapcomMath::random(2);
          if (iVar3 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          pMVar8 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar8,(CharacterInstance *)this_07,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar3 = *(int *)(this_07 + 0x98) + 1;
          *(int *)(this_07 + 0x98) = iVar3;
          if (iVar3 < **(int **)(in_stack_00000024 + DAT_00186704)) {
            piVar23 = *(int **)(in_stack_00000024 + DAT_001866fc);
            piVar4 = *(int **)(in_stack_00000024 + DAT_00186700);
            do {
              pCVar11 = *(Cafe **)(unaff_r5 + 0x78);
              iStack0000001c = CapcomMath::random(*piVar23 * *piVar4);
              iVar3 = Cafe::isInside(pCVar11,iStack0000001c);
            } while (iVar3 == 0);
          }
          else {
            lVar7 = Cafe::diamondToStaggeredCoords
                              ((int)**(short **)(in_stack_00000024 + DAT_00186708),
                               (int)**(short **)(in_stack_00000024 + DAT_0018670c));
            iStack0000001c = Cafe::staggeredCoordsToIndex(lVar7);
          }
          if (unaff_r5[0x6c] == (GameStateRaid)0x0) {
            pMVar8 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar8,(CharacterInstance *)this_07,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\0',false);
          }
          else {
            pMVar8 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar8,(CharacterInstance *)this_07,*(Cafe **)(unaff_r5 + 0x78),
                               iStack0000001c,'\t',false);
          }
        }
LAB_00186622:
        CharacterInstance::addTask((CharacterInstance *)this_07,(Task *)pMVar8);
        goto LAB_00186718;
      }
      pCVar11 = *(Cafe **)(unaff_r5 + 0x78);
      if ((*(short *)(pCVar11 + 0x98) != *(short *)(this_07 + 0x2c)) &&
         (*(short *)(pCVar11 + 0x9a) != *(short *)(this_07 + 0x2c))) {
        if (unaff_r5[0x6c] != (GameStateRaid)0x0) {
          iVar3 = CapcomMath::random(2);
          if (iVar3 == 0) {
            psVar16 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
          }
          else {
            psVar16 = (short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
          }
          sVar1 = *psVar16;
          pMVar8 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar8,(CharacterInstance *)this_07,*(Cafe **)(unaff_r5 + 0x78),
                             (int)sVar1,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)this_07,(Task *)pMVar8);
          pCVar15 = this_07 + 0x98;
          uVar12 = 1;
          goto LAB_001866c4;
        }
        iVar3 = CapcomMath::random(2);
        if (iVar3 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x78) + 0x98);
        }
        pMVar8 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar8,(CharacterInstance *)this_07,*(Cafe **)(unaff_r5 + 0x78),
                           (int)sVar1,'\0',false);
        goto LAB_00186622;
      }
      Cafe::removeCafeObject(pCVar11,this_07);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0xb8),iStack00000020);
      this_06 = *(Character **)(this_07 + 0x8c);
      if (this_06 != (Character *)0x0) {
        Character::~Character(this_06);
        operator_delete(this_06);
      }
      fVar24 = (float)(**(code **)(*(int *)this_07 + 4))(this_07);
      iStack00000020 = iStack00000020 + -1;
    }
    else {
      iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_07 + 0x8c) + 0x40),0);
      if (iVar3 != 0) {
        this_07[0x84] = (CafeObject)0x0;
      }
LAB_00186718:
      iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_07 + 0x8c) + 0x40),0);
      fVar24 = extraout_s0_05;
      if (iVar3 == 0) {
        fVar24 = (float)GameStateRaid::checkOverlap(unaff_r5,(CharacterInstance *)this_07);
      }
    }
    iStack00000020 = iStack00000020 + 1;
  } while( true );
}


