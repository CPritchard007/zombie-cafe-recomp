/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ca968 jinit_2pass_quantizer */

void jinit_2pass_quantizer(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x2c,*(code **)param_1[1],param_4);
  param_1[0x79] = (int)piVar1;
  *piVar1 = DAT_002caa48 + 0x2ca984;
  piVar1[3] = DAT_002caa4c + 0x2ca98a;
  piVar1[8] = 0;
  piVar1[10] = 0;
  if (param_1[0x1e] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  iVar4 = 0;
  piVar1[6] = iVar2;
  do {
    iVar2 = piVar1[6];
    uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    puVar5 = (undefined4 *)(iVar2 + iVar4);
    iVar4 = iVar4 + 4;
    *puVar5 = uVar3;
  } while (iVar4 != 0x80);
  piVar1[7] = 1;
  if (param_1[0x1b] == 0) {
    piVar1[4] = 0;
    goto LAB_002caa1c;
  }
  iVar2 = param_1[0x18];
  if (iVar2 < 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    *(undefined4 *)(*param_1 + 0x18) = 8;
LAB_002ca9fe:
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < iVar2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3b;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    goto LAB_002ca9fe;
  }
  iVar4 = (**(code **)(param_1[1] + 8))(param_1,1,iVar2,3);
  piVar1[5] = iVar2;
  piVar1[4] = iVar4;
LAB_002caa1c:
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_1[0x16] == 2) {
    iVar2 = (**(code **)(param_1[1] + 4))(param_1,1,param_1[0x1c] * 6 + 0xc);
    piVar1[8] = iVar2;
    FUN_002ca57c(param_1);
  }
  return;
}


