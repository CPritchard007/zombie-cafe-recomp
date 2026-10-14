/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026456e sqlite3_file_control */

undefined8 sqlite3_file_control(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  iVar1 = FUN_00264534(param_1,param_2);
  uVar3 = 1;
  if (iVar1 != 0) {
    FUN_00261f68();
    piVar2 = *(int **)(**(int **)(iVar1 + 4) + 0x3c);
    if (param_3 == 7) {
      *param_4 = piVar2;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xc;
      if (*piVar2 != 0) {
        uVar3 = (**(code **)(*piVar2 + 0x28))(piVar2,param_3,param_4);
      }
    }
    FUN_00262002(iVar1);
  }
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return CONCAT44(param_1,uVar3);
}


