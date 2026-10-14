/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a0c2 Vector<unsigned_short>::addElement */

/* Vector<unsigned short>::addElement(unsigned short) */

void __thiscall Vector<unsigned_short>::addElement(Vector<unsigned_short> *this,ushort param_1)

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
  *(ushort *)((iVar2 + 1) * 2 + *(int *)(this + 8)) = param_1;
  return;
}


