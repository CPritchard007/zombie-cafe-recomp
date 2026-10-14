/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e103c png_handle_sRGB */

undefined8 png_handle_sRGB(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_1c;
  int iStack_18;
  
  uVar3 = *(uint *)(param_1 + 0x134);
  iVar2 = param_1;
  uStack_1c = param_2;
  iStack_18 = param_3;
  if (-1 < (int)(uVar3 << 0x1f)) {
    iVar2 = png_chunk_error(param_1,DAT_002e10cc + 0x2e1052);
  }
  if ((uVar3 & 6) == 0) {
    if (param_3 == 1) {
      png_crc_read(iVar2,(int)&uStack_1c + 3);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 != 0) goto LAB_002e10ca;
      uVar1 = *(ushort *)(param_1 + DAT_002e10d8);
      if ((short)uVar1 < 0) goto LAB_002e10ca;
      if (-1 < (int)((uint)uVar1 << 0x1d)) {
        png_colorspace_set_sRGB(param_1,param_1 + 0x39c,uStack_1c._3_1_);
        png_colorspace_sync(param_1,param_2);
        goto LAB_002e10ca;
      }
      *(ushort *)(param_1 + DAT_002e10d8) = uVar1 | (ushort)DAT_002e10dc;
      png_colorspace_sync(param_1,param_2);
      iVar2 = DAT_002e10e0 + 0x2e10ae;
    }
    else {
      png_crc_finish(iVar2,param_3);
      iVar2 = DAT_002e10d4 + 0x2e1076;
    }
  }
  else {
    png_crc_finish(iVar2,param_3);
    iVar2 = DAT_002e10d0 + 0x2e1066;
  }
  png_chunk_benign_error(param_1,iVar2);
LAB_002e10ca:
  return CONCAT44(uStack_1c,param_1);
}


