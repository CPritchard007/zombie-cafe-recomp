/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c0310 CapcomOrderableList<CafeObject*>::addOrdered */

/* CapcomOrderableList<CafeObject*>::addOrdered(CafeObject*) */

void __thiscall
CapcomOrderableList<CafeObject*>::addOrdered
          (CapcomOrderableList<CafeObject*> *this,CafeObject *param_1)

{
  int iVar1;
  CapcomOrderableList<CafeObject*> *pCVar2;
  
  pCVar2 = this;
  while ((*(int *)((CapcomOrderableListNode *)pCVar2 + 8) != 0 &&
         (iVar1 = compare((CafeObject *)this,param_1), 0 < iVar1))) {
    pCVar2 = *(CapcomOrderableList<CafeObject*> **)((CapcomOrderableListNode *)pCVar2 + 8);
  }
  insert(this,param_1,(CapcomOrderableListNode *)pCVar2);
  return;
}


