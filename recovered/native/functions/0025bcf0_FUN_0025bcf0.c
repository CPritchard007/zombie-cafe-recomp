/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bcf0 FUN_0025bcf0 */

void FUN_0025bcf0(undefined4 *param_1)

{
  int iVar1;
  
  if ((int)((uint)*(ushort *)(param_1 + 6) << 0x1e) < 0) {
    FUN_0025bc88();
  }
  iVar1 = param_1[7];
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  if (param_1[5] == 1) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  (**(code **)(DAT_0025bd24 + 0x25bd9a))(*(undefined4 *)(iVar1 + 0x28),*param_1,1);
  return;
}


