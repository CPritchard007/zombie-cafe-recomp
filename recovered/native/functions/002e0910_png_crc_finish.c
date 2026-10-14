/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0910 png_crc_finish */

void png_crc_finish(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = DAT_002e09ac;
  iVar1 = DAT_002e09a8;
  piVar6 = *(int **)(DAT_002e09a4 + 0x2e091c);
  *(int *)(&stack0x000003f0 + DAT_002e09a8) = *piVar6;
  for (; param_2 != 0; param_2 = param_2 - uVar4) {
    uVar4 = param_2;
    if (uVar5 < param_2) {
      uVar4 = 0x400;
    }
    png_crc_read(param_1,&stack0xfffffff0 + iVar1);
  }
  iVar2 = png_crc_error(param_1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1dc) << 2 < 0) {
      uVar5 = (uint)((*(uint *)(param_1 + 0x138) & 0x200) == 0);
    }
    else {
      uVar5 = (uint)(*(int *)(param_1 + 0x138) << 0x15) >> 0x1f;
    }
    if (uVar5 != 0) {
      png_chunk_warning(param_1,DAT_002e09b0 + 0x2e097c);
      uVar3 = 1;
      goto LAB_002e098e;
    }
    png_chunk_error(param_1,DAT_002e09b4 + 0x2e098a);
  }
  uVar3 = 0;
LAB_002e098e:
  if (*(int *)(&stack0x000003f0 + iVar1) != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


