/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001276ec Vector<Character*>::removeElement */

/* Vector<Character*>::removeElement(Character*) */

Character * __thiscall
Vector<Character*>::removeElement(Vector<Character*> *this,Character *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  Character *pCVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (Character *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pCVar3 = (Character *)*puVar1;
    if (pCVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pCVar3;
  }
  return (Character *)0x0;
}


