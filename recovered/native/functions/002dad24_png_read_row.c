/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dad24 png_read_row */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002dad9c) */
/* WARNING: Removing unreachable block (ram,0x002dad9c) */

void png_read_row(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int *unaff_r6;
  int iVar8;
  int local_24;
  uint local_20;
  byte local_1c;
  char local_1b;
  undefined1 local_1a;
  byte local_19;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0x138) << 0x19) {
    png_read_start_row(param_1);
  }
  local_1c = *(byte *)(param_1 + DAT_002dafec);
  local_24 = *(int *)(param_1 + 0x1d4);
  local_1b = *(char *)(param_1 + 0x218);
  local_1a = *(undefined1 *)(param_1 + DAT_002daff0);
  local_19 = *(byte *)(param_1 + DAT_002daff4);
  if (local_19 < 8) {
    local_20 = (uint)local_19 * local_24 + 7 >> 3;
  }
  else {
    local_20 = (uint)(local_19 >> 3) * local_24;
  }
  if ((*(char *)(param_1 + 0x214) != '\0') && (*(int *)(param_1 + 0x13c) << 0x1e < 0)) {
    uVar6 = *(uint *)(param_1 + 0x1d8);
    switch(*(undefined1 *)(param_1 + DAT_002daff8)) {
    case 0:
      if ((uVar6 & 7) != 0) {
LAB_002dadfe:
        if (param_3 == 0) goto LAB_002dae12;
LAB_002dae02:
        png_combine_row(param_1,param_3,1);
LAB_002dae12:
        png_read_finish_row(param_1);
        return;
      }
      break;
    case 1:
      if (((uVar6 & 7) != 0) || (*(uint *)(param_1 + 0x1c0) < 5)) goto LAB_002dadfe;
      break;
    case 2:
      if ((uVar6 & 7) != 4) {
        if (param_3 == 0) goto LAB_002dae12;
        iVar3 = uVar6 << 0x1d;
joined_r0x002dadec:
        if (-1 < iVar3) goto LAB_002dae12;
        goto LAB_002dae02;
      }
      break;
    case 3:
      if (((uVar6 & 3) != 0) || (*(uint *)(param_1 + 0x1c0) < 3)) goto LAB_002dadfe;
      break;
    case 4:
      if ((uVar6 & 3) != 2) {
        if (param_3 == 0) goto LAB_002dae12;
        iVar3 = uVar6 << 0x1e;
        goto joined_r0x002dadec;
      }
      break;
    case 5:
      if (((int)(uVar6 << 0x1f) < 0) || (*(uint *)(param_1 + 0x1c0) < 2)) goto LAB_002dadfe;
      break;
    default:
      if (-1 < (int)(uVar6 << 0x1f)) goto LAB_002dae12;
    }
  }
  if (*(int *)(param_1 + 0x134) << 0x1d < 0) {
    png_read_IDAT_data(param_1,*(undefined4 *)(param_1 + 0x1e4),local_20 + 1);
    unaff_r6 = (int *)0x1e0;
    bVar1 = **(byte **)(param_1 + 0x1e4);
    if (bVar1 == 0) goto LAB_002dae64;
    if (bVar1 < 5) {
      png_read_filter_row(param_1,&local_24,*(byte **)(param_1 + 0x1e4) + 1,
                          *(int *)(param_1 + 0x1e0) + 1,bVar1);
      goto LAB_002dae64;
    }
    iVar3 = DAT_002db000 + 0x2dae60;
  }
  else {
    iVar3 = DAT_002daffc + 0x2dae2a;
  }
LAB_002dae5e:
  png_error(param_1,iVar3);
LAB_002dae64:
  memcpy(*(void **)(param_1 + (int)unaff_r6),*(void **)(param_1 + 0x1e4),local_20 + 1);
  iVar3 = 4;
  unaff_r6 = &local_24;
  if (((*(uint *)(param_1 + 0x328) & 4) != 0) && (*(char *)(param_1 + 0x32c) == '@')) {
    uVar6 = (uint)local_1c;
    if ((int)(uVar6 << 0x1e) < 0) {
      pcVar7 = (char *)(*(int *)(param_1 + 0x1e4) + 1);
      if (local_1b == '\b') {
        if (uVar6 == 2) {
          iVar3 = 3;
        }
        else if (uVar6 != 6) goto LAB_002daf28;
        for (iVar4 = 0; iVar4 != local_24; iVar4 = iVar4 + 1) {
          *pcVar7 = pcVar7[1] + *pcVar7;
          unaff_r6 = (int *)(uint)(byte)pcVar7[2];
          pcVar7[2] = pcVar7[1] + pcVar7[2];
          pcVar7 = pcVar7 + iVar3;
        }
      }
      else if (local_1b == '\x10') {
        if (uVar6 == 2) {
          iVar3 = 6;
        }
        else {
          iVar3 = 8;
          if (uVar6 != 6) goto LAB_002daf28;
        }
        for (iVar4 = 0; iVar4 != local_24; iVar4 = iVar4 + 1) {
          iVar2 = (uint)CONCAT11(pcVar7[2],pcVar7[3]) + (uint)CONCAT11(*pcVar7,pcVar7[1]);
          *pcVar7 = (char)((uint)(iVar2 * 0x10000) >> 0x18);
          iVar8 = (uint)CONCAT11(pcVar7[4],pcVar7[5]) + (uint)CONCAT11(pcVar7[2],pcVar7[3]);
          uVar6 = iVar8 * 0x10000;
          unaff_r6 = (int *)(uVar6 >> 0x18);
          pcVar7[1] = (char)iVar2;
          pcVar7[4] = (char)(uVar6 >> 0x18);
          pcVar7[5] = (char)iVar8;
          pcVar7 = pcVar7 + iVar3;
        }
      }
    }
  }
LAB_002daf28:
  if (*(int *)(param_1 + 0x13c) != 0) {
    png_do_read_transformations(param_1,&local_24);
  }
  iVar3 = DAT_002db008;
  if (*(byte *)(param_1 + DAT_002db004) != 0) {
    if (local_19 == *(byte *)(param_1 + DAT_002db004)) goto LAB_002daf62;
    iVar3 = DAT_002db010 + 0x2daf62;
    goto LAB_002dae5e;
  }
  *(byte *)(param_1 + DAT_002db004) = local_19;
  if (*(byte *)(param_1 + iVar3) < local_19) {
    iVar3 = DAT_002db00c + 0x2daf56;
    goto LAB_002dae5e;
  }
LAB_002daf62:
  if ((*(char *)(param_1 + 0x214) == '\0') || (-1 < *(int *)(param_1 + 0x13c) << 0x1e)) {
    if (param_2 != 0) {
      png_combine_row(param_1,param_2,0xffffffff);
    }
    if (param_3 == 0) goto LAB_002dafca;
    uVar5 = 0xffffffff;
  }
  else {
    if (*(byte *)(param_1 + DAT_002daff8) < 6) {
      png_do_read_interlace(&local_24,*(int *)(param_1 + 0x1e4) + 1);
    }
    if (param_3 != 0) {
      png_combine_row(param_1,param_3,1);
    }
    if (param_2 == 0) goto LAB_002dafca;
    uVar5 = 0;
    param_3 = param_2;
  }
  png_combine_row(param_1,param_3,uVar5);
LAB_002dafca:
  png_read_finish_row(param_1);
  if (*(code **)(param_1 + 0x284) != (code *)0x0) {
    (**(code **)(param_1 + 0x284))
              (param_1,*(undefined4 *)(param_1 + 0x1d8),*(undefined1 *)(param_1 + DAT_002daff8));
    return;
  }
  return;
}


