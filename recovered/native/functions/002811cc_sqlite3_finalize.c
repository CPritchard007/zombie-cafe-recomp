/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002811cc sqlite3_finalize */

int * sqlite3_finalize(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      sqlite3_log(0x15,DAT_0028120c + 0x2811e0,param_3,param_4,param_4);
      param_1 = (int *)FUN_0026adf0(DAT_00281210);
    }
    else {
      sqlite3_mutex_enter(*(undefined4 *)(iVar2 + 0xc));
      uVar1 = FUN_002810d0(param_1);
      param_1 = (int *)FUN_002685e0(iVar2,uVar1);
      FUN_0027c6ec(iVar2);
    }
  }
  return param_1;
}


