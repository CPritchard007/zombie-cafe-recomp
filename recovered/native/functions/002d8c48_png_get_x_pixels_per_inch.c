/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8c48 png_get_x_pixels_per_inch */

undefined8 png_get_x_pixels_per_inch(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = png_get_x_pixels_per_meter();
  iVar2 = 0;
  if ((-1 < iVar1) && (iVar2 = png_muldiv(&local_c,iVar1,0x7f,DAT_002d8c68), iVar2 != 0)) {
    iVar2 = local_c;
  }
  return CONCAT44(param_1,iVar2);
}


