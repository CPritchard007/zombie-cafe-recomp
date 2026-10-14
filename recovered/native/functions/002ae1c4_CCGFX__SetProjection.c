/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae1c4 CCGFX::SetProjection */

/* CCGFX::SetProjection(ccMat4x4 const*) */

void CCGFX::SetProjection(ccMat4x4 *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(DAT_002ae204 + 0x2ae1ce);
  if (iVar1 == 0) {
    glMatrixMode(DAT_002ae208);
    if (param_1 == (ccMat4x4 *)0x0) {
      glLoadIdentity();
    }
    else {
      glLoadMatrixf(param_1);
    }
    glMatrixMode(0x1700);
  }
  else if ((iVar1 == 1) && (param_1 == (ccMat4x4 *)0x0)) {
    FUN_002ada1c(*(int **)(DAT_002ae204 + 0x2ae1ce) + 10);
  }
  return;
}


