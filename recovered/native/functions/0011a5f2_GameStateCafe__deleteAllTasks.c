/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a5f2 GameStateCafe::deleteAllTasks */

/* GameStateCafe::deleteAllTasks() */

void __thiscall GameStateCafe::deleteAllTasks(GameStateCafe *this)

{
  CharacterInstance *this_00;
  int iVar1;
  
  for (iVar1 = -1; iVar1 < *(int *)(this + 0x20) + 1; iVar1 = iVar1 + 1) {
    if (iVar1 < 0) {
      this_00 = *(CharacterInstance **)(this + 0x18);
    }
    else {
      this_00 = *(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x24));
    }
    CharacterInstance::deleteTasks(this_00);
  }
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x2c) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::deleteTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x30)));
  }
  return;
}


