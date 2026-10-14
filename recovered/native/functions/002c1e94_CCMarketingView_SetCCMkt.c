/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1e94 CCMarketingView_SetCCMkt */

void CCMarketingView_SetCCMkt(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}


