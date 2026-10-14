/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0d30 png_handle_gAMA */

undefined8 png_handle_gAMA(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uStack_14;
  
  uVar3 = *(uint *)(param_1 + 0x134);
  iVar1 = param_1;
  uStack_14 = param_2;
  if (-1 < (int)(uVar3 << 0x1f)) {
    iVar1 = png_chunk_error(param_1,DAT_002e0da0 + 0x2e0d46);
  }
  if ((uVar3 & 6) == 0) {
    if (param_3 == 4) {
      png_crc_read(iVar1,&uStack_14);
      iVar1 = png_crc_finish(param_1,0);
      if (iVar1 == 0) {
        uVar2 = FUN_002e0478(&uStack_14);
        png_colorspace_set_gamma(param_1,param_1 + 0x39c,uVar2);
        png_colorspace_sync(param_1,param_2);
      }
      goto LAB_002e0d9e;
    }
    png_crc_finish(iVar1,param_3);
    iVar1 = DAT_002e0da8 + 0x2e0d6a;
  }
  else {
    png_crc_finish(iVar1,param_3);
    iVar1 = DAT_002e0da4 + 0x2e0d5a;
  }
  png_chunk_benign_error(param_1,iVar1);
LAB_002e0d9e:
  return CONCAT44(uStack_14,param_1);
}


