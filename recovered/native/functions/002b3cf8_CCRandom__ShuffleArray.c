/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3cf8 CCRandom::ShuffleArray */

/* CCRandom::ShuffleArray(unsigned int*, unsigned int, unsigned int) */

void CCRandom::ShuffleArray(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002b3d74 + 0x2b3d04);
  local_1c = *piVar4;
  sprintf(acStack_11c,(char *)(DAT_002b3d78 + 0x2b3d14),param_2,param_3);
  L_PrintLog((char *)(DAT_002b3d7c + 0x2b3d24),acStack_11c);
  for (uVar5 = 0; uVar5 != param_3; uVar5 = uVar5 + 1) {
    iVar1 = NextInt(0,param_2 - 1);
    iVar2 = NextInt(0,param_2 - 1);
    uVar3 = param_1[iVar1];
    param_1[iVar1] = param_1[iVar2];
    param_1[iVar2] = uVar3;
  }
  L_PrintLog((char *)(DAT_002b3d80 + 0x2b3d60),(char *)(DAT_002b3d84 + 0x2b3d62));
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


