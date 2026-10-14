/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002692e0 FUN_002692e0 */

undefined8 FUN_002692e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_4;
  uVar1 = FUN_00269118(param_2,param_3,0,0,param_4,param_2,param_3);
  *param_1 = uVar1;
  param_1[1] = *param_4;
  param_1[2] = *param_4 + param_4[1];
  return CONCAT44(param_2,piVar2);
}


