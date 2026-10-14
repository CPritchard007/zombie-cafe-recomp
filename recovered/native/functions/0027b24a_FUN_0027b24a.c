/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027b24a FUN_0027b24a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0027b24a(void)

{
  undefined2 *puVar1;
  int in_stack_0000004c;
  int in_stack_0000007c;
  undefined4 uStack00000120;
  
  *(undefined1 *)(in_stack_0000004c + 8) = 1;
  uStack00000120 = 0;
  FUN_00279e30();
  FUN_0027a346();
  FUN_0027a354();
  if (in_stack_0000007c < 0x40) {
    FUN_0027a48e();
  }
  puVar1 = (undefined2 *)FUN_0027a49c();
  *puVar1 = (short)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


