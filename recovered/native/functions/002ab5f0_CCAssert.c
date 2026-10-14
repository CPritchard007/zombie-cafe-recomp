/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab5f0 CCAssert */

/* CCAssert(unsigned int, char const*, unsigned int) */

void CCAssert(uint param_1,char *param_2,uint param_3)

{
  if (param_1 == 0) {
    fprintf((FILE *)(*(int *)(DAT_002ab610 + 0x2ab604) + 0xa8),(char *)(DAT_002ab614 + 0x2ab608),
            param_2,param_3);
  }
  return;
}


