/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001434f8 FUN_001434f8 */

void FUN_001434f8(void)

{
  short sVar1;
  CapcomLinkedList<CharacterInstance*> *this;
  CleanupTask *this_00;
  ServeTask *this_01;
  void *pvVar2;
  MoveTask *pMVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  AttackTask *pAVar7;
  AttackTask *this_02;
  Cafe *pCVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  Furniture *pFVar12;
  int *piVar13;
  CafeObject *pCVar14;
  Character *this_03;
  GameStateFriendCafe *unaff_r5;
  CharacterInstance *pCVar15;
  int *piVar16;
  CafeObject *this_04;
  CharacterInstance *unaff_r6;
  CharacterInstance *unaff_r7;
  CharacterInstance *pCVar17;
  int iStack0000000c;
  int iStack00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  iVar5 = GameStateFriendCafe::screenToWorldCoords
                    (unaff_r5,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_001435d4));
  lVar6 = Cafe::worldToDiamondCoords(iVar5 >> 0x10,(int)(short)iVar5);
  lVar6 = Cafe::diamondToStaggeredCoords(lVar6);
  iVar5 = Cafe::staggeredCoordsToIndex(lVar6);
  iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),iVar5);
  if (iVar5 != 0) {
    FUN_001427ae();
  }
  FUN_001427ea();
  Cafe::select(*(Cafe **)(unaff_r5 + 0x34),(CafeObject *)0x0);
  *(undefined4 *)(unaff_r5 + 0x15c) = 0;
  CharacterCommandBar::close(*(CharacterCommandBar **)(unaff_r5 + (int)unaff_r7));
  FUN_001426e2();
  iVar5 = ZombieCafe::unhandledTouchUpEvent(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (iVar5 == 0) {
    FUN_001427ea();
  }
  FUN_0014276a();
  pAVar7 = (AttackTask *)operator_new(0x40);
  AttackTask::AttackTask(pAVar7,unaff_r6,unaff_r7,*(Cafe **)(unaff_r5 + 0x34));
  FUN_00142b06();
  if (*(int *)(pAVar7 + 0x14) == 0) {
    FUN_00142c9e();
  }
  FUN_00142c84();
  this_02 = (AttackTask *)operator_new(0x40);
  pCVar17 = *(CharacterInstance **)(unaff_r7 + 0x2c);
  AttackTask::AttackTask(this_02,pCVar17,(CharacterInstance *)pAVar7,*(Cafe **)(unaff_r5 + 0x34));
  CharacterInstance::addTask(pCVar17,(Task *)this_02);
  pCVar17 = *(CharacterInstance **)(unaff_r5 + 0x128);
  iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
  if (iVar5 == 0) {
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
      for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x130) + 1; iVar5 = iVar5 + 1) {
        CapcomLinkedList<CharacterInstance*>::add
                  (this,*(CharacterInstance **)(iVar5 * 4 + *(int *)(unaff_r5 + 0x134)));
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
        iVar5 = CapcomMath::random(*(int *)(this + 0x10));
        pCVar17 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this,iVar5);
      } while ((*(char *)(*(int *)(pCVar17 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar17 + 0x7c) != 0));
      this_00 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_00,pCVar17,*(Cafe **)(unaff_r5 + 0x34),pFVar12);
      CharacterInstance::addTask(pCVar17,(Task *)this_00);
    }
LAB_00142f1c:
    if ((*(int *)(*(Cafe **)(unaff_r5 + 0x34) + 0xa8) != -1) &&
       (iVar5 = Cafe::getFoodStackStockSize(*(Cafe **)(unaff_r5 + 0x34)), iVar5 != 0)) {
      pCVar17 = (CharacterInstance *)**(undefined4 **)(*(int *)(unaff_r5 + 0x34) + 0xac);
      do {
        if (*(int *)(this + 0x10) == 0) goto LAB_00142f80;
        iVar5 = CapcomMath::random(*(int *)(this + 0x10));
        pCVar15 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this,iVar5);
      } while ((*(char *)(*(int *)(pCVar15 + 0x8c) + 0x44) != '\x01') ||
              (*(int *)(pCVar15 + 0x7c) != 0));
      this_01 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_01,pCVar15,*(Cafe **)(unaff_r5 + 0x34),pCVar17);
      CharacterInstance::addTask(pCVar15,(Task *)this_01);
    }
LAB_00142f80:
    if (this != (CapcomLinkedList<CharacterInstance*> *)0x0) {
      if (*(int *)(this + 0x10) != 0) {
        while (pvVar2 = *(void **)(this + 4), pvVar2 != (void *)0x0) {
          uVar10 = *(undefined4 *)((int)pvVar2 + 4);
          operator_delete(pvVar2);
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
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
      pCVar15 = *(CharacterInstance **)(pCVar17 + 0x88);
      if (*(int *)(pCVar17 + 0x7c) == 0) {
        if (pCVar15 == (CharacterInstance *)0x0) {
          iStack0000000c = 0;
          if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
            for (; iStack0000000c < *(int *)(unaff_r5 + 0x154) + 1;
                iStack0000000c = iStack0000000c + 1) {
              iVar9 = *(int *)(iStack0000000c * 4 + *(int *)(unaff_r5 + 0x158));
              iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(iVar9 + 0x8c) + 0x40),0);
              if ((iVar5 == 0) &&
                 (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar9 + 0x2c)),
                 iVar5 != 0)) {
                *(int *)(pCVar17 + 0x88) = iVar9;
                break;
              }
            }
          }
        }
        else {
          iVar5 = (**(code **)(*(int *)pCVar15 + 0x14))(pCVar15);
          if (iVar5 == 3) {
            CharacterInstance::stopReplacementInAnimation(pCVar17,0);
            iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar15 + 0x8c) + 0x40),0);
            if ((iVar5 == 0) &&
               (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar15 + 0x2c)),
               iVar5 != 0)) {
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
                iVar5 = CapcomMath::random(*piVar16 * *piVar13);
                iVar9 = Cafe::isInside(pCVar8,iVar5);
              } while (iVar9 == 0);
              pAVar7 = (AttackTask *)operator_new(0x48);
              MoveTask::MoveTask((MoveTask *)pAVar7,pCVar17,*(Cafe **)(unaff_r5 + 0x34),iVar5,'\0',
                                 false);
            }
            CharacterInstance::addTask(pCVar17,(Task *)pAVar7);
          }
        }
      }
      else if (((pCVar15 != (CharacterInstance *)0x0) &&
               (iVar5 = (**(code **)(*(int *)pCVar15 + 0x14))(pCVar15), iVar5 == 3)) &&
              ((iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar15 + 0x8c) + 0x40),0),
               iVar5 != 0 ||
               (iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(pCVar15 + 0x2c)),
               iVar5 == 0)))) {
        *(undefined4 *)(pCVar17 + 0x88) = 0;
        CharacterInstance::stopTasks(pCVar17);
      }
    }
    else {
      pCVar17[0x84] = (CharacterInstance)0x0;
    }
    iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar17 + 0x8c) + 0x40),0);
    if (iVar5 == 0) {
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
      for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x148) + 1; iVar5 = iVar5 + 1) {
        piVar13 = *(int **)(iVar5 * 4 + *(int *)(unaff_r5 + 0x14c));
        (**(code **)(*piVar13 + 0x1c))(piVar13,in_stack_0000001c);
      }
      if ((unaff_r5[DAT_001435cc] == (GameStateFriendCafe)0x0) &&
         (unaff_r5[0x106] != (GameStateFriendCafe)0x0)) {
        unaff_r5[DAT_001435cc] = (GameStateFriendCafe)0x1;
        iVar9 = 0;
        in_stack_00000014 = 0;
        for (iVar5 = 0; iVar5 < *(int *)(unaff_r5 + 0x13c) + 1; iVar5 = iVar5 + 1) {
          iVar11 = *(int *)(iVar5 * 4 + *(int *)(unaff_r5 + 0x140));
          iVar4 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(iVar11 + 0x2c));
          if (iVar4 != 0) {
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
    this_04 = *(CafeObject **)(iStack00000010 * 4 + *(int *)(unaff_r5 + 0x140));
    (**(code **)(*(int *)this_04 + 0x1c))(this_04,in_stack_0000001c);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(unaff_r5 + 0x34) + 0x20),this_04);
    if ((unaff_r5[0x106] != (GameStateFriendCafe)0x0) && (*(int *)(this_04 + 0x98) == 0)) {
      CharacterInstance::stopTasks((CharacterInstance *)this_04);
    }
    if ((*(int *)(this_04 + 0x7c) == 0) &&
       (iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_04 + 0x8c) + 0x40),0), iVar5 == 0)) {
      piVar13 = *(int **)(this_04 + 0x88);
      if (piVar13 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar13 + 0x14))(piVar13);
        if (iVar5 == 3) {
          iVar5 = CafeObject::isAdjacentTo(this_04,(int)(short)piVar13[0xb]);
          if (((iVar5 == 0) ||
              (iVar5 = __aeabi_fcmple(*(undefined4 *)(piVar13[0x23] + 0x40),0), iVar5 != 0)) ||
             ((CafeObject *)piVar13[0x22] != this_04)) {
            pCVar14 = this_04 + 0x88;
            uVar10 = 0;
LAB_001433be:
            *(undefined4 *)pCVar14 = uVar10;
          }
        }
        else {
          iVar5 = CafeObject::isAdjacentTo(this_04,(int)(short)piVar13[0xb]);
          if (iVar5 == 0) {
            *(undefined4 *)(this_04 + 0x88) = 0;
          }
        }
        goto LAB_00143410;
      }
      iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x34),(int)*(short *)(this_04 + 0x2c));
      if (iVar5 != 0) {
        if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
          iVar5 = CapcomMath::random(2);
          if (iVar5 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          pMVar3 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar3,(CharacterInstance *)this_04,*(Cafe **)(unaff_r5 + 0x34),
                             (int)sVar1,'\0',false);
        }
        else {
          iVar5 = *(int *)(this_04 + 0x98) + 1;
          *(int *)(this_04 + 0x98) = iVar5;
          if (iVar5 < **(int **)(in_stack_00000014 + DAT_001433fc)) {
            piVar16 = *(int **)(in_stack_00000014 + DAT_001433f4);
            piVar13 = *(int **)(in_stack_00000014 + DAT_001433f8);
            do {
              pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
              iStack0000000c = CapcomMath::random(*piVar16 * *piVar13);
              iVar5 = Cafe::isInside(pCVar8,iStack0000000c);
            } while (iVar5 == 0);
          }
          else {
            lVar6 = Cafe::diamondToStaggeredCoords
                              (CONCAT22(**(undefined2 **)(in_stack_00000014 + DAT_00143400),
                                        **(undefined2 **)(in_stack_00000014 + DAT_00143404)));
            iStack0000000c = Cafe::staggeredCoordsToIndex(lVar6);
          }
          if (unaff_r5[0x106] == (GameStateFriendCafe)0x0) {
            pMVar3 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar3,(CharacterInstance *)this_04,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\0',false);
          }
          else {
            pMVar3 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(pMVar3,(CharacterInstance *)this_04,*(Cafe **)(unaff_r5 + 0x34),
                               iStack0000000c,'\t',false);
          }
        }
LAB_00143316:
        CharacterInstance::addTask((CharacterInstance *)this_04,(Task *)pMVar3);
        goto LAB_00143410;
      }
      pCVar8 = *(Cafe **)(unaff_r5 + 0x34);
      if ((*(short *)(pCVar8 + 0x98) != *(short *)(this_04 + 0x2c)) &&
         (*(short *)(pCVar8 + 0x9a) != *(short *)(this_04 + 0x2c))) {
        if (unaff_r5[0x106] != (GameStateFriendCafe)0x0) {
          iVar5 = CapcomMath::random(2);
          if (iVar5 == 0) {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
          }
          else {
            sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
          }
          iStack0000000c = (int)sVar1;
          pMVar3 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(pMVar3,(CharacterInstance *)this_04,*(Cafe **)(unaff_r5 + 0x34),
                             iStack0000000c,'\t',false);
          CharacterInstance::addTask((CharacterInstance *)this_04,(Task *)pMVar3);
          pCVar14 = this_04 + 0x98;
          uVar10 = 1;
          goto LAB_001433be;
        }
        iVar5 = CapcomMath::random(2);
        if (iVar5 == 0) {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x9a);
        }
        else {
          sVar1 = *(short *)(*(int *)(unaff_r5 + 0x34) + 0x98);
        }
        pMVar3 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(pMVar3,(CharacterInstance *)this_04,*(Cafe **)(unaff_r5 + 0x34),
                           (int)sVar1,'\0',false);
        goto LAB_00143316;
      }
      Cafe::removeCafeObject(pCVar8,this_04);
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(unaff_r5 + 0x138),iStack00000010);
      this_03 = *(Character **)(this_04 + 0x8c);
      if (this_03 != (Character *)0x0) {
        Character::~Character(this_03);
        operator_delete(this_03);
      }
      (**(code **)(*(int *)this_04 + 4))(this_04);
      iStack00000010 = iStack00000010 + -1;
    }
    else {
      iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_04 + 0x8c) + 0x40),0);
      if (iVar5 != 0) {
        this_04[0x84] = (CafeObject)0x0;
      }
LAB_00143410:
      iVar5 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this_04 + 0x8c) + 0x40),0);
      if (iVar5 == 0) {
        GameStateFriendCafe::checkOverlap(unaff_r5,(CharacterInstance *)this_04);
      }
    }
    iStack00000010 = iStack00000010 + 1;
  } while( true );
}


