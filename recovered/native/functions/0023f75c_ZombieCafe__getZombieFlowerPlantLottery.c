/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f75c ZombieCafe::getZombieFlowerPlantLottery */

/* ZombieCafe::getZombieFlowerPlantLottery() */

undefined4 __thiscall ZombieCafe::getZombieFlowerPlantLottery(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 900);
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 0x388;
    iVar2 = iVar3 + 900;
    iVar3 = iVar3 + 4;
    *(undefined4 *)(this + iVar2) = *(undefined4 *)(this + iVar1);
  } while (iVar3 != 0x1c);
  *(undefined4 *)(this + 0x3a0) = 0;
  makeZombieFlowerPlantLottery(this);
  return uVar4;
}


