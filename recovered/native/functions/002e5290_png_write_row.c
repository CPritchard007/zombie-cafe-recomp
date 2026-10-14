/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5290 png_write_row */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002e52e2) */
/* WARNING: Removing unreachable block (ram,0x002e52e2) */

void png_write_row(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int *extraout_r1;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_24;
  size_t local_20;
  char local_1c;
  char local_1b;
  char local_1a;
  byte local_19;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x1d8) == 0) && (*(char *)(param_1 + DAT_002e54e4) == '\0')) {
    if (*(int *)(param_1 + 0x134) << 0x15 < 0) {
      png_write_start_row(param_1);
      goto LAB_002e52c6;
    }
    iVar2 = DAT_002e54e8 + 0x2e52c0;
LAB_002e53f0:
    png_error(param_1,iVar2);
    piVar3 = extraout_r1;
  }
  else {
LAB_002e52c6:
    if ((*(char *)(param_1 + 0x214) != '\0') && (*(int *)(param_1 + 0x13c) << 0x1e < 0)) {
      switch(*(undefined1 *)(param_1 + DAT_002e54e4)) {
      case 0:
        if ((*(uint *)(param_1 + 0x1d8) & 7) != 0) goto LAB_002e53be;
        break;
      case 1:
        if (((*(uint *)(param_1 + 0x1d8) & 7) != 0) || (*(uint *)(param_1 + 0x1c0) < 5))
        goto LAB_002e53be;
        break;
      case 2:
        if ((*(uint *)(param_1 + 0x1d8) & 7) != 4) goto LAB_002e53be;
        break;
      case 3:
        if (((*(uint *)(param_1 + 0x1d8) & 3) != 0) || (*(uint *)(param_1 + 0x1c0) < 3))
        goto LAB_002e53be;
        break;
      case 4:
        if ((*(uint *)(param_1 + 0x1d8) & 3) != 2) goto LAB_002e53be;
        break;
      case 5:
        if ((*(int *)(param_1 + 0x1d8) << 0x1f < 0) || (*(uint *)(param_1 + 0x1c0) < 2))
        goto LAB_002e53be;
        break;
      case 6:
        if (-1 < *(int *)(param_1 + 0x1d8) << 0x1f) goto LAB_002e53be;
      }
    }
    local_1c = *(char *)(param_1 + DAT_002e54ec);
    local_24 = *(int *)(param_1 + 0x1cc);
    local_1a = *(char *)(param_1 + 0x21c);
    local_1b = *(char *)(param_1 + DAT_002e54f0);
    local_19 = local_1a * local_1b;
    if (local_19 < 8) {
      local_20 = (uint)local_19 * local_24 + 7 >> 3;
    }
    else {
      local_20 = local_24 * (uint)(local_19 >> 3);
    }
    memcpy((void *)(*(int *)(param_1 + 0x1e4) + 1),param_2,local_20);
    if ((((*(char *)(param_1 + 0x214) != '\0') && (*(byte *)(param_1 + DAT_002e54e4) < 6)) &&
        (*(int *)(param_1 + 0x13c) << 0x1e < 0)) &&
       (png_do_write_interlace(&local_24,*(int *)(param_1 + 0x1e4) + 1), local_24 == 0)) {
LAB_002e53be:
      png_write_finish_row(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      png_do_write_transformations(param_1,&local_24);
    }
    piVar3 = &local_24;
    if ((*(byte *)(param_1 + DAT_002e54f4) != local_19) ||
       (*(byte *)(param_1 + DAT_002e54f8) != *(byte *)(param_1 + DAT_002e54f4))) {
      iVar2 = DAT_002e54fc + 0x2e53f2;
      goto LAB_002e53f0;
    }
  }
  if (((*(uint *)(param_1 + 0x328) & 4) != 0) && (*(char *)(param_1 + 0x32c) == '@')) {
    uVar5 = (uint)*(byte *)(piVar3 + 2);
    if ((int)(uVar5 << 0x1e) < 0) {
      iVar2 = *piVar3;
      pcVar7 = (char *)(*(int *)(param_1 + 0x1e4) + 1);
      if (*(char *)((int)piVar3 + 9) == '\b') {
        if (uVar5 == 2) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar5 != 6) goto LAB_002e54a8;
        }
        for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
          *pcVar7 = *pcVar7 - pcVar7[1];
          pcVar7[2] = pcVar7[2] - pcVar7[1];
          pcVar7 = pcVar7 + iVar4;
        }
      }
      else if (*(char *)((int)piVar3 + 9) == '\x10') {
        if (uVar5 == 2) {
          iVar4 = 6;
        }
        else {
          iVar4 = 8;
          if (uVar5 != 6) goto LAB_002e54a8;
        }
        for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
          iVar1 = (uint)CONCAT11(*pcVar7,pcVar7[1]) - (uint)CONCAT11(pcVar7[2],pcVar7[3]);
          *pcVar7 = (char)((uint)(iVar1 * 0x10000) >> 0x18);
          iVar8 = (uint)CONCAT11(pcVar7[4],pcVar7[5]) - (uint)CONCAT11(pcVar7[2],pcVar7[3]);
          pcVar7[1] = (char)iVar1;
          pcVar7[4] = (char)((uint)(iVar8 * 0x10000) >> 0x18);
          pcVar7[5] = (char)iVar8;
          pcVar7 = pcVar7 + iVar4;
        }
      }
    }
  }
LAB_002e54a8:
  if ((local_1c == '\x03') && (-1 < *(int *)(param_1 + 0x20c))) {
    png_do_check_palette_indexes(param_1,&local_24);
  }
  png_write_find_filter(param_1,&local_24);
  if (*(code **)(param_1 + 0x288) != (code *)0x0) {
    (**(code **)(param_1 + 0x288))
              (param_1,*(undefined4 *)(param_1 + 0x1d8),*(undefined1 *)(param_1 + DAT_002e54e4));
  }
  return;
}


