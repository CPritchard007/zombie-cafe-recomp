/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9254 FUN_002e9254 */

int FUN_002e9254(int *param_1)

{
  int *piVar1;
  int extraout_r1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_002e9020();
  if ((*param_1 == DAT_002e92b8) && (param_1[1] == DAT_002e92bc)) {
    iVar3 = param_1[-8];
    piVar2 = (int *)*piVar1;
  }
  else {
    piVar2 = (int *)0x0;
    if (*piVar1 != 0) {
      FUN_002e9730(DAT_002e92c0 + 0x2e92aa);
      if (extraout_r1 != -1) {
        __cxa_end_cleanup();
      }
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
    iVar3 = param_1[-8];
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  param_1[-8] = iVar3 + 1;
  if (param_1 + -0xe != piVar2) {
    param_1[-9] = (int)piVar2;
    *piVar1 = (int)(param_1 + -0xe);
  }
  piVar1[1] = piVar1[1] + -1;
  return param_1[-1];
}


