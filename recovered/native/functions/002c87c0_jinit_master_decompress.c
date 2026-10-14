/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c87c0 jinit_master_decompress */

void jinit_master_decompress(int *param_1)

{
  int *piVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x1c);
  iVar3 = DAT_002c8a00 + 0x2c87d8;
  param_1[0x6f] = (int)piVar1;
  *piVar1 = iVar3;
  piVar1[1] = DAT_002c8a04 + 0x2c87e0;
  piVar1[2] = 0;
  iVar3 = param_1[0x6f];
  if (param_1[0x35] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x35];
    (**(code **)*param_1)(param_1);
  }
  jpeg_calc_output_dimensions(param_1);
  __s = (void *)(**(code **)param_1[1])(param_1,1,0x580);
  param_1[0x54] = (int)__s + 0x100;
  memset(__s,0,0x100);
  iVar4 = 0;
  do {
    *(char *)((int)__s + iVar4 + 0x100) = (char)iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  iVar4 = 0x80;
  do {
    *(undefined1 *)((int)__s + iVar4 + 0x180) = 0xff;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x200);
  memset((void *)((int)__s + 0x380),0,0x180);
  memcpy((void *)((int)__s + 0x500),(void *)param_1[0x54],0x80);
  if (((param_1[0x1d] == 0) || (param_1[0x1c] == 0)) || (param_1[0x1e] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  uVar2 = FUN_002c856a(param_1);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if ((param_1[0x15] == 0) || (param_1[0x10] == 0)) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    if (param_1[0x15] == 0) goto LAB_002c8932;
  }
  if (param_1[0x11] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x1e] == 3) {
    if (param_1[0x22] == 0) {
      if (param_1[0x17] == 0) {
        param_1[0x19] = 1;
      }
      else {
        param_1[0x1b] = 1;
      }
    }
    else {
      param_1[0x1a] = 1;
    }
  }
  else {
    param_1[0x19] = 1;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x22] = 0;
  }
  if (param_1[0x19] != 0) {
    jinit_1pass_quantizer(param_1);
    *(int *)(iVar3 + 0x14) = param_1[0x79];
  }
  if ((param_1[0x1b] != 0) || (param_1[0x1a] != 0)) {
    jinit_2pass_quantizer(param_1);
    *(int *)(iVar3 + 0x18) = param_1[0x79];
  }
LAB_002c8932:
  if (param_1[0x11] == 0) {
    if (*(int *)(iVar3 + 0x10) == 0) {
      jinit_color_deconverter(param_1);
      jinit_upsampler(param_1);
    }
    else {
      jinit_merged_upsampler();
    }
    jinit_d_post_controller(param_1,param_1[0x1b]);
  }
  jinit_inverse_dct(param_1);
  if (param_1[0x39] == 0) {
    jinit_huff_decoder(param_1);
  }
  else {
    jinit_arith_decoder();
  }
  bVar5 = true;
  if (*(int *)(param_1[0x73] + 0x10) == 0) {
    bVar5 = param_1[0x10] != 0;
  }
  jinit_d_coef_controller(param_1,bVar5);
  if (param_1[0x11] == 0) {
    jinit_d_main_controller(param_1);
  }
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[0x73] + 8))(param_1);
  if (((param_1[2] != 0) && (param_1[0x10] == 0)) && (*(int *)(param_1[0x73] + 0x10) != 0)) {
    iVar4 = param_1[9];
    if (param_1[0x38] != 0) {
      iVar4 = iVar4 * 3 + 2;
    }
    *(undefined4 *)(param_1[2] + 4) = 0;
    *(int *)(param_1[2] + 8) = param_1[0x53] * iVar4;
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(uint *)(param_1[2] + 0x10) = 3 - (uint)(param_1[0x1b] == 0);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  return;
}


