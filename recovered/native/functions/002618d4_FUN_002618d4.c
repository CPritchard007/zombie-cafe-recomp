/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002618d4 FUN_002618d4 */

void FUN_002618d4(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_1 + 0x1a) + -1;
  *(short *)((int)param_1 + 0x1a) = sVar1;
  if (sVar1 == 0) {
    *(int *)(param_1[7] + 0xc) = *(int *)(param_1[7] + 0xc) + -1;
    if ((*(ushort *)(param_1 + 6) & 2) == 0) {
      iVar2 = param_1[7];
      if (*(int *)(iVar2 + 0x1c) != 0) {
        if (param_1[5] == 1) {
          *(uint *)(iVar2 + 0x2c) = *(ushort *)(param_1 + 6) & 2;
        }
        (**(code **)(FUN_00261988 + DAT_00261924 + 6))(*(undefined4 *)(iVar2 + 0x28),*param_1,0);
      }
    }
    else {
      FUN_0025bc88();
      FUN_0025bcca(param_1);
    }
  }
  return;
}


