/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1b8c CCMarketing_SetHandler */

void CCMarketing_SetHandler(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x1a0) = param_2;
    *(undefined4 *)(param_1 + 0x1a4) = param_3;
    L_PrintLog((char *)(DAT_002c1bb4 + 0x2c1baa),(char *)(DAT_002c1bb0 + 0x2c1ba8));
  }
  return;
}


