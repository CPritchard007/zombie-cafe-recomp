/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3cb0 CCRandom::NextInt */

/* CCRandom::NextInt(unsigned int, unsigned int) */

int CCRandom::NextInt(uint param_1,uint param_2)

{
  long lVar1;
  int extraout_r1;
  
  lVar1 = lrand48();
  __aeabi_uidivmod(lVar1,(param_2 - param_1) + 1);
  return extraout_r1 + param_1;
}


