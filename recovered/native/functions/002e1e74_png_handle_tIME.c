/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1e74 png_handle_tIME */

void png_handle_tIME(int param_1,int param_2,int param_3)

{
  int extraout_r1;
  int iVar1;
  uint uVar2;
  byte local_20;
  byte local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  short local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  uVar2 = *(uint *)(param_1 + 0x134);
  iVar1 = param_2;
  if (-1 < (int)(uVar2 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e1f10 + 0x2e1e8e);
    iVar1 = extraout_r1;
  }
  if ((iVar1 == 0) || (-1 < *(int *)(iVar1 + 8) << 0x16)) {
    if ((int)(uVar2 << 0x1d) < 0) {
      *(uint *)(param_1 + 0x134) = uVar2 | 8;
    }
    if (param_3 == 7) {
      png_crc_read(param_1,&local_20);
      iVar1 = png_crc_finish(param_1,0);
      if (iVar1 != 0) {
        return;
      }
      local_12 = local_1a;
      local_13 = local_1b;
      local_14 = local_1c;
      local_15 = local_1d;
      local_16 = local_1e;
      local_18 = (ushort)local_20 * 0x100 + (ushort)local_1f;
      png_set_tIME(param_1,param_2);
      return;
    }
    png_crc_finish(param_1,param_3);
    iVar1 = DAT_002e1f18 + 0x2e1ec8;
  }
  else {
    png_crc_finish(param_1,param_3);
    iVar1 = DAT_002e1f14 + 0x2e1ea8;
  }
  png_chunk_benign_error(param_1,iVar1);
  return;
}


