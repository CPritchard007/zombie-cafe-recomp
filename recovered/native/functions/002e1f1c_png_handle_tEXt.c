/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1f1c png_handle_tEXt */

void png_handle_tEXt(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_34;
  byte *local_30;
  byte *local_2c;
  size_t local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  iVar1 = *(int *)(param_1 + 0x358);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x358) = iVar1 + -1;
    if (iVar1 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      iVar1 = DAT_002e1fec + 0x2e1f50;
      goto LAB_002e1f80;
    }
  }
  iVar1 = param_1 + 0xfc;
  uVar2 = *(uint *)(param_1 + 0x134);
  if (-1 < (int)(uVar2 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e1ff0 + 0x2e1f62);
  }
  if ((int)(uVar2 << 0x1d) < 0) {
    *(uint *)(iVar1 + 0x38) = uVar2 | 8;
  }
  local_30 = (byte *)FUN_002e040c(param_1,param_3 + 1,1);
  if (local_30 != (byte *)0x0) {
    png_crc_read(param_1,local_30,param_3);
    iVar1 = png_crc_finish(param_1,0);
    if (iVar1 != 0) {
      return;
    }
    local_30[param_3] = 0;
    for (local_2c = local_30; local_24 = (uint)*local_2c, local_24 != 0; local_2c = local_2c + 1) {
    }
    local_2c = local_2c + (local_2c != local_30 + param_3);
    local_34 = 0xffffffff;
    local_20 = local_24;
    local_1c = local_24;
    local_28 = strlen((char *)local_2c);
    iVar1 = png_set_text_2(param_1,param_2,&local_34,1);
    if (iVar1 == 0) {
      return;
    }
    png_warning(param_1,DAT_002e1ff8 + 0x2e1fe4);
    return;
  }
  iVar1 = DAT_002e1ff4 + 0x2e1f82;
LAB_002e1f80:
  png_chunk_benign_error(param_1,iVar1);
  return;
}


