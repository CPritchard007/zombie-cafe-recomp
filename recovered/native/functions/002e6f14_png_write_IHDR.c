/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6f14 png_write_IHDR */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002e6f36) */
/* WARNING: Removing unreachable block (ram,0x002e6f36) */

void png_write_IHDR(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5,int param_6,
                   int param_7,uint param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  int local_1c;
  
  iVar2 = DAT_002e7120;
  piVar5 = *(int **)(DAT_002e711c + 0x2e6f22);
  local_1c = *piVar5;
  switch(param_5) {
  case 0:
    if ((param_4 < 0x11) && ((1 << (param_4 & 0xff) & DAT_002e7124) != 0)) {
LAB_002e6f78:
      uVar4 = 1;
      goto LAB_002e6fa4;
    }
    iVar3 = DAT_002e7128 + 0x2e6f54;
    break;
  default:
    iVar3 = DAT_002e713c + 0x2e6fb4;
    break;
  case 2:
    if ((param_4 != 0x10) && (param_4 != 8)) {
      iVar3 = DAT_002e712c + 0x2e6f62;
      break;
    }
    goto LAB_002e6f66;
  case 3:
    if ((param_4 < 9) && ((1 << (param_4 & 0xff) & 0x116U) != 0)) goto LAB_002e6f78;
    iVar3 = DAT_002e7130 + 0x2e6f82;
    break;
  case 4:
    if ((param_4 == 0x10) || (param_4 == 8)) {
      uVar4 = 2;
      goto LAB_002e6fa4;
    }
    iVar3 = DAT_002e7134 + 0x2e6f90;
    break;
  case 6:
    if ((param_4 == 0x10) || (param_4 == 8)) {
      uVar4 = 4;
      goto LAB_002e6fa4;
    }
    iVar3 = DAT_002e7138 + 0x2e6fa2;
  }
  png_error(param_1,iVar3);
LAB_002e6f66:
  uVar4 = 3;
LAB_002e6fa4:
  *(undefined1 *)(param_1 + iVar2) = uVar4;
  if (param_6 != 0) {
    png_warning(param_1,DAT_002e7140 + 0x2e6fbc);
  }
  if (((((-1 < *(int *)(param_1 + 0x328) << 0x1d) || (*(int *)(param_1 + 0x134) << 0x13 < 0)) ||
       ((param_5 != 6 && (param_5 != 2)))) || (param_7 != 0x40)) && (param_7 != 0)) {
    png_warning(param_1,DAT_002e7144 + 0x2e6ff0);
    param_7 = 0;
  }
  if (1 < param_8) {
    png_warning(param_1,DAT_002e7148 + 0x2e7004);
    param_8 = 1;
  }
  uVar4 = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x218) = uVar4;
  iVar3 = DAT_002e714c;
  local_48 = (undefined1)param_5;
  *(undefined1 *)(param_1 + DAT_002e714c) = local_48;
  local_40 = (undefined1)param_8;
  *(undefined1 *)(param_1 + 0x214) = local_40;
  local_44 = (undefined1)param_7;
  *(undefined1 *)(param_1 + 0x32c) = local_44;
  *(undefined1 *)(param_1 + 0x34c) = 0;
  *(int *)(param_1 + 0x1c0) = param_2;
  *(undefined4 *)(param_1 + 0x1c4) = param_3;
  bVar1 = *(byte *)(param_1 + iVar2);
  param_4 = bVar1 * param_4;
  uVar6 = param_4 & 0xff;
  *(char *)(param_1 + DAT_002e7150) = (char)param_4;
  if (uVar6 < 8) {
    uVar6 = param_2 * uVar6 + 7 >> 3;
  }
  else {
    uVar6 = param_2 * (uVar6 >> 3);
  }
  *(uint *)(param_1 + 0x1d0) = uVar6;
  *(int *)(param_1 + 0x1cc) = param_2;
  *(undefined1 *)(param_1 + DAT_002e7154) = uVar4;
  *(byte *)(param_1 + 0x21c) = bVar1;
  png_save_uint_32(auStack_2c,param_2);
  png_save_uint_32(auStack_28,param_3);
  local_22 = 0;
  local_20 = local_40;
  local_23 = local_48;
  local_21 = local_44;
  local_24 = uVar4;
  FUN_002e6ea0(param_1,DAT_002e7158,auStack_2c,0xd);
  if (*(char *)(param_1 + DAT_002e715c) == '\0') {
    if ((*(char *)(param_1 + iVar3) == '\x03') || (*(byte *)(param_1 + 0x218) < 8)) {
      *(undefined1 *)(param_1 + DAT_002e715c) = 8;
    }
    else {
      *(undefined1 *)(param_1 + DAT_002e715c) = 0xf8;
    }
  }
  *(undefined4 *)(param_1 + 0x134) = 1;
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


