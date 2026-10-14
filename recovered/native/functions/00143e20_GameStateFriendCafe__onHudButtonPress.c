/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00143e20 GameStateFriendCafe::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00143e4c) */
/* WARNING: Removing unreachable block (ram,0x00143e4c) */
/* GameStateFriendCafe::onHudButtonPress(GameStateFriendCafe*, int) */

void GameStateFriendCafe::onHudButtonPress(GameStateFriendCafe *param_1,int param_2)

{
  uint extraout_r1;
  uint extraout_r1_00;
  
  if (param_1[0x38] == (GameStateFriendCafe)0x4) {
    FUN_0014476e();
    param_2 = extraout_r1;
  }
  if (0xe < (uint)param_2) {
    FUN_0014476e();
    param_2 = extraout_r1_00;
  }
                    /* WARNING: Could not recover jumptable at 0x00143e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00143e51 + (uint)*(ushort *)(&UNK_00143e50 + param_2 * 2) * 2))();
  return;
}


