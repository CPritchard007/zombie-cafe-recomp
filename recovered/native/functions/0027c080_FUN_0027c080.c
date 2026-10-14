/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c080 FUN_0027c080 */

undefined8 FUN_0027c080(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = param_1;
  iVar3 = param_2;
  uVar4 = param_3;
  iVar1 = FUN_002645c6(param_2,param_3);
  if (iVar1 == 1) {
    piVar2 = (int *)FUN_0025f04c(param_1,0x230);
    if (piVar2 == (int *)0x0) {
      FUN_00268578(param_1,7,DAT_0027c10c + 0x27c0ae);
      uVar4 = 0;
      goto LAB_0027c10a;
    }
    *piVar2 = param_2;
    iVar3 = FUN_00275e54(piVar2);
    if (iVar3 != 0) {
      FUN_00268578(param_1,piVar2[3],DAT_0027c110 + 0x27c0cc,piVar2[1],uVar5,iVar3,uVar4);
      iVar3 = 1;
    }
    FUN_0025fbda(param_1,piVar2[1]);
    FUN_0025fbda(param_1,piVar2);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_0027c10a;
  }
  else if (iVar1 < 0) {
    FUN_00268578(param_1,1,DAT_0027c114 + 0x27c0fa,param_3,uVar5,iVar3,uVar4);
    uVar4 = 0;
    goto LAB_0027c10a;
  }
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar1 * 0x10 + 4);
LAB_0027c10a:
  return CONCAT44(uVar5,uVar4);
}


