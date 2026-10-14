/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e2ba4 png_read_IDAT_data */

void png_read_IDAT_data(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = DAT_002e2cfc;
  puVar5 = *(undefined4 **)(DAT_002e2cf8 + 0x2e2bb0);
  *(undefined4 *)(&stack0x00000400 + DAT_002e2cfc) = *puVar5;
  *(int *)(param_1 + 0x150) = param_2;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 **)(&stack0xfffffff8 + iVar1) = puVar5;
  if (param_2 == 0) {
    param_3 = 0;
  }
  do {
    if (*(int *)(param_1 + 0x148) == 0) {
      while (uVar4 = *(uint *)(param_1 + 0x1fc), uVar4 == 0) {
        png_crc_finish(param_1);
        uVar2 = png_read_chunk_header(param_1);
        *(undefined4 *)(param_1 + 0x1fc) = uVar2;
        if (*(int *)(param_1 + 0x1dc) != DAT_002e2d00) {
          iVar3 = DAT_002e2d04 + 0x2e2c00;
          goto LAB_002e2cd0;
        }
      }
      uVar6 = *(uint *)(param_1 + 0x380);
      *(uint *)(&stack0xfffffff0 + iVar1) = uVar4;
      if (uVar6 < uVar4) {
        *(uint *)(&stack0xfffffff0 + iVar1) = uVar6;
      }
      uVar2 = FUN_002e040c(param_1,*(undefined4 *)(&stack0xfffffff0 + iVar1),0);
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar2;
      png_crc_read(param_1,*(undefined4 *)(&stack0xfffffff4 + iVar1),
                   *(undefined4 *)(&stack0xfffffff0 + iVar1));
      iVar3 = *(int *)(&stack0xfffffff0 + iVar1);
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) - iVar3;
      uVar2 = *(undefined4 *)(&stack0xfffffff4 + iVar1);
      *(int *)(param_1 + 0x148) = iVar3;
      *(undefined4 *)(param_1 + 0x144) = uVar2;
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x150) = &stack0x00000000 + iVar1;
      iVar3 = 0x400;
    }
    else {
      iVar3 = param_3;
      param_3 = 0;
    }
    *(int *)(param_1 + 0x154) = iVar3;
    iVar3 = inflate(param_1 + 0x144,0);
    if (param_2 == 0) {
      param_3 = (param_3 - *(int *)(param_1 + 0x154)) + 0x400;
    }
    else {
      param_3 = param_3 + *(int *)(param_1 + 0x154);
    }
    *(undefined4 *)(param_1 + 0x154) = 0;
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 8;
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 8;
      if ((*(int *)(param_1 + 0x148) != 0) || (*(int *)(param_1 + 0x1fc) != 0)) {
        png_chunk_benign_error(param_1,DAT_002e2d08 + 0x2e2ca4);
      }
      if (param_3 != 0) {
        if (param_2 != 0) {
          iVar3 = DAT_002e2d0c + 0x2e2cd2;
LAB_002e2cd0:
          png_error(param_1,iVar3);
        }
        iVar3 = DAT_002e2d10 + 0x2e2cde;
LAB_002e2cdc:
        png_chunk_benign_error(param_1,iVar3);
      }
      break;
    }
    if (iVar3 != 0) {
      png_zstream_error(param_1);
      iVar3 = *(int *)(param_1 + 0x15c);
      if (param_2 == 0) goto LAB_002e2cdc;
      png_chunk_error(param_1,iVar3);
    }
  } while (param_3 != 0);
  if (*(int *)(&stack0x00000400 + iVar1) == **(int **)(&stack0xfffffff8 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


