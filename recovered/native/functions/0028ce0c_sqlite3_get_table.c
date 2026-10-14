/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028ce0c sqlite3_get_table */

uint sqlite3_get_table(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  local_20 = 1;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = 0x14;
  local_1c = 0;
  local_34 = (int *)sqlite3_malloc(0x50);
  iVar1 = DAT_0028cefc;
  if (local_34 != (int *)0x0) {
    *local_34 = 0;
    uVar2 = sqlite3_exec(param_1,param_2,iVar1 + 0x28ce5a,&local_34,param_6);
    *local_34 = local_20;
    if ((uVar2 & 0xff) == 4) {
      sqlite3_free_table(local_34 + 1);
      if (local_30 != 0) {
        if (param_6 != (undefined4 *)0x0) {
          sqlite3_free(*param_6);
          uVar3 = sqlite3_mprintf(DAT_0028cf00 + 0x28ce92,local_30);
          *param_6 = uVar3;
        }
        sqlite3_free(local_30);
      }
      goto LAB_0028ce9e;
    }
    sqlite3_free(local_30);
    if (uVar2 != 0) {
      sqlite3_free_table(local_34 + 1);
      return uVar2;
    }
    piVar4 = local_34;
    if ((local_2c <= local_20) ||
       (piVar4 = (int *)sqlite3_realloc(local_34,local_20 << 2), piVar4 != (int *)0x0)) {
      local_34 = piVar4;
      *param_3 = local_34 + 1;
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_24;
      }
      if (param_4 == (undefined4 *)0x0) {
        return 0;
      }
      *param_4 = local_28;
      return 0;
    }
    sqlite3_free_table(local_34 + 1);
  }
  local_1c = 7;
LAB_0028ce9e:
  *(uint *)(param_1 + 0x2c) = local_1c;
  return local_1c;
}


