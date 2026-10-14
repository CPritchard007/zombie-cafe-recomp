/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002711c8 FUN_002711c8 */

void FUN_002711c8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char acStack_218 [508];
  undefined4 uStack_1c;
  int *piStack_18;
  int local_14;
  undefined4 uStack_10;
  
  piVar4 = *(int **)(DAT_00271248 + 0x2711d4);
  local_14 = *piVar4;
  uStack_1c = param_1;
  piStack_18 = param_2;
  uStack_10 = param_4;
  sqlite3_snprintf(0x200,acStack_218,DAT_0027124c + 0x2711e6,param_1);
  for (sVar1 = strlen(acStack_218); 1 < (int)sVar1; sVar1 = sVar1 - 1) {
    if (acStack_218[sVar1] == '/') goto LAB_00271204;
  }
  if (sVar1 == 1) {
LAB_00271204:
    acStack_218[sVar1] = '\0';
    iVar2 = FUN_0025e6c4(acStack_218,0);
  }
  else {
    iVar2 = -1;
  }
  *param_2 = iVar2;
  if (iVar2 < 0) {
    uVar3 = FUN_0026b474(DAT_00271250);
    FUN_0026c154(uVar3,DAT_00271254 + 0x271232,acStack_218,DAT_00271250);
  }
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


