/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d92ac png_get_pCAL */

undefined4
png_get_pCAL(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  
  if ((((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
       ((-1 < *(int *)(param_2 + 8) << 0x15 || (param_5 == (undefined4 *)0x0)))) ||
      ((param_4 == (undefined4 *)0x0 || ((param_7 == (uint *)0x0 || (param_6 == (uint *)0x0)))))) ||
     ((param_9 == (undefined4 *)0x0 || (param_8 == (undefined4 *)0x0)))) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0xd0);
    *param_4 = *(undefined4 *)(param_2 + 0xd4);
    uVar1 = 0x400;
    *param_5 = *(undefined4 *)(param_2 + 0xd8);
    *param_6 = (uint)*(byte *)(param_2 + 0xe4);
    *param_7 = (uint)*(byte *)(param_2 + 0xe5);
    *param_8 = *(undefined4 *)(param_2 + 0xdc);
    *param_9 = *(undefined4 *)(param_2 + 0xe0);
  }
  return uVar1;
}


