/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e58ec png_set_filter */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002e5912) */
/* WARNING: Removing unreachable block (ram,0x002e5912) */

void png_set_filter(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar1 = DAT_002e5a58;
  if (param_1 == 0) {
    return;
  }
  iVar4 = param_4;
  if (((param_2 != 0x40) || (iVar4 = *(int *)(param_1 + 0x328), -1 < iVar4 << 0x1d)) &&
     (param_2 != 0)) {
    png_error(param_1,DAT_002e5a6c + 0x2e5a52);
    return;
  }
  switch(param_3 & 0xff) {
  case 1:
    uVar3 = 0x10;
    break;
  case 2:
    uVar3 = 0x20;
    break;
  case 3:
    uVar3 = 0x40;
    break;
  case 4:
    uVar3 = 0x80;
    break;
  case 5:
  case 6:
  case 7:
    png_app_error(param_1,DAT_002e5a5c + 0x2e5926,param_3,iVar4,param_4);
  case 0:
    uVar3 = 8;
    break;
  default:
    *(char *)(param_1 + DAT_002e5a58) = (char)param_3;
    goto LAB_002e5940;
  }
  *(undefined1 *)(param_1 + iVar1) = uVar3;
LAB_002e5940:
  if (*(int *)(param_1 + 0x1e4) != 0) {
    if (((int)((uint)*(byte *)(param_1 + iVar1) << 0x1b) < 0) && (*(int *)(param_1 + 0x1e8) == 0)) {
      puVar2 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1);
      *(undefined1 **)(param_1 + 0x1e8) = puVar2;
      *puVar2 = 1;
    }
    if (((*(byte *)(param_1 + iVar1) & 0x20) != 0) && (*(int *)(param_1 + 0x1ec) == 0)) {
      if (*(int *)(param_1 + 0x1e0) == 0) {
        png_warning(param_1,DAT_002e5a60 + 0x2e5994);
        *(byte *)(param_1 + DAT_002e5a58) = *(byte *)(param_1 + DAT_002e5a58) & 0xdf;
      }
      else {
        puVar2 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1);
        *(undefined1 **)(param_1 + 0x1ec) = puVar2;
        *puVar2 = 2;
      }
    }
    if (((*(byte *)(param_1 + iVar1) & 0x40) != 0) && (*(int *)(param_1 + 0x1f0) == 0)) {
      if (*(int *)(param_1 + 0x1e0) == 0) {
        png_warning(param_1,DAT_002e5a64 + 0x2e59d8);
        *(byte *)(param_1 + DAT_002e5a58) = *(byte *)(param_1 + DAT_002e5a58) & 0xbf;
      }
      else {
        puVar2 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1);
        *(undefined1 **)(param_1 + 0x1f0) = puVar2;
        *puVar2 = 3;
      }
    }
    iVar4 = DAT_002e5a58;
    if ((0x7f < *(byte *)(param_1 + iVar1)) && (*(int *)(param_1 + 500) == 0)) {
      if (*(int *)(param_1 + 0x1e0) == 0) {
        png_warning(param_1,DAT_002e5a68 + 0x2e5a1c);
        *(byte *)(param_1 + iVar4) = *(byte *)(param_1 + iVar4) & 0x7f;
      }
      else {
        puVar2 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1);
        *(undefined1 **)(param_1 + 500) = puVar2;
        *puVar2 = 4;
      }
    }
    if (*(char *)(param_1 + iVar1) == '\0') {
      *(undefined1 *)(param_1 + DAT_002e5a58) = 8;
    }
  }
  return;
}


