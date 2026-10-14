/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cd2a FUN_0015cd2a */

void FUN_0015cd2a(void)

{
  int iVar1;
  GameStateGatya *unaff_r5;
  undefined4 in_stack_00000018;
  int *in_stack_0000002c;
  
  iVar1 = DAT_0015cdb4;
  *(undefined4 *)(unaff_r5 + DAT_0015cdb0) = 1;
  unaff_r5[0xe60] = (GameStateGatya)('\x01' - (*(int *)(unaff_r5 + 0x130) == 0));
  *(int *)(unaff_r5 + iVar1) = *(int *)(unaff_r5 + 0x134) * 10;
  unaff_r5[DAT_0015cdb8] = (GameStateGatya)0x3;
  *(undefined4 *)(unaff_r5 + DAT_0015cdbc) = in_stack_00000018;
  *(undefined4 *)(unaff_r5 + 0xe70) = *(undefined4 *)(unaff_r5 + 0x13c);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc0) = *(undefined4 *)(unaff_r5 + 0x140);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc4) = *(undefined4 *)(unaff_r5 + 0x144);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc8) = *(undefined4 *)(unaff_r5 + 0x148);
  iVar1 = GameStateGatya::SetGatyaArr(unaff_r5,3);
  if (iVar1 == 0) {
    FUN_0015c1a0();
  }
  FUN_0015c224();
  FUN_0015c47e();
  if (*(int *)(&stack0x00000000 + DAT_0015cdcc) != *in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


