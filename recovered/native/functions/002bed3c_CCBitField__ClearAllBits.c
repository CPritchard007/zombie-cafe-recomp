/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bed3c CCBitField::ClearAllBits */

/* CCBitField::ClearAllBits(void*) */

void CCBitField::ClearAllBits(void *param_1)

{
  memset(*(void **)((int)param_1 + 8),0,*(int *)((int)param_1 + 4) << 2);
  return;
}


