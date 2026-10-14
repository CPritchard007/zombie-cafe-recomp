/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292802 FUN_00292802 */

void FUN_00292802(void)

{
  int iVar1;
  int unaff_r6;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000003c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  int in_stack_00000078;
  int *in_stack_00000124;
  int in_stack_000002d4;
  
  if (unaff_r6 == 0) {
    FUN_0028d528();
  }
  iVar1 = DAT_00292970;
  *(int *)(in_stack_00000028 + 0x58) = unaff_r6;
  sqlite3_log(unaff_r6,iVar1 + 0x292828,in_stack_0000003c + 1,
              *(undefined4 *)(in_stack_00000028 + 0xa0));
  FUN_00280934(in_stack_00000028);
  if (unaff_r6 == DAT_00292974) {
    *(undefined1 *)(in_stack_00000024 + 0x36) = 1;
  }
  if (in_stack_00000078 != 0) {
    FUN_002634ec(in_stack_00000024,in_stack_00000078 + -1);
  }
  *(undefined4 *)(in_stack_00000024 + 0x20) = in_stack_00000060;
  *(undefined4 *)(in_stack_00000024 + 0x24) = in_stack_00000064;
  if (*(int *)(in_stack_00000028 + 0x70) != 0) {
    FUN_00262504(in_stack_00000028);
  }
  if (in_stack_000002d4 != *in_stack_00000124) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


