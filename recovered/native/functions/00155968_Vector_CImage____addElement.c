/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00155968 Vector<CImage*>::addElement */

/* Vector<CImage*>::addElement(CImage*) */

void __thiscall Vector<CImage*>::addElement(Vector<CImage*> *this,CImage *param_1)

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
  *(CImage **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


