/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286358 FUN_00286358 */

void FUN_00286358(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_0025d12c(*param_1,param_2[0x11]);
  FUN_00275f2c(param_1,0,uVar1);
  iVar4 = param_1[0x12];
  param_1[0x12] = iVar4 + 3;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = *param_2;
    iVar2 = DAT_002863c8 + 0x286390;
  }
  else {
    uVar3 = *param_3;
    iVar2 = DAT_002863c4 + 0x286388;
  }
  FUN_00286228(param_1,uVar1,iVar4,uVar3,iVar2);
  FUN_0026eb24(param_1,param_2,param_3,iVar4,param_1[0x13] + 1);
  iVar4 = FUN_002662b8(param_1);
  if (iVar4 != 0) {
    FUN_002665da(iVar4,0x6b,uVar1);
  }
  return;
}


