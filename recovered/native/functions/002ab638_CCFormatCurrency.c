/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab638 CCFormatCurrency */

/* CCFormatCurrency(char*, unsigned int) */

void CCFormatCurrency(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  int *piVar3;
  char local_3c;
  char acStack_3b [31];
  int local_1c;
  
  iVar1 = DAT_002ab6c4;
  piVar3 = *(int **)(DAT_002ab6b8 + 0x2ab644);
  local_1c = *piVar3;
  if (DAT_002ab6bc < param_2) {
    uVar2 = __udivsi3(param_2,1000);
    CCFormatCurrency(param_1,uVar2);
    local_3c = ',';
    __aeabi_uidivmod(param_2,1000);
    sprintf(acStack_3b,(char *)(DAT_002ab6c0 + 0x2ab67e),extraout_r1);
  }
  else {
    *param_1 = '$';
    param_1[1] = '\0';
    sprintf(&local_3c,(char *)(iVar1 + 0x2ab698),param_2);
  }
  strcat(param_1,&local_3c);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


