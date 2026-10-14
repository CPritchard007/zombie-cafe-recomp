/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cdbe FUN_0026cdbe */

undefined8 FUN_0026cdbe(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x48);
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar1 = *(int *)(iVar3 + 0x30);
    *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_0025fbda(param_1);
    }
    *param_3 = (uint)(*(int *)(iVar3 + 0x30) == 0);
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar3 + 0x28) + 4);
    iVar1 = FUN_002661d0(param_1,*(int *)(iVar3 + 0x24) + iVar2 * 0x30);
    iVar2 = iVar2 + *(int *)(iVar3 + 0x14);
    iVar2 = iVar2 - (iVar2 >> 0x1f);
    while ((iVar2 = iVar2 >> 1, 0 < iVar2 && (iVar1 == 0))) {
      iVar1 = FUN_0026cd46(param_2,iVar2);
    }
    *param_3 = (uint)(*(int *)(*(int *)(iVar3 + 0x24) + *(int *)(*(int *)(iVar3 + 0x28) + 4) * 0x30
                              + 0x18) == 0);
  }
  return CONCAT44(param_1,iVar1);
}


