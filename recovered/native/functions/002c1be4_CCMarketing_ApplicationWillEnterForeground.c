/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1be4 CCMarketing_ApplicationWillEnterForeground */

void CCMarketing_ApplicationWillEnterForeground(int param_1)

{
  if ((param_1 - 1U < 0xfffffffe) && (*(char *)(param_1 + 0x1a8) != '\0')) {
    L_LogLastSession();
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    FUN_002c187c(param_1);
    L_PrintLog((char *)(DAT_002c1c14 + 0x2c1c0e),(char *)(DAT_002c1c18 + 0x2c1c10));
  }
  return;
}


