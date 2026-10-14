/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025be8e FUN_0025be8e */

undefined8 FUN_0025be8e(int param_1,int *param_2,int *param_3)

{
  int *local_14;
  int *piStack_10;
  
  local_14 = param_2;
  piStack_10 = param_3;
  if (*(int *)(param_1 + 0xc) == 0) {
    *param_2 = param_1;
  }
  else {
    FUN_0025be8e(*(int *)(param_1 + 0xc),param_2,&local_14);
    local_14[2] = param_1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    *param_3 = param_1;
  }
  else {
    FUN_0025be8e(*(int *)(param_1 + 8),param_1 + 8,param_3);
  }
  return CONCAT44(local_14,param_1);
}


