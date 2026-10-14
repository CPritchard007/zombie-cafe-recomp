/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b9f90 Vector<TrueTypeTextElement*>::removeElement */

/* Vector<TrueTypeTextElement*>::removeElement(TrueTypeTextElement*) */

TrueTypeTextElement * __thiscall
Vector<TrueTypeTextElement*>::removeElement
          (Vector<TrueTypeTextElement*> *this,TrueTypeTextElement *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  TrueTypeTextElement *pTVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (TrueTypeTextElement *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pTVar3 = (TrueTypeTextElement *)*puVar1;
    if (pTVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pTVar3;
  }
  return (TrueTypeTextElement *)0x0;
}


