/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b07c4 FUN_002b07c4 */

void FUN_002b07c4(void)

{
  int iVar1;
  int unaff_r4;
  int in_stack_0000000c;
  
  if (*(int *)(unaff_r4 + 0x2c) == 0) {
    glDisable(DAT_002b0878);
  }
  else {
    glEnable();
    glBlendFunc(*(undefined4 *)(DAT_002b087c + 0x2b07da + *(int *)(unaff_r4 + 0x30) * 4 + 0x34),
                *(undefined4 *)(DAT_002b087c + 0x2b07da + *(int *)(unaff_r4 + 0x34) * 4 + 0x34));
  }
  if (**(int **)(in_stack_0000000c + DAT_002b0838) == 0) {
    glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    iVar1 = glGetError();
    if (iVar1 != 0) {
      printf((char *)(DAT_002b0880 + 0x2b0816));
    }
  }
  return;
}


