/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fbf4 Cafe::removeCafeObject */

/* Cafe::removeCafeObject(CafeObject*) */

void __thiscall Cafe::removeCafeObject(Cafe *this,CafeObject *param_1)

{
  Cafe *pCVar1;
  
  pCVar1 = this + 0x20;
  do {
    pCVar1 = *(Cafe **)(pCVar1 + 8);
    if (pCVar1 == (Cafe *)0x0) {
      return;
    }
  } while (*(CafeObject **)pCVar1 != param_1);
  CapcomOrderableList<CafeObject*>::deleteNode
            ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CapcomOrderableListNode *)pCVar1);
  return;
}


