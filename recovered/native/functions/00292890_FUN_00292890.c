/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292890 FUN_00292890 */

void FUN_00292890(void)

{
  int iVar1;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  int in_stack_00000078;
  int *in_stack_00000124;
  int in_stack_000002d4;
  
  *(undefined1 *)(in_stack_00000024 + 0x36) = 1;
  FUN_0026a976(in_stack_00000028 + 0x34,in_stack_00000024,DAT_0029297c + 0x2928a4);
  iVar1 = DAT_00292970;
  *(undefined4 *)(in_stack_00000028 + 0x58) = 7;
  sqlite3_log(7,iVar1 + 0x292828,in_stack_0000003c,*(undefined4 *)(in_stack_00000028 + 0xa0));
  FUN_00280934(in_stack_00000028);
  if (DAT_00292974 == 7) {
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


