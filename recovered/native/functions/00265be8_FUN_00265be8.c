/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265be8 FUN_00265be8 */

undefined8 FUN_00265be8(void *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  tm *ptVar2;
  int iVar3;
  int iVar4;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  long local_80;
  char *pcStack_7c;
  uint local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_4e;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  memset(&local_a4,0,0x2c);
  memcpy(&local_78,param_1,0x30);
  FUN_0025ed60(&local_78);
  if ((uint)(local_70 + DAT_00265d38) < 0x43) {
    __adddf3((undefined4)local_58,local_58._4_4_,DAT_00265d28,DAT_00265d2c);
    __fixdfsi();
    local_58 = __floatsidf();
  }
  else {
    local_70 = 2000;
    local_6c = 1;
    local_68 = 1;
    local_64 = 0;
    local_60 = 0;
    local_58 = CONCAT44(DAT_00265d24,DAT_00265d20);
  }
  local_4e = 0;
  local_5c = 0;
  FUN_0025ea68(&local_78);
  local_a8 = __aeabi_ldivmod(local_78,local_74,DAT_00265d30,DAT_00265d34);
  local_a8 = local_a8 + DAT_00265d3c;
  uVar1 = FUN_0025ad68(2);
  sqlite3_mutex_enter();
  ptVar2 = localtime(&local_a8);
  if (*(int *)(DAT_00265d40 + 0x265d6e) == 0) {
    if (ptVar2 != (tm *)0x0) {
      local_a4 = ptVar2->tm_sec;
      local_a0 = ptVar2->tm_min;
      local_9c = ptVar2->tm_hour;
      local_98 = ptVar2->tm_mday;
      local_94 = ptVar2->tm_mon;
      local_90 = ptVar2->tm_year;
      local_8c = ptVar2->tm_wday;
      iStack_88 = ptVar2->tm_yday;
      iStack_84 = ptVar2->tm_isdst;
      local_80 = ptVar2->tm_gmtoff;
      pcStack_7c = ptVar2->tm_zone;
    }
  }
  else {
    ptVar2 = (tm *)0x0;
  }
  sqlite3_mutex_leave(uVar1);
  if (ptVar2 == (tm *)0x0) {
    sqlite3_result_error(param_2,DAT_00265d44 + 0x265cbe,0xffffffff);
    *param_3 = 1;
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    local_40 = local_90 + DAT_00265d48;
    local_3c = local_94 + 1;
    local_38 = local_98;
    local_34 = local_9c;
    local_30 = local_a0;
    local_28 = __floatsidf(local_a4);
    local_20 = 1;
    local_1f = 1;
    local_1e = 0;
    local_1d = 0;
    FUN_0025ea68(&local_48);
    *param_3 = 0;
    iVar3 = local_48 - local_78;
    iVar4 = (local_44 - local_74) - (uint)(local_48 < local_78);
  }
  return CONCAT44(iVar4,iVar3);
}


