/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027361c FUN_0027361c */

void FUN_0027361c(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[0xb]) {
    iVar1 = param_1[7];
    if ((((iVar1 == 5) || (iVar1 == 0)) || (iVar1 == 6)) && (param_2 < (uint)param_1[4])) {
      sqlite3_mutex_enter(*(undefined4 *)(*param_1 + 0xc));
      iVar1 = FUN_0027350c(param_1,param_2,param_3);
      sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
      if (iVar1 != 0) {
        param_1[7] = iVar1;
      }
    }
  }
  return;
}


