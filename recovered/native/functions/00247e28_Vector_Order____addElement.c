/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247e28 Vector<Order*>::addElement */

/* Vector<Order*>::addElement(Order*) */

void __thiscall Vector<Order*>::addElement(Vector<Order*> *this,Order *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4) + 2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(this,iVar1,-1);
  }
  iVar2 = *(int *)(this + 4);
  *(int *)(this + 4) = iVar2 + 1;
  *(Order **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


