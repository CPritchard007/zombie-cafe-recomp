/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7ecc png_write_start_row */

void png_write_start_row(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = DAT_002e7fec;
  uVar5 = (uint)*(byte *)(param_1 + DAT_002e7fe0) * (uint)*(byte *)(param_1 + 0x21c);
  if (uVar5 < 8) {
    uVar6 = uVar5 * *(int *)(param_1 + 0x1c0) + 7 >> 3;
  }
  else {
    uVar6 = (uVar5 >> 3) * *(int *)(param_1 + 0x1c0);
  }
  *(undefined1 *)(param_1 + DAT_002e7fe8) = *(undefined1 *)(param_1 + DAT_002e7fe4);
  iVar4 = DAT_002e7ff0;
  *(char *)(param_1 + DAT_002e7ff0) = (char)uVar5;
  puVar1 = (undefined1 *)png_malloc(param_1,uVar6 + 1,iVar4,uVar5,param_4);
  *(undefined1 **)(param_1 + 0x1e4) = puVar1;
  *puVar1 = 0;
  iVar4 = (uint)*(byte *)(param_1 + iVar3) << 0x1b;
  if (iVar4 < 0) {
    puVar1 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1,iVar4,0x1d0,param_4);
    *(undefined1 **)(param_1 + 0x1e8) = puVar1;
    *puVar1 = 1;
  }
  if ((*(byte *)(param_1 + iVar3) & 0xe0) != 0) {
    uVar2 = png_calloc(param_1,uVar6 + 1);
    *(undefined4 *)(param_1 + 0x1e0) = uVar2;
    if ((int)((uint)*(byte *)(param_1 + DAT_002e7fec) << 0x1a) < 0) {
      puVar1 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1);
      *(undefined1 **)(param_1 + 0x1ec) = puVar1;
      *puVar1 = 2;
    }
    iVar4 = (uint)*(byte *)(param_1 + iVar3) << 0x19;
    if (iVar4 < 0) {
      puVar1 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1,iVar4,0x1d0,param_4);
      *(undefined1 **)(param_1 + 0x1f0) = puVar1;
      *puVar1 = 3;
    }
    if (0x7f < *(byte *)(param_1 + iVar3)) {
      puVar1 = (undefined1 *)png_malloc(param_1,*(int *)(param_1 + 0x1d0) + 1);
      *(undefined1 **)(param_1 + 500) = puVar1;
      *puVar1 = 4;
    }
  }
  if (*(char *)(param_1 + 0x214) == '\0') {
    iVar3 = *(int *)(param_1 + 0x1c4);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1c4);
    if (-1 < *(int *)(param_1 + 0x13c) << 0x1e) {
      *(uint *)(param_1 + 0x1c8) = iVar3 + 7U >> 3;
      uVar5 = *(int *)(param_1 + 0x1c0) + 7U >> 3;
      goto LAB_002e7fdc;
    }
  }
  *(int *)(param_1 + 0x1c8) = iVar3;
  uVar5 = *(uint *)(param_1 + 0x1c0);
LAB_002e7fdc:
  *(uint *)(param_1 + 0x1cc) = uVar5;
  return;
}


