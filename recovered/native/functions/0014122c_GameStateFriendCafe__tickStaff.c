/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014122c GameStateFriendCafe::tickStaff */

/* GameStateFriendCafe::tickStaff(long) */

void __thiscall GameStateFriendCafe::tickStaff(GameStateFriendCafe *this,long param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ServeTask *this_00;
  CapcomOrderableList<Furniture*> *pCVar6;
  CleanupTask *this_01;
  void *pvVar7;
  int iVar8;
  long lVar9;
  MoveTask *this_02;
  CharacterInstance *pCVar10;
  Furniture *pFVar11;
  int iVar12;
  undefined4 uVar13;
  CharacterInstance *pCVar14;
  CapcomLinkedList<CharacterInstance*> *this_03;
  bool bVar15;
  int local_34;
  
  iVar5 = DAT_00141554 + 0x141240;
  if ((*(int *)(*(int *)(this + 0x34) + 0xc0) != -1) ||
     (this_03 = (CapcomLinkedList<CharacterInstance*> *)0x0,
     *(int *)(*(int *)(this + 0x34) + 0xa8) != -1)) {
    this_03 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
    *(undefined4 *)(this_03 + 4) = 0;
    *(CapcomLinkedList<CharacterInstance*> **)(this_03 + 8) = this_03;
    *(undefined4 *)(this_03 + 0x10) = 0;
    *(undefined4 *)(this_03 + 0xc) = 0;
    if (*(char *)(*(int *)(*(CharacterInstance **)(this + 0x128) + 0x8c) + 0x44) == '\x01') {
      CapcomLinkedList<CharacterInstance*>::add(this_03,*(CharacterInstance **)(this + 0x128));
    }
    for (iVar12 = 0; iVar12 < *(int *)(this + 0x28) + 1; iVar12 = iVar12 + 1) {
      pCVar10 = *(CharacterInstance **)(iVar12 * 4 + *(int *)(this + 0x134));
      if (*(char *)(*(int *)(pCVar10 + 0x8c) + 0x44) == '\x01') {
        CapcomLinkedList<CharacterInstance*>::add(this_03,pCVar10);
      }
    }
  }
  for (iVar12 = 0; iVar12 < *(int *)(this + 0x28) + 1; iVar12 = iVar12 + 1) {
    *(undefined4 *)(*(int *)(iVar12 * 4 + *(int *)(this + 0x2c)) + 0x2c) = 0;
  }
  if ((*(int *)(*(Cafe **)(this + 0x34) + 0xa8) != -1) &&
     (iVar12 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x34)), iVar12 != 0)) {
    pCVar10 = (CharacterInstance *)**(undefined4 **)(*(int *)(this + 0x34) + 0xac);
    if (pCVar10[0x34] == (CharacterInstance)0x2) {
      bVar15 = *(int *)(this_03 + 0x10) != 0;
      do {
        while( true ) {
          if (*(int *)(this_03 + 0x10) == 0) {
            if (bVar15) {
              iVar12 = *(int *)(this + 0x34);
              pCVar10 = (CharacterInstance *)
                        Vector<CharacterInstance*>::removeElementAt
                                  ((Vector<CharacterInstance*> *)(iVar12 + 0xa4),0);
              Vector<CharacterInstance*>::addElement
                        ((Vector<CharacterInstance*> *)(iVar12 + 0xb0),pCVar10);
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00141558),'C',false);
            }
            goto LAB_001413ac;
          }
          iVar12 = CapcomMath::random(*(int *)(this_03 + 0x10));
          pCVar14 = (CharacterInstance *)
                    CapcomLinkedList<CharacterInstance*>::remove(this_03,iVar12);
          if (*(int *)(pCVar14 + 0x7c) == 0) break;
          if (bVar15) {
            iVar12 = Cafe::getNextTile((int)*(short *)(pCVar10 + 0x2c),
                                       (uint)*(byte *)(*(int *)(pCVar10 + 0x8c) + 0x4c));
            iVar12 = characterCanFollow(this,pCVar14,iVar12);
            bVar15 = (bool)(bVar15 & iVar12 == 0);
          }
        }
        iVar12 = Cafe::getNextTile((int)*(short *)(pCVar10 + 0x2c),
                                   (uint)*(byte *)(*(int *)(pCVar10 + 0x8c) + 0x4c));
        iVar12 = characterCanFollow(this,pCVar14,iVar12);
      } while (iVar12 == 0);
      this_00 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_00,pCVar14,*(Cafe **)(this + 0x34),pCVar10);
      CharacterInstance::addTask(pCVar14,(Task *)this_00);
    }
    else {
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(*(int *)(this + 0x34) + 0xa4),0);
    }
  }
LAB_001413ac:
  if (*(int *)(*(int *)(this + 0x34) + 0xc0) != -1) {
    pFVar11 = (Furniture *)**(undefined4 **)(*(int *)(this + 0x34) + 0xc4);
    bVar15 = *(int *)(this_03 + 0x10) != 0;
    do {
      while( true ) {
        if (*(int *)(this_03 + 0x10) == 0) goto LAB_00141726;
        iVar12 = CapcomMath::random(*(int *)(this_03 + 0x10));
        pCVar10 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_03,iVar12);
        if (*(int *)(pCVar10 + 0x7c) == 0) break;
        if ((bVar15) &&
           (iVar12 = TutorialSystem::isTutorialCompleted
                               (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00141558),'D'),
           iVar12 == 0)) {
          pCVar6 = (CapcomOrderableList<Furniture*> *)
                   Cafe::createDistanceSortedFurnitureList
                             (*(Cafe **)(this + 0x34),'\v',(int)*(short *)(pCVar10 + 0x2c));
          *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
          do {
            iVar12 = CapcomOrderableList<Furniture*>::nextItem(pCVar6);
            if (iVar12 == 0) goto LAB_00141704;
            cVar4 = characterCanFollow(this,pCVar10,(int)*(short *)(iVar12 + 0x2c));
          } while (cVar4 != '\x01');
          bVar15 = false;
LAB_00141704:
          CapcomOrderableList<Furniture*>::removeAll(pCVar6);
          operator_delete(pCVar6);
        }
      }
      pCVar6 = (CapcomOrderableList<Furniture*> *)
               Cafe::createDistanceSortedFurnitureList
                         (*(Cafe **)(this + 0x34),'\v',(int)*(short *)(pCVar10 + 0x2c));
      *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
      do {
        iVar12 = CapcomOrderableList<Furniture*>::nextItem(pCVar6);
        if (iVar12 == 0) {
          bVar3 = false;
          goto LAB_00141714;
        }
        iVar12 = characterCanFollow(this,pCVar10,(int)*(short *)(iVar12 + 0x2c));
      } while (iVar12 == 0);
      this_01 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_01,pCVar10,*(Cafe **)(this + 0x34),pFVar11);
      CharacterInstance::addTask(pCVar10,(Task *)this_01);
      bVar15 = false;
      bVar3 = true;
LAB_00141714:
      CapcomOrderableList<Furniture*>::removeAll(pCVar6);
      operator_delete(pCVar6);
    } while (!bVar3);
LAB_00141726:
    if (bVar15) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00141558),'C',false);
    }
  }
  if (this_03 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
    if (*(int *)(this_03 + 0x10) != 0) {
      while (pvVar7 = *(void **)(this_03 + 4), pvVar7 != (void *)0x0) {
        uVar13 = *(undefined4 *)((int)pvVar7 + 4);
        operator_delete(pvVar7);
        *(undefined4 *)(this_03 + 4) = uVar13;
      }
      *(undefined4 *)(this_03 + 0x10) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_03 + 8) = this_03;
      *(undefined4 *)(this_03 + 0xc) = 0;
    }
    operator_delete(this_03);
  }
  local_34 = -1;
  do {
    if (*(int *)(this + 0x28) + 1 <= local_34) {
      return;
    }
    if (local_34 < 0) {
      pCVar10 = *(CharacterInstance **)(this + 0x128);
    }
    else {
      pCVar10 = *(CharacterInstance **)(local_34 * 4 + *(int *)(this + 0x134));
    }
    if (*(int *)(pCVar10 + 0x7c) == 0) {
      iVar12 = Cafe::getFurniture(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar10 + 0x2c));
      if ((iVar12 == 0) &&
         (iVar12 = Cafe::isInside(*(Cafe **)(this + 0x34),(int)*(short *)(pCVar10 + 0x2c)),
         iVar12 != 0)) {
        for (iVar12 = -1; iVar12 < *(int *)(this + 0x28) + 1; iVar12 = iVar12 + 1) {
          if (local_34 != iVar12) {
            if (iVar12 < 0) {
              pCVar14 = *(CharacterInstance **)(this + 0x128);
            }
            else {
              pCVar14 = *(CharacterInstance **)(iVar12 * 4 + *(int *)(this + 0x134));
            }
            iVar8 = CharacterInstance::isMoving(pCVar14);
            if ((iVar8 == 0) && (*(short *)(pCVar14 + 0x2c) == *(short *)(pCVar10 + 0x2c)))
            goto LAB_0014155c;
          }
        }
        bVar15 = false;
      }
      else {
LAB_0014155c:
        bVar15 = true;
      }
      iVar12 = CapcomMath::random(0x14);
      if (iVar12 == 0) {
        if (*(char *)(*(int *)(pCVar10 + 0x8c) + 0x44) == '\x01') {
          uVar1 = **(ushort **)(iVar5 + DAT_00141738);
          iVar12 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x34) + 0xa0));
          uVar2 = **(ushort **)(iVar5 + DAT_0014173c);
          iVar8 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x34) + 0xa1));
          lVar9 = Cafe::diamondToStaggeredCoords
                            (uVar2 + 1 + iVar8 & 0xffff | ((uVar1 - 1) - iVar12) * 0x10000);
          iVar12 = Cafe::staggeredCoordsToIndex(lVar9);
          this_02 = (MoveTask *)operator_new(0x48);
          MoveTask::MoveTask(this_02,pCVar10,*(Cafe **)(this + 0x34),iVar12,'\0',false);
        }
        else {
          this_02 = (MoveTask *)operator_new(0x2c);
          iVar12 = *(int *)(iVar5 + DAT_00141740);
          *(undefined4 *)((Task *)this_02 + 0xc) = 0;
          *(undefined4 *)((Task *)this_02 + 0x18) = 0;
          *(int *)this_02 = iVar12 + 8;
          *(Task **)((Task *)this_02 + 0x10) = (Task *)this_02 + 8;
          iVar12 = DAT_00141744;
          *(undefined4 *)((Task *)this_02 + 0x14) = 0;
          *(CharacterInstance **)((Task *)this_02 + 0x20) = pCVar10;
          ((Task *)this_02)[4] = (Task)0x0;
          ((Task *)this_02)[5] = (Task)0x0;
          iVar8 = **(int **)(iVar5 + iVar12) + 1;
          **(int **)(iVar5 + iVar12) = iVar8;
          *(int *)((Task *)this_02 + 0x1c) = iVar8;
          *(int *)this_02 = *(int *)(iVar5 + DAT_00141748) + 8;
          *(undefined4 *)((Task *)this_02 + 0x24) = 1000;
          ((Task *)this_02)[0x28] = (Task)0x1;
        }
      }
      else if (bVar15) {
        uVar1 = **(ushort **)(iVar5 + DAT_00141738);
        iVar12 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x34) + 0xa0));
        uVar2 = **(ushort **)(iVar5 + DAT_0014173c);
        iVar8 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x34) + 0xa1));
        lVar9 = Cafe::diamondToStaggeredCoords
                          (uVar2 + 1 + iVar8 & 0xffff | ((uVar1 - 1) - iVar12) * 0x10000);
        iVar12 = Cafe::staggeredCoordsToIndex(lVar9);
        this_02 = (MoveTask *)operator_new(0x48);
        MoveTask::MoveTask(this_02,pCVar10,*(Cafe **)(this + 0x34),iVar12,'\0',false);
      }
      else {
        this_02 = (MoveTask *)operator_new(0x2c);
        iVar12 = *(int *)(iVar5 + DAT_00141740);
        *(undefined4 *)((Task *)this_02 + 0xc) = 0;
        *(undefined4 *)((Task *)this_02 + 0x18) = 0;
        *(int *)this_02 = iVar12 + 8;
        *(Task **)((Task *)this_02 + 0x10) = (Task *)this_02 + 8;
        iVar12 = DAT_00141744;
        *(undefined4 *)((Task *)this_02 + 0x14) = 0;
        *(CharacterInstance **)((Task *)this_02 + 0x20) = pCVar10;
        ((Task *)this_02)[4] = (Task)0x0;
        ((Task *)this_02)[5] = (Task)0x0;
        iVar8 = **(int **)(iVar5 + iVar12) + 1;
        **(int **)(iVar5 + iVar12) = iVar8;
        *(int *)((Task *)this_02 + 0x1c) = iVar8;
        *(int *)this_02 = *(int *)(iVar5 + DAT_00141748) + 8;
        *(undefined4 *)((Task *)this_02 + 0x24) = 1000;
        ((Task *)this_02)[0x28] = (Task)0x0;
      }
      CharacterInstance::addTask(pCVar10,(Task *)this_02);
    }
    (**(code **)(*(int *)pCVar10 + 0x1c))(pCVar10,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x34) + 0x20),
               (CafeObject *)pCVar10);
    local_34 = local_34 + 1;
  } while( true );
}


