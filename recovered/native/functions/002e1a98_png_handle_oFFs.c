/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1a98 png_handle_oFFs */

void png_handle_oFFs(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  undefined1 local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_002e1b58 + 0x2e1aa4);
  local_1c = *piVar3;
  iVar2 = *(int *)(param_1 + 0x134);
  iVar1 = param_1;
  if (-1 < iVar2 << 0x1f) {
    iVar1 = png_chunk_error(param_1,DAT_002e1b5c + 0x2e1aba);
  }
  if (iVar2 << 0x1d < 0) {
    png_crc_finish(iVar1,param_3);
    iVar1 = DAT_002e1b60 + 0x2e1acc;
  }
  else if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x17)) {
    if (param_3 == 9) {
      png_crc_read(param_1,&local_28);
      iVar1 = png_crc_finish(param_1,0);
      if (iVar1 == 0) {
        png_set_oFFs(param_1,param_2,
                     (uint)local_28 * 0x1000000 + (uint)local_27 * 0x10000 + (uint)local_25 +
                     (uint)local_26 * 0x100,
                     (uint)local_24 * 0x1000000 + (uint)local_23 * 0x10000 + (uint)local_21 +
                     (uint)local_22 * 0x100,local_20);
      }
      goto LAB_002e1b48;
    }
    png_crc_finish(param_1,param_3);
    iVar1 = DAT_002e1b68 + 0x2e1afa;
  }
  else {
    png_crc_finish(iVar1,param_3);
    iVar1 = DAT_002e1b64 + 0x2e1ae2;
  }
  png_chunk_benign_error(param_1,iVar1);
LAB_002e1b48:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


