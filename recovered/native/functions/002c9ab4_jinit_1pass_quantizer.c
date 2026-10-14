/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9ab4 jinit_1pass_quantizer */

void jinit_1pass_quantizer(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x58);
  iVar9 = DAT_002c9cdc + 0x2c9ace;
  param_1[0x79] = (int)piVar3;
  *piVar3 = iVar9;
  piVar3[2] = DAT_002c9ce0 + 0x2c9ad6;
  piVar3[3] = DAT_002c9ce4 + 0x2c9adc;
  piVar3[0x11] = 0;
  piVar3[0xd] = 0;
  if (4 < param_1[0x1e]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x39;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < param_1[0x18]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3b;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  iVar12 = param_1[0x79];
  iVar7 = param_1[0x1e];
  iVar10 = param_1[0x18];
  iVar9 = 1;
  do {
    iVar8 = iVar9;
    iVar9 = iVar8 + 1;
    iVar11 = iVar9;
    for (iVar6 = 1; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      iVar11 = iVar9 * iVar11;
    }
  } while (iVar11 <= iVar10);
  if (iVar8 == 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    *(int *)(*param_1 + 0x18) = iVar11;
    (**(code **)*param_1)(param_1);
  }
  iVar9 = 1;
  piVar3 = (int *)(iVar12 + 0x20);
  for (iVar11 = 0; iVar11 < iVar7; iVar11 = iVar11 + 1) {
    iVar9 = iVar8 * iVar9;
    *piVar3 = iVar8;
    piVar3 = piVar3 + 1;
  }
  bVar1 = false;
  iVar11 = DAT_002c9ce8 + 0x2c9b7e;
  local_40 = 0;
LAB_002c9bc4:
  do {
    if (local_40 < iVar7) {
      iVar6 = local_40;
      if (param_1[0xb] == 2) {
        iVar6 = *(int *)(local_40 * 4 + iVar11);
      }
      piVar3 = (int *)(iVar12 + 0x20) + iVar6;
      iVar8 = *piVar3;
      iVar6 = __divsi3(iVar9,iVar8);
      iVar8 = iVar8 + 1;
      iVar6 = iVar8 * iVar6;
      if (iVar6 - iVar10 == 0 || iVar6 < iVar10) {
        local_40 = local_40 + 1;
        *piVar3 = iVar8;
        bVar1 = true;
        iVar9 = iVar6;
        goto LAB_002c9bc4;
      }
    }
    if (!bVar1) {
      iVar7 = *param_1;
      if (param_1[0x1e] == 3) {
        *(int *)(iVar7 + 0x18) = iVar9;
        *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar12 + 0x20);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar12 + 0x24);
        *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar12 + 0x28);
        *(undefined4 *)(*param_1 + 0x14) = 0x60;
      }
      else {
        *(undefined4 *)(iVar7 + 0x14) = 0x61;
        *(int *)(*param_1 + 0x18) = iVar9;
      }
      (**(code **)(*param_1 + 4))(param_1,1);
      piVar4 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,iVar9,param_1[0x1e]);
      piVar3 = piVar4;
      iVar7 = iVar9;
      local_2c = iVar12;
      for (local_3c = 0; local_3c < param_1[0x1e]; local_3c = local_3c + 1) {
        iVar10 = *(int *)(local_2c + 0x20);
        iVar11 = __divsi3(iVar7,iVar10);
        local_28 = iVar10 + -1 >> 1;
        local_40 = 0;
        for (local_30 = 0; local_30 < iVar10; local_30 = local_30 + 1) {
          uVar2 = __divsi3(local_28,iVar10 + -1);
          for (iVar6 = local_40; iVar6 < iVar9; iVar6 = iVar6 + iVar7) {
            for (iVar8 = 0; iVar8 < iVar11; iVar8 = iVar8 + 1) {
              *(undefined1 *)(*piVar3 + iVar6 + iVar8) = uVar2;
            }
          }
          local_28 = local_28 + 0xff;
          local_40 = local_40 + iVar11;
        }
        local_2c = local_2c + 4;
        piVar3 = piVar3 + 1;
        iVar7 = iVar11;
      }
      *(int **)(iVar12 + 0x10) = piVar4;
      *(int *)(iVar12 + 0x14) = iVar9;
      FUN_002c9470(param_1);
      if (param_1[0x16] == 2) {
        iVar10 = param_1[0x1c];
        iVar9 = param_1[0x79];
        for (iVar7 = 0; iVar7 < param_1[0x1e]; iVar7 = iVar7 + 1) {
          uVar5 = (**(code **)(param_1[1] + 4))(param_1,1,(iVar10 + 2) * 2);
          *(undefined4 *)(iVar9 + 0x44) = uVar5;
          iVar9 = iVar9 + 4;
        }
      }
      return;
    }
    bVar1 = false;
    local_40 = 0;
  } while( true );
}


