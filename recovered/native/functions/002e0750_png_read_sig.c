/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0750 png_read_sig */

undefined8 png_read_sig(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20;
  
  iVar1 = DAT_002e07c4;
  uVar2 = (uint)*(byte *)(param_1 + DAT_002e07c4);
  local_20 = param_1;
  if (uVar2 < 8) {
    local_20 = 8 - uVar2;
    *(undefined4 *)(param_1 + 900) = 0x11;
    png_read_data(param_1,param_2 + uVar2 + 0x20,local_20);
    *(undefined1 *)(param_1 + iVar1) = 8;
    iVar1 = png_sig_cmp(param_2 + 0x20,uVar2,local_20);
    if (iVar1 != 0) {
      if ((uVar2 < 4) && (iVar1 = png_sig_cmp(param_2 + 0x20,uVar2,4 - uVar2), iVar1 != 0)) {
        iVar1 = DAT_002e07c8 + 0x2e07a8;
      }
      else {
        iVar1 = DAT_002e07cc + 0x2e07ae;
      }
      png_error(param_1,iVar1);
    }
    if (uVar2 < 3) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x1000;
    }
  }
  return CONCAT44(param_2,local_20);
}


