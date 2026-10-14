/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fde1c ObjectiveSystem::getSetCompletion */

/* ObjectiveSystem::getSetCompletion() */

int __thiscall ObjectiveSystem::getSetCompletion(ObjectiveSystem *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(this + 8) + 1; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + (uint)(*(char *)(*(int *)(iVar2 * 4 + *(int *)(this + 0xc)) + 0xe) != '\0');
  }
  return iVar1;
}


