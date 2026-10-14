/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f650 ZombieCafe::checkZombieFlowerPlantState */

/* ZombieCafe::checkZombieFlowerPlantState() */

undefined4 __thiscall ZombieCafe::checkZombieFlowerPlantState(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(short *)(this + 0x364) == 1) &&
     (iVar1 = __fixsfsi(*(undefined4 *)(this + 0x368)), 99 < iVar1)) {
    *(undefined2 *)(this + 0x364) = 2;
    uVar2 = 1;
  }
  return uVar2;
}


