/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0cf0 png_handle_IEND */

void png_handle_IEND(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0xfc;
  uVar2 = *(uint *)(param_1 + 0x134);
  iVar1 = param_1;
  if ((uVar2 & 5) != 5) {
    iVar1 = png_chunk_error(param_1,DAT_002e0d28 + 0x2e0d0a,uVar2,iVar3,param_4);
  }
  *(uint *)(iVar3 + 0x38) = uVar2 | 0x18;
  png_crc_finish(iVar1,param_3);
  if (param_3 != 0) {
    png_chunk_benign_error(param_1,DAT_002e0d2c + 0x2e0d24);
  }
  return;
}


