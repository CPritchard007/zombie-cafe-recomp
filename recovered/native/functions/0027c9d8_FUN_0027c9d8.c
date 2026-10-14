/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c9d8 FUN_0027c9d8 */

void FUN_0027c9d8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0027caa4 + 0x27c9e4);
  local_1c = *piVar4;
  iVar1 = sqlite3_value_text(*param_3);
  iVar2 = sqlite3_context_db_handle(param_1);
  if (iVar1 == 0) {
    iVar1 = DAT_0027caa8 + 0x27ca04;
  }
  puVar6 = (undefined4 *)0x0;
  for (iVar5 = 0; iVar5 < *(int *)(iVar2 + 0x14); iVar5 = iVar5 + 1) {
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x10) + iVar5 * 0x10);
    if ((puVar6[1] != 0) && (iVar3 = sqlite3_stricmp(*puVar6,iVar1), iVar3 == 0)) break;
  }
  if (iVar5 < *(int *)(iVar2 + 0x14)) {
    if (iVar5 < 2) {
      iVar2 = DAT_0027cab0 + 0x27ca3e;
      goto LAB_0027ca3c;
    }
    if (*(char *)(iVar2 + 0x34) != '\0') {
      if ((*(char *)(puVar6[1] + 8) == '\0') && (*(int *)(puVar6[1] + 0x10) == 0)) {
        FUN_0027c61c();
        puVar6[1] = 0;
        puVar6[3] = 0;
        FUN_00262044(iVar2);
        goto LAB_0027ca90;
      }
      iVar2 = DAT_0027cab8 + 0x27ca74;
      goto LAB_0027ca3c;
    }
    sqlite3_snprintf(0x80,auStack_9c,DAT_0027cab4 + 0x27ca5c);
  }
  else {
    iVar2 = DAT_0027caac + 0x27ca34;
LAB_0027ca3c:
    sqlite3_snprintf(0x80,auStack_9c,iVar2,iVar1);
  }
  sqlite3_result_error(param_1,auStack_9c,0xffffffff);
LAB_0027ca90:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


