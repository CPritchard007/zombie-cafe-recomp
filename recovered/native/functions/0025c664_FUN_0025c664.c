/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c664 FUN_0025c664 */

undefined8 FUN_0025c664(int *param_1,int param_2,code *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = sqlite3_column_count();
  if ((param_2 < iVar1) && (-1 < param_2)) {
    sqlite3_mutex_enter(*(undefined4 *)(iVar3 + 0xc));
    uVar2 = (*param_3)(param_1[4] + (param_2 + iVar1 * param_4) * 0x28);
    if (*(char *)(iVar3 + 0x36) != '\0') {
      uVar2 = 0;
      *(char *)(iVar3 + 0x36) = '\0';
    }
    sqlite3_mutex_leave(*(undefined4 *)(iVar3 + 0xc));
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(param_1,uVar2);
}


