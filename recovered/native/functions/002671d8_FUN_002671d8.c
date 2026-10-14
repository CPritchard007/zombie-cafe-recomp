/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002671d8 FUN_002671d8 */

int * FUN_002671d8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c [2];
  
  if ((param_2 != (int *)0x0) || (param_2 = (int *)FUN_0025f04c(param_1,8), param_2 != (int *)0x0))
  {
    iVar1 = FUN_00266fc8(param_1,*param_2,8,param_2 + 1,local_1c);
    *param_2 = iVar1;
    if (local_1c[0] < 0) {
      FUN_00260004(param_1,param_2);
      param_2 = (int *)0x0;
    }
    else {
      uVar2 = FUN_0025f2ac(param_1,param_3);
      *(undefined4 *)(iVar1 + local_1c[0] * 8) = uVar2;
    }
  }
  return param_2;
}


