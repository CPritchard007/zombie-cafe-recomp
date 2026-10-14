/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3ff4 CCSwapChars */

/* CCSwapChars(char*, char, char, unsigned int) */

void CCSwapChars(char *param_1,char param_2,char param_3,uint param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 != param_4; uVar1 = uVar1 + 1) {
    if ((uint)(byte)param_1[uVar1] == (int)param_2) {
      param_1[uVar1] = param_3;
    }
  }
  return;
}


