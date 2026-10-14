/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026650c FUN_0026650c */

undefined8 FUN_0026650c(int param_1,char *param_2,int param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (param_4 != (char *)0x0) {
    iVar1 = (int)param_2 - (int)param_4;
    iVar2 = param_3;
    for (; (param_2 = param_4 + iVar1, 0 < iVar2 && (*param_4 == 'b')); param_4 = param_4 + 1) {
      iVar2 = iVar2 + -1;
    }
    for (; 1 < iVar2; iVar2 = iVar2 + -1) {
      if (param_4[iVar2 + -1] != 'b') goto LAB_00266548;
    }
    if (iVar2 == 1) {
LAB_00266548:
      iVar1 = param_1;
      FUN_0026641e(uVar3,0x1e,param_2,iVar2,param_1,param_2,param_3);
      FUN_00263832(uVar3,0xffffffff,param_4,iVar2);
      FUN_0025cb14(param_1,param_2,iVar2);
      param_1 = iVar1;
    }
  }
  return CONCAT44(param_2,param_1);
}


