/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266870 FUN_00266870 */

undefined8 FUN_00266870(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_002662b8();
  if (param_2 == 1) {
    iVar2 = DAT_002668c4 + 0x266886;
  }
  else {
    iVar2 = DAT_002668c8 + 0x26688c;
  }
  FUN_00265f96(param_1,param_2,1,1,iVar2);
  iVar2 = param_2;
  FUN_00266266(uVar1,0x28,0,1);
  FUN_00263832(uVar1,0xffffffff,5,0xfffffff2);
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  return CONCAT44(param_2,iVar2);
}


