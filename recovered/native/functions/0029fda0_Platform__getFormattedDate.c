/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fda0 Platform::getFormattedDate */

/* Platform::getFormattedDate(double) */

void Platform::getFormattedDate(double param_1)

{
  String *in_r0;
  tm *__tp;
  undefined4 in_r2;
  undefined4 in_r3;
  int *piVar1;
  time_t local_68;
  char acStack_64 [80];
  int local_14;
  
  piVar1 = *(int **)(DAT_0029fde8 + 0x29fdac);
  local_14 = *piVar1;
  local_68 = __fixdfsi(in_r2,in_r3);
  __tp = localtime(&local_68);
  strftime(acStack_64,0x50,(char *)(DAT_0029fdec + 0x29fdca),__tp);
  String::String(in_r0,acStack_64);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_r0);
  }
  return;
}


