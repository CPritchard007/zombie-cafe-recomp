/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1fd0 L_EvalFlagLogic */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002c200c) */
/* WARNING: Removing unreachable block (ram,0x002c200c) */
/* L_EvalFlagLogic(CMarketingView*, char const*, unsigned int, int) */

void L_EvalFlagLogic(CMarketingView *param_1,char *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char acStack_9c [128];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002c2054 + 0x2c1fdc);
  local_1c = *piVar3;
  snprintf(acStack_9c,0x80,(char *)(DAT_002c2058 + 0x2c1fec),param_2);
  uVar1 = CCOptions::GetInt(*(CCOptions **)(param_1 + 0xc0),acStack_9c,(char *)0x0,
                            (int)(param_1 + 0xc0));
  uVar2 = 0;
  if (4 < param_3) goto LAB_002c2042;
  switch(param_3) {
  case 0:
    uVar2 = (uint)(uVar1 == param_4);
    break;
  case 1:
    uVar2 = 1;
    if (param_4 < (int)uVar1) break;
    goto LAB_002c202c;
  case 2:
    uVar2 = 1;
    if ((int)uVar1 < param_4) break;
LAB_002c202c:
    uVar2 = 0;
    break;
  case 3:
    uVar2 = (((int)uVar1 >> 0x1f) - (param_4 >> 0x1f)) + (uint)((uint)param_4 <= uVar1);
    break;
  case 4:
    uVar2 = ((param_4 >> 0x1f) - ((int)uVar1 >> 0x1f)) + (uint)(uVar1 <= (uint)param_4);
  }
LAB_002c2042:
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


