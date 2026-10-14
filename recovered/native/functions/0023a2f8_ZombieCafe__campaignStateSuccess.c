/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a2f8 ZombieCafe::campaignStateSuccess */

/* ZombieCafe::campaignStateSuccess(void*, unsigned int, unsigned int) */

void ZombieCafe::campaignStateSuccess(void *param_1,uint param_2,uint param_3)

{
  *(bool *)((int)param_1 + DAT_0023a318) = param_2 != 0;
  if ((param_2 != 0) && (*(uint *)((int)param_1 + DAT_0023a31c) < param_3)) {
    *(uint *)((int)param_1 + DAT_0023a31c) = param_3;
    *(undefined1 *)((int)param_1 + DAT_0023a320) = 0;
  }
  return;
}


