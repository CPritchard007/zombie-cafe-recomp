/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae0b4 CCGFX::ResetErrors */

/* CCGFX::ResetErrors() */

void CCGFX::ResetErrors(void)

{
  int iVar1;
  
  do {
    iVar1 = glGetError();
  } while (iVar1 != 0);
  return;
}


