/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011af94 GameStateCafe::CheckCanFoodGiftReceived */

/* GameStateCafe::CheckCanFoodGiftReceived(int, int, int) */

int GameStateCafe::CheckCanFoodGiftReceived(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < (int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + DAT_0011afb0)) {
    iVar1 = (uint)((uint)param_3 < 10) - (param_3 >> 0x1f);
  }
  return iVar1;
}


