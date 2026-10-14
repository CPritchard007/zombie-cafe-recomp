/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00102a94 Vector<bool>::addElement */

/* Vector<bool>::addElement(bool) */

void __thiscall Vector<bool>::addElement(Vector<bool> *this,bool param_1)

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
  *(bool *)(*(int *)(this + 8) + iVar2 + 1) = param_1;
  return;
}


