/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8ff0 png_get_cHRM_XYZ_fixed */

ushort png_get_cHRM_XYZ_fixed
                 (int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  ushort uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x72) & 2;
    if ((*(ushort *)(param_2 + 0x72) & 2) != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x4c);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_2 + 0x50);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)(param_2 + 0x54);
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = *(undefined4 *)(param_2 + 0x58);
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_2 + 0x5c);
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = *(undefined4 *)(param_2 + 0x60);
      }
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = *(undefined4 *)(param_2 + 100);
      }
      if (param_10 != (undefined4 *)0x0) {
        *param_10 = *(undefined4 *)(param_2 + 0x68);
      }
      uVar1 = 4;
      if (param_11 != (undefined4 *)0x0) {
        *param_11 = *(undefined4 *)(param_2 + 0x6c);
      }
    }
  }
  return uVar1;
}


