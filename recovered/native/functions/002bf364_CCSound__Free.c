/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf364 CCSound::Free */

/* CCSound::Free(void*) */

void CCSound::Free(void *param_1)

{
  javaFreeSound();
  free(param_1);
  return;
}


