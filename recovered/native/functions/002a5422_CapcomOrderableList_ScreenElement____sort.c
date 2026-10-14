/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5422 CapcomOrderableList<ScreenElement*>::sort */

/* CapcomOrderableList<ScreenElement*>::sort(ScreenElement*) */

undefined4 __thiscall
CapcomOrderableList<ScreenElement*>::sort
          (CapcomOrderableList<ScreenElement*> *this,ScreenElement *param_1)

{
  int iVar1;
  ScreenElement *pSVar2;
  CapcomOrderableListNode *pCVar3;
  CapcomOrderableList<ScreenElement*> *pCVar4;
  
  pCVar4 = this;
  do {
    pCVar4 = *(CapcomOrderableList<ScreenElement*> **)(pCVar4 + 8);
    if (pCVar4 == (CapcomOrderableList<ScreenElement*> *)0x0) {
      return 0;
    }
    pCVar3 = (CapcomOrderableListNode *)pCVar4;
  } while (*(ScreenElement **)pCVar4 != param_1);
  while ((*(CapcomOrderableList<ScreenElement*> **)(pCVar3 + 4) != this &&
         (iVar1 = compare((ScreenElement *)this,param_1), iVar1 < 0))) {
    pCVar3 = *(CapcomOrderableListNode **)(pCVar3 + 4);
  }
  if (pCVar3 == (CapcomOrderableListNode *)pCVar4) {
    while ((*(int *)(pCVar3 + 8) != 0 && (iVar1 = compare((ScreenElement *)this,param_1), 0 < iVar1)
           )) {
      pCVar3 = *(CapcomOrderableListNode **)(pCVar3 + 8);
    }
  }
  else {
    pCVar3 = *(CapcomOrderableListNode **)(pCVar3 + 4);
  }
  if (pCVar3 != (CapcomOrderableListNode *)pCVar4) {
    pSVar2 = (ScreenElement *)deleteNode(this,(CapcomOrderableListNode *)pCVar4);
    insert(this,pSVar2,pCVar3);
  }
  return 1;
}


