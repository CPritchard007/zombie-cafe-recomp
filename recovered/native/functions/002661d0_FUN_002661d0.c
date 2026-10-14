/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002661d0 FUN_002661d0 */

undefined8 FUN_002661d0(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = param_3;
  if ((int)param_2[1] < (int)param_2[3]) {
LAB_0026620e:
    iVar1 = FUN_0026613c(param_1,param_2,local_18);
    if (iVar1 == 0) {
      param_2[5] = local_18[0];
      iVar1 = FUN_00266050(param_1,param_2,local_18[0],param_2 + 8);
    }
  }
  else {
    if (param_2[3] == param_2[1]) {
      if (*param_2 < param_2[2]) goto LAB_0026620e;
    }
    FUN_0025fbda(param_1,param_2[7]);
    FUN_0025fbda(param_1,param_2[9]);
    memset(param_2,0,0x30);
    iVar1 = 0;
  }
  return CONCAT44(local_18[0],iVar1);
}


