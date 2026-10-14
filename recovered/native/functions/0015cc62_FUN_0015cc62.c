/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cc62 FUN_0015cc62 */

void FUN_0015cc62(void)

{
  int iVar1;
  GameStateGatya *unaff_r5;
  undefined4 in_stack_00000018;
  
  *(undefined4 *)(unaff_r5 + DAT_0015cdb0) = 1;
  unaff_r5[0xe60] = (GameStateGatya)('\x01' - (*(int *)(unaff_r5 + 0x110) == 0));
  *(undefined4 *)(unaff_r5 + DAT_0015cdb4) = *(undefined4 *)(unaff_r5 + 0x114);
  unaff_r5[DAT_0015cdb8] = (GameStateGatya)0x2;
  *(undefined4 *)(unaff_r5 + DAT_0015cdbc) = in_stack_00000018;
  *(undefined4 *)(unaff_r5 + 0xe70) = *(undefined4 *)(unaff_r5 + 0x11c);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc0) = *(undefined4 *)(unaff_r5 + 0x120);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc4) = *(undefined4 *)(unaff_r5 + 0x124);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc8) = *(undefined4 *)(unaff_r5 + 0x128);
  iVar1 = GameStateGatya::SetGatyaArr(unaff_r5,2);
  if (iVar1 == 0) {
    FUN_0015bd06();
  }
  FUN_0015bd3e();
  if (*(int *)(unaff_r5 + 0x94) != 0) {
    FUN_0015c060();
  }
  FUN_0015cd1a();
  return;
}


