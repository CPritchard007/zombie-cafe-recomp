/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002674a0 FUN_002674a0 */

undefined4 FUN_002674a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002651e0(param_1,*(undefined4 *)(param_1 + 0x138),(*(int *)(param_1 + 0x120) + 5) * 4,
                       param_4,param_4);
  uVar2 = 7;
  if (iVar1 != 0) {
    memset((void *)(iVar1 + *(int *)(param_1 + 0x120) * 4),0,0x14);
    *(int *)(param_1 + 0x138) = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


