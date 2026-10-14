/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c118 sqlite3_backup_init */

undefined8 sqlite3_backup_init(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_3 + 0xc));
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if (param_3 == param_1) {
    uVar2 = 1;
    iVar3 = DAT_0027c1b4 + 0x27c13c;
    iVar1 = param_3;
LAB_0027c14e:
    FUN_00268578(iVar1,uVar2,iVar3);
  }
  else {
    piVar4 = (int *)FUN_0025f3a8(0x30);
    if (piVar4 == (int *)0x0) {
      uVar2 = 7;
      iVar3 = 0;
      iVar1 = param_1;
      goto LAB_0027c14e;
    }
    iVar3 = FUN_0027c080(param_1,param_3,param_4);
    piVar4[6] = iVar3;
    iVar3 = FUN_0027c080(param_1,param_1,param_2);
    piVar4[4] = 1;
    piVar4[1] = iVar3;
    *piVar4 = param_1;
    piVar4[5] = param_3;
    piVar4[10] = 0;
    if (((piVar4[6] != 0) && (iVar3 != 0)) &&
       (iVar3 = FUN_00262148(iVar3,*(undefined4 *)(*(int *)(piVar4[6] + 4) + 0x20),0xffffffff),
       iVar3 != 7)) {
      *(int *)(piVar4[6] + 0x10) = *(int *)(piVar4[6] + 0x10) + 1;
      goto LAB_0027c170;
    }
    sqlite3_free(piVar4);
  }
  piVar4 = (int *)0x0;
LAB_0027c170:
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  sqlite3_mutex_leave(*(undefined4 *)(param_3 + 0xc));
  return CONCAT44(param_1,piVar4);
}


