/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268af4 FUN_00268af4 */

void FUN_00268af4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = param_1[2];
  uVar4 = *param_1;
  if (param_5 == 0) {
    iVar3 = DAT_00268b50 + 0x268b16;
  }
  else {
    iVar3 = DAT_00268b4c + 0x268b10;
  }
  uVar1 = FUN_0025d17c(param_2);
  uVar4 = FUN_0026877c(uVar4,DAT_00268b54 + 0x268b28,param_3,param_4,iVar3,uVar1);
  FUN_002662da(uVar2,0x96,param_1[0x79],0,0,uVar4,0xffffffff);
  return;
}


