/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292812 FUN_00292812 */

void FUN_00292812(void)

{
  int iVar1;
  undefined4 uStack00000000;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  int in_stack_00000078;
  int *in_stack_00000124;
  int in_stack_000002d4;
  
  iVar1 = DAT_00292970;
  uStack00000000 = *(undefined4 *)(in_stack_00000028 + 0x34);
  *(undefined4 *)(in_stack_00000028 + 0x58) = 9;
  sqlite3_log(9,iVar1 + 0x292828,in_stack_0000003c,*(undefined4 *)(in_stack_00000028 + 0xa0));
  FUN_00280934(in_stack_00000028);
  if (DAT_00292974 == 9) {
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


