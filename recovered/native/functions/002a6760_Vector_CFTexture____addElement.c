/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6760 Vector<CFTexture*>::addElement */

/* Vector<CFTexture*>::addElement(CFTexture*) */

void __thiscall Vector<CFTexture*>::addElement(Vector<CFTexture*> *this,CFTexture *param_1)

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
  *(CFTexture **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


