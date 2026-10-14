/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bff3c Cafe::createDistanceSortedCustomerList */

/* Cafe::createDistanceSortedCustomerList(int) */

undefined8 Cafe::createDistanceSortedCustomerList(int param_1)

{
  long lVar1;
  CharacterInstance *pCVar2;
  int iVar3;
  int *piVar4;
  int in_r1;
  undefined4 uVar5;
  undefined4 local_1c [2];
  
  lVar1 = indexToStaggeredCoords(in_r1);
  local_1c[0] = staggeredToDiamondCoords(lVar1);
  pCVar2 = (CharacterInstance *)operator_new(0x28);
  pCVar2[0x18] = (CharacterInstance)0x1;
  uVar5 = *(undefined4 *)(DAT_000bffb8 + 0xbff60);
  *(undefined4 *)(pCVar2 + 8) = 0;
  *(undefined4 *)(pCVar2 + 4) = 0;
  *(undefined4 *)(pCVar2 + 0x20) = uVar5;
  *(undefined4 **)(pCVar2 + 0x24) = local_1c;
  *(CharacterInstance **)(pCVar2 + 0xc) = pCVar2;
  *(undefined4 *)(pCVar2 + 0x14) = 0;
  *(undefined4 *)(pCVar2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
  while (piVar4 = (int *)CapcomOrderableList<CafeObject*>::nextItem
                                   ((CapcomOrderableList<CafeObject*> *)(param_1 + 0x20)),
        piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
    if (((iVar3 == 3) && (iVar3 = (**(code **)(*piVar4 + 0x20))(piVar4), iVar3 == 1)) &&
       (iVar3 = isInside((Cafe *)param_1,(int)(short)piVar4[0xb]), iVar3 != 0)) {
      CapcomOrderableList<CharacterInstance*>::addOrdered(pCVar2);
    }
  }
  return CONCAT44(param_1,pCVar2);
}


