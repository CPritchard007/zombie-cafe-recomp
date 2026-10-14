/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f88c ZombieCafe::setZombieFlowerPlantState */

/* ZombieCafe::setZombieFlowerPlantState(int) */

void __thiscall ZombieCafe::setZombieFlowerPlantState(ZombieCafe *this,int param_1)

{
  clearZombieFlowerPlant(this);
  *(ushort *)(this + 0x360) = (ushort)(param_1 == 1);
  *(undefined2 *)(this + 0x364) = 1;
  lotteryZombieFlowerZombieID(this);
  *(undefined4 *)(this + 0x368) = 0;
  return;
}


