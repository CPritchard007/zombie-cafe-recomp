/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe808 Vector<Objective*>::addElement */

/* Vector<Objective*>::addElement(Objective*) */

void __thiscall Vector<Objective*>::addElement(Vector<Objective*> *this,Objective *param_1)

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
  *(Objective **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


