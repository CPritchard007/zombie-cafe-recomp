/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240a90 ZombieCafe::getPurchasingFlag */

/* ZombieCafe::getPurchasingFlag() */

void ZombieCafe::getPurchasingFlag(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char acStack_94 [128];
  int local_14;
  
  piVar3 = *(int **)(DAT_00240ae8 + 0x240a9c);
  local_14 = *piVar3;
  cVar1 = **(char **)(DAT_00240aec + 0x240aaa);
  memset(acStack_94,0,0x80);
  if (cVar1 == '\0') {
    iVar2 = DAT_00240af4 + 0x240ac0;
  }
  else {
    iVar2 = DAT_00240af0 + 0x240aba;
  }
  snprintf(acStack_94,0x7f,(char *)(DAT_00240af8 + 0x240ac8),iVar2);
  L_PrintLog((char *)(DAT_00240afc + 0x240ad2),acStack_94);
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


