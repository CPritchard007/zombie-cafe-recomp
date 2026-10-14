/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026376e FUN_0026376e */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0026377e) */
/* WARNING: Removing unreachable block (ram,0x0026377e) */

void FUN_0026376e(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  if (param_3 == (int *)0x0) {
    return;
  }
  switch(param_2) {
  case 0xfffffff0:
  case 0xfffffff1:
  case 0xfffffff3:
  case 0xfffffff4:
  case 0xfffffffa:
  case 0xffffffff:
    break;
  default:
    goto switchD_0026377e_caseD_fffffff2;
  case 0xfffffff5:
    if (*(int *)(param_1 + 0x1f0) != 0) {
      return;
    }
    sqlite3_free(param_3);
    return;
  case 0xfffffff6:
    if (*(int *)(param_1 + 0x1f0) != 0) {
      return;
    }
    FUN_00260036(param_3);
    return;
  case 0xfffffff8:
    if (*(int *)(param_1 + 0x1f0) == 0) {
      FUN_00263758(param_3);
      return;
    }
    FUN_0025fbda(param_1,param_3[9],param_3,*(int *)(param_1 + 0x1f0),param_4);
    break;
  case 0xfffffff9:
    if ((*param_3 != 0) && ((int)((uint)*(byte *)(*param_3 + 3) << 0x1d) < 0)) {
      FUN_0025fbda(param_1);
    }
    if (*(int *)(param_1 + 0x1f0) == 0) {
      FUN_0025c456(param_3);
    }
    break;
  case 0xfffffffb:
    if (-1 < (int)((uint)*(byte *)((int)param_3 + 3) << 0x1d)) {
      return;
    }
  }
  FUN_0025fbda(param_1,param_3);
switchD_0026377e_caseD_fffffff2:
  return;
}


