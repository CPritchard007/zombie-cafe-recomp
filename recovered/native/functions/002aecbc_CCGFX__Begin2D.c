/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aecbc CCGFX::Begin2D */

/* CCGFX::Begin2D() */

void CCGFX::Begin2D(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002aece0 + 0x2aecc4);
  SetupScreenOrtho(*(uint *)(iVar1 + 0x10),*(uint *)(iVar1 + 0x14),*(uint *)(iVar1 + 0x18));
  SetModelView((ccMat3x4 *)0x0);
  glDisable(DAT_002aece4);
  glDisable(DAT_002aece8);
  return;
}


