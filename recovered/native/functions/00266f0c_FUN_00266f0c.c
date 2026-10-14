/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266f0c FUN_00266f0c */

undefined8 FUN_00266f0c(int param_1,short *param_2,int *param_3,int *param_4)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1;
  piVar3 = param_3;
  if (param_2 == (short *)0x0) {
    param_2 = (short *)FUN_0025f04c(param_1,0x48);
    if (param_2 == (short *)0x0) goto LAB_00266f7c;
    param_2[1] = 1;
  }
  param_2 = (short *)FUN_00266e60(param_1,param_2,1,(int)*param_2,iVar4,param_3,piVar3);
  if (*(char *)(param_1 + 0x36) == '\0') {
    sVar1 = *param_2;
    piVar3 = param_4;
    if ((param_4 != (int *)0x0) && (piVar3 = (int *)*param_4, (int *)*param_4 != (int *)0x0)) {
      piVar3 = param_3;
      param_3 = param_4;
    }
    uVar2 = FUN_0025f2ac(param_1,param_3);
    *(undefined4 *)(param_2 + sVar1 * 0x20 + -0x1c + 2) = uVar2;
    uVar2 = FUN_0025f2ac(param_1,piVar3);
    *(undefined4 *)(param_2 + sVar1 * 0x20 + -0x1c) = uVar2;
  }
  else {
    FUN_00260fde(param_1,param_2);
    param_2 = (short *)0x0;
  }
LAB_00266f7c:
  return CONCAT44(iVar4,param_2);
}


