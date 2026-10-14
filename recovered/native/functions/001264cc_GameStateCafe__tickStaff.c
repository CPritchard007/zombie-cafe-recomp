/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001264cc GameStateCafe::tickStaff */

/* GameStateCafe::tickStaff(long) */

void __thiscall GameStateCafe::tickStaff(GameStateCafe *this,long param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  ServeTask *this_00;
  CapcomOrderableList<Furniture*> *pCVar6;
  CleanupTask *this_01;
  void *pvVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  WaitTask *this_02;
  int iVar11;
  char *pcVar12;
  CharacterInstance *pCVar13;
  Furniture *pFVar14;
  undefined4 uVar15;
  CharacterInstance *pCVar16;
  CapcomLinkedList<CharacterInstance*> *this_03;
  int iVar17;
  bool bVar18;
  
  iVar11 = DAT_00126818 + 0x1264e0;
  if ((*(int *)(*(int *)(this + 0x14) + 0xc0) != -1) ||
     (this_03 = (CapcomLinkedList<CharacterInstance*> *)0x0,
     *(int *)(*(int *)(this + 0x14) + 0xa8) != -1)) {
    this_03 = (CapcomLinkedList<CharacterInstance*> *)operator_new(0x14);
    *(undefined4 *)(this_03 + 4) = 0;
    *(CapcomLinkedList<CharacterInstance*> **)(this_03 + 8) = this_03;
    *(undefined4 *)(this_03 + 0x10) = 0;
    *(undefined4 *)(this_03 + 0xc) = 0;
    iVar17 = *(int *)(this + 0x18);
    if (*(char *)(*(int *)(iVar17 + 0x8c) + 0x44) == '\x01') {
      piVar5 = (int *)operator_new(8);
      piVar5[1] = 0;
      *(int **)(*(int *)(this_03 + 8) + 4) = piVar5;
      *(int **)(this_03 + 8) = piVar5;
      *piVar5 = iVar17;
      *(undefined4 *)(*(int *)(this_03 + 8) + 4) = 0;
      *(int *)(this_03 + 0x10) = *(int *)(this_03 + 0x10) + 1;
    }
    for (iVar17 = 0; iVar17 < *(int *)(this + 0x20) + 1; iVar17 = iVar17 + 1) {
      iVar8 = *(int *)(iVar17 * 4 + *(int *)(this + 0x24));
      if (*(char *)(*(int *)(iVar8 + 0x8c) + 0x44) == '\x01') {
        piVar5 = (int *)operator_new(8);
        piVar5[1] = 0;
        *(int **)(*(int *)(this_03 + 8) + 4) = piVar5;
        *(int **)(this_03 + 8) = piVar5;
        *piVar5 = iVar8;
        *(undefined4 *)(*(int *)(this_03 + 8) + 4) = 0;
        *(int *)(this_03 + 0x10) = *(int *)(this_03 + 0x10) + 1;
      }
    }
  }
  for (iVar17 = 0; iVar17 < *(int *)(this + 0x20) + 1; iVar17 = iVar17 + 1) {
    if ((*(int *)(this + 0x54) == *(int *)(iVar17 * 4 + *(int *)(this + 0x24))) &&
       (pcVar12 = (char *)(*(int *)(this + 0x54) + 0xc6), *pcVar12 != '\0')) {
      *pcVar12 = '\0';
      CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(this + 0xac),0));
    }
  }
  if ((*(int *)(*(Cafe **)(this + 0x14) + 0xa8) != -1) &&
     (iVar17 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x14)), iVar17 != 0)) {
    pCVar13 = (CharacterInstance *)**(undefined4 **)(*(int *)(this + 0x14) + 0xac);
    if (pCVar13[0x34] == (CharacterInstance)0x2) {
      bVar18 = *(int *)(this_03 + 0x10) != 0;
      do {
        while( true ) {
          if (*(int *)(this_03 + 0x10) == 0) {
            if (bVar18) {
              iVar17 = *(int *)(this + 0x14);
              pCVar13 = (CharacterInstance *)
                        Vector<CharacterInstance*>::removeElementAt
                                  ((Vector<CharacterInstance*> *)(iVar17 + 0xa4),0);
              Vector<CharacterInstance*>::addElement
                        ((Vector<CharacterInstance*> *)(iVar17 + 0xb0),pCVar13);
              TutorialSystem::triggerEvent
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012681c),'C',false);
            }
            goto LAB_00126688;
          }
          iVar17 = CapcomMath::random(*(int *)(this_03 + 0x10));
          pCVar16 = (CharacterInstance *)
                    CapcomLinkedList<CharacterInstance*>::remove(this_03,iVar17);
          if (*(int *)(pCVar16 + 0x7c) == 0) break;
          if (bVar18) {
            iVar17 = Cafe::getNextTile((int)*(short *)(pCVar13 + 0x2c),
                                       (uint)*(byte *)(*(int *)(pCVar13 + 0x8c) + 0x4c));
            iVar17 = characterCanFollow(this,pCVar16,iVar17);
            bVar18 = (bool)(bVar18 & iVar17 == 0);
          }
        }
        iVar17 = Cafe::getNextTile((int)*(short *)(pCVar13 + 0x2c),
                                   (uint)*(byte *)(*(int *)(pCVar13 + 0x8c) + 0x4c));
        iVar17 = characterCanFollow(this,pCVar16,iVar17);
      } while (iVar17 == 0);
      this_00 = (ServeTask *)operator_new(0x4c);
      ServeTask::ServeTask(this_00,pCVar16,*(Cafe **)(this + 0x14),pCVar13);
      CharacterInstance::addTask(pCVar16,(Task *)this_00);
    }
    else {
      Vector<CharacterInstance*>::removeElementAt
                ((Vector<CharacterInstance*> *)(*(int *)(this + 0x14) + 0xa4),0);
    }
  }
LAB_00126688:
  if (*(int *)(*(int *)(this + 0x14) + 0xc0) != -1) {
    pFVar14 = (Furniture *)**(undefined4 **)(*(int *)(this + 0x14) + 0xc4);
    bVar18 = *(int *)(this_03 + 0x10) != 0;
    do {
      while( true ) {
        if (*(int *)(this_03 + 0x10) == 0) goto LAB_0012698a;
        iVar17 = CapcomMath::random(*(int *)(this_03 + 0x10));
        pCVar13 = (CharacterInstance *)CapcomLinkedList<CharacterInstance*>::remove(this_03,iVar17);
        if (*(int *)(pCVar13 + 0x7c) == 0) break;
        if ((bVar18) &&
           (iVar17 = TutorialSystem::isTutorialCompleted
                               (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012681c),'D'),
           iVar17 == 0)) {
          pCVar6 = (CapcomOrderableList<Furniture*> *)
                   Cafe::createDistanceSortedFurnitureList
                             (*(Cafe **)(this + 0x14),'\v',(int)*(short *)(pCVar13 + 0x2c));
          *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
          do {
            iVar17 = CapcomOrderableList<Furniture*>::nextItem(pCVar6);
            if (iVar17 == 0) goto LAB_00126968;
            cVar4 = characterCanFollow(this,pCVar13,(int)*(short *)(iVar17 + 0x2c));
          } while (cVar4 != '\x01');
          bVar18 = false;
LAB_00126968:
          CapcomOrderableList<Furniture*>::removeAll(pCVar6);
          operator_delete(pCVar6);
        }
      }
      pCVar6 = (CapcomOrderableList<Furniture*> *)
               Cafe::createDistanceSortedFurnitureList
                         (*(Cafe **)(this + 0x14),'\v',(int)*(short *)(pCVar13 + 0x2c));
      *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
      do {
        iVar17 = CapcomOrderableList<Furniture*>::nextItem(pCVar6);
        if (iVar17 == 0) {
          bVar3 = false;
          goto LAB_00126978;
        }
        iVar17 = characterCanFollow(this,pCVar13,(int)*(short *)(iVar17 + 0x2c));
      } while (iVar17 == 0);
      this_01 = (CleanupTask *)operator_new(0x44);
      CleanupTask::CleanupTask(this_01,pCVar13,*(Cafe **)(this + 0x14),pFVar14);
      CharacterInstance::addTask(pCVar13,(Task *)this_01);
      bVar18 = false;
      bVar3 = true;
LAB_00126978:
      CapcomOrderableList<Furniture*>::removeAll(pCVar6);
      operator_delete(pCVar6);
    } while (!bVar3);
LAB_0012698a:
    if (bVar18) {
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0012681c),'C',false);
    }
  }
  if (this_03 != (CapcomLinkedList<CharacterInstance*> *)0x0) {
    if (*(int *)(this_03 + 0x10) != 0) {
      while (pvVar7 = *(void **)(this_03 + 4), pvVar7 != (void *)0x0) {
        uVar15 = *(undefined4 *)((int)pvVar7 + 4);
        operator_delete(pvVar7);
        *(undefined4 *)(this_03 + 4) = uVar15;
      }
      *(undefined4 *)(this_03 + 0x10) = 0;
      *(CapcomLinkedList<CharacterInstance*> **)(this_03 + 8) = this_03;
      *(undefined4 *)(this_03 + 0xc) = 0;
    }
    operator_delete(this_03);
  }
  iVar17 = -1;
  do {
    if (*(int *)(this + 0x20) + 1 <= iVar17) {
      return;
    }
    if (iVar17 < 0) {
      pCVar13 = *(CharacterInstance **)(this + 0x18);
    }
    else {
      pCVar13 = *(CharacterInstance **)(iVar17 * 4 + *(int *)(this + 0x24));
    }
    if (*(int *)(pCVar13 + 0x7c) == 0) {
      iVar8 = Cafe::getFurniture(*(Cafe **)(this + 0x14),(int)*(short *)(pCVar13 + 0x2c));
      if ((iVar8 == 0) &&
         (iVar8 = Cafe::isInside(*(Cafe **)(this + 0x14),(int)*(short *)(pCVar13 + 0x2c)),
         iVar8 != 0)) {
        for (iVar8 = -1; iVar8 < *(int *)(this + 0x20) + 1; iVar8 = iVar8 + 1) {
          if (iVar17 != iVar8) {
            if (iVar8 < 0) {
              pCVar16 = *(CharacterInstance **)(this + 0x18);
            }
            else {
              pCVar16 = *(CharacterInstance **)(iVar8 * 4 + *(int *)(this + 0x24));
            }
            iVar9 = CharacterInstance::isMoving(pCVar16);
            if ((iVar9 == 0) && (*(short *)(pCVar16 + 0x2c) == *(short *)(pCVar13 + 0x2c)))
            goto LAB_00126820;
          }
        }
        bVar18 = false;
      }
      else {
LAB_00126820:
        bVar18 = true;
      }
      iVar8 = CapcomMath::random(0x14);
      if (iVar8 == 0) {
        if (*(char *)(*(int *)(pCVar13 + 0x8c) + 0x44) == '\x01') {
          uVar1 = **(ushort **)(iVar11 + DAT_0012699c);
          iVar8 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x14) + 0xa0));
          uVar2 = **(ushort **)(iVar11 + DAT_001269a0);
          iVar9 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x14) + 0xa1));
          lVar10 = Cafe::diamondToStaggeredCoords
                             (uVar2 + 1 + iVar9 & 0xffff | ((uVar1 - 1) - iVar8) * 0x10000);
          iVar8 = Cafe::staggeredCoordsToIndex(lVar10);
          this_02 = (WaitTask *)operator_new(0x48);
          MoveTask::MoveTask((MoveTask *)this_02,pCVar13,*(Cafe **)(this + 0x14),iVar8,'\0',false);
        }
        else {
          this_02 = (WaitTask *)operator_new(0x2c);
          WaitTask::WaitTask(this_02,pCVar13,1000,true);
        }
      }
      else if (bVar18) {
        uVar1 = **(ushort **)(iVar11 + DAT_0012699c);
        iVar8 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x14) + 0xa0));
        uVar2 = **(ushort **)(iVar11 + DAT_001269a0);
        iVar9 = CapcomMath::random((uint)*(byte *)(*(int *)(this + 0x14) + 0xa1));
        lVar10 = Cafe::diamondToStaggeredCoords
                           (uVar2 + 1 + iVar9 & 0xffff | ((uVar1 - 1) - iVar8) * 0x10000);
        iVar8 = Cafe::staggeredCoordsToIndex(lVar10);
        this_02 = (WaitTask *)operator_new(0x48);
        MoveTask::MoveTask((MoveTask *)this_02,pCVar13,*(Cafe **)(this + 0x14),iVar8,'\0',false);
      }
      else {
        this_02 = (WaitTask *)operator_new(0x2c);
        WaitTask::WaitTask(this_02,pCVar13,1000,bVar18);
      }
      CharacterInstance::addTask(pCVar13,(Task *)this_02);
    }
    (**(code **)(*(int *)pCVar13 + 0x1c))(pCVar13,param_1);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(*(int *)(this + 0x14) + 0x20),
               (CafeObject *)pCVar13);
    iVar17 = iVar17 + 1;
  } while( true );
}


