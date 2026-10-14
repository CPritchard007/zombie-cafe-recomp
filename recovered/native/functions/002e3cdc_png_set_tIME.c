/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3cdc png_set_tIME */

void png_set_tIME(int param_1,int param_2,void *param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != (void *)0x0)) &&
     ((*(uint *)(param_1 + 0x134) & 0x200) == 0)) {
    uVar1 = *(byte *)((int)param_3 + 2) - 1;
    if ((((uVar1 < 0xc) && (uVar1 = (uint)*(byte *)((int)param_3 + 3), uVar1 != 0)) &&
        ((uVar1 < 0x20 &&
         ((uVar1 = (uint)*(byte *)((int)param_3 + 4), uVar1 < 0x18 &&
          (uVar1 = (uint)*(byte *)((int)param_3 + 5), uVar1 < 0x3c)))))) &&
       (uVar1 = (uint)*(byte *)((int)param_3 + 6), uVar1 < 0x3d)) {
      memcpy((void *)(param_2 + 0x8c),param_3,8);
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
    }
    else {
      png_warning(param_1,DAT_002e3d3c + 0x2e3d22,param_3,uVar1,param_4);
    }
  }
  return;
}


