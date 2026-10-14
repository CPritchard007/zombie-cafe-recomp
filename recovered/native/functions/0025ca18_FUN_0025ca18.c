/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ca18 FUN_0025ca18 */

undefined8 FUN_0025ca18(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  for (iVar3 = param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    iVar1 = FUN_0025c9c8(iVar3,param_2);
    if ((param_2 & 1) == 0) goto LAB_0025ca4c;
    iVar2 = FUN_0025ca18(*(undefined4 *)(iVar3 + 8),param_2);
    iVar4 = iVar4 + iVar2 + iVar1;
  }
  iVar1 = 0;
LAB_0025ca4c:
  return CONCAT44(param_1,iVar4 + iVar1);
}


