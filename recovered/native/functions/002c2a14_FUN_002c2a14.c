/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2a14 FUN_002c2a14 */

void FUN_002c2a14(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float __x;
  
  uVar2 = param_1[1];
  uVar1 = __mulsf3(*param_1);
  uVar2 = __mulsf3(uVar2,uVar2);
  __x = (float)__addsf3(uVar1,uVar2);
  sqrtf(__x);
  return;
}


