/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00125b34 FUN_00125b34 */

bool FUN_00125b34(void)

{
  int unaff_r6;
  
  if (*(char *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bd4) != '\0') {
    GameStateCafe::exitEditModes();
  }
  *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bd4) = 1;
  return *(char *)(unaff_r6 + DAT_00125bbc) == '\t';
}


