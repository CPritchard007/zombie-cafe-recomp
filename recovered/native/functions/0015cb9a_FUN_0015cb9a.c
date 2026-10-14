/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cb9a FUN_0015cb9a */

void FUN_0015cb9a(void)

{
  int iVar1;
  GameStateGatya *unaff_r5;
  
  *(undefined4 *)(unaff_r5 + DAT_0015cdb0) = 0;
  unaff_r5[0xe60] = (GameStateGatya)('\x01' - (*(int *)(unaff_r5 + 0xd0) == 0));
  *(undefined4 *)(unaff_r5 + DAT_0015cdb4) = *(undefined4 *)(unaff_r5 + 0xd4);
  unaff_r5[DAT_0015cdb8] = (GameStateGatya)0x0;
  *(undefined4 *)(unaff_r5 + DAT_0015cdbc) = *(undefined4 *)(unaff_r5 + 0xd8);
  *(undefined4 *)(unaff_r5 + 0xe70) = *(undefined4 *)(unaff_r5 + 0xdc);
  iVar1 = GameStateGatya::SetGatyaArr(unaff_r5,0);
  if (iVar1 == 0) {
    FUN_0015b896();
  }
  FUN_0015b8da();
  if (*(int *)(unaff_r5 + 0x78) != 0) {
    FUN_0015bbd0();
  }
  FUN_0015cc52();
  return;
}


