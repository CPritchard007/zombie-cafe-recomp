/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c094 sqlite3_bind_double */

undefined8 sqlite3_bind_double(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0026be30();
  if (iVar1 == 0) {
    iVar3 = param_1[0x11] + (param_2 + -1) * 0x28;
    iVar2 = FUN_0025b12a(param_3,param_4);
    if (iVar2 == 0) {
      FUN_00263730(iVar3);
      *(undefined4 *)(iVar3 + 8) = param_3;
      *(undefined4 *)(iVar3 + 0xc) = param_4;
      *(undefined2 *)(iVar3 + 0x1c) = 8;
      *(undefined1 *)(iVar3 + 0x1e) = 2;
    }
    else {
      FUN_0025fc70(iVar3);
    }
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  return CONCAT44(param_3,iVar1);
}


