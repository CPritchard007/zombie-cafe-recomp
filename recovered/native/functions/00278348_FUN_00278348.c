/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278348 FUN_00278348 */

void FUN_00278348(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *param_2;
  iVar4 = iVar5 + 2;
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_00262834(param_1,iVar4);
  uVar2 = FUN_002627dc(param_1);
  FUN_0025cb7c(param_1);
  FUN_00278300(param_1,param_2,iVar1,0);
  iVar5 = iVar1 + iVar5;
  FUN_0026641e(uVar6,0x37,param_2[1],iVar5);
  iVar5 = iVar5 + 1;
  if (param_4 != iVar5) {
    FUN_00266966(param_1,param_4,iVar5,1);
  }
  FUN_00266266(uVar6,0x1f,iVar1,iVar4,uVar2);
  FUN_0026641e(uVar6,((*(ushort *)(param_3 + 6) & 0x40) == 0) + '`',param_2[1],uVar2);
  FUN_002627fe(param_1,uVar2);
  FUN_0025cbb8(param_1,iVar1,iVar4);
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 != 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar1 = *(int *)(param_3 + 0xc) + 1;
    }
    uVar2 = FUN_002665da(uVar6,0x7a,iVar1);
    FUN_0026641e(uVar6,0x14,iVar1,0xffffffff);
    uVar3 = FUN_002662aa(uVar6,1);
    FUN_002624c2(uVar6,uVar2);
    FUN_002665da(uVar6,0x43,param_2[1]);
    FUN_002665da(uVar6,0x3b,param_2[1]);
    FUN_002624c2(uVar6,uVar3);
  }
  return;
}


