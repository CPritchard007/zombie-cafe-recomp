/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5f3c GameStateEventRaid3::getTokkouPoint */

/* GameStateEventRaid3::getTokkouPoint() */

int __thiscall GameStateEventRaid3::getTokkouPoint(GameStateEventRaid3 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if ((byte)this[iVar3 + 0x154] != 0xff) {
      iVar1 = ZombieCafe::getSpecialAttackUnit
                        (*(ZombieCafe **)(this + 0xc),
                         (uint)*(ushort *)
                                (**(int **)(*(int *)((uint)(byte)this[iVar3 + 0x154] * 4 +
                                                    *(int *)(this + 0x130)) + 0x8c) + DAT_001b5f8c))
      ;
      if (iVar1 == 1) {
        iVar2 = iVar2 + 10;
      }
      else if (iVar1 == 2) {
        iVar2 = iVar2 + 0x32;
      }
      else if (iVar1 == 3) {
        iVar2 = iVar2 + 100;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  return iVar2;
}


