/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026729c FUN_0026729c */

void FUN_0026729c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0x1fc;
  iVar3 = param_1[0x7f];
  if ((iVar3 == 0) || (uVar2 = (uint)*(byte *)((int)param_1 + DAT_002672e4), uVar2 != 0)) {
    FUN_002610aa(*param_1,param_2,param_2,uVar2,param_4);
  }
  else {
    uVar1 = FUN_00267228(param_1,*(undefined4 *)(iVar3 + 0x2c));
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
    if (param_1[0x68] != 0) {
      FUN_0025f2f2(param_1,uVar1,param_1 + 0x67,1);
    }
  }
  return;
}


