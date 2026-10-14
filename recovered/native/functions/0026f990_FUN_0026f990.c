/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f990 FUN_0026f990 */

void FUN_0026f990(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *local_3c;
  int local_38;
  int local_1c [2];
  
  uVar1 = sqlite3_context_db_handle();
  pcVar2 = (char *)sqlite3_value_text(*param_3);
  uVar3 = sqlite3_value_text(param_3[1]);
  uVar4 = sqlite3_value_text(param_3[2]);
  iVar7 = DAT_0026fa78 + 0x26f9be;
  iVar9 = 0;
  local_3c = pcVar2;
  for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + local_38) {
    local_38 = FUN_00262b80(pcVar2,local_1c);
    iVar8 = iVar9;
    if (local_1c[0] == 0x66) {
      do {
        pcVar2 = pcVar2 + local_38;
        local_38 = FUN_00262b80(pcVar2,local_1c);
      } while (local_1c[0] == 0x95);
      iVar5 = FUN_0025f286(uVar1,pcVar2,local_38);
      if (iVar5 == 0) break;
      FUN_0025b16e(iVar5);
      iVar6 = sqlite3_stricmp(uVar3,iVar5);
      if (iVar6 == 0) {
        if (iVar9 == 0) {
          iVar8 = DAT_0026fa7c + 0x26fa12;
        }
        iVar8 = FUN_0026877c(uVar1,iVar7,iVar8,(int)pcVar2 - (int)local_3c,local_3c,uVar4);
        FUN_0025fbda(uVar1,iVar9);
        local_3c = pcVar2 + local_38;
      }
      FUN_0025fbda(uVar1,iVar5);
    }
    iVar9 = iVar8;
  }
  iVar7 = iVar9;
  if (iVar9 == 0) {
    iVar7 = DAT_0026fa80 + 0x26fa50;
  }
  uVar3 = FUN_0026877c(uVar1,DAT_0026fa84 + 0x26fa5a,iVar7,local_3c);
  sqlite3_result_text(param_1,uVar3,0xffffffff,DAT_0026fa88 + 0x26fa66);
  FUN_0025fbda(uVar1,iVar9);
  return;
}


