/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bdee FUN_0025bdee */

void FUN_0025bdee(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int extraout_r1;
  int *piVar1;
  int extraout_r1_00;
  
  sqlite3_mutex_enter(*(undefined4 *)*param_1);
  __aeabi_uidivmod(param_3,param_1[10]);
  for (piVar1 = (int *)(param_1[0xb] + extraout_r1 * 4); *piVar1 != param_2;
      piVar1 = (int *)(*piVar1 + 0xc)) {
  }
  *piVar1 = *(int *)(param_2 + 0xc);
  __aeabi_uidivmod(param_4,param_1[10]);
  *(uint *)(param_2 + 8) = param_4;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1[0xb] + extraout_r1_00 * 4);
  *(int *)(param_1[0xb] + extraout_r1_00 * 4) = param_2;
  if ((uint)param_1[7] < param_4) {
    param_1[7] = param_4;
  }
  sqlite3_mutex_leave(*(undefined4 *)*param_1);
  return;
}


