/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c75cc CharacterInstance::scream */

/* CharacterInstance::scream() */

void __thiscall CharacterInstance::scream(CharacterInstance *this)

{
  CapcomApp *pCVar1;
  int iVar2;
  
  if (this[0xa8] == (CharacterInstance)0x0) {
    this[0xa8] = (CharacterInstance)0x1;
    pCVar1 = (CapcomApp *)CapcomApp::getInstance();
    iVar2 = CapcomApp::getUptime(pCVar1);
    if (**(int **)(DAT_000c760c + 0xc75ee) <= iVar2 - *(int *)(this + 0x58)) {
      *(int *)(this + 0x58) = iVar2;
      groupScream(*(byte *)(**(int **)(this + 0x8c) + DAT_000c7610) ^ 1,
                  (uint)*(byte *)(**(int **)(this + 0x8c) + DAT_000c7610));
    }
  }
  return;
}


