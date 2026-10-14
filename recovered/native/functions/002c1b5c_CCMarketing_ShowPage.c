/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1b5c CCMarketing_ShowPage */

int * CCMarketing_ShowPage(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if ((((int)param_1 - 1U < 0xfffffffe) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
     (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    L_PrintLog((char *)(DAT_002c1b84 + 0x2c1b7a),(char *)(DAT_002c1b88 + 0x2c1b7c));
    piVar1 = (int *)0x1;
  }
  return piVar1;
}


