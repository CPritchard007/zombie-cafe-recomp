/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ecf0 GameStateEventRaid::setPlayerZombieCafePos */

/* GameStateEventRaid::setPlayerZombieCafePos() */

undefined8 __thiscall GameStateEventRaid::setPlayerZombieCafePos(GameStateEventRaid *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  GameStateEventRaid *local_20;
  
  piVar4 = *(int **)((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
                    *(int *)(DAT_0019ed64 + 0x19ed02));
  iVar6 = 0;
  local_20 = this;
  do {
    if ((byte)this[iVar6 + 0x128] != 0xff) {
      piVar5 = *(int **)((uint)(byte)this[iVar6 + 0x128] * 4 + *(int *)(this + 0x104));
      lVar1 = Cafe::diamondToStaggeredCoords
                        (**(int **)(DAT_0019ed68 + 0x19ed28) - *piVar4,
                         **(int **)(DAT_0019ed6c + 0x19ed34) + piVar4[1]);
      iVar2 = Cafe::staggeredCoordsToIndex(lVar1);
      *(short *)(piVar5 + 0xb) = (short)iVar2;
      local_20 = *(GameStateEventRaid **)(*piVar5 + 0xc);
      uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x5c),iVar2);
      (*(code *)local_20)(piVar5,uVar3);
    }
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar6 != 6);
  return CONCAT44(this + 0xfc,local_20);
}


