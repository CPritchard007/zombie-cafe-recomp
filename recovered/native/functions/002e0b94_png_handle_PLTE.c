/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0b94 png_handle_PLTE */

void png_handle_PLTE(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_4 [4];
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  iVar4 = DAT_002e0cc4;
  iVar3 = param_1 + 0xfc;
  uVar6 = *(uint *)(param_1 + 0x134);
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002e0cc4);
  piVar9 = (int *)(&stack0xffffffec + DAT_002e0cc4);
  piVar10 = (int *)(&stack0xffffffec + DAT_002e0cc4);
  piVar11 = (int *)(&stack0xffffffec + DAT_002e0cc4);
  if ((int)(uVar6 << 0x1f) < 0) {
    uVar5 = 2;
    if ((uVar6 & 2) == 0) goto LAB_002e0bc0;
    iVar3 = DAT_002e0ccc + 0x2e0bbc;
  }
  else {
    iVar3 = DAT_002e0cc8 + 0x2e0bb0;
    uVar5 = param_3;
  }
  do {
    png_chunk_error(param_1,iVar3);
    iVar3 = extraout_r1;
LAB_002e0bc0:
    if ((int)(uVar6 << 0x1d) < 0) {
      png_crc_finish(param_1,param_3);
      iVar4 = DAT_002e0cd0 + 0x2e0bd2;
      goto LAB_002e0cac;
    }
    *(uint *)(iVar3 + 0x38) = uVar6 | uVar5;
    if ((*(byte *)(param_1 + DAT_002e0cd4) & uVar5) == 0) {
      png_crc_finish(param_1,param_3);
      iVar4 = DAT_002e0cd8 + 0x2e0bec;
      goto LAB_002e0cac;
    }
    if ((param_3 < 0x301) && (__aeabi_uidivmod(param_3,3), extraout_r1_00 == 0)) {
      uVar2 = __divsi3(param_3,3);
      puVar7 = auStack_4 + iVar4;
      *puVar8 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar4) = uVar2;
      while (*piVar11 < *(int *)(&stack0xfffffff0 + iVar4)) {
        png_crc_read(param_1,&stack0xfffffff8 + iVar4,3);
        iVar3 = *piVar9;
        *puVar7 = (&stack0xfffffff8)[iVar4];
        puVar7[1] = (&stack0xfffffff9)[iVar4];
        uVar1 = (&stack0xfffffffa)[iVar4];
        *piVar10 = iVar3 + 1;
        puVar7[2] = uVar1;
        puVar7 = puVar7 + 3;
      }
      png_crc_finish(param_1,0);
      png_set_PLTE(param_1,param_2,auStack_4 + iVar4,*(undefined4 *)(&stack0xfffffff0 + iVar4));
      if (*(short *)(param_1 + 0x210) == 0) {
        if (param_2 == 0) {
          return;
        }
        if (*(int *)(param_2 + 8) << 0x1b < 0) goto LAB_002e0c7e;
      }
      else {
LAB_002e0c7e:
        *(undefined2 *)(param_1 + 0x210) = 0;
        if (param_2 != 0) {
          *(undefined2 *)(param_2 + 0x16) = 0;
        }
        png_chunk_benign_error(param_1,DAT_002e0ce4 + 0x2e0c90);
        if (param_2 == 0) {
          return;
        }
      }
      if (*(int *)(param_2 + 8) << 0x19 < 0) {
        png_chunk_benign_error(param_1,DAT_002e0ce8 + 0x2e0ca4);
      }
      if (-1 < *(int *)(param_2 + 8) << 0x1a) {
        return;
      }
      iVar4 = DAT_002e0cec + 0x2e0cae;
      goto LAB_002e0cac;
    }
    png_crc_finish(param_1,param_3);
    if (*(char *)(param_1 + DAT_002e0cd4) != '\x03') {
      iVar4 = DAT_002e0cdc + 0x2e0c16;
LAB_002e0cac:
      png_chunk_benign_error(param_1,iVar4);
      return;
    }
    iVar3 = DAT_002e0ce0 + 0x2e0c1c;
    uVar6 = 3;
  } while( true );
}


