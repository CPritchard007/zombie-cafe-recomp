/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bda8 FUN_0025bda8 */

void FUN_0025bda8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  __aeabi_uidivmod(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar2 + 0x28),param_3,param_4,
                   param_4);
  for (piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + extraout_r1 * 4); *piVar1 != param_1;
      piVar1 = (int *)(*piVar1 + 0xc)) {
  }
  *piVar1 = *(int *)(param_1 + 0xc);
  *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
  return;
}


