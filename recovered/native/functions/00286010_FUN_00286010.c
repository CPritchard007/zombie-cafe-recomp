/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286010 FUN_00286010 */

void FUN_00286010(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_002662b8();
  uVar2 = FUN_002627dc(param_1);
  FUN_00266266(uVar1,0x66,param_2,uVar2,param_3);
  FUN_0025cdea(param_1);
  if (param_3 == 1) {
    iVar3 = DAT_00286070 + 0x28604e;
  }
  else {
    iVar3 = DAT_00286074 + 0x286054;
  }
  FUN_00285af0(param_1,DAT_00286078 + 0x28605c,
               *(undefined4 *)(param_3 * 0x10 + *(int *)(*param_1 + 0x10)),iVar3,param_2,uVar2,uVar2
              );
  FUN_002627fe(param_1,uVar2);
  return;
}


