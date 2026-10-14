/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024aace FUN_0024aace */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0024aaf8) */
/* WARNING: Removing unreachable block (ram,0x0024aaf8) */

void FUN_0024aace(void)

{
  uint uVar1;
  int in_stack_00000314;
  
  snprintf(&stack0x00000214,0x100,(char *)(DAT_0024adcc + 0x24aada),&stack0x00000318);
  L_PrintLog((char *)(DAT_0024add0 + 0x24aaea),&stack0x00000214);
  uVar1 = in_stack_00000314 - 1;
  if (0x11 < uVar1) {
    uVar1 = FUN_0024b542();
  }
                    /* WARNING: Could not recover jumptable at 0x0024aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0024aafd + (uint)*(ushort *)(&UNK_0024aafc + uVar1 * 2) * 2))();
  return;
}


