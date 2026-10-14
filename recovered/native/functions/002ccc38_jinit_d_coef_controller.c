/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ccc38 jinit_d_coef_controller */

void jinit_d_coef_controller(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__s;
  code *pcVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int *local_28;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(int **)(param_1 + 0x1c4) = piVar1;
  *piVar1 = DAT_002ccd1c + 0x2ccc58;
  piVar1[2] = DAT_002ccd20 + 0x2ccc5e;
  piVar1[0x1c] = 0;
  if (param_2 == 0) {
    __s = (void *)(**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    pvVar5 = __s;
    iVar7 = 0;
    do {
      iVar8 = iVar7 + 4;
      *(void **)((int)piVar1 + iVar7 + 0x20) = pvVar5;
      pvVar5 = (void *)((int)pvVar5 + 0x80);
      iVar7 = iVar8;
    } while (iVar8 != 0x28);
    if (*(int *)(param_1 + 0x1b4) == 0) {
      memset(__s,0,0x500);
    }
    piVar1[1] = DAT_002ccd2c + 0x2ccd0e;
    piVar1[3] = DAT_002ccd30 + 0x2ccd14;
    piVar6 = (int *)0x0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xd8);
    local_28 = piVar1;
    for (local_2c = 0; local_2c < *(int *)(param_1 + 0x24); local_2c = local_2c + 1) {
      iVar8 = *(int *)(iVar7 + 0xc);
      if (*(int *)(param_1 + 0xe0) != 0) {
        iVar8 = iVar8 * 3;
      }
      pcVar4 = *(code **)(*(int *)(param_1 + 4) + 0x14);
      uVar2 = jround_up(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 8));
      uVar3 = jround_up(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0xc));
      iVar8 = (*pcVar4)(param_1,1,1,uVar2,uVar3,iVar8);
      iVar7 = iVar7 + 0x58;
      local_28[0x12] = iVar8;
      local_28 = local_28 + 1;
    }
    piVar1[1] = DAT_002ccd24 + 0x2cccce;
    piVar1[3] = DAT_002ccd28 + 0x2cccd4;
    piVar6 = piVar1 + 0x12;
  }
  piVar1[4] = (int)piVar6;
  return;
}


