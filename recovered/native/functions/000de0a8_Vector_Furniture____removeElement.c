/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000de0a8 Vector<Furniture*>::removeElement */

/* Vector<Furniture*>::removeElement(Furniture*) */

Furniture * __thiscall
Vector<Furniture*>::removeElement(Vector<Furniture*> *this,Furniture *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  Furniture *pFVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (Furniture *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pFVar3 = (Furniture *)*puVar1;
    if (pFVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pFVar3;
  }
  return (Furniture *)0x0;
}


