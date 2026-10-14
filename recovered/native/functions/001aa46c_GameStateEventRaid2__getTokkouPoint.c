/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa46c GameStateEventRaid2::getTokkouPoint */

/* GameStateEventRaid2::getTokkouPoint() */

int __thiscall GameStateEventRaid2::getTokkouPoint(GameStateEventRaid2 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if ((byte)this[iVar3 + 0x148] != 0xff) {
      iVar1 = ZombieCafe::getSpecialAttackUnit
                        (*(ZombieCafe **)(this + 0xc),
                         (uint)*(ushort *)
                                (**(int **)(*(int *)((uint)(byte)this[iVar3 + 0x148] * 4 +
                                                    *(int *)(this + 0x124)) + 0x8c) + DAT_001aa4c0))
      ;
      if (iVar1 == 1) {
        iVar2 = iVar2 + 0x14;
      }
      else if (iVar1 == 2) {
        iVar2 = iVar2 + 100;
      }
      else if (iVar1 == 3) {
        iVar2 = iVar2 + 400;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  return iVar2;
}


