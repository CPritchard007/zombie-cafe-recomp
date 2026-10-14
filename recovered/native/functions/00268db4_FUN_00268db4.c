/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268db4 FUN_00268db4 */

void FUN_00268db4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_002662b8();
  if (iVar1 != 0) {
    uVar2 = FUN_0025d12c(*param_1,param_2[0x11]);
    for (puVar3 = (undefined4 *)FUN_00264860(param_1,param_2); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[8]) {
      uVar4 = FUN_0025d12c(*param_1,puVar3[5]);
      FUN_002662da(iVar1,0x6e,uVar4,0,0,*puVar3,0);
    }
    FUN_002662da(iVar1,0x6c,uVar2,0,0,*param_2,0);
    iVar5 = FUN_0026877c(*param_1,DAT_00268e44 + 0x268e1e,param_3);
    if (iVar5 != 0) {
      FUN_0026690a(iVar1,uVar2);
      iVar5 = FUN_00268d24(param_1,param_2);
      if (iVar5 != 0) {
        FUN_0026690a(iVar1,1);
      }
    }
  }
  return;
}


