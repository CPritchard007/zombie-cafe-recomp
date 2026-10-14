/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00294528 GameStateSpecialSale::tickStepMessage2 */

/* GameStateSpecialSale::tickStepMessage2(long) */

void GameStateSpecialSale::tickStepMessage2(long param_1)

{
  int iVar1;
  ZombieCafe *this;
  float extraout_s0;
  
  this = *(ZombieCafe **)(param_1 + 0xc);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
  if (iVar1 != 0) {
    ZombieCafe::playEffect((int)this,extraout_s0);
    *(undefined1 *)(param_1 + DAT_00294568) = 3;
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))(*(int **)(param_1 + 0x6c),0);
    (**(code **)(**(int **)(param_1 + 0x70) + 0x20))(*(int **)(param_1 + 0x70),0);
    (**(code **)(**(int **)(param_1 + 0x74) + 0x20))(*(int **)(param_1 + 0x74),0);
  }
  return;
}


