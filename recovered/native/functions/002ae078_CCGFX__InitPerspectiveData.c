/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae078 CCGFX::InitPerspectiveData */

/* CCGFX::InitPerspectiveData(float, float, float) */

void CCGFX::InitPerspectiveData(float param_1,float param_2,float param_3)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  int iVar1;
  
  iVar1 = *(int *)(DAT_002ae088 + 0x2ae07e);
  *(undefined4 *)(iVar1 + 0x1c) = in_r0;
  *(undefined4 *)(iVar1 + 0x20) = in_r1;
  *(undefined4 *)(iVar1 + 0x24) = in_r2;
  return;
}


