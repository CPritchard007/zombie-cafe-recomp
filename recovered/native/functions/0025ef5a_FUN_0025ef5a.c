/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ef5a FUN_0025ef5a */

void FUN_0025ef5a(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  
  if ((int)(param_3 + (-param_2 & 7U)) < (int)((*(ushort *)((int)param_1 + 6) + 1) * 0x28 + 0x18)) {
    piVar1 = (int *)FUN_0025ee10(*param_1);
    *param_4 = piVar1;
    if (piVar1 == (int *)0x0) {
      return;
    }
  }
  else {
    piVar1 = (int *)(param_2 + (-param_2 & 7U));
    *param_4 = 0;
  }
  piVar1[4] = (int)(piVar1 + 6);
  *piVar1 = (int)param_1;
  *(short *)(piVar1 + 1) = *(short *)((int)param_1 + 6) + 1;
  return;
}


