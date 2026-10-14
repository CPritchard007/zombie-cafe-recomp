/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9a6c GameStateEventRaid2::setPlayerZombieCafePos */

/* GameStateEventRaid2::setPlayerZombieCafePos() */

undefined8 __thiscall GameStateEventRaid2::setPlayerZombieCafePos(GameStateEventRaid2 *this)

{
  short sVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  GameStateEventRaid2 *local_20;
  
  piVar4 = *(int **)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                    *(int *)(DAT_001a9aec + 0x1a9a7e));
  iVar6 = 0;
  local_20 = this;
  do {
    if ((byte)this[iVar6 + 0x148] != 0xff) {
      piVar5 = *(int **)((uint)(byte)this[iVar6 + 0x148] * 4 + *(int *)(this + 0x124));
      lVar2 = Cafe::diamondToStaggeredCoords
                        (**(int **)(DAT_001a9af0 + 0x1a9aa8) - *piVar4,
                         **(int **)(DAT_001a9af4 + 0x1a9ab4) + piVar4[1]);
      sVar1 = Cafe::staggeredCoordsToIndex(lVar2);
      *(short *)(piVar5 + 0xb) = sVar1;
      local_20 = *(GameStateEventRaid2 **)(*piVar5 + 0xc);
      uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar1);
      (*(code *)local_20)(piVar5,uVar3);
    }
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar6 != 6);
  return CONCAT44(this + 0x11c,local_20);
}


