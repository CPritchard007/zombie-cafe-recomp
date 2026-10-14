/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f8f0 Vector<int>::lastIndexOf */

/* Vector<int>::lastIndexOf(int) const */

int __thiscall Vector<int>::lastIndexOf(Vector<int> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 4);
  iVar3 = iVar2 << 2;
  while( true ) {
    if (iVar2 < 0) {
      return -1;
    }
    piVar1 = (int *)(*(int *)(this + 8) + iVar3);
    iVar3 = iVar3 + -4;
    if (*piVar1 == param_1) break;
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}


