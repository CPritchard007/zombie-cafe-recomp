/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fc48 FUN_0025fc48 */

void FUN_0025fc48(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    FUN_0025fbda(param_1[1]);
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  return;
}


