/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aeb14 CCGFX::DisableLight */

/* CCGFX::DisableLight() */

void CCGFX::DisableLight(void)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_002aeb44 + 0x2aeb1c);
  if (*piVar1 == 0) {
    glDisable(DAT_002aeb48);
    glDisable(0x4000);
    glDisable(0xb50);
  }
  piVar1[0x75] = 0;
  return;
}


