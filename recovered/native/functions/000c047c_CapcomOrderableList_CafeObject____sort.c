/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c047c CapcomOrderableList<CafeObject*>::sort */

/* CapcomOrderableList<CafeObject*>::sort(CafeObject*) */

undefined4 __thiscall
CapcomOrderableList<CafeObject*>::sort(CapcomOrderableList<CafeObject*> *this,CafeObject *param_1)

{
  int iVar1;
  CafeObject *pCVar2;
  CapcomOrderableListNode *pCVar3;
  CapcomOrderableList<CafeObject*> *pCVar4;
  
  pCVar4 = this;
  do {
    pCVar4 = *(CapcomOrderableList<CafeObject*> **)(pCVar4 + 8);
    if (pCVar4 == (CapcomOrderableList<CafeObject*> *)0x0) {
      return 0;
    }
    pCVar3 = (CapcomOrderableListNode *)pCVar4;
  } while (*(CafeObject **)pCVar4 != param_1);
  while ((*(CapcomOrderableList<CafeObject*> **)(pCVar3 + 4) != this &&
         (iVar1 = compare((CafeObject *)this,param_1), iVar1 < 0))) {
    pCVar3 = *(CapcomOrderableListNode **)(pCVar3 + 4);
  }
  if (pCVar3 == (CapcomOrderableListNode *)pCVar4) {
    while ((*(int *)(pCVar3 + 8) != 0 && (iVar1 = compare((CafeObject *)this,param_1), 0 < iVar1)))
    {
      pCVar3 = *(CapcomOrderableListNode **)(pCVar3 + 8);
    }
  }
  else {
    pCVar3 = *(CapcomOrderableListNode **)(pCVar3 + 4);
  }
  if (pCVar3 != (CapcomOrderableListNode *)pCVar4) {
    pCVar2 = (CafeObject *)deleteNode(this,(CapcomOrderableListNode *)pCVar4);
    insert(this,pCVar2,pCVar3);
  }
  return 1;
}


