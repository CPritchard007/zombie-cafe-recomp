/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012347c GameStateCafe::resetPaths */

/* GameStateCafe::resetPaths() */

void __thiscall GameStateCafe::resetPaths(GameStateCafe *this)

{
  CharacterInstance *pCVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x20) + 1; iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(iVar2 * 4 + *(int *)(this + 0x24)) + 0x7c) != 0) {
      FUN_0011e3c0();
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x2c) + 1; iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(iVar2 * 4 + *(int *)(this + 0x30)) + 0x7c) != 0) {
      FUN_0011e3c0();
    }
  }
  if (*(int *)(*(int *)(this + 0x18) + 0x7c) != 0) {
    FUN_0011e3c0();
  }
  while( true ) {
    iVar2 = *(int *)(this + 0x14);
    if (*(int *)(iVar2 + 0xb4) == -1) break;
    pCVar1 = (CharacterInstance *)
             Vector<CharacterInstance*>::removeElementAt
                       ((Vector<CharacterInstance*> *)(iVar2 + 0xb0),0);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(iVar2 + 0xa4),pCVar1);
  }
  return;
}


