/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c04f0 Cafe::tick */

/* Cafe::tick(long) */

void __thiscall Cafe::tick(Cafe *this,long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Stove *pSVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  CapcomOrderableListNode *pCVar9;
  Stove SVar10;
  undefined4 *puVar11;
  CafeUIElement *pCVar12;
  undefined4 uVar13;
  CapcomOrderableList<CafeObject*> *pCVar14;
  CapcomOrderableListNode *pCVar15;
  int iVar16;
  int local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar16 = DAT_000c07cc + 0xc04fe;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x6c);
LAB_000c0560:
  puVar11 = *(undefined4 **)(this + 0x74);
  if (puVar11 != (undefined4 *)0x0) {
    pCVar12 = (CafeUIElement *)*puVar11;
    *(undefined4 *)(this + 0x74) = puVar11[1];
    if (pCVar12 != (CafeUIElement *)0x0) {
      iVar2 = *(int *)(pCVar12 + 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x30) == 0)) {
        *(CafeUIElement **)(iVar2 + 0x30) = pCVar12;
      }
      if (*(int *)(pCVar12 + 4) != 0) goto code_r0x000c051a;
      goto LAB_000c0550;
    }
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  CapcomDate::today((CapcomDate *)&local_28);
LAB_000c07fe:
  do {
    while( true ) {
      pCVar14 = (CapcomOrderableList<CafeObject*> *)(this + 0x20);
      pSVar5 = (Stove *)CapcomOrderableList<CafeObject*>::nextItem(pCVar14);
      if (pSVar5 == (Stove *)0x0) {
        allCollectXpDollar(this,true,true,param_1);
        if ((this[0xe4] != (Cafe)0x0) && (*(int *)(this + 0xe0) == 0)) {
          this[0xe4] = (Cafe)0x0;
          lVar6 = diamondToStaggeredCoords
                            (**(int **)(iVar16 + DAT_000c08d0) + -1,
                             **(int **)(iVar16 + DAT_000c08d4) + 1 +
                             **(int **)(iVar16 + DAT_000c08d8));
          iVar16 = staggeredCoordsToIndex(lVar6);
          iVar2 = getNextTileNE(iVar16);
          if (this[0xe5] == (Cafe)0x0) {
            CFPathFinder::unlinkNodes(*(CFPathFinder **)(this + 0x5c),iVar16,iVar2);
          }
          else {
            CFPathFinder::unlinkNodesOneWay(*(CFPathFinder **)(this + 0x5c),iVar2,iVar16);
          }
          pCVar14 = (CapcomOrderableList<CafeObject*> *)
                    createDistanceSortedObjectList(this,'\x03',0);
          *(undefined4 *)(pCVar14 + 0x10) = *(undefined4 *)(pCVar14 + 8);
          while (iVar16 = CapcomOrderableList<CafeObject*>::nextItem(pCVar14), iVar16 != 0) {
            if (*(int *)(iVar16 + 0x7c) != 0) {
              piVar7 = (int *)0x0;
              if (0 < *(int *)(iVar16 + 0x7c)) {
                piVar7 = (int *)**(undefined4 **)(iVar16 + 0x70);
              }
              (**(code **)(*piVar7 + 0x18))();
            }
          }
          if (*(int *)(pCVar14 + 0x14) != 0) {
            pCVar9 = *(CapcomOrderableListNode **)(pCVar14 + 8);
            while (pCVar9 != (CapcomOrderableListNode *)0x0) {
              pCVar15 = *(CapcomOrderableListNode **)(pCVar9 + 8);
              CapcomOrderableList<CafeObject*>::deleteNode(pCVar14,pCVar9);
              pCVar9 = pCVar15;
            }
            *(undefined4 *)(pCVar14 + 0x14) = 0;
            *(CapcomOrderableList<CafeObject*> **)(pCVar14 + 0xc) = pCVar14;
            *(undefined4 *)(pCVar14 + 0x10) = *(undefined4 *)(pCVar14 + 8);
          }
          operator_delete(pCVar14);
        }
        return;
      }
      iVar2 = (**(code **)(*(int *)pSVar5 + 0x14))(pSVar5);
      if (iVar2 != 3) break;
      if ((pSVar5[0xb0] != (Stove)0x0) &&
         (iVar2 = *(int *)(pSVar5 + 0xb4) - param_1, *(int *)(pSVar5 + 0xb4) = iVar2, iVar2 < 1)) {
        CapcomOrderableList<CafeObject*>::remove(pCVar14,(CafeObject *)pSVar5);
      }
      if (pSVar5[0xb8] != (Stove)0x0) {
        *(int *)(pSVar5 + 0xbc) = *(int *)(pSVar5 + 0xbc) - param_1;
        if (*(int *)(pSVar5 + 0xc0) == 2) {
          local_34 = *(int *)(pSVar5 + 0x8c);
          uVar13 = *(undefined4 *)(local_34 + 0x40);
          iVar2 = __aeabi_fcmpgt(uVar13,0);
          if (iVar2 != 0) {
            puVar11 = *(undefined4 **)(iVar16 + DAT_000c07dc);
            uVar4 = __floatsisf(param_1);
            uVar4 = __divsf3(uVar4,**(undefined4 **)(iVar16 + DAT_000c07e0));
            uVar8 = *puVar11;
LAB_000c079a:
            uVar4 = __mulsf3(uVar4,uVar8);
            uVar13 = __addsf3(uVar13,uVar4);
            uVar4 = Character::getMaxEnergy();
            iVar2 = __aeabi_fcmplt(uVar13,0);
            if (iVar2 == 0) {
              iVar2 = __aeabi_fcmpgt(uVar13,uVar4);
              if (iVar2 != 0) {
                uVar13 = uVar4;
              }
            }
            else {
              uVar13 = 0;
            }
            *(undefined4 *)(local_34 + 0x40) = uVar13;
          }
        }
        else if (*(int *)(pSVar5 + 0xc0) == 4) {
          local_34 = *(int *)(pSVar5 + 0x8c);
          uVar13 = *(undefined4 *)(local_34 + 0x40);
          iVar2 = __aeabi_fcmpgt(uVar13,0);
          if (iVar2 != 0) {
            puVar11 = *(undefined4 **)(iVar16 + DAT_000c07dc);
            uVar4 = __floatsisf(param_1);
            uVar4 = __divsf3(uVar4,**(undefined4 **)(iVar16 + DAT_000c07e0));
            uVar4 = __mulsf3(uVar4,*puVar11);
            uVar8 = **(undefined4 **)(iVar16 + DAT_000c07e4);
            goto LAB_000c079a;
          }
        }
        if (*(int *)(pSVar5 + 0xbc) < 1) {
          pSVar5 = pSVar5 + 0xb8;
          SVar10 = (Stove)0x0;
LAB_000c07fc:
          *pSVar5 = SVar10;
        }
      }
    }
    if (iVar2 != 4) {
      if (iVar2 == 1) {
        if (*(char *)(*(int *)(pSVar5 + 0x38) + 0x44) == '\x01') {
          iVar2 = Stove::isBurned(pSVar5);
          Stove::exist(pSVar5,param_1);
          if ((iVar2 == 0) && (iVar2 = Stove::isBurned(pSVar5), iVar2 != 0)) {
            this[200] = (Cafe)0x1;
          }
        }
        iVar2 = *(int *)(pSVar5 + 0x38);
        if (0 < *(short *)(iVar2 + 0x4c)) {
          uVar13 = __floatsisf(param_1 * *(short *)(iVar2 + 0x4c));
          uVar13 = __divsf3(uVar13,DAT_000c07d4);
          uVar13 = __addsf3(uVar13,*(undefined4 *)(pSVar5 + 0x4c));
          *(undefined4 *)(pSVar5 + 0x4c) = uVar13;
          iVar3 = __aeabi_fcmpge(uVar13,0x3f800000);
          if (iVar3 != 0) {
            iVar3 = *(short *)(pSVar5 + 0x42) + 1;
            if ((int)*(short *)(iVar2 + 0x4e) < *(short *)(pSVar5 + 0x42) + 1) {
              iVar3 = (int)*(short *)(iVar2 + 0x4e);
            }
            *(short *)(pSVar5 + 0x42) = (short)iVar3;
            uVar13 = __subsf3(uVar13,0x3f800000);
            *(undefined4 *)(pSVar5 + 0x4c) = uVar13;
          }
        }
        if (0 < *(short *)(iVar2 + 0x50)) {
          uVar13 = __floatsisf(param_1 * *(short *)(iVar2 + 0x50));
          uVar13 = __divsf3(uVar13,DAT_000c07d4);
          uVar13 = __addsf3(uVar13,*(undefined4 *)(pSVar5 + 0x50));
          *(undefined4 *)(pSVar5 + 0x50) = uVar13;
          iVar3 = __aeabi_fcmpge(uVar13,0x3f800000);
          if (iVar3 != 0) {
            iVar3 = *(short *)(pSVar5 + 0x44) + 1;
            if ((int)*(short *)(iVar2 + 0x52) < *(short *)(pSVar5 + 0x44) + 1) {
              iVar3 = (int)*(short *)(iVar2 + 0x52);
            }
            *(short *)(pSVar5 + 0x44) = (short)iVar3;
            uVar13 = __subsf3(uVar13,0x3f800000);
            *(undefined4 *)(pSVar5 + 0x50) = uVar13;
          }
        }
        memcpy(&local_20,pSVar5 + 0x56,7);
        if ((*(int *)(*(int *)(pSVar5 + 0x38) + 0x24) == **(int **)(iVar16 + DAT_000c07d8)) &&
           (iVar2 = CapcomDate::daysBetween(local_20,local_1c,local_28,local_24), 0 < iVar2)) {
          pSVar5[0x46] = (Stove)0x1;
        }
        if ((*(int *)(*(int *)(pSVar5 + 0x38) + 0x24) == 0x1fa) &&
           (iVar2 = CapcomDate::daysBetween(local_20,local_1c,local_28,local_24), 0 < iVar2)) {
          pSVar5 = pSVar5 + 0x46;
          SVar10 = (Stove)0x1;
          goto LAB_000c07fc;
        }
      }
      goto LAB_000c07fe;
    }
    iVar2 = *(int *)(pSVar5 + 0x34);
    *(int *)(pSVar5 + 0x34) = iVar2 - param_1;
    if (iVar2 - param_1 < 1) {
      CapcomOrderableList<CafeObject*>::remove(pCVar14,(CafeObject *)pSVar5);
      (**(code **)(*(int *)pSVar5 + 4))(pSVar5);
    }
  } while( true );
code_r0x000c051a:
  uVar1 = (**(code **)(*(int *)pCVar12 + 0x14))(pCVar12);
  if ((**(byte **)(iVar16 + DAT_000c07d0) != uVar1) ||
     (*(CafeUIElement **)(*(int *)(pCVar12 + 4) + 0x30) == pCVar12)) {
    (**(code **)(*(int *)pCVar12 + 0xc))(pCVar12,param_1);
    iVar2 = (**(code **)(*(int *)pCVar12 + 0x10))(pCVar12);
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(pCVar12 + 4) + 0x30) = 0;
LAB_000c0550:
      CapcomLinkedList<CafeUIElement*>::remove
                ((CapcomLinkedList<CafeUIElement*> *)(this + 0x68),pCVar12);
      (**(code **)(*(int *)pCVar12 + 4))(pCVar12);
    }
  }
  goto LAB_000c0560;
}


