/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d59b0 png_set_sig_bytes */

void png_set_sig_bytes(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = CONCAT44(param_2,param_1);
  if (param_1 != 0) {
    if (8 < param_2) {
      lVar2 = png_error(param_1,DAT_002d59d4 + 0x2d59c0,param_3,param_4,param_4);
    }
    uVar1 = 0;
    if (-1 < lVar2) {
      uVar1 = (undefined1)((ulonglong)lVar2 >> 0x20);
    }
    *(undefined1 *)((int)lVar2 + DAT_002d59d8) = uVar1;
  }
  return;
}


