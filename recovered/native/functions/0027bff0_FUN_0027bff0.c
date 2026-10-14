/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027bff0 FUN_0027bff0 */

void FUN_0027bff0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = *param_1;
  uVar1 = FUN_002607da(uVar5,param_2[7],0);
  if (param_3 != 0) {
    uVar2 = FUN_002606fc(uVar5,param_3,0);
    iVar3 = FUN_00266f0c(uVar5,0,0,0);
    if (iVar3 == 0) {
      FUN_00261092(uVar5,uVar1);
    }
    else {
      uVar4 = FUN_0025f25a(uVar5,*param_2);
      *(undefined4 *)(iVar3 + 0x18) = uVar1;
      *(undefined4 *)(iVar3 + 0x10) = uVar4;
    }
    uVar1 = FUN_002672e8(param_1,0,iVar3,uVar2,0,0,0,0,0,0);
  }
  FUN_00276118(param_1,uVar1);
  FUN_00261092(uVar5,uVar1);
  return;
}


