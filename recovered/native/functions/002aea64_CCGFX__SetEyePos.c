/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aea64 CCGFX::SetEyePos */

/* CCGFX::SetEyePos(ccVec3*) */

void CCGFX::SetEyePos(ccVec3 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002aea90 + 0x2aea70);
  *(undefined4 *)(iVar1 + 0x1bc) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + 0x1c0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x1c4) = *(undefined4 *)(param_1 + 8);
  return;
}


