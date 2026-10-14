/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bec54 CCBitField::Free */

/* CCBitField::Free(void*) */

void CCBitField::Free(void *param_1)

{
  free(*(void **)((int)param_1 + 8));
  free(param_1);
  return;
}


