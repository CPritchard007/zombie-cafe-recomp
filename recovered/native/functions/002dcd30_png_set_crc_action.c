/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dcd30 png_set_crc_action */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002dcd40) */
/* WARNING (jumptable): Removing unreachable block (ram,0x002dcd82) */
/* WARNING: Removing unreachable block (ram,0x002dcd40) */
/* WARNING: Removing unreachable block (ram,0x002dcd82) */

void png_set_crc_action(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  switch(param_2) {
  case 2:
    png_warning(param_1,DAT_002dcdc4 + 0x2dcd6e,param_3,param_4,param_4);
  default:
    uVar2 = DAT_002dcdc0 & *(uint *)(param_1 + 0x138);
    goto LAB_002dcd7a;
  case 3:
    uVar2 = DAT_002dcdc0 & *(uint *)(param_1 + 0x138);
    uVar1 = 0x400;
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 0x138);
    uVar2 = 0xc00;
    break;
  case 5:
    goto switchD_002dcd40_caseD_5;
  }
  uVar2 = uVar2 | uVar1;
LAB_002dcd7a:
  *(uint *)(param_1 + 0x138) = uVar2;
switchD_002dcd40_caseD_5:
  switch(param_3) {
  case 1:
    uVar2 = DAT_002dcdc8 & *(uint *)(param_1 + 0x138);
    uVar1 = 0x200;
    break;
  default:
    uVar2 = DAT_002dcdc8 & *(uint *)(param_1 + 0x138);
    goto LAB_002dcdbc;
  case 3:
    uVar2 = DAT_002dcdc8 & *(uint *)(param_1 + 0x138);
    uVar1 = 0x100;
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 0x138);
    uVar2 = 0x300;
    break;
  case 5:
    goto switchD_002dcd82_caseD_5;
  }
  uVar2 = uVar2 | uVar1;
LAB_002dcdbc:
  *(uint *)(param_1 + 0x138) = uVar2;
switchD_002dcd82_caseD_5:
  return;
}


