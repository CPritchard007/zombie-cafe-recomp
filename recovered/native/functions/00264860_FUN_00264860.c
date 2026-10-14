/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264860 FUN_00264860 */

int FUN_00264860(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(*(int *)(*param_1 + 0x10) + 0x1c);
  if (*(char *)((int)param_1 + 0x1ca) == '\0') {
    if (iVar2 != param_2[0x11]) {
      for (puVar4 = *(undefined4 **)(iVar2 + 0x30); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        iVar2 = puVar4[2];
        if ((*(int *)(iVar2 + 0x18) == param_2[0x11]) &&
           (iVar1 = sqlite3_stricmp(*(undefined4 *)(iVar2 + 4),*param_2,*(int *)(iVar2 + 0x18),
                                    param_2[0x11],param_4), iVar1 == 0)) {
          if (iVar3 == 0) {
            iVar3 = param_2[0x10];
          }
          *(int *)(iVar2 + 0x20) = iVar3;
          iVar3 = iVar2;
        }
      }
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    iVar3 = param_2[0x10];
  }
  return iVar3;
}


