/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c00a4 Cafe::getAppropriateCountersForDish */

/* Cafe::getAppropriateCountersForDish(int, int) */

ServingCounter * __thiscall Cafe::getAppropriateCountersForDish(Cafe *this,int param_1,int param_2)

{
  ServingCounter *pSVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  Cafe *local_1c;
  int local_18;
  int local_14;
  
  local_1c = this;
  local_18 = param_1;
  local_14 = param_2;
  pSVar1 = (ServingCounter *)operator_new(0x28);
  pSVar1[0x18] = (ServingCounter)0x1;
  uVar4 = *(undefined4 *)(DAT_000c010c + 0xc00c2);
  *(Cafe ***)(pSVar1 + 0x24) = &local_1c;
  *(undefined4 *)(pSVar1 + 8) = 0;
  *(undefined4 *)(pSVar1 + 4) = 0;
  *(undefined4 *)(pSVar1 + 0x20) = uVar4;
  *(ServingCounter **)(pSVar1 + 0xc) = pSVar1;
  *(undefined4 *)(pSVar1 + 0x14) = 0;
  *(undefined4 *)(pSVar1 + 0x10) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  while (piVar3 = (int *)CapcomOrderableList<CafeObject*>::nextItem
                                   ((CapcomOrderableList<CafeObject*> *)(this + 0x20)),
        piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if ((iVar2 == 1) && (*(char *)(piVar3[0xe] + 0x44) == '\x02')) {
      CapcomOrderableList<ServingCounter*>::addOrdered(pSVar1);
    }
  }
  return pSVar1;
}


