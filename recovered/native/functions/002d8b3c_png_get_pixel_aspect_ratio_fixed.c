/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8b3c png_get_pixel_aspect_ratio_fixed */

undefined8 png_get_pixel_aspect_ratio_fixed(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  undefined4 uStack_8;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x80;
    if ((((uVar1 != 0) && (uVar2 = *(uint *)(param_2 + 0xc0), uVar1 = uVar2, uVar2 != 0)) &&
        (uVar3 = *(uint *)(param_2 + 0xc4), uVar1 = uVar3, uVar3 != 0)) &&
       (((uVar1 = 0, -1 < (int)uVar2 && (-1 < (int)uVar3)) &&
        (local_c = param_2, uStack_8 = param_3, uVar1 = png_muldiv(&local_c,uVar3,DAT_002d8b80),
        uVar1 != 0)))) {
      uVar1 = local_c;
    }
  }
  return CONCAT44(param_1,uVar1);
}


