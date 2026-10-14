/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261ae0 FUN_00261ae0 */

void FUN_00261ae0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(DAT_00261b14 + 0x261b70))
            (*(undefined4 *)(param_1[7] + 0x28),*param_1,param_1[5],param_2);
  param_1[5] = param_2;
  if ((*(ushort *)(param_1 + 6) & 6) == 6) {
    FUN_0025bc88(param_1);
    FUN_0025bcca(param_1);
  }
  return;
}


