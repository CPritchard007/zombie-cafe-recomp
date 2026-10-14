/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239b04 ZombieCafe::playEffect */

/* ZombieCafe::playEffect(int, float) */

void ZombieCafe::playEffect(int param_1,float param_2)

{
  CCSound *in_r1;
  uint in_r2;
  
  if (*(char *)(param_1 + DAT_00239b1c) != '\0') {
    CCSound::StartEffect(in_r1,in_r2,param_2);
  }
  return;
}


