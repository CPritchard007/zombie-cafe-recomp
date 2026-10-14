/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cd46 FUN_0026cd46 */

undefined4 FUN_0026cd46(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_1c [2];
  
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(iVar3 + 0x14) / 2;
  if (param_2 < iVar4) {
    iVar4 = *(int *)(*(int *)(iVar3 + 0x28) + param_2 * 8);
    local_24 = *(int *)(*(int *)(iVar3 + 0x28) + param_2 * 8 + 4);
  }
  else {
    iVar4 = (param_2 - iVar4) * 2;
    local_24 = iVar4 + 1;
  }
  iVar5 = *(int *)(iVar3 + 0x24) + iVar4 * 0x30;
  iVar2 = local_24;
  if ((*(int *)(iVar5 + 0x18) != 0) &&
     (iVar1 = *(int *)(iVar3 + 0x24) + local_24 * 0x30, iVar2 = iVar4, *(int *)(iVar1 + 0x18) != 0))
  {
    FUN_0026cb72(param_1,0,*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14),
                 *(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14),local_1c);
    iVar2 = local_24;
    if (local_1c[0] < 1) {
      iVar2 = iVar4;
    }
  }
  *(int *)(param_2 * 4 + *(int *)(iVar3 + 0x28)) = iVar2;
  return 0;
}


