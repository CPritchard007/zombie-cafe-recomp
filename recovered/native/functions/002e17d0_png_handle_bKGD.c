/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e17d0 png_handle_bKGD */

void png_handle_bKGD(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_24 [2];
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  
  iVar4 = *(int *)(param_1 + 0x134);
  if (-1 < iVar4 << 0x1f) {
    png_chunk_error(param_1,DAT_002e18f4 + 0x2e17ea);
  }
  iVar2 = DAT_002e18f8;
  if ((iVar4 << 0x1d < 0) ||
     ((bVar1 = *(byte *)(param_1 + DAT_002e18f8), bVar1 == 3 && (-1 < iVar4 << 0x1e)))) {
    png_crc_finish(param_1,param_3);
    iVar4 = DAT_002e18fc + 0x2e180a;
  }
  else if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x1a)) {
    iVar4 = 1;
    if ((bVar1 != 3) && (iVar4 = 2, (bVar1 & 2) != 0)) {
      iVar4 = 6;
    }
    if (param_3 == iVar4) {
      png_crc_read(param_1,&local_2c);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 != 0) {
        return;
      }
      bVar1 = *(byte *)(param_1 + iVar2);
      if (bVar1 == 3) {
        local_24[0] = local_2c;
        if ((param_2 == 0) || (*(ushort *)(param_2 + 0x14) == 0)) {
          local_1e = 0;
          local_20 = 0;
          local_22 = 0;
        }
        else {
          if ((uint)*(ushort *)(param_2 + 0x14) <= (uint)local_2c) {
            iVar4 = DAT_002e1908 + 0x2e1878;
            goto LAB_002e1876;
          }
          pbVar3 = (byte *)(*(int *)(param_1 + 0x204) + (uint)local_2c * 3);
          local_22 = (ushort)*pbVar3;
          local_20 = (ushort)pbVar3[1];
          local_1e = (ushort)pbVar3[2];
        }
        local_1c = 0;
      }
      else {
        local_24[0] = bVar1 & 2;
        if ((bVar1 & 2) == 0) {
          local_22 = (ushort)local_2c * 0x100 + (ushort)local_2b;
          local_20 = local_22;
          local_1e = local_22;
          local_1c = local_22;
        }
        else {
          local_22 = (ushort)local_2c * 0x100 + (ushort)local_2b;
          local_24[0] = 0;
          local_20 = (ushort)local_2a * 0x100 + (ushort)local_29;
          local_1c = 0;
          local_1e = (ushort)local_28 * 0x100 + (ushort)local_27;
        }
      }
      png_set_bKGD(param_1,param_2,local_24);
      return;
    }
    png_crc_finish(param_1,param_3);
    iVar4 = DAT_002e1904 + 0x2e1842;
  }
  else {
    png_crc_finish(param_1,param_3);
    iVar4 = DAT_002e1900 + 0x2e1822;
  }
LAB_002e1876:
  png_chunk_benign_error(param_1,iVar4);
  return;
}


