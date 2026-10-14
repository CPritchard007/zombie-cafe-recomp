/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f678 ZombieCafe::checkZombieFlowerPlantStateStart */

/* ZombieCafe::checkZombieFlowerPlantStateStart() */

int __thiscall ZombieCafe::checkZombieFlowerPlantStateStart(ZombieCafe *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(this + 0x364) == 1) {
    uVar1 = __fixsfsi(*(undefined4 *)(this + 0x368));
    iVar2 = (uint)(uVar1 < 100) - ((int)uVar1 >> 0x1f);
  }
  return iVar2;
}


