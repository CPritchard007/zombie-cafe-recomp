/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015300c GameStateGatya::setLineupWebWindow */

/* GameStateGatya::setLineupWebWindow(int) */

void __thiscall GameStateGatya::setLineupWebWindow(GameStateGatya *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *__format;
  int iVar3;
  char *__s;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_001530a4;
  piVar4 = *(int **)(DAT_001530a0 + 0x153016);
  puVar5 = (undefined4 *)(&stack0xfffffff4 + DAT_001530a4);
  *(int *)(&stack0x00000400 + DAT_001530a4) = *piVar4;
  if (param_1 == 0) {
    pcVar2 = *(char **)(DAT_001530a8 + 0x15302a);
    if (*pcVar2 == '\0') goto LAB_00153088;
    __format = (char *)(DAT_001530ac + 0x15303a);
    iVar3 = DAT_001530b0 + 0x15303c;
  }
  else if (param_1 == 1) {
    pcVar2 = *(char **)(DAT_001530b4 + 0x153046);
    if (*pcVar2 == '\0') goto LAB_00153088;
    __format = (char *)(DAT_001530b8 + 0x153056);
    iVar3 = DAT_001530bc + 0x153058;
  }
  else {
    pcVar2 = *(char **)(DAT_001530c0 + 0x15305e);
    if (*pcVar2 == '\0') goto LAB_00153088;
    __format = (char *)(DAT_001530c4 + 0x15306e);
    iVar3 = DAT_001530c8 + 0x153070;
  }
  __s = &stack0x00000000 + DAT_001530a4;
  *(char **)(&stack0xfffffff4 + DAT_001530a4) = pcVar2;
  snprintf(__s,0x400,__format,iVar3);
  *puVar5 = __s;
  this = (GameStateGatya *)javaShowFixWebView(10,0x14,0x50,0x50);
LAB_00153088:
  if (*(int *)(&stack0x00000400 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


