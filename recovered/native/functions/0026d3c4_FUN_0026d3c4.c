/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d3c4 FUN_0026d3c4 */

int FUN_0026d3c4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(ushort *)(param_2 + 2) & 0x100) == 0) {
    if ((param_3 == 0) || ((*(ushort *)(param_3 + 2) & 0x100) == 0)) {
      iVar1 = FUN_0026cf38(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_0026cf38(param_1,param_3);
      }
    }
    else {
      iVar1 = *(int *)(param_3 + 0x14);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x14);
  }
  return iVar1;
}


