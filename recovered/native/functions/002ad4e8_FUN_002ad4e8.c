/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad4e8 FUN_002ad4e8 */

undefined4 * FUN_002ad4e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_3[2];
  uVar7 = param_2[2];
  uVar5 = param_3[1];
  uVar1 = __mulsf3(uVar3,uVar4);
  uVar2 = __mulsf3(uVar7,uVar5);
  uVar1 = __subsf3(uVar1,uVar2);
  uVar6 = *param_3;
  *param_1 = uVar1;
  uVar1 = __mulsf3(uVar7,uVar6);
  uVar7 = *param_2;
  uVar2 = __mulsf3(uVar7,uVar4);
  uVar1 = __subsf3(uVar1,uVar2);
  param_1[1] = uVar1;
  uVar1 = __mulsf3(uVar7,uVar5);
  uVar2 = __mulsf3(uVar3,uVar6);
  uVar1 = __subsf3(uVar1,uVar2);
  param_1[2] = uVar1;
  return param_1;
}


