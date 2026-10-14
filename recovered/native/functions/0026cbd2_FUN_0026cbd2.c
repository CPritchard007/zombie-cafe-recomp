/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cbd2 FUN_0026cbd2 */

void FUN_0026cbd2(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  int local_1c [2];
  
  local_20 = 0;
  puVar1 = param_3;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_3;
  }
  puVar3 = &local_20;
  while ((puVar2 = param_3, param_3 != (undefined4 *)0x0 && (param_2 != (undefined4 *)0x0))) {
    FUN_0026cb72(param_1,0,*param_2,param_2[1],puVar1,param_3[1],local_1c);
    if (local_1c[0] < 1) {
      *puVar3 = param_2;
      puVar3 = param_2 + 2;
      param_2 = (undefined4 *)param_2[2];
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = param_3;
      puVar2 = (undefined4 *)param_3[2];
      puVar3 = param_3 + 2;
      if (puVar2 == (undefined4 *)0x0) break;
      puVar1 = (undefined4 *)*puVar2;
      param_3 = puVar2;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    param_2 = puVar2;
  }
  *puVar3 = param_2;
  *param_4 = local_20;
  return;
}


