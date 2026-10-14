/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026835a FUN_0026835a */

void FUN_0026835a(undefined4 param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  local_14 = param_2;
  iVar1 = FUN_002682b8(param_1,param_2,&local_14,param_4,param_1);
  if (iVar1 == 0) {
    iVar1 = local_14 + 0x4000;
    if (param_2 == 0) {
      local_14 = local_14 + 0x88;
      iVar2 = 0;
    }
    else {
      iVar2 = param_2 * 0x1000 + -0x22;
    }
    *param_4 = local_14 + -4;
    *param_3 = iVar1;
    *param_5 = iVar2;
  }
  return;
}


