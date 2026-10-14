/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260fde FUN_00260fde */

void FUN_00260fde(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  if (param_2 != (short *)0x0) {
    psVar2 = param_2 + 4;
    for (iVar3 = 0; iVar1 = (int)*param_2, iVar3 < iVar1; iVar3 = iVar3 + 1) {
      FUN_0025fbda(param_1,*(undefined4 *)psVar2,0,iVar1,param_4);
      FUN_0025fbda(param_1,*(undefined4 *)(psVar2 + 2));
      FUN_0025fbda(param_1,*(undefined4 *)(psVar2 + 4));
      FUN_0025fbda(param_1,*(undefined4 *)(psVar2 + 0x1c));
      FUN_00260e84(param_1,*(undefined4 *)(psVar2 + 6));
      FUN_00261092(param_1,*(undefined4 *)(psVar2 + 8));
      FUN_002610aa(param_1,*(undefined4 *)(psVar2 + 0x12));
      FUN_00260004(param_1,*(undefined4 *)(psVar2 + 0x14));
      psVar2 = psVar2 + 0x20;
    }
    FUN_0025fbda(param_1,param_2,0,iVar1,param_4);
  }
  return;
}


