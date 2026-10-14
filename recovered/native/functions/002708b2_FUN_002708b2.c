/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002708b2 FUN_002708b2 */

void FUN_002708b2(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  for (iVar2 = *(int *)(param_2 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if ((param_4 == 0) || (*(int *)(param_4 + iVar3 * 4 + -4) != 0)) {
      uVar1 = FUN_002707d4(param_1,iVar2,param_3,0,0);
      FUN_00266266(*(undefined4 *)(param_1 + 8),0x62,iVar3 + param_3,uVar1,
                   *(int *)(iVar2 + 0x24) + 1);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}


