/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7254 png_muldiv_warn */

undefined8 png_muldiv_warn(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = png_muldiv(&local_14);
  if (iVar1 == 0) {
    png_warning(param_1,DAT_002d7274 + 0x2d726e);
    local_14 = 0;
  }
  return CONCAT44(param_1,local_14);
}


