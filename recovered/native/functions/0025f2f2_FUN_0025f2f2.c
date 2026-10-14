/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f2f2 FUN_0025f2f2 */

void FUN_0025f2f2(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar3 = *param_2;
    iVar2 = param_2[2];
    iVar1 = FUN_0025f286(*param_1,*param_3,param_3[1],iVar2,param_4);
    *(int *)(iVar2 + (iVar3 + -1) * 0x14 + 4) = iVar1;
    if ((param_4 != 0) && (iVar1 != 0)) {
      FUN_0025b16e();
    }
  }
  return;
}


