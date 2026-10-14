/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266966 FUN_00266966 */

undefined8 FUN_00266966(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_4;
  iVar5 = param_2;
  FUN_00266266(*(undefined4 *)(param_1 + 8),0xd,param_2,param_3,param_4,param_2,param_3);
  iVar3 = 0;
  do {
    iVar1 = param_1 + 100 + iVar3;
    iVar2 = *(int *)(iVar1 + 0x10);
    if ((param_2 <= iVar2) && (iVar2 < param_2 + param_4)) {
      *(int *)(iVar1 + 0x10) = iVar2 + (param_3 - param_2);
    }
    iVar3 = iVar3 + 0x18;
  } while (iVar3 != 0xf0);
  return CONCAT44(iVar5,iVar4);
}


