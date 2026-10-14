/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cf394 jinit_d_main_controller */

void jinit_d_main_controller(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x50);
  iVar4 = DAT_002cf4cc + 0x2cf3b0;
  param_1[0x70] = (int)piVar3;
  *piVar3 = iVar4;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 3;
    (**(code **)*param_1)(param_1);
  }
  iVar4 = param_1[0x52];
  if (*(int *)(param_1[0x77] + 8) != 0) {
    if (iVar4 < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
    }
    iVar8 = param_1[0x52];
    iVar6 = param_1[0x70];
    iVar4 = (**(code **)param_1[1])(param_1,1,param_1[9] << 3);
    *(int *)(iVar6 + 0x38) = iVar4;
    *(int *)(iVar6 + 0x3c) = iVar4 + param_1[9] * 4;
    iVar4 = param_1[0x36];
    for (iVar9 = 0; iVar9 < param_1[9]; iVar9 = iVar9 + 1) {
      piVar1 = (int *)(iVar4 + 0xc);
      piVar2 = (int *)(iVar4 + 0x28);
      iVar4 = iVar4 + 0x58;
      iVar5 = __divsi3(*piVar1 * *piVar2,param_1[0x52]);
      iVar7 = (**(code **)param_1[1])(param_1,1,iVar5 * (iVar8 + 4) * 2 * 4);
      iVar7 = iVar7 + iVar5 * 4;
      *(int *)(*(int *)(iVar6 + 0x38) + iVar9 * 4) = iVar7;
      *(int *)(*(int *)(iVar6 + 0x3c) + iVar9 * 4) = iVar7 + iVar5 * (iVar8 + 4) * 4;
    }
    iVar4 = param_1[0x52] + 2;
  }
  iVar6 = param_1[0x36];
  for (local_2c = 0; local_2c < param_1[9]; local_2c = local_2c + 1) {
    iVar5 = *(int *)(iVar6 + 0x24);
    iVar9 = *(int *)(iVar6 + 0x1c);
    iVar7 = param_1[1];
    piVar1 = (int *)(iVar6 + 0xc);
    piVar2 = (int *)(iVar6 + 0x28);
    iVar6 = iVar6 + 0x58;
    iVar8 = __divsi3(*piVar1 * *piVar2,param_1[0x52]);
    iVar8 = (**(code **)(iVar7 + 8))(param_1,1,iVar5 * iVar9,iVar8 * iVar4);
    piVar3[2] = iVar8;
    piVar3 = piVar3 + 1;
  }
  return;
}


