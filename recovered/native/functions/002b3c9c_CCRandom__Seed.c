/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3c9c CCRandom::Seed */

/* CCRandom::Seed() */

void CCRandom::Seed(void)

{
  long __seedval;
  
  __seedval = CCGetTimeMS();
  srand48(__seedval);
  return;
}


