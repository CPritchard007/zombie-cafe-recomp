/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028d000 sqlite3_blob_reopen */

undefined4 sqlite3_blob_reopen(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (param_1 == 0) {
    uVar1 = FUN_0026adf0(DAT_0028d06c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = 4;
    sqlite3_mutex_enter(*(undefined4 *)(iVar3 + 0xc));
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar4 = FUN_0028cf04(param_1,extraout_r1,param_3,param_4,&local_14);
      if (iVar4 != 0) {
        iVar2 = local_14;
        if (local_14 != 0) {
          iVar2 = DAT_0028d070 + 0x28d046;
        }
        FUN_00268578(iVar3,iVar4,iVar2);
        FUN_0025fbda(iVar3,local_14);
      }
    }
    uVar1 = FUN_002685e0(iVar3,iVar4);
    sqlite3_mutex_leave(*(undefined4 *)(iVar3 + 0xc));
  }
  return uVar1;
}


