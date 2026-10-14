/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8248 BuildDevicePath */

void BuildDevicePath(char *param_1,int param_2)

{
  char *__format;
  int *piVar1;
  char acStack_114 [256];
  int local_14;
  
  piVar1 = *(int **)(DAT_002a8290 + 0x2a8254);
  local_14 = *piVar1;
  if (param_2 == 6) {
    __format = (char *)(DAT_002a8298 + 0x2a8270);
  }
  else {
    if ((param_2 != 7) && (param_2 != 5)) goto LAB_002a8276;
    __format = (char *)(DAT_002a8294 + 0x2a826a);
  }
  sprintf(acStack_114,__format,param_1);
LAB_002a8276:
  strcpy(param_1,acStack_114);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


