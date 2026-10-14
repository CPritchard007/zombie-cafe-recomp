/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024b542 FUN_0024b542 */

void FUN_0024b542(void)

{
  int iVar1;
  int unaff_r5;
  int *in_stack_00000014;
  
  iVar1 = GiftManager::PopGift(*(void **)(unaff_r5 + DAT_0024b5e4),(SGiftDef *)&stack0x00000314);
  if (iVar1 != 0) {
    FUN_0024aace();
  }
  L_PrintLog((char *)(DAT_0024b5e8 + 0x24b55c),(char *)(DAT_0024b5ec + 0x24b55e));
  if (*(int *)(&stack0x00000000 + DAT_0024b5f0) == *in_stack_00000014) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


