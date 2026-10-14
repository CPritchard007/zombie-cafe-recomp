/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002786f4 FUN_002786f4 */

int FUN_002786f4(int param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_4;
  if ((param_2 == (byte *)0x0) || (uVar4 = (uint)*param_2, uVar4 != 0x84)) {
    iVar3 = FUN_00277a30(param_1,param_2,param_3,uVar4,param_4);
    if (iVar3 == param_3) {
      return param_3;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      return param_3;
    }
    uVar2 = 0xf;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x18);
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = 0xe;
  }
  FUN_0026641e(iVar1,uVar2,iVar3,param_3);
  return param_3;
}


