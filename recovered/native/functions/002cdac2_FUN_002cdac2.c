/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cdac2 FUN_002cdac2 */

int FUN_002cdac2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1d4);
  FUN_002cdaa0();
  iVar1 = (**(code **)(*(int *)(param_1 + 0x1d0) + 8))(param_1);
  if (iVar1 != 0) {
    iVar1 = iVar3;
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x154); iVar2 = iVar2 + 1) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
      iVar1 = iVar1 + 4;
    }
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar1 = 1;
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x118);
    if (*(int *)(param_1 + 0x1b8) == 0) {
      *(undefined4 *)(iVar3 + 0x28) = 0;
    }
  }
  return iVar1;
}


