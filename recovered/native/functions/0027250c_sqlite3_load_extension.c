/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027250c sqlite3_load_extension */

undefined4 sqlite3_load_extension(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  void *__dest;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_34;
  int local_1c [2];
  
  sqlite3_mutex_enter(param_1[3]);
  local_1c[0] = 0;
  iVar1 = FUN_0025b154(param_2);
  iVar6 = *param_1;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_1[6] << 2 < 0) {
    if (param_3 == 0) {
      param_3 = DAT_00272698 + 0x27255a;
    }
    iVar5 = iVar1 + 300;
    iVar2 = (**(code **)(iVar6 + 0x28))(iVar6,param_2);
    if (iVar2 == 0) {
      local_34 = 1;
      if (param_4 != (int *)0x0) {
        local_1c[0] = sqlite3_malloc(iVar5);
        *param_4 = local_1c[0];
        if (local_1c[0] != 0) {
          sqlite3_snprintf(iVar5,local_1c[0],DAT_0027269c + 0x272592,param_2);
          (**(code **)(iVar6 + 0x2c))(iVar6,iVar1 + 299,local_1c[0]);
        }
      }
    }
    else {
      pcVar3 = (code *)(**(code **)(iVar6 + 0x30))(iVar6,iVar2,param_3);
      if (pcVar3 == (code *)0x0) {
        local_34 = 1;
        if (param_4 != (int *)0x0) {
          iVar1 = FUN_0025b154(param_3);
          local_1c[0] = sqlite3_malloc();
          *param_4 = local_1c[0];
          if (local_1c[0] != 0) {
            sqlite3_snprintf(iVar5 + iVar1,local_1c[0],DAT_002726a0 + 0x2725e0,param_3,param_2);
            (**(code **)(iVar6 + 0x2c))(iVar6,iVar5 + iVar1 + -1,local_1c[0]);
          }
          (**(code **)(iVar6 + 0x34))(iVar6,iVar2);
          local_34 = 1;
        }
      }
      else {
        iVar1 = (*pcVar3)(param_1,local_1c,DAT_002726a4 + 0x272606);
        if (iVar1 == 0) {
          __dest = (void *)FUN_0025f04c(param_1,(param_1[0x23] + 1) * 4);
          local_34 = 7;
          if (__dest != (void *)0x0) {
            iVar1 = param_1[0x23];
            if (0 < iVar1) {
              memcpy(__dest,(void *)param_1[0x24],iVar1 << 2);
            }
            FUN_0025fbda(param_1,param_1[0x24]);
            param_1[0x24] = (int)__dest;
            iVar1 = param_1[0x23];
            *(int *)(iVar1 * 4 + (int)__dest) = iVar2;
            param_1[0x23] = iVar1 + 1;
            local_34 = 0;
          }
        }
        else {
          if (param_4 != (int *)0x0) {
            iVar1 = sqlite3_mprintf(DAT_002726a8 + 0x272616,local_1c[0]);
            *param_4 = iVar1;
          }
          sqlite3_free(local_1c[0]);
          (**(code **)(iVar6 + 0x34))(iVar6,iVar2);
          local_34 = 1;
        }
      }
    }
  }
  else {
    local_34 = 1;
    if (param_4 != (int *)0x0) {
      iVar1 = sqlite3_mprintf(DAT_00272694 + 0x27254a);
      *param_4 = iVar1;
    }
  }
  uVar4 = FUN_002685e0(param_1,local_34);
  sqlite3_mutex_leave(param_1[3]);
  return uVar4;
}


