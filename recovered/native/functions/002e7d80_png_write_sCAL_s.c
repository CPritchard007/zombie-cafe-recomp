/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7d80 png_write_sCAL_s */

void png_write_sCAL_s(undefined4 param_1,undefined1 param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  size_t __n;
  uint uVar2;
  int *piVar3;
  undefined1 local_5c [64];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002e7dfc + 0x2e7d8c);
  local_1c = *piVar3;
  sVar1 = strlen(param_3);
  __n = strlen(param_4);
  uVar2 = sVar1 + __n + 2;
  if (uVar2 < 0x41) {
    local_5c[0] = param_2;
    memcpy(local_5c + 1,param_3,sVar1 + 1);
    memcpy(local_5c + sVar1 + 2,param_4,__n);
    FUN_002e6ea0(param_1,DAT_002e7e04,local_5c,uVar2);
  }
  else {
    png_warning(param_1,DAT_002e7e00 + 0x2e7dba);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


