/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9c38 GameStateEventRaid2::getEventRaid2Level */

/* GameStateEventRaid2::getEventRaid2Level() */

int __thiscall GameStateEventRaid2::getEventRaid2Level(GameStateEventRaid2 *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                    *(int *)(DAT_001a9c64 + 0x1a9c4a));
  iVar1 = 0;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (*(int *)(this + 100) <= iVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xb);
  return 10;
}


