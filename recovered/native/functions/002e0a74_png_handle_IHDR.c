/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0a74 png_handle_IHDR */

void png_handle_IHDR(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  char local_24;
  char local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  int local_1c;
  
  piVar5 = *(int **)(DAT_002e0b7c + 0x2e0a80);
  uVar7 = 1;
  local_1c = *piVar5;
  uVar8 = CONCAT44(param_1 + 0xfc,*(uint *)(param_1 + 0x134));
  uVar6 = *(uint *)(param_1 + 0x134) & 1;
  if (uVar6 == 0) {
    if (param_3 == 0xd) goto LAB_002e0aaa;
    iVar3 = DAT_002e0b84 + 0x2e0aa6;
  }
  else {
    iVar3 = DAT_002e0b80 + 0x2e0a9c;
  }
  uVar8 = png_chunk_error(param_1,iVar3);
LAB_002e0aaa:
  *(uint *)((int)((ulonglong)uVar8 >> 0x20) + 0x38) = (uint)uVar8 | 1;
  png_crc_read(param_1,auStack_2c);
  png_crc_finish(param_1,uVar6);
  iVar1 = png_get_uint_31(param_1,auStack_2c);
  uVar2 = png_get_uint_31(param_1,auStack_28);
  *(int *)(param_1 + 0x1c0) = iVar1;
  *(undefined4 *)(param_1 + 0x1c4) = uVar2;
  *(char *)(param_1 + 0x218) = local_24;
  *(undefined1 *)(param_1 + 0x214) = local_20;
  *(char *)(param_1 + DAT_002e0b88) = local_23;
  *(undefined1 *)(param_1 + 0x32c) = local_21;
  *(undefined1 *)(param_1 + 0x34c) = local_22;
  iVar3 = DAT_002e0b8c;
  if (local_23 == '\x04') {
    uVar7 = 2;
  }
  else if (local_23 == '\x06') {
    uVar7 = 4;
  }
  else if (local_23 == '\x02') {
    uVar7 = 3;
  }
  *(undefined1 *)(param_1 + DAT_002e0b8c) = uVar7;
  bVar4 = local_24 * *(char *)(param_1 + iVar3);
  *(byte *)(param_1 + DAT_002e0b90) = bVar4;
  if (bVar4 < 8) {
    uVar6 = iVar1 * (uint)bVar4 + 7 >> 3;
  }
  else {
    uVar6 = iVar1 * (uint)(bVar4 >> 3);
  }
  *(uint *)(param_1 + 0x1d0) = uVar6;
  png_set_IHDR(param_1,param_2,iVar1,uVar2,local_24,local_23,local_20,local_22,local_21);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


