/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025af60 FUN_0025af60 */

undefined8 FUN_0025af60(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_0025afec;
  local_14 = param_2;
  uStack_10 = param_3;
  sqlite3_mutex_enter(*(undefined4 *)(DAT_0025afec + 0x25afca));
  iVar2 = DAT_0025aff4;
  if ((*(int *)(iVar1 + 0x25afea) == 0) || (*(int *)(DAT_0025aff0 + 0x25b024) < param_1)) {
    if (*(int *)(DAT_0025aff4 + 0x25afa8) == 0) {
      sqlite3_mutex_leave(*(undefined4 *)(DAT_0025affc + 0x25b03c));
      local_14 = (undefined4 *)(**(code **)(iVar2 + 0x25afc4))(param_1);
      goto LAB_0025afe8;
    }
    FUN_0025acb4(8,param_1);
    uVar3 = FUN_0025aec8(param_1,&local_14);
    if (local_14 != (undefined4 *)0x0) {
      FUN_0025ac94(4,uVar3);
    }
    uVar3 = *(undefined4 *)(DAT_0025aff8 + 0x25b030);
  }
  else {
    local_14 = *(undefined4 **)(iVar1 + 0x25afe6);
    uVar3 = *local_14;
    *(int *)(iVar1 + 0x25afea) = *(int *)(iVar1 + 0x25afea) + -1;
    *(undefined4 *)(iVar1 + 0x25afe6) = uVar3;
    FUN_0025ac94(3,1);
    FUN_0025acb4(8,param_1);
    uVar3 = *(undefined4 *)(iVar1 + 0x25afca);
  }
  sqlite3_mutex_leave(uVar3);
LAB_0025afe8:
  return CONCAT44(param_1,local_14);
}


