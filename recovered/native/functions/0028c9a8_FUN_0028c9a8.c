/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028c9a8 FUN_0028c9a8 */

void FUN_0028c9a8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c [2];
  
  iVar5 = *param_1;
  iVar1 = FUN_00287abc();
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    FUN_002760a6(param_1);
    return;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    iVar1 = FUN_0025f2ac(*param_1,param_2);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = FUN_00261718(iVar5,*(undefined1 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0xc) + 0x4d),iVar1,
                         0);
    if (iVar2 != 0) {
      FUN_002760a6(param_1,iVar1);
      goto LAB_0028ca48;
    }
    FUN_0025fbda(iVar5,iVar1);
  }
  iVar2 = FUN_00268f60(param_1,param_2,param_3,local_1c);
  if (iVar2 < 0) {
    return;
  }
  iVar1 = FUN_0025f2ac(iVar5,local_1c[0]);
  if (iVar1 == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar5 + 0x10));
  iVar3 = FUN_0026460e(iVar5,iVar1,uVar4);
  if (iVar3 == 0) {
    iVar3 = FUN_00264662(iVar5,iVar1,uVar4);
    FUN_0025fbda(iVar5,iVar1);
    if (iVar3 != 0) {
      FUN_00275f2c(param_1,0,iVar2);
      FUN_00270900(param_1,iVar3,0xffffffff);
      return;
    }
    FUN_00268e48(param_1,DAT_0028ca90 + 0x28ca8a);
    return;
  }
  FUN_00276050(param_1,iVar3,0);
LAB_0028ca48:
  FUN_0025fbda(iVar5,iVar1);
  return;
}


