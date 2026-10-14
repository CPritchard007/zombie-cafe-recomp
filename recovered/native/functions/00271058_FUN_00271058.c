/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00271058 FUN_00271058 */

void FUN_00271058(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_80 [100];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002710c4 + 0x271064);
  local_1c = *piVar3;
  iVar1 = FUN_0026f0d8();
  if (iVar1 == 0) {
    FUN_0025ed60(auStack_b0);
    iVar1 = DAT_002710c8 + 0x27108c;
    uVar2 = __fixdfsi(local_90,local_8c);
    sqlite3_snprintf(100,auStack_80,iVar1,local_a8,local_a4,local_a0,local_9c,local_98,uVar2);
    sqlite3_result_text(param_1,auStack_80,0xffffffff,0xffffffff);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


