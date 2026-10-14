/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268444 sqlite3_auto_extension */

int sqlite3_auto_extension(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    uVar2 = FUN_0025ad68(2);
    sqlite3_mutex_enter();
    iVar4 = *(int *)(DAT_002684a4 + 0x2684b8);
    piVar6 = *(int **)(DAT_002684a4 + 0x2684bc);
    for (iVar3 = 0; iVar3 < iVar4; iVar3 = iVar3 + 1) {
      iVar5 = *piVar6;
      piVar6 = piVar6 + 1;
      if (iVar5 == param_1) goto LAB_00268498;
    }
    if (iVar3 == iVar4) {
      iVar4 = sqlite3_realloc(*(int **)(DAT_002684a4 + 0x2684bc),(iVar3 + 1) * 4,iVar4,piVar6,
                              param_4);
      iVar3 = DAT_002684a8;
      if (iVar4 == 0) {
        iVar1 = 7;
      }
      else {
        iVar5 = *(int *)(DAT_002684a8 + 0x2684de);
        *(int *)(DAT_002684a8 + 0x2684e2) = iVar4;
        *(int *)(iVar5 * 4 + iVar4) = param_1;
        *(int *)(iVar3 + 0x2684de) = iVar5 + 1;
      }
    }
LAB_00268498:
    sqlite3_mutex_leave(uVar2);
  }
  return iVar1;
}


