/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b248 sqlite3_create_function_v2 */

undefined4
sqlite3_create_function_v2
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,code *param_9)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_24;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if (param_9 == (code *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_0025f04c(param_1,0xc);
    if (piVar1 == (int *)0x0) {
      (*param_9)(param_5);
      local_24 = 1;
      goto LAB_0026b2b4;
    }
    piVar1[1] = (int)param_9;
    piVar1[2] = param_5;
  }
  local_24 = FUN_0026affc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    (*param_9)(param_5);
    FUN_0025fbda(param_1,piVar1);
  }
LAB_0026b2b4:
  uVar2 = FUN_002685e0(param_1,local_24);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar2;
}


