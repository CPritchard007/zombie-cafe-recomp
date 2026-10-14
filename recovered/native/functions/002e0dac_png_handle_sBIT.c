/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0dac png_handle_sBIT */

void png_handle_sBIT(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint local_28;
  byte local_1c [8];
  
  uVar4 = *(uint *)(param_1 + 0x134);
  iVar2 = param_1;
  if (-1 < (int)(uVar4 << 0x1f)) {
    iVar2 = png_chunk_error(param_1,DAT_002e0ebc + 0x2e0dc6);
  }
  if ((uVar4 & 6) == 0) {
    if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x1e)) {
      if (*(char *)(param_1 + DAT_002e0ec8) == '\x03') {
        bVar3 = 8;
        local_28 = 3;
      }
      else {
        local_28 = (uint)*(byte *)(param_1 + DAT_002e0ecc);
        bVar3 = *(byte *)(param_1 + 0x218);
      }
      if ((param_3 != local_28) || (4 < param_3)) {
        png_chunk_benign_error(param_1,DAT_002e0ed0 + 0x2e0e2c);
        png_crc_finish(param_1,param_3);
        return;
      }
      local_1c[0] = bVar3;
      local_1c[1] = bVar3;
      local_1c[2] = bVar3;
      local_1c[3] = bVar3;
      png_crc_read(param_1,local_1c,local_28);
      uVar4 = png_crc_finish(param_1,0);
      iVar1 = DAT_002e0edc;
      iVar2 = DAT_002e0ed8;
      if (uVar4 != 0) {
        return;
      }
      while( true ) {
        if (uVar4 == local_28) {
          if ((int)((uint)*(byte *)(param_1 + DAT_002e0ec8) << 0x1e) < 0) {
            *(byte *)(param_1 + 0x268) = local_1c[0];
            *(byte *)(param_1 + iVar2) = local_1c[1];
            *(byte *)(param_1 + iVar1) = local_1c[2];
            bVar3 = local_1c[3];
          }
          else {
            *(byte *)(param_1 + DAT_002e0ee0) = local_1c[0];
            *(byte *)(param_1 + 0x268) = local_1c[0];
            *(byte *)(param_1 + iVar2) = local_1c[0];
            *(byte *)(param_1 + iVar1) = local_1c[0];
            bVar3 = local_1c[1];
          }
          *(byte *)(param_1 + 0x26c) = bVar3;
          png_set_sBIT(param_1,param_2,param_1 + 0x268);
          return;
        }
        if ((local_1c[uVar4] == 0) || (bVar3 < local_1c[uVar4])) break;
        uVar4 = uVar4 + 1;
      }
      iVar2 = DAT_002e0ed4 + 0x2e0e6a;
    }
    else {
      png_crc_finish(iVar2,param_3);
      iVar2 = DAT_002e0ec4 + 0x2e0df2;
    }
  }
  else {
    png_crc_finish(iVar2,param_3);
    iVar2 = DAT_002e0ec0 + 0x2e0dda;
  }
  png_chunk_benign_error(param_1,iVar2);
  return;
}


