/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028ca94 FUN_0028ca94 */

void FUN_0028ca94(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c [2];
  
  iVar5 = *param_1;
  iVar1 = FUN_00287abc();
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    for (iVar1 = 0; iVar1 < *(int *)(iVar5 + 0x14); iVar1 = iVar1 + 1) {
      if (iVar1 != 1) {
        FUN_002862f4(param_1,iVar1);
      }
    }
    return;
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar2 = FUN_0025f2ac(iVar5,param_2);
    iVar1 = FUN_002645c6(iVar5,uVar2);
    FUN_0025fbda(iVar5,uVar2);
    if (-1 < iVar1) {
      FUN_002862f4(param_1,iVar1);
      return;
    }
    iVar1 = FUN_0025f2ac(iVar5,param_2);
    if (iVar1 == 0) {
      return;
    }
    iVar3 = FUN_00264662(iVar5,iVar1,0);
    if (iVar3 == 0) {
      uVar2 = 0;
      goto LAB_0028cb5c;
    }
LAB_0028cb50:
    iVar4 = *(int *)(iVar3 + 0xc);
  }
  else {
    iVar1 = FUN_00268f60(param_1,param_2,param_3,local_1c);
    if (iVar1 < 0) {
      return;
    }
    uVar2 = *(undefined4 *)(iVar1 * 0x10 + *(int *)(iVar5 + 0x10));
    iVar1 = FUN_0025f2ac(iVar5,local_1c[0]);
    if (iVar1 == 0) {
      return;
    }
    iVar3 = FUN_00264662(iVar5,iVar1,uVar2);
    if (iVar3 != 0) goto LAB_0028cb50;
LAB_0028cb5c:
    iVar4 = FUN_00287f90(param_1,iVar3,iVar1,uVar2);
    if (iVar4 == 0) goto LAB_0028cb6c;
  }
  FUN_00286358(param_1,iVar4,iVar3);
LAB_0028cb6c:
  FUN_0025fbda(iVar5,iVar1);
  return;
}


