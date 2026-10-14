/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe3fc ObjectiveSystem::actionRequired */

/* ObjectiveSystem::actionRequired() */

undefined4 __thiscall ObjectiveSystem::actionRequired(ObjectiveSystem *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  while( true ) {
    if (*(int *)(this + 8) + 1 <= iVar3) {
      return uVar2;
    }
    iVar1 = *(int *)(iVar3 * 4 + *(int *)(this + 0xc));
    if ((*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 4)) && (*(char *)(iVar1 + 0xe) == '\0')) break;
    if (*(char *)(iVar1 + 0xe) == '\0') {
      uVar2 = 0;
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}


