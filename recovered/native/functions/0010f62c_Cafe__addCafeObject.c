/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010f62c Cafe::addCafeObject */

/* Cafe::addCafeObject(CafeObject*) */

void __thiscall Cafe::addCafeObject(Cafe *this,CafeObject *param_1)

{
  int iVar1;
  CafeObject *pCVar2;
  CafeObject *this_00;
  
  this_00 = (CafeObject *)(this + 0x20);
  pCVar2 = this_00;
  while ((*(int *)((CapcomOrderableListNode *)pCVar2 + 8) != 0 &&
         (iVar1 = CapcomOrderableList<CafeObject*>::compare(this_00,param_1), 0 < iVar1))) {
    pCVar2 = *(CafeObject **)((CapcomOrderableListNode *)pCVar2 + 8);
  }
  CapcomOrderableList<CafeObject*>::insert
            ((CapcomOrderableList<CafeObject*> *)this_00,param_1,(CapcomOrderableListNode *)pCVar2);
  return;
}


