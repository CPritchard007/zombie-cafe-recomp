/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00271e10 FUN_00271e10 */

int * FUN_00271e10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  int local_1c [2];
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],4);
    if (piVar1 == (int *)0x0) {
      if (*(char *)((int)param_1 + 0x2b) == '\0') {
        *(char *)((int)param_1 + 0x2b) = '\x01';
      }
      iVar2 = 0;
      piVar1 = (int *)FUN_002718d4(param_1,0,0,0,param_2,param_3,param_4,0,0);
      if (piVar1 == (int *)0x0) {
        local_1c[0] = -1;
        (**(code **)(*(int *)param_1[1] + 0x28))((int *)param_1[1],10,local_1c);
        iVar2 = 1;
        if ((local_1c[0] == 1) && (iVar2 = 0, -1 < param_1[5])) {
          FUN_0026b494(param_1,extraout_r1,0,0);
        }
      }
    }
    if (*(char *)((int)param_1 + 0x2b) == '\x02') {
      for (iVar3 = 0; iVar3 < param_1[6]; iVar3 = iVar3 + 1) {
        sqlite3_free(*(undefined4 *)(param_1[8] + iVar3 * 4));
        *(undefined4 *)(param_1[8] + iVar3 * 4) = 0;
      }
    }
    else {
      (**(code **)(*(int *)param_1[1] + 0x40))((int *)param_1[1],iVar2);
    }
    FUN_0025acd0(param_1[2]);
    if (iVar2 != 0) {
      FUN_0025ad28();
      (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x19],0);
      FUN_0025ad3c();
    }
    sqlite3_free(param_1[8]);
    sqlite3_free(param_1);
  }
  return piVar1;
}


