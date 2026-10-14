/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020db24 FUN_0020db24 */

ScreenElement * FUN_0020db24(void)

{
  int *piVar1;
  int *unaff_r4;
  ScreenElement *unaff_r5;
  
  L_PrintLog((char *)(DAT_0020db58 + 0x20db2c),(char *)(DAT_0020db5c + 0x20db2e));
  FUN_0020cd18();
  piVar1 = (int *)*unaff_r4;
  (**(code **)(*piVar1 + 0x14))
            (piVar1,*(int *)(unaff_r5 + 0xc) / 2,*(int *)(unaff_r5 + 0x10) - piVar1[4] / 2);
  ScreenElement::setSize
            (unaff_r5,*(int *)(*(int *)(unaff_r5 + 0x6c) + 0xc),
             *(int *)(*(int *)(unaff_r5 + 0x6c) + 0x10));
  return unaff_r5;
}


