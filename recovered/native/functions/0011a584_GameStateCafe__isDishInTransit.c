/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a584 GameStateCafe::isDishInTransit */

/* GameStateCafe::isDishInTransit() */

undefined4 __thiscall GameStateCafe::isDishInTransit(GameStateCafe *this)

{
  CharacterInstance *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  while( true ) {
    if (*(int *)(this + 0x20) + 1 <= iVar2) {
      return 0;
    }
    if (iVar2 < 0) {
      this_00 = *(CharacterInstance **)(this + 0x18);
    }
    else {
      this_00 = *(CharacterInstance **)(iVar2 * 4 + *(int *)(this + 0x24));
    }
    iVar1 = CharacterInstance::getTaskType(this_00);
    if (iVar1 == 1) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}


