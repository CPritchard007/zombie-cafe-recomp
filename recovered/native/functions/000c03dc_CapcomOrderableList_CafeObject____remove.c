/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c03dc CapcomOrderableList<CafeObject*>::remove */

/* CapcomOrderableList<CafeObject*>::remove(CafeObject*) */

undefined4 __thiscall
CapcomOrderableList<CafeObject*>::remove(CapcomOrderableList<CafeObject*> *this,CafeObject *param_1)

{
  undefined4 uVar1;
  CapcomOrderableList<CafeObject*> *pCVar2;
  
  pCVar2 = this;
  do {
    pCVar2 = *(CapcomOrderableList<CafeObject*> **)(pCVar2 + 8);
    if (pCVar2 == (CapcomOrderableList<CafeObject*> *)0x0) {
      return 0;
    }
  } while (*(CafeObject **)pCVar2 != param_1);
  uVar1 = deleteNode(this,(CapcomOrderableListNode *)pCVar2);
  return uVar1;
}


