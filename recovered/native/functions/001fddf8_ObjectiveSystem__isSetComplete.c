/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fddf8 ObjectiveSystem::isSetComplete */

/* ObjectiveSystem::isSetComplete() */

undefined4 __thiscall ObjectiveSystem::isSetComplete(ObjectiveSystem *this)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 8) + 1 <= iVar1) {
      return 1;
    }
    if (*(char *)(*(int *)(iVar1 * 4 + *(int *)(this + 0xc)) + 0xe) == '\0') break;
    iVar1 = iVar1 + 1;
  }
  return 0;
}


