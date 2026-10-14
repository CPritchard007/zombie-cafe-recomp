/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261944 FUN_00261944 */

void FUN_00261944(undefined4 *param_1)

{
  int iVar1;
  
  if ((int)((uint)*(ushort *)(param_1 + 6) << 0x1e) < 0) {
    FUN_0025bc88();
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfff9;
    if ((*(short *)((int)param_1 + 0x1a) == 0) && (iVar1 = param_1[7], *(int *)(iVar1 + 0x1c) != 0))
    {
      if (param_1[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (**(code **)(DAT_00261984 + 0x2619fc))(*(undefined4 *)(iVar1 + 0x28),*param_1,0);
    }
  }
  return;
}


