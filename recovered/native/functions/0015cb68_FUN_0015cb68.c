/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cb68 FUN_0015cb68 */

void FUN_0015cb68(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = *(int *)(*(int *)(unaff_r5 + 0xc) + unaff_r4);
  iVar1 = ScreenElement::contains
                    (*(ScreenElement **)(unaff_r5 + 0x2c),iVar1 >> 0x10,(int)(short)iVar1);
  if (iVar1 != 0) {
    FUN_0015c58a();
    return;
  }
  FUN_0015b64a();
  if (*(int *)(unaff_r5 + 0x5c) != 0) {
    FUN_0015b760();
  }
  if (*(int *)(unaff_r5 + 0x70) != 0) {
    FUN_0015b902();
  }
  FUN_0015cbe6();
  return;
}


