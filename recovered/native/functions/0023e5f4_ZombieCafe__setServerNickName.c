/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e5f4 ZombieCafe::setServerNickName */

/* ZombieCafe::setServerNickName(void*) */

void ZombieCafe::setServerNickName(void *param_1)

{
  char *__dest;
  int iVar1;
  char *pcVar2;
  char *__src;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0023e68c + 0x23e600;
  piVar3 = *(int **)(iVar1 + DAT_0023e690);
  pcVar2 = (char *)(DAT_0023e694 + 0x23e606);
  local_1c = *piVar3;
  L_PrintLog(pcVar2,(char *)(DAT_0023e698 + 0x23e60c));
  memset(acStack_11c,0,0x100);
  __src = *(char **)(iVar1 + DAT_0023e69c);
  __dest = *(char **)(iVar1 + DAT_0023e6a4);
  snprintf(acStack_11c,0x100,(char *)(DAT_0023e6a0 + 0x23e62c),__src,__dest);
  if ((**(char **)(iVar1 + DAT_0023e6a8) != '\0') && (L_PrintLog(pcVar2,__src), *__src != '0')) {
    L_PrintLog(pcVar2,(char *)(DAT_0023e6ac + 0x23e65a));
    strcpy(__dest,__src);
    strcpy(*(char **)(iVar1 + DAT_0023e6b0),*(char **)(iVar1 + DAT_0023e6b4));
  }
  L_PrintLog((char *)(DAT_0023e6b8 + 0x23e678),(char *)(DAT_0023e6bc + 0x23e67a));
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


