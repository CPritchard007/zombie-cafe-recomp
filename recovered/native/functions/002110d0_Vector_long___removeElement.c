/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002110d0 Vector<long>::removeElement */

/* Vector<long>::removeElement(long) */

int __thiscall Vector<long>::removeElement(Vector<long> *this,long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return 0;
    }
    piVar1 = (int *)(*(int *)(this + 8) + iVar2 * 4);
    iVar3 = *piVar1;
    if (iVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *piVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return iVar3;
  }
  return 0;
}


