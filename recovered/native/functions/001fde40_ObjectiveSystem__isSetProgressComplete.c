/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fde40 ObjectiveSystem::isSetProgressComplete */

/* ObjectiveSystem::isSetProgressComplete() */

undefined4 __thiscall ObjectiveSystem::isSetProgressComplete(ObjectiveSystem *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 8) + 1 <= iVar2) {
      return 1;
    }
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(this + 0xc));
    if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + 8)) break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}


