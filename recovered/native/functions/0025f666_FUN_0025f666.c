/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f666 FUN_0025f666 */

void FUN_0025f666(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[2];
  param_1[2] = 0;
  sqlite3_free(param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    sqlite3_free(piVar1);
    piVar1 = (int *)iVar2;
  }
  param_1[1] = 0;
  return;
}


