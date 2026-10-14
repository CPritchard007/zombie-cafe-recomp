/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c92e4 jinit_upsampler */

void jinit_upsampler(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *local_30;
  int local_2c;
  
  local_30 = (int *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x77] = (int)local_30;
  *local_30 = DAT_002c9454 + 0x2c9302;
  local_30[1] = DAT_002c9458 + 0x2c9308;
  local_30[2] = 0;
  if (param_1[0x4d] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    (**(code **)*param_1)(param_1);
  }
  local_2c = 0;
  iVar9 = DAT_002c945c + 0x2c9336;
  iVar7 = param_1[0x36];
  piVar8 = local_30 + 0xd;
  do {
    if (param_1[9] <= local_2c) {
      return;
    }
    iVar10 = *(int *)(iVar7 + 8);
    iVar11 = *(int *)(iVar7 + 0x24);
    iVar4 = param_1[0x51];
    iVar2 = __divsi3(*(int *)(iVar7 + 0xc) * *(int *)(iVar7 + 0x28),param_1[0x52]);
    iVar5 = param_1[0x4f];
    iVar12 = param_1[0x50];
    piVar8[0xc] = iVar2;
    if (*(int *)(iVar7 + 0x34) == 0) {
      iVar2 = DAT_002c9460 + 0x2c9370;
LAB_002c9398:
      *piVar8 = iVar2;
    }
    else {
      iVar4 = __divsi3(iVar10 * iVar11,iVar4);
      if ((iVar2 == iVar12) && (iVar4 == iVar5)) {
        iVar2 = DAT_002c9464 + 0x2c939a;
        goto LAB_002c9398;
      }
      if (iVar4 * 2 - iVar5 == 0) {
        if (iVar2 == iVar12) {
          iVar2 = DAT_002c9468 + 0x2c93ae;
        }
        else {
          if (iVar2 * 2 - iVar12 != 0) goto LAB_002c93c0;
          iVar2 = DAT_002c946c + 0x2c93be;
        }
        *piVar8 = iVar2;
      }
      else {
LAB_002c93c0:
        __aeabi_idivmod(iVar5,iVar4);
        if ((extraout_r1 == 0) && (__aeabi_idivmod(iVar12,iVar2), extraout_r1_00 == 0)) {
          *piVar8 = iVar9;
          uVar1 = __divsi3(iVar5,iVar4);
          *(undefined1 *)(local_30 + 0x23) = uVar1;
          uVar1 = __divsi3(iVar12,iVar2);
          *(undefined1 *)((int)local_30 + 0x96) = uVar1;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x27;
          (**(code **)*param_1)(param_1);
        }
      }
      pcVar6 = *(code **)(param_1[1] + 8);
      uVar3 = jround_up(param_1[0x1c],param_1[0x4f]);
      iVar2 = (*pcVar6)(param_1,1,uVar3,param_1[0x50]);
      piVar8[-10] = iVar2;
    }
    iVar7 = iVar7 + 0x58;
    piVar8 = piVar8 + 1;
    local_2c = local_2c + 1;
    local_30 = (int *)((int)local_30 + 1);
  } while( true );
}


