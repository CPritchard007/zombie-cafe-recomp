/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9b2c FUN_002e9b2c */

void FUN_002e9b2c(uint param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint local_14;
  
  local_14 = param_1;
  _Unwind_VRS_Set(param_2,0,0,0,&local_14);
  local_14 = *param_3;
  _Unwind_VRS_Set(param_2,0,1,0,&local_14);
  uVar1 = param_3[4];
  _Unwind_VRS_Get(param_2,0,0xf,0,&local_14);
  local_14 = uVar1 | local_14 & 1;
  _Unwind_VRS_Set(param_2,0,0xf,0,&local_14);
  return;
}


