/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2960 FUN_002c2960 */

void FUN_002c2960(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = __mulsf3(*param_1);
  uVar2 = __mulsf3(uVar2,uVar2);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,uVar3);
  __addsf3(uVar1,uVar2);
  return;
}


