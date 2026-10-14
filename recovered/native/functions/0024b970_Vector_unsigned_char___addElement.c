/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024b970 Vector<unsigned_char>::addElement */

/* Vector<unsigned char>::addElement(unsigned char) */

void __thiscall Vector<unsigned_char>::addElement(Vector<unsigned_char> *this,uchar param_1)

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
  *(uchar *)(*(int *)(this + 8) + iVar2 + 1) = param_1;
  return;
}


