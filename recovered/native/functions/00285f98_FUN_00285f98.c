/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00285f98 FUN_00285f98 */

void FUN_00285f98(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_34 [24];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00286004 + 0x285fa8);
  local_1c = *piVar2;
  iVar4 = 1;
  iVar3 = DAT_00286008 + 0x285fba;
  uVar5 = *(undefined4 *)(param_2 * 0x10 + *(int *)(*param_1 + 0x10));
  do {
    sqlite3_snprintf(0x18,auStack_34,iVar3,iVar4);
    iVar1 = FUN_0026460e(*param_1,auStack_34,uVar5);
    if (iVar1 != 0) {
      FUN_00285af0(param_1,DAT_0028600c + 0x285fe4,uVar5,auStack_34,param_3,param_4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


