/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cbf2 FUN_0015cbf2 */

void FUN_0015cbf2(void)

{
  int iVar1;
  GameStateGatya *unaff_r5;
  GameStateGatya *pGStack00000018;
  
  *(undefined4 *)(unaff_r5 + DAT_0015cdb0) = 1;
  unaff_r5[0xe60] = (GameStateGatya)('\x01' - (*(int *)(unaff_r5 + 0xf0) == 0));
  pGStack00000018 = unaff_r5 + 0xf4;
  *(undefined4 *)(unaff_r5 + DAT_0015cdb4) = *(undefined4 *)pGStack00000018;
  unaff_r5[DAT_0015cdb8] = (GameStateGatya)0x1;
  *(undefined4 *)(unaff_r5 + DAT_0015cdbc) = *(undefined4 *)(unaff_r5 + 0xf8);
  *(undefined4 *)(unaff_r5 + 0xe70) = *(undefined4 *)(unaff_r5 + 0xfc);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc0) = *(undefined4 *)(unaff_r5 + 0x100);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc4) = *(undefined4 *)(unaff_r5 + 0x104);
  *(undefined4 *)(unaff_r5 + DAT_0015cdc8) = *(undefined4 *)(unaff_r5 + 0x108);
  iVar1 = GameStateGatya::SetGatyaArr(unaff_r5,1);
  if (iVar1 != 0) {
    FUN_0015bab8();
  }
  FUN_0015ba3e();
  if (*(int *)(unaff_r5 + 0x8c) != 0) {
    FUN_0015be38();
  }
  FUN_0015ccb6();
  return;
}


