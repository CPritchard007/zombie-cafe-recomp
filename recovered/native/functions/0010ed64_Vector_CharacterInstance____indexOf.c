/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ed64 Vector<CharacterInstance*>::indexOf */

/* Vector<CharacterInstance*>::indexOf(CharacterInstance*) const */

int __thiscall
Vector<CharacterInstance*>::indexOf(Vector<CharacterInstance*> *this,CharacterInstance *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar1) {
      return -1;
    }
    if (*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 8)) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


