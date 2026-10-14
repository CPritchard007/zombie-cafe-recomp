/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f72c ZombieCafe::makeZombieFlowerPlantLottery */

/* ZombieCafe::makeZombieFlowerPlantLottery() */

void __thiscall ZombieCafe::makeZombieFlowerPlantLottery(ZombieCafe *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*(int *)(this + iVar3 + 900) == 0) {
      iVar1 = arc4random();
      uVar2 = iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f;
      if (uVar2 == 0) {
        uVar2 = DAT_0023f758;
      }
      *(uint *)(this + iVar3 + 900) = uVar2;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x20);
  return;
}


