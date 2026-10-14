/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286ac0 FUN_00286ac0 */

undefined4
FUN_00286ac0(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int local_1c [2];
  
  *param_5 = 0;
  local_1c[0] = 0;
  iVar2 = FUN_0026bd6c();
  if (iVar2 == 0) {
    uVar3 = FUN_0026adf0(DAT_00286bac);
  }
  else {
    sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
    cVar1 = *(char *)(DAT_00286bb0 + 0x286b36);
    iVar2 = FUN_00265d50(param_1,param_2,param_3,3 - (uint)(cVar1 != '\0'));
    local_28 = iVar2;
    if (iVar2 != 0) {
      local_28 = FUN_00286a40(param_1,iVar2,0xffffffff,param_4,0,param_5,local_1c);
    }
    if ((param_6 != (undefined4 *)0x0) && (local_1c[0] != 0)) {
      iVar4 = FUN_0025b0f4(iVar2,local_1c[0] - iVar2);
      if (cVar1 == '\0') {
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          if (DAT_00286bb4 < (uint)*param_2 * 0x100 + (uint)param_2[1] + DAT_00286bb8) {
            param_2 = param_2 + 2;
          }
          else {
            param_2 = param_2 + 4;
          }
        }
      }
      else {
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          if (DAT_00286bb4 < (uint)*param_2 + (uint)param_2[1] * 0x100 + DAT_00286bb8) {
            param_2 = param_2 + 2;
          }
          else {
            param_2 = param_2 + 4;
          }
        }
      }
      *param_6 = param_2;
    }
    FUN_0025fbda(param_1,iVar2);
    uVar3 = FUN_002685e0(param_1,local_28);
    sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  }
  return uVar3;
}


