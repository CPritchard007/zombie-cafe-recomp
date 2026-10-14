/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d91d4 png_get_hIST */

undefined4 png_get_hIST(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     (uVar1 = 0x40, (*(uint *)(param_2 + 8) & 0x40) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0xcc);
  }
  return uVar1;
}


