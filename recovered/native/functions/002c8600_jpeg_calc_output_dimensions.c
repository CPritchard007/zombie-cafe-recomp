/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8600 jpeg_calc_output_dimensions */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002c8728) */
/* WARNING: Removing unreachable block (ram,0x002c8728) */

void jpeg_calc_output_dimensions(int *param_1)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_24;
  
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  jpeg_core_output_dimensions(param_1);
  iVar7 = param_1[0x36];
  for (local_24 = 0; local_24 < param_1[9]; local_24 = local_24 + 1) {
    iVar6 = param_1[0x51];
    iVar2 = param_1[0x13];
    iVar8 = 1;
    while( true ) {
      iVar3 = iVar6 * iVar8;
      iVar4 = 4;
      if (iVar2 != 0) {
        iVar4 = 8;
      }
      if ((iVar4 < iVar3) ||
         (__aeabi_idivmod(param_1[0x4f],iVar8 * *(int *)(iVar7 + 8) * 2), extraout_r1 != 0)) break;
      iVar8 = iVar8 << 1;
    }
    iVar8 = 1;
    *(int *)(iVar7 + 0x24) = iVar3;
    iVar2 = param_1[0x52];
    iVar6 = param_1[0x13];
    while( true ) {
      iVar4 = iVar2 * iVar8;
      iVar5 = 4;
      if (iVar6 != 0) {
        iVar5 = 8;
      }
      if ((iVar5 < iVar4) ||
         (__aeabi_idivmod(param_1[0x50],iVar8 * *(int *)(iVar7 + 0xc) * 2), extraout_r1_00 != 0))
      break;
      iVar8 = iVar8 << 1;
    }
    *(int *)(iVar7 + 0x28) = iVar4;
    iVar2 = iVar4 * 2;
    if (iVar3 == iVar2 || iVar3 + iVar4 * -2 < 0 != SBORROW4(iVar3,iVar2)) {
      iVar2 = iVar3 * 2;
      if (iVar4 != iVar2 && iVar4 + iVar3 * -2 < 0 == SBORROW4(iVar4,iVar2)) {
        *(int *)(iVar7 + 0x28) = iVar2;
      }
    }
    else {
      *(int *)(iVar7 + 0x24) = iVar2;
    }
    iVar7 = iVar7 + 0x58;
  }
  iVar7 = param_1[0x36];
  for (local_2c = 0; iVar2 = param_1[9], local_2c < iVar2; local_2c = local_2c + 1) {
    uVar1 = jdiv_round_up(param_1[7] * *(int *)(iVar7 + 8) * *(int *)(iVar7 + 0x24),
                          param_1[0x4f] * param_1[0x6b]);
    *(undefined4 *)(iVar7 + 0x2c) = uVar1;
    uVar1 = jdiv_round_up(param_1[8] * *(int *)(iVar7 + 0xc) * *(int *)(iVar7 + 0x28),
                          param_1[0x50] * param_1[0x6b]);
    *(undefined4 *)(iVar7 + 0x30) = uVar1;
    iVar7 = iVar7 + 0x58;
  }
  switch(param_1[0xb]) {
  case 1:
    iVar2 = 1;
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    iVar2 = 3;
    break;
  case 4:
  case 5:
    iVar2 = 4;
  }
  param_1[0x1e] = iVar2;
  iVar7 = 1;
  if (param_1[0x15] == 0) {
    iVar7 = param_1[0x1e];
  }
  param_1[0x1f] = iVar7;
  iVar7 = FUN_002c856a(param_1);
  iVar2 = 1;
  if (iVar7 != 0) {
    iVar2 = param_1[0x50];
  }
  param_1[0x20] = iVar2;
  return;
}


