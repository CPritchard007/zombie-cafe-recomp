/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002810d0 FUN_002810d0 */

uint FUN_002810d0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x30) + DAT_002810fc != 0) {
    uVar1 = (uint)(*(int *)(param_1 + 0x30) + DAT_00281100 == 0);
    if (uVar1 == 0) goto LAB_002810f2;
  }
  uVar1 = FUN_00281044(param_1);
LAB_002810f2:
  FUN_00263cc8(param_1);
  return uVar1;
}


