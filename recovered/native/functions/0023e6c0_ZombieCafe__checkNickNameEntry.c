/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e6c0 ZombieCafe::checkNickNameEntry */

/* ZombieCafe::checkNickNameEntry(void*) */

void ZombieCafe::checkNickNameEntry(void *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  char *__s2;
  int *piVar4;
  char *pcVar5;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0023e768 + 0x23e6cc);
  pcVar5 = (char *)(DAT_0023e76c + 0x23e6d0);
  local_1c = *piVar4;
  L_PrintLog(pcVar5,(char *)(DAT_0023e770 + 0x23e6d6));
  memset(acStack_11c,0,0x100);
  __s2 = *(char **)(DAT_0023e774 + 0x23e6f2);
  snprintf(acStack_11c,0x100,(char *)(DAT_0023e77c + 0x23e6fc),__s2,
           *(undefined4 *)(DAT_0023e778 + 0x23e6f4));
  L_PrintLog(pcVar5,acStack_11c);
  iVar1 = strncmp((char *)(DAT_0023e780 + 0x23e718),__s2,0x80);
  if (iVar1 == 0) {
    L_PrintLog(pcVar5,(char *)(DAT_0023e78c + 0x23e754));
    uVar3 = 0;
  }
  else {
    sVar2 = strlen(__s2);
    if (sVar2 < 3) {
      L_PrintLog(pcVar5,(char *)(DAT_0023e784 + 0x23e730));
      uVar3 = 0;
    }
    else {
      L_PrintLog(pcVar5,__s2);
      L_PrintLog(pcVar5,(char *)(DAT_0023e788 + 0x23e746));
      uVar3 = 1;
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


