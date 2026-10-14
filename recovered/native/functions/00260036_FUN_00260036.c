/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260036 FUN_00260036 */

void FUN_00260036(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[3];
  uVar2 = *param_1;
  param_1[3] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if ((int *)param_1[2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[2] + 0x10))();
    }
    FUN_0025fbda(uVar2,param_1);
  }
  return;
}


