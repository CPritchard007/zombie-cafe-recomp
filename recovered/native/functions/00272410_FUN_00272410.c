/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272410 FUN_00272410 */

bool FUN_00272410(int *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  void *__dest;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_20;
  
  bVar6 = param_3 != (int *)0x0;
  iVar2 = param_2;
  if ((bVar6) && (param_1[3] == 0)) {
    iVar2 = param_2 << 1;
  }
  if (param_1[2] < iVar2 + param_1[5]) {
    iVar2 = param_1[2] * 2 + iVar2;
    param_1[2] = iVar2;
    iVar2 = sqlite3_realloc(*param_1,iVar2 * 4);
    if (iVar2 == 0) {
LAB_002724f8:
      param_1[6] = 7;
      return true;
    }
    *param_1 = iVar2;
  }
  iVar2 = DAT_00272504;
  if (param_1[3] == 0) {
    param_1[4] = param_2;
    for (iVar5 = 0; iVar5 < param_2; iVar5 = iVar5 + 1) {
      uVar3 = *param_4;
      param_4 = param_4 + 1;
      iVar1 = sqlite3_mprintf(iVar2 + 0x272460,uVar3);
      if (iVar1 == 0) goto LAB_002724f8;
      iVar4 = param_1[5];
      *(int *)(iVar4 * 4 + *param_1) = iVar1;
      param_1[5] = iVar4 + 1;
    }
  }
  else if (param_1[4] != param_2) {
    sqlite3_free(param_1[1]);
    iVar2 = sqlite3_mprintf(DAT_00272508 + 0x272496);
    param_1[1] = iVar2;
    param_1[6] = 1;
    return true;
  }
  if (bVar6) {
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      if (*param_3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        iVar2 = FUN_0025b154();
        __dest = (void *)sqlite3_malloc(iVar2 + 1U);
        if (__dest == (void *)0x0) goto LAB_002724f8;
        memcpy(__dest,(void *)*param_3,iVar2 + 1U);
      }
      iVar2 = param_1[5];
      param_3 = param_3 + 1;
      *(void **)(iVar2 * 4 + *param_1) = __dest;
      param_1[5] = iVar2 + 1;
    }
    bVar6 = false;
    param_1[3] = param_1[3] + 1;
  }
  return bVar6;
}


