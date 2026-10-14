/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289998 FUN_00289998 */

void FUN_00289998(void)

{
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000038;
  int in_stack_00000044;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000068;
  undefined4 in_stack_000000e0;
  
  uStack0000004c = in_stack_00000020;
  if ((*(char *)(unaff_r6 + 0x12) == '\0') && (*(int *)(unaff_r6 + 0x1b4) == 0)) {
    FUN_00266be6(unaff_r6);
  }
  if ((*(int *)(in_stack_00000044 + 0x18) << 0x13 < 0) && (*(char *)(unaff_r6 + 0x12) == '\0')) {
    if (*(int *)(unaff_r6 + 0x1b4) == 0) {
      FUN_0026641e(unaff_r7,0x10,uStack0000004c,1);
      FUN_00263b94(unaff_r7,1);
      FUN_00265916(unaff_r7,0,0,iRam00289ab4 + 0x2899e8);
      FUN_002899f4();
      return;
    }
  }
  FUN_00260fde(in_stack_00000044,in_stack_00000068);
  FUN_00261102(in_stack_00000044,in_stack_00000054);
  FUN_00261092(in_stack_00000044,in_stack_00000038);
  FUN_00260004(in_stack_00000044,in_stack_000000e0);
  FUN_0025fbda(in_stack_00000044,in_stack_00000020);
  return;
}


