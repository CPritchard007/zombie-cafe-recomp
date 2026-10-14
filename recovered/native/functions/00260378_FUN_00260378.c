/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260378 FUN_00260378 */

code * FUN_00260378(undefined4 *param_1,code *param_2)

{
  code *pcVar1;
  code *local_50 [2];
  undefined4 local_48 [7];
  undefined2 local_2c;
  undefined4 *local_20;
  code *local_18;
  
  pcVar1 = param_2;
  if ((param_2 != (code *)0x0) && (pcVar1 = *(code **)(param_2 + 0x14), pcVar1 != (code *)0x0)) {
    memset(local_50,0,0x40);
    local_2c = 1;
    local_48[0] = *param_1;
    local_50[0] = param_2;
    local_20 = param_1;
    (*pcVar1)(local_50);
    FUN_0025fbda(*param_1,param_1[9]);
    memcpy(param_1,local_48,0x28);
    pcVar1 = local_18;
  }
  return pcVar1;
}


