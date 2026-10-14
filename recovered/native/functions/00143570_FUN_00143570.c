/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00143570 FUN_00143570 */

void FUN_00143570(void)

{
  short sVar1;
  int iVar2;
  CapcomLinkedList<CharacterInstance*> *this;
  CleanupTask *this_00;
  ServeTask *this_01;
  void *pvVar3;
  long lVar4;
  MoveTask *pMVar5;
  int iVar6;
  AttackTask *pAVar7;
  Cafe *pCVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  Furniture *pFVar12;
  int *piVar13;
  CafeObject *pCVar14;
  Character *this_02;
  CharacterInstance *unaff_r4;
  GameStateFriendCafe *unaff_r5;
  CharacterInstance *pCVar15;
  int *piVar16;
  CafeObject *this_03;
  int unaff_r7;
  CharacterInstance *pCVar17;
  int iStack0000000c;
  int iStack00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  if (*(int *)(unaff_r4 + 0x14) == 0) {
    FUN_00142c9e();
  }
  FUN_00142c84();
  pAVar7 = (AttackTask *)operator_new(0x40);
  pCVar17 = *(CharacterInstance **)(unaff_r7 + 0x2c);
  AttackTask::AttackTask(pAVar7,pCVar17,unaff_r4,*(Cafe **)(unaff_r5 + 0x34));
  CharacterInstance::addTask(pCVar17,(Task *)pAVar7);
  pCVar17 = *(CharacterInstance **)(unaff_r5 + 0x128);
  iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
  if (iVar2 == 0) {
    GameStateFriendCafe::checkOverlap(unaff_r5,pCVar17);
  }
  (**(code **)(**(int **)(unaff_r5 + 0x128) + 0x1c))(*(int **)(unaff_r5 + 0x128),in_stack_0000001c);
  CapcomOrderableList<CafeObject*>::sort
            ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
             *(CafeObject **)(unaff_r5 + 0x128));
  if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
    if ((*(int *)(*(int *)(unaff_r5 + 0x34) + 0xc0) != -1) ||
       (this = (CapcomLinkedList<CharacterInstance*> *)0x0,
       *(int *)(*(int *)(unaff_r5 + 0x34) + 0xa8) != -1)) {
      this = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
      *(undefined4 *)(this + 4) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this + 8) = this;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0xc) = 0;
      for (iVar2 = 0; iVar2 < *(int *)(unaff_r5 + 0x130) + 1; iVar2 = iVar2 + 1) {
        CapcomLinkedList<CharacterInstance*>::add
                  (this,*(CharacterInstance **)(iVar2 * 4 + *(int *)(unaff_r5 + 0x134)));
      }
    }
    if (((this != (CapcomLinkedList<CharacterInstance*> *)0x0) &&
        (*(CharacterInstance **)(unaff_r5 + 0x128) != (CharacterInstance *)0x0)) &&
       (*(int *)(this + 0x10) == 0)) {
      CapcomLinkedList<CharacterInstance*>::add(this,*(CharacterInstance **)(unaff_r5 + 0x128));
      CharacterInstance::stopTasks(*(CharacterInstance **)(unaff_r5 + 0x128));
      *(undefined1 *)(*(int *)(*(int *)(unaff_r5 + 0x128) + 0x8c) + 0x44) = 1;
    }
    if (*(int *)(*(int *)(unaff_r5 + 0x34) + 0xc0) != -1) {
      pFVar12 = (Furniture *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xc4);
      do {
        if (*(int *)(this + 0x10) == 0) goto LAB_00142f1c;
        iVar2 = CapcomMath::random(*(int *)(this + 0x10));
        pCVar17 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this,iVar2);
      } while ((*(char *)(*(int *)(pCVar17 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar17 + 0x7c) != 0));
      this_00 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_00,pCVar17,*(Cafe **)(unaff_r5 + 0x34),pFVar12);
      CharacterInstance::addTask(pCVar17,(Task *)this_00);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
       (iVar2 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar2 != 0)) {
      pCVar17 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
      do {
        if (*(int *)(this + 0x10) == 0) goto LAB_00142f80;
        iVar2 = CapcomMath::random(*(int *)(this + 0x10));
        pCVar15 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this,iVar2);
      } while ((*(char *)(*(int *)(pCVar15 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar15 + 0x7c) != 0));
      this_01 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_01,pCVar15,*(Cafe **)(unaff_r5 + 0x34),pCVar17);
      CharacterInstance::addTask(pCVar15,(Task *)this_01);
    }
LAB_00142f80:
    if (this != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this + 0x10) != 0) {
        while (pvVar3 = *(void **)(this + 4), pvVar3 != (void *)0x0) {
          uVar10 = *(undefined4 *)((int)pvVar3 + 4);
          operator_delete(pvVar3);
          *(undefined4 *)(this + 4) = uVar10;
        }
        *(undefined4 *)(this + 0x10) = 0;
        *(CapcomLinkedList<CharacterInstance*> **)(this + 8) = this;
        *(undefined4 *)(this + 0xc) = 0;
      }
      operator_delete(this);
    }
  }
  for (iStack00000010 = 0; iStack00000010 < *(int *)(unaff_r5 + 0x130) + 1;
      iStack00000010 = iStack00000010 + 1) {
    pCVar17 = *(CharacterInstance **)(iStack00000010 * 4 + *(int *)(unaff_r5 + 0x134));
    if (in_stack_00000020 != 0) {
      CharacterInstance::clearTasks();
      *(undefined4 *)(pCVar17 + 0x88) = 0;
    }
    iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar2 == 0) {
      pCVar15 = *(CharacterInstance **)(pCVar17 + 0x88);
      if (*(int *)(pCVar17 + 0x7c) == 0) {
        if (pCVar15 == (CharacterInstance *)0x0) {
          iStack0000000c = 0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; iStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                iStack0000000c = iStack0000000c + 1) {
              iVar9 = *(int *)(iStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar9 + 0x8c) + 0x40),0);
              if ((iVar2 == 0) &&
                 (iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar9 + 0x2c)),
                 iVar2 != 0)) {
                *(int *)(pCVar17 + 0x88) = iVar9;
                break;
              }
            }
          }
        }
        else {
          iVar2 = (**(code **)(*(int *)pCVar15 + 0x14))(pCVar15);
          if (iVar2 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar17,0);
            iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar15 + 0x8c) + 0x40),0);
            if ((iVar2 == 0) &&
               (iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar15 + 0x2c)),
               iVar2 != 0)) {
              pAVar7 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar7,pCVar17,pCVar15,*(Cafe **)(unaff_r5 + 0x34));
            }
            else {
              *(undefined4 *)(pCVar17 + 0x88) = 0;
              CharacterInstance::stopTasks(pCVar17);
              piVar16 = *(int **)(in_stack_00000014 + DAT_001433f4);
              piVar13 = *(int **)(in_stack_00000014 + DAT_001433f8);
              do {
                pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
                iVar2 = CapcomMath::random(*piVar16 * *piVar13);
                iVar9 = Cafe::isInside(pCVar8,iVar2);
              } while (iVar9 == 0);
              pAVar7 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar7,pCVar17,*(Cafe **)(unaff_r5 + 0x34),iVar2,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar17,(Task *)pAVar7);
          }
        }
      }
      else if (((pCVar15 != (CharacterInstance *)0x0) &&
               (iVar2 = (**(code **)(*(int *)pCVar15 + 0x14))(pCVar15), iVar2 == 3)) &&
              ((iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar15 + 0x8c) + 0x40),0),
               iVar2 != 0 ||
               (iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar15 + 0x2c)),
               iVar2 == 0)))) {
        *(undefined4 *)(pCVar17 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar17);
      }
    }
    else {
      pCVar17[0x84] = (CharacterInstance)0x0;
    }
    iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar2 == 0) {
      GameStateFriendCafe::checkOverlap(unaff_r5,pCVar17);
    }
    (**(code **)(*(int *)pCVar17 + 0x1c))(pCVar17,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),
               (CafeObject *)pCVar17);
  }
  iStack00000010 = 0;
  do {
    if (*(int *)(unaff_r5 + 0x13c) + 1 <= iStack00000010) {
      for (iVar2 = 0; iVar2 < *(int *)(unaff_r5 + 0x148) + 1; iVar2 = iVar2 + 1) {
        piVar13 = *(int **)(iVar2 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar13 + 0x1c))(piVar13,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar9 = 0;
        in_stack_00000014 = 0;
        for (iVar2 = 0; iVar2 < *(int *)(unaff_r5 + 0x13c) + 1; iVar2 = iVar2 + 1) {
          iVar11 = *(int *)(iVar2 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar6 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar11 + 0x2c));
          if (iVar6 != 0) {
            if (*(char *)(**(int **)(iVar11 + 0x8c) + DAT_001435d0) == '\0') {
              iVar9 = iVar9 + 1;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + 1;
            }
          }
        }
        CharacterInstance::groupScream(iVar9,in_stack_00000014);
      }
      return;
    }
    this_03 = *(CafeObject **)(iStack00000010 * 4 + *(int *)(unaff_r5 + 0x140));
    (**(code **)(*(int *)this_03 + 0x1c))(this_03,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),this_03);
    if ((unaff_r5[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(this_03 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)this_03);
    }
    if ((*(int *)(this_03 + 0x7c) == 0) &&
       (iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_03 + 0x8c) + 0x40),0), iVar2 == 0)) {
      piVar13 = *(int **)(this_03 + 0x88);
      if (piVar13 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar13 + 0x14))(piVar13);
        if (iVar2 == 3) {
          iVar2 = CafeObject::isAdjacentTo(this_03,(int)(short)piVar13[0xb]);
          if (((iVar2 == 0) ||
              (iVar2 = __aeabi_fcmple(*(undefined4 *)(piVar13[0x23] + 0x40),0), iVar2 != 0)) ||
             ((CafeObject *)piVar13[0x22] != this_03)) {
            pCVar14 = this_03 + 0x88;
            uVar10 = 0;
LAB_001433be:
            *(undefined4 *)pCVar14 = uVar10;
          }
        }
        else {
          iVar2 = CafeObject::isAdjacentTo(this_03,(int)(short)piVar13[0xb]);
          if (iVar2 == 0) {
            *(undefined4 *)(this_03 + 0x88) = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar2 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(this_03 + 0x2c));
      if (iVar2 != 0) {
        if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
          iVar2 = CapcomMath::random(2);
          if (iVar2 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMVar5 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar5,(CharacterInstance *)this_03,*(Cafe **)(unaff_r5 + 0x34),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar2 = *(int *)(this_03 + 0x98) + 1;
          *(int *)(this_03 + 0x98) = iVar2;
          if (iVar2 < **(int **)(in_stack_00000014 + DAT_001433fc)) {
            piVar16 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar13 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
              iStack0000000c = CapcomMath::random(*piVar16 * *piVar13);
              iVar2 = Cafe::isInside(pCVar8,iStack0000000c);
            } while (iVar2 == 0);
          }
          else {
            lVar4 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            iStack0000000c = Cafe::staggeredCoordsToIndex(lVar4);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar5 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar5,(CharacterInstance *)this_03,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\0',false);
          }
          else {
            pMVar5 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar5,(CharacterInstance *)this_03,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)this_03,(Task *)pMVar5);
        goto LAB_00143410;
      }
      pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
      if ((*(short *)(pCVar8 + 0x98) != *(short *)(this_03 + 0x2c)) &&
         (*(short *)(pCVar8 + 0x9a) != *(short *)(this_03 + 0x2c))) {
        if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
          iVar2 = CapcomMath::random(2);
          if (iVar2 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          iStack0000000c = (int)sVar1;
          pMVar5 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar5,(CharacterInstance *)this_03,*(Cafe **)(unaff_r5 + 0x34),
                             iStack0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)this_03,(Task *)pMVar5);
          pCVar14 = this_03 + 0x98;
          uVar10 = 1;
          goto LAB_001433be;
        }
        iVar2 = CapcomMath::random(2);
        if (iVar2 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
        }
        pMVar5 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar5,(CharacterInstance *)this_03,*(Cafe **)(unaff_r5 + 0x34),
                           (int)sVar1,'\0',false);
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar8,this_03);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0x138),iStack00000010);
      this_02 = *(Character **)(this_03 + 0x8c);
      if (this_02 != (Character *)0x0) {
        Character::~Character(this_02);
        operator_delete(this_02);
      }
      (**(code **)(*(int *)this_03 + 4))(this_03);
      iStack00000010 = iStack00000010 + -1;
    }
    else {
      iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_03 + 0x8c) + 0x40),0);
      if (iVar2 != 0) {
        this_03[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_03 + 0x8c) + 0x40),0);
      if (iVar2 == 0) {
        GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)this_03);
      }
    }
    iStack00000010 = iStack00000010 + 1;
  } while( true );
}


