/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e53e FUN_0029e53e */

undefined4 * FUN_0029e53e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *param_3;
  uVar8 = *param_2;
  uVar4 = param_2[2];
  uVar5 = param_3[1];
  uVar1 = __mulsf3(uVar8,uVar3);
  uVar2 = __mulsf3(uVar4,uVar5);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar6 = param_2[1];
  *param_1 = uVar1;
  uVar7 = param_2[3];
  uVar1 = __mulsf3(uVar6,uVar3);
  uVar2 = __mulsf3(uVar7,uVar5);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar3 = param_3[2];
  param_1[1] = uVar1;
  uVar5 = param_3[3];
  uVar1 = __mulsf3(uVar8,uVar3);
  uVar2 = __mulsf3(uVar4,uVar5);
  uVar1 = __addsf3(uVar1,uVar2);
  param_1[2] = uVar1;
  uVar1 = __mulsf3(uVar6,uVar3);
  uVar2 = __mulsf3(uVar7,uVar5);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar3 = param_3[4];
  param_1[3] = uVar1;
  uVar1 = __mulsf3(uVar8,uVar3);
  uVar5 = param_3[5];
  uVar2 = __mulsf3(uVar4,uVar5);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,param_2[4]);
  param_1[4] = uVar1;
  uVar1 = __mulsf3(uVar6,uVar3);
  uVar2 = __mulsf3(uVar7,uVar5);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,param_2[5]);
  param_1[5] = uVar1;
  return param_1;
}


