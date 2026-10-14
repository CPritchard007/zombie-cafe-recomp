/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b43e0 CCFileMd5 */

/* CCFileMd5(char*, unsigned int, unsigned char const*, unsigned int) */

void CCFileMd5(char *param_1,uint param_2,uchar *param_3,uint param_4)

{
  char *__src;
  int *piVar1;
  char acStack_11c [256];
  int local_1c;
  
  piVar1 = *(int **)(DAT_002b4430 + 0x2b43ec);
  local_1c = *piVar1;
  sprintf(acStack_11c,(char *)(DAT_002b4434 + 0x2b4400),param_4,param_2);
  L_PrintLog((char *)(DAT_002b4438 + 0x2b440c),acStack_11c);
  __src = (char *)javaMD5Data(param_3,param_4);
  strncpy(param_1,__src,param_2);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


