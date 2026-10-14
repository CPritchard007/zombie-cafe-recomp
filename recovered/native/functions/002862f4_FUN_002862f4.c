/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002862f4 FUN_002862f4 */

void FUN_002862f4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(int *)(*param_1 + 0x10) + param_2 * 0x10 + 0xc);
  FUN_00275f2c(param_1,0,param_2);
  iVar4 = param_1[0x12];
  param_1[0x12] = iVar4 + 3;
  FUN_00286228(param_1,param_2,iVar4,0,0);
  iVar1 = param_1[0x13];
  for (puVar3 = *(undefined4 **)(iVar2 + 0x10); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    FUN_0026eb24(param_1,puVar3[2],0,iVar4,iVar1 + 1);
  }
  iVar1 = FUN_002662b8(param_1);
  if (iVar1 != 0) {
    FUN_002665da(iVar1,0x6b,param_2);
  }
  return;
}


