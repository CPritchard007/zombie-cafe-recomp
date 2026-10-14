/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240b70 ZombieCafe::getOpenPurchaceScreenFlag */

/* ZombieCafe::getOpenPurchaceScreenFlag() */

void ZombieCafe::getOpenPurchaceScreenFlag(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char acStack_94 [128];
  int local_14;
  
  piVar3 = *(int **)(DAT_00240bc8 + 0x240b7c);
  local_14 = *piVar3;
  cVar1 = **(char **)(DAT_00240bcc + 0x240b8a);
  memset(acStack_94,0,0x80);
  if (cVar1 == '\0') {
    iVar2 = DAT_00240bd4 + 0x240ba0;
  }
  else {
    iVar2 = DAT_00240bd0 + 0x240b9a;
  }
  snprintf(acStack_94,0x7f,(char *)(DAT_00240bd8 + 0x240ba8),iVar2);
  L_PrintLog((char *)(DAT_00240bdc + 0x240bb2),acStack_94);
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


