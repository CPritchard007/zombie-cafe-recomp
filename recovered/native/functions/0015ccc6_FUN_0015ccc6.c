/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015ccc6 FUN_0015ccc6 */

void FUN_0015ccc6(void)

{
  int iVar1;
  GameStateGatya *unaff_r5;
  
  *(undefined4 *)(unaff_r5 + DAT_0015cdb0) = 1;
  unaff_r5[0xe60] = (GameStateGatya)('\x01' - (*(int *)(unaff_r5 + 0x130) == 0));
  *(undefined4 *)(unaff_r5 + DAT_0015cdb4) = *(undefined4 *)(unaff_r5 + 0x134);
  unaff_r5[DAT_0015cdb8] = (GameStateGatya)0x3;
  *(undefined4 *)(unaff_r5 + DAT_0015cdbc) = *(undefined4 *)(unaff_r5 + 0x138);
  *(undefined4 *)(unaff_r5 + 0xe70) = 0;
  *(undefined4 *)(unaff_r5 + DAT_0015cdc0) = *(undefined4 *)(unaff_r5 + 0x140);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc4) = *(undefined4 *)(unaff_r5 + 0x144);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc8) = *(undefined4 *)(unaff_r5 + 0x148);
  iVar1 = GameStateGatya::SetGatyaArr(unaff_r5,3);
  if (iVar1 == 0) {
    FUN_0015bf64();
  }
  FUN_0015bfa8();
  if (*(int *)(unaff_r5 + 0xb0) != 0) {
    FUN_0015c2dc();
  }
  FUN_0015cd82();
  return;
}


