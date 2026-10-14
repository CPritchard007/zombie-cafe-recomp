/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aeb4c CCGFX::SetColor */

/* CCGFX::SetColor(unsigned int) */

void CCGFX::SetColor(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar1 = __floatunsisf(param_1 & 0xff);
  iVar2 = __divsf3(uVar1,DAT_002aebc4);
  uVar1 = __floatunsisf(param_1 >> 8 & 0xff);
  iVar3 = __divsf3(uVar1,DAT_002aebc4);
  uVar1 = __floatunsisf(param_1 >> 0x10 & 0xff);
  iVar4 = __divsf3(uVar1,DAT_002aebc4);
  uVar1 = __floatunsisf(param_1 >> 0x18);
  iVar5 = __divsf3(uVar1,DAT_002aebc4);
  piVar6 = *(int **)(DAT_002aebc8 + 0x2aeb94);
  if (*piVar6 == 0) {
    glColor4f(iVar2,iVar3,iVar4,iVar5);
  }
  else if (*piVar6 == 1) {
    piVar6[0x5f] = iVar2;
    piVar6[0x60] = iVar3;
    piVar6[0x61] = iVar4;
    piVar6[0x62] = iVar5;
  }
  return;
}


