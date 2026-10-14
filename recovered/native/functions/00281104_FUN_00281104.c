/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281104 FUN_00281104 */

undefined4 FUN_00281104(int param_1,undefined4 param_2,int param_3,int param_4,code *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    uVar1 = FUN_0026adf0(DAT_002811a0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    sqlite3_mutex_enter(*(undefined4 *)(iVar3 + 0xc));
    iVar4 = *(int *)(param_1 + 0x14);
    if (((param_4 < 0) || (param_3 < 0)) || (*(int *)(param_1 + 4) < param_4 + param_3)) {
      FUN_00268578(iVar3,1,0);
      iVar2 = 1;
    }
    else {
      iVar2 = 4;
      if (iVar4 != 0) {
        FUN_00261f68(**(undefined4 **)(param_1 + 0x10));
        iVar2 = (*param_5)(*(undefined4 *)(param_1 + 0x10),param_4 + *(int *)(param_1 + 8),param_3,
                           param_2);
        FUN_00262002(**(undefined4 **)(param_1 + 0x10));
        if (iVar2 == 4) {
          FUN_002810d0(iVar4);
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else {
          *(int *)(iVar3 + 0x2c) = iVar2;
          *(int *)(iVar4 + 0x58) = iVar2;
        }
      }
    }
    uVar1 = FUN_002685e0(iVar3,iVar2);
    sqlite3_mutex_leave(*(undefined4 *)(iVar3 + 0xc));
  }
  return uVar1;
}


