/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00128b20 GameStateCafe::shouldCompleteTutorialStep */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00128b56) */
/* WARNING: Removing unreachable block (ram,0x00128b56) */
/* GameStateCafe::shouldCompleteTutorialStep(GameStateCafe*, unsigned char) */

void GameStateCafe::shouldCompleteTutorialStep(GameStateCafe *param_1,uchar param_2)

{
  uint uVar1;
  char acStack_11c [256];
  undefined4 local_1c;
  
  uVar1 = (uint)param_2;
  local_1c = **(undefined4 **)(DAT_00128e34 + 0x128b2c + DAT_00128e38);
  sprintf(acStack_11c,(char *)(DAT_00128e3c + 0x128b36),uVar1);
  L_PrintLog((char *)(DAT_00128e40 + 0x128b48),acStack_11c);
  if (0x5b < uVar1) {
    FUN_00129702();
  }
                    /* WARNING: Could not recover jumptable at 0x00128b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00128b5b + (uint)*(ushort *)(&UNK_00128b5a + uVar1 * 2) * 2))();
  return;
}


