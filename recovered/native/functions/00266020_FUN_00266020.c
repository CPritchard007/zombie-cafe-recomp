/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266020 FUN_00266020 */

uint FUN_00266020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1[9];
  param_1[9] = uVar2 + 1;
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar1 = FUN_00265252(*param_1,param_1[10],uVar2 * 8 + 4,uVar2 - 1,param_4);
    param_1[10] = uVar1;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(uVar2 * 4 + param_1[10]) = 0xffffffff;
  }
  return ~uVar2;
}


