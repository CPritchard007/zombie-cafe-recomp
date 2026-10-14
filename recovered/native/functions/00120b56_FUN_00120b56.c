/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120b56 FUN_00120b56 */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00120b94) */
/* WARNING: Removing unreachable block (ram,0x00120b94) */

void FUN_00120b56(void)

{
  uint uVar1;
  int unaff_r4;
  uint in_stack_0000000c;
  
  uVar1 = (uint)*(byte *)(*(int *)(unaff_r4 + 0x84) + 100);
  if (uVar1 == 1) {
    FUN_00121372();
  }
  if (uVar1 == 2) {
    FUN_00121372();
  }
  if (*(byte *)(unaff_r4 + DAT_00120e04) < 0xb) {
    if ((1 << (uint)*(byte *)(unaff_r4 + DAT_00120e04) & DAT_00120e08) != 0) {
      FUN_00121372();
    }
  }
  if (0x1b < in_stack_0000000c) {
    FUN_00121370();
  }
                    /* WARNING: Could not recover jumptable at 0x00120b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00120b99 + (uint)*(ushort *)(&UNK_00120b98 + in_stack_0000000c * 2) * 2))();
  return;
}


