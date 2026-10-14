/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ffdf6 Vector<ZCImageButton*>::addElement */

/* Vector<ZCImageButton*>::addElement(ZCImageButton*) */

void __thiscall
Vector<ZCImageButton*>::addElement(Vector<ZCImageButton*> *this,ZCImageButton *param_1)

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
  *(ZCImageButton **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


