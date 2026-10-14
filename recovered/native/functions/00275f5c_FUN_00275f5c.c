/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275f5c FUN_00275f5c */

void FUN_00275f5c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *param_1;
  iVar1 = FUN_0025d12c(iVar5,param_2[5]);
  uVar6 = param_2[1];
  uVar2 = FUN_0025b154(uVar6);
  puVar3 = (undefined4 *)FUN_0025bb3c(param_2[6] + 8,uVar6,uVar2);
  uVar2 = *(undefined4 *)(iVar1 * 0x10 + *(int *)(iVar5 + 0x10));
  if (iVar1 == 1) {
    uVar6 = 0xe;
    iVar5 = DAT_00276044 + 0x275fa0;
  }
  else {
    uVar6 = 0x10;
    iVar5 = DAT_00276040 + 0x275f98;
  }
  iVar4 = FUN_00268e90(param_1,uVar6,*param_2,*puVar3,uVar2);
  if (iVar4 == 0) {
    iVar5 = FUN_00268e90(param_1,9,iVar5,0,uVar2);
    if (iVar5 == 0) {
      iVar5 = FUN_002662b8(param_1);
      if (iVar5 != 0) {
        FUN_00275f2c(param_1,0,iVar1);
        FUN_00266870(param_1,iVar1);
        iVar4 = FUN_00266dd0(iVar5,9,DAT_00276048 + 0x276039);
        FUN_00263832(iVar5,iVar4 + 1,*param_2,0);
        FUN_00263832(iVar5,iVar4 + 4,DAT_0027604c + 0x276002,0xfffffffe);
        FUN_002668cc(param_1,iVar1);
        FUN_0026641e(iVar5,0x2d,0,0);
        FUN_002662da(iVar5,0x6e,iVar1,0,0,*param_2,0);
        if (param_1[0x13] < 3) {
          param_1[0x13] = 3;
        }
      }
    }
  }
  return;
}


