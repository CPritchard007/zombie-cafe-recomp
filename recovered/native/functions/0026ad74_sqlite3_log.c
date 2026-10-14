/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ad74 sqlite3_log */

void sqlite3_log(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 local_114;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 auStack_f8 [212];
  int local_24;
  
  iVar1 = DAT_0026adec;
  piVar6 = *(int **)(DAT_0026ade8 + 0x26ad82);
  local_24 = *piVar6;
  piVar3 = (int *)(DAT_0026adec + 0x26ae66);
  if (*piVar3 != 0) {
    local_110 = auStack_f8;
    local_104 = 0xd2;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_fa = 0;
    local_fc = 0;
    local_fb = 0;
    local_10c = local_110;
    FUN_002675a8(&local_114,0,param_2);
    pcVar4 = (code *)*piVar3;
    uVar5 = *(undefined4 *)(iVar1 + 0x26ae6a);
    uVar2 = FUN_002684c4(&local_114);
    (*pcVar4)(uVar5,param_1,uVar2);
  }
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


