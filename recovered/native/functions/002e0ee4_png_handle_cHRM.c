/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0ee4 png_handle_cHRM */

void png_handle_cHRM(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint extraout_r1;
  int iVar9;
  int *piVar10;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  int local_1c;
  
  piVar10 = *(int **)(DAT_002e101c + 0x2e0ef0);
  local_1c = *piVar10;
  uVar8 = *(uint *)(param_1 + 0x134);
  if (-1 < (int)(uVar8 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e1020 + 0x2e0f08);
    uVar8 = extraout_r1;
  }
  if ((uVar8 & 6) == 0) {
    if (param_3 == 0x20) {
      png_crc_read(param_1,auStack_3c);
      iVar9 = png_crc_finish(param_1,0);
      if (iVar9 != 0) goto LAB_002e1008;
      iVar9 = FUN_002e0478(auStack_3c);
      local_44 = iVar9;
      iVar2 = FUN_002e0478(auStack_38);
      local_40 = iVar2;
      iVar3 = FUN_002e0478(auStack_34);
      local_5c = iVar3;
      iVar4 = FUN_002e0478(auStack_30);
      local_58 = iVar4;
      iVar5 = FUN_002e0478(auStack_2c);
      local_54 = iVar5;
      iVar6 = FUN_002e0478(auStack_28);
      local_50 = iVar6;
      iVar7 = FUN_002e0478(auStack_24);
      local_4c = iVar7;
      local_48 = FUN_002e0478(auStack_20);
      if (((((iVar9 == -1) || (iVar2 == -1)) || (iVar3 == -1)) || ((iVar4 == -1 || (iVar5 == -1))))
         || ((iVar6 == -1 || ((iVar7 == -1 || (local_48 == -1)))))) {
        iVar9 = DAT_002e102c + 0x2e0fba;
      }
      else {
        uVar1 = *(ushort *)(param_1 + DAT_002e1030);
        if ((short)uVar1 < 0) goto LAB_002e1008;
        if ((uVar1 & 0x10) == 0) {
          *(ushort *)(param_1 + DAT_002e1030) = uVar1 | 0x10;
          png_colorspace_set_chromaticities(param_1,param_1 + 0x39c,&local_5c,1);
          png_colorspace_sync(param_1,param_2);
          goto LAB_002e1008;
        }
        *(ushort *)(param_1 + DAT_002e1030) = uVar1 | (ushort)DAT_002e1034;
        png_colorspace_sync(param_1,param_2);
        iVar9 = DAT_002e1038 + 0x2e0fe2;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      iVar9 = DAT_002e1028 + 0x2e0f2e;
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    iVar9 = DAT_002e1024 + 0x2e0f1e;
  }
  png_chunk_benign_error(param_1,iVar9);
LAB_002e1008:
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


