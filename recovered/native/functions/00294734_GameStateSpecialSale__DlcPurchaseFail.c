/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00294734 GameStateSpecialSale::DlcPurchaseFail */

/* GameStateSpecialSale::DlcPurchaseFail(void*, unsigned int, ccDlcFailureCode) */

undefined8 GameStateSpecialSale::DlcPurchaseFail(float param_1_00,int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    param_1_00 = (float)(**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
  }
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,0xc,param_1_00,false);
  return CONCAT44(param_2,1);
}


