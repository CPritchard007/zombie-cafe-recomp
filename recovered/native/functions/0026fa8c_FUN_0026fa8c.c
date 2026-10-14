/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026fa8c FUN_0026fa8c */

void FUN_0026fa8c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int local_1c [2];
  
  pcVar1 = (char *)sqlite3_value_text(*param_3);
  uVar2 = sqlite3_value_text(param_3[1]);
  uVar3 = sqlite3_context_db_handle(param_1);
  if (pcVar1 != (char *)0x0) {
    iVar8 = 3;
    iVar5 = 0;
    pcVar7 = pcVar1;
    do {
      while( true ) {
        pcVar6 = pcVar7;
        iVar4 = iVar5;
        iVar5 = iVar4;
        pcVar7 = pcVar6;
        if (*pcVar6 == '\0') {
          return;
        }
        do {
          pcVar7 = pcVar7 + iVar5;
          iVar5 = FUN_00262b80(pcVar7,local_1c);
        } while (local_1c[0] == 0x95);
        if ((local_1c[0] != 0x68) && (local_1c[0] != 0x76)) break;
        iVar8 = 0;
      }
      iVar8 = iVar8 + 1;
    } while ((iVar8 != 2) ||
            (((local_1c[0] != 0x2d && (local_1c[0] != 0x87)) && (local_1c[0] != 5))));
    uVar2 = FUN_0026877c(uVar3,DAT_0026fb20 + 0x26fb00,(int)pcVar6 - (int)pcVar1,pcVar1,uVar2,
                         pcVar6 + iVar4);
    sqlite3_result_text(param_1,uVar2,0xffffffff,DAT_0026fb24 + 0x26fb14);
  }
  return;
}


