/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c78cc CharacterInstance::removeFlesh */

/* CharacterInstance::removeFlesh() */

void __thiscall CharacterInstance::removeFlesh(CharacterInstance *this)

{
  int iVar1;
  
  iVar1 = removeFlesh_TypeCheck();
  if (iVar1 == 0) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
  }
  else {
    iVar1 = **(int **)(DAT_000c7900 + 0xc78e0);
    if (iVar1 < 0) {
      iVar1 = 1;
    }
    *(int *)(this + 0x50) = *(int *)(this + 0x50) - iVar1;
  }
  if (*(int *)(this + 0x50) < 0) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  return;
}


