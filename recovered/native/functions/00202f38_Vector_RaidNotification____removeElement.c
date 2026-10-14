/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202f38 Vector<RaidNotification*>::removeElement */

/* Vector<RaidNotification*>::removeElement(RaidNotification*) */

RaidNotification * __thiscall
Vector<RaidNotification*>::removeElement(Vector<RaidNotification*> *this,RaidNotification *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  RaidNotification *pRVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (RaidNotification *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pRVar3 = (RaidNotification *)*puVar1;
    if (pRVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pRVar3;
  }
  return (RaidNotification *)0x0;
}


