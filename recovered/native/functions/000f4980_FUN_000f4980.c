/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4980 FUN_000f4980 */

void FUN_000f4980(void)

{
  undefined1 in_r3;
  int unaff_r4;
  
  if (*(int *)(unaff_r4 + 0x30) != 0) {
    *(undefined1 *)(*(int *)(unaff_r4 + 0x30) + 0x2e) = in_r3;
  }
  *(undefined1 *)(unaff_r4 + 5) = *(undefined1 *)(*(int *)(unaff_r4 + 0x2c) + 5);
  if (*(char *)(unaff_r4 + 4) == '\0') {
    FUN_000f40f4(unaff_r4);
    FUN_000f49bc();
    return;
  }
  return;
}


