/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1bb8 CCMarketing_ApplicationDidEnterBackground */

void CCMarketing_ApplicationDidEnterBackground(int param_1)

{
  if ((param_1 - 1U < 0xfffffffe) && (*(char *)(param_1 + 0x1a8) == '\0')) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    L_PrintLog((char *)(DAT_002c1be0 + 0x2c1bd8),(char *)(DAT_002c1bdc + 0x2c1bd6));
  }
  return;
}


