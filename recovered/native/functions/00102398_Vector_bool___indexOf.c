/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00102398 Vector<bool>::indexOf */

/* Vector<bool>::indexOf(bool) const */

int __thiscall Vector<bool>::indexOf(Vector<bool> *this,bool param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar1) {
      return -1;
    }
    if ((bool)*(char *)(*(int *)(this + 8) + iVar1) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


