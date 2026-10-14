/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b34c FUN_0026b34c */

int FUN_0026b34c(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *__dest;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  iVar1 = FUN_0025b154(param_2);
  iVar2 = FUN_0025bb3c(param_1 + 0x124,param_2,iVar1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_0025ee10(param_1,iVar1 + 0x11);
    if (puVar3 != (undefined4 *)0x0) {
      __dest = puVar3 + 4;
      memcpy(__dest,param_2,iVar1 + 1);
      puVar3[1] = __dest;
      *puVar3 = param_3;
      puVar3[2] = param_4;
      puVar3[3] = param_5;
      puVar3 = (undefined4 *)FUN_00260d1c(param_1 + 0x124,__dest,iVar1,puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x36) = 1;
        FUN_0025fbda(param_1,puVar3);
        puVar3 = (undefined4 *)0x0;
      }
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_0026adf0(DAT_0026b3f8);
  }
  iVar1 = FUN_002685e0(param_1,puVar3);
  if ((iVar1 != 0) && (param_5 != (code *)0x0)) {
    (*param_5)(param_4);
  }
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return iVar1;
}


