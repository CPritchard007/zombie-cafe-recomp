/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d93fc png_get_pHYs */

undefined4 *
png_get_pHYs(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 *puVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(*(uint *)(param_2 + 8) & 0x80);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = param_3;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0xc0);
        puVar1 = (undefined4 *)0x80;
      }
      if (param_4 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x80;
        *param_4 = *(undefined4 *)(param_2 + 0xc4);
      }
      if (param_5 != (uint *)0x0) {
        puVar1 = (undefined4 *)0x80;
        *param_5 = (uint)*(byte *)(param_2 + 200);
      }
    }
  }
  return puVar1;
}


