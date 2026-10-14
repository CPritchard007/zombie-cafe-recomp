/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8d58 jinit_merged_upsampler */

void jinit_merged_upsampler(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))
                            (param_1,1,0x30,(code *)**(undefined4 **)(param_1 + 4),param_4);
  iVar8 = DAT_002c8e30 + 0x2c8d70;
  *(int **)(param_1 + 0x1dc) = piVar3;
  *piVar3 = iVar8;
  piVar3[2] = 0;
  piVar3[10] = *(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70);
  iVar8 = DAT_002c8e3c;
  if (*(int *)(param_1 + 0x140) == 2) {
    piVar3[1] = DAT_002c8e34 + 0x2c8d92;
    piVar3[3] = DAT_002c8e38 + 0x2c8d98;
    iVar8 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1);
    piVar3[8] = iVar8;
  }
  else {
    piVar3[8] = 0;
    piVar3[1] = iVar8 + 0x2c8dac;
    piVar3[3] = DAT_002c8e40 + 0x2c8db2;
  }
  iVar10 = *(int *)(param_1 + 0x1dc);
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar10 + 0x10) = uVar4;
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar10 + 0x14) = uVar4;
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar10 + 0x18) = uVar4;
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  iVar8 = DAT_002c8e44;
  *(undefined4 *)(iVar10 + 0x1c) = uVar4;
  iVar9 = 0;
  iVar5 = DAT_002c8e4c;
  iVar6 = DAT_002c8e48;
  iVar7 = DAT_002c8e50;
  do {
    *(int *)(*(int *)(iVar10 + 0x10) + iVar9) = iVar7 >> 0x10;
    *(int *)(*(int *)(iVar10 + 0x14) + iVar9) = iVar6 >> 0x10;
    iVar1 = DAT_002c8e54;
    *(int *)(*(int *)(iVar10 + 0x18) + iVar9) = iVar5;
    iVar2 = DAT_002c8e58;
    iVar7 = iVar7 + iVar1;
    *(int *)(*(int *)(iVar10 + 0x1c) + iVar9) = iVar8;
    iVar5 = iVar5 + iVar2;
    iVar9 = iVar9 + 4;
    iVar6 = iVar6 + DAT_002c8e5c;
    iVar8 = iVar8 + DAT_002c8e60;
  } while (iVar9 != 0x400);
  return;
}


