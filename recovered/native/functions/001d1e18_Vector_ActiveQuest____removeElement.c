/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1e18 Vector<ActiveQuest*>::removeElement */

/* Vector<ActiveQuest*>::removeElement(ActiveQuest*) */

ActiveQuest * __thiscall
Vector<ActiveQuest*>::removeElement(Vector<ActiveQuest*> *this,ActiveQuest *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ActiveQuest *pAVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (ActiveQuest *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pAVar3 = (ActiveQuest *)*puVar1;
    if (pAVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pAVar3;
  }
  return (ActiveQuest *)0x0;
}


