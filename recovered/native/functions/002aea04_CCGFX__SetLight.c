/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aea04 CCGFX::SetLight */

/* CCGFX::SetLight(ccVec3*, ccVec4*, ccVec4*, ccVec4*) */

void CCGFX::SetLight(ccVec3 *param_1,ccVec4 *param_2,ccVec4 *param_3,ccVec4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(DAT_002aea60 + 0x2aea10);
  *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + 0x1cc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x1d0) = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0x18c) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 400) = uVar2;
  *(undefined4 *)(iVar1 + 0x194) = uVar3;
  *(undefined4 *)(iVar1 + 0x198) = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(iVar1 + 0x19c) = *(undefined4 *)param_3;
  *(undefined4 *)(iVar1 + 0x1a0) = uVar2;
  *(undefined4 *)(iVar1 + 0x1a4) = uVar3;
  *(undefined4 *)(iVar1 + 0x1a8) = *(undefined4 *)(param_3 + 0xc);
  uVar2 = *(undefined4 *)(param_4 + 4);
  uVar3 = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar1 + 0x1ac) = *(undefined4 *)param_4;
  *(undefined4 *)(iVar1 + 0x1b0) = uVar2;
  *(undefined4 *)(iVar1 + 0x1b4) = uVar3;
  *(undefined4 *)(iVar1 + 0x1b8) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(iVar1 + 0x1d4) = 0;
  return;
}


