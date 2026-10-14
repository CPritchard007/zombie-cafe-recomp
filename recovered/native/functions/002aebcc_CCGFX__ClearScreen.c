/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aebcc CCGFX::ClearScreen */

/* CCGFX::ClearScreen(unsigned int) */

void CCGFX::ClearScreen(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = __floatunsisf(param_1 & 0xff);
  uVar1 = __divsf3(uVar1,DAT_002aec34);
  uVar2 = __floatunsisf(param_1 >> 8 & 0xff);
  uVar2 = __divsf3(uVar2,DAT_002aec34);
  uVar3 = __floatunsisf(param_1 >> 0x10 & 0xff);
  uVar3 = __divsf3(uVar3,DAT_002aec34);
  uVar4 = __floatunsisf(param_1 >> 0x18);
  uVar4 = __divsf3(uVar4,DAT_002aec34);
  glClearColor(uVar1,uVar2,uVar3,uVar4);
  iVar5 = 0x82;
  if (*(int *)(*(int *)(DAT_002aec38 + 0x2aec22) + 0x288) == 0) {
    iVar5 = 0x80;
  }
  glClear(iVar5 << 7);
  return;
}


