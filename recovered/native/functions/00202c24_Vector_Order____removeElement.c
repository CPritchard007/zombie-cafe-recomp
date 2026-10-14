/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202c24 Vector<Order*>::removeElement */

/* Vector<Order*>::removeElement(Order*) */

Order * __thiscall Vector<Order*>::removeElement(Vector<Order*> *this,Order *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  Order *pOVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (Order *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pOVar3 = (Order *)*puVar1;
    if (pOVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pOVar3;
  }
  return (Order *)0x0;
}


