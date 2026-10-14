/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae064 CCGFX::InitData */

/* CCGFX::InitData(int, int, unsigned int) */

void CCGFX::InitData(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002ae074 + 0x2ae06a);
  *(int *)(iVar1 + 0x10) = param_1;
  *(int *)(iVar1 + 0x14) = param_2;
  *(uint *)(iVar1 + 0x18) = param_3;
  return;
}


