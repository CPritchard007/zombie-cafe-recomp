/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278c6c FUN_00278c6c */

void FUN_00278c6c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_1c [2];
  
  if (*(int *)(param_2 + 8) != 0) {
    return;
  }
  FUN_0025cb7c();
  if (*(int *)(param_2 + 0x48) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar4;
  *(int *)(param_2 + 8) = iVar4;
  iVar1 = FUN_002662b8(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_00262644(*(undefined4 *)(param_2 + 0x48),local_1c);
  if (iVar2 == 0) {
    FUN_002786f4(param_1,*(undefined4 *)(param_2 + 0x48),iVar4);
    FUN_002665da(iVar1,0x15,iVar4);
    uVar3 = 0x7a;
    iVar2 = iVar4;
  }
  else {
    FUN_0026641e(iVar1,7,local_1c[0],iVar4);
    if (local_1c[0] != 0) {
      uVar6 = __floatsidf(local_1c[0]);
      iVar2 = __aeabi_dcmpgt(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                             (int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      if (iVar2 != 0) {
        *(undefined8 *)(param_2 + 0x20) = uVar6;
      }
      goto LAB_00278d06;
    }
    uVar3 = 1;
    iVar2 = 0;
  }
  FUN_0026641e(iVar1,uVar3,iVar2,param_3);
LAB_00278d06:
  if (*(int *)(param_2 + 0x4c) != 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar5 = iVar2 + 1;
    *(int *)(param_1 + 0x4c) = iVar5;
    *(int *)(param_2 + 0xc) = iVar5;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    FUN_002786f4(param_1,*(undefined4 *)(param_2 + 0x4c),iVar5);
    FUN_002665da(iVar1,0x15,iVar5);
    uVar3 = FUN_002665da(iVar1,0x78,iVar5);
    FUN_0026641e(iVar1,7,0,iVar5);
    FUN_002624c2(iVar1,uVar3);
    iVar2 = iVar2 + 2;
    FUN_00266266(iVar1,0x56,iVar4,iVar5,iVar2);
    uVar3 = FUN_002665da(iVar1,0x78,iVar4);
    FUN_0026641e(iVar1,7,0xffffffff,iVar2);
    FUN_002624c2(iVar1,uVar3);
  }
  return;
}


