/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8b02 png_get_pixel_aspect_ratio */

undefined4 png_get_pixel_aspect_ratio(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (*(int *)(param_2 + 8) << 0x18 < 0)) &&
     (iVar3 = *(int *)(param_2 + 0xc0), iVar3 != 0)) {
    uVar1 = __floatunsisf(*(undefined4 *)(param_2 + 0xc4));
    uVar2 = __floatunsisf(iVar3);
    uVar1 = __divsf3(uVar1,uVar2);
    return uVar1;
  }
  return 0;
}


