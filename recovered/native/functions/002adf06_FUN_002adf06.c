/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002adf06 FUN_002adf06 */

undefined4 * FUN_002adf06(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = *param_3;
  uVar4 = param_3[2];
  uVar6 = param_3[1];
  uVar3 = param_3[3];
  uVar1 = __mulsf3(uVar5,*param_2);
  uVar2 = __mulsf3(uVar6,param_2[4]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[8]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,param_2[0xc]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = param_2[1];
  *param_1 = uVar1;
  uVar1 = __mulsf3(uVar5,uVar2);
  uVar2 = __mulsf3(uVar6,param_2[5]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[9]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,param_2[0xd]);
  uVar1 = __addsf3(uVar1,uVar2);
  param_1[1] = uVar1;
  uVar1 = __mulsf3(uVar5,param_2[2]);
  uVar2 = __mulsf3(uVar6,param_2[6]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[10]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,param_2[0xe]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  uVar1 = __mulsf3(uVar5,uVar2);
  uVar2 = __mulsf3(uVar6,param_2[7]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[0xb]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,param_2[0xf]);
  uVar1 = __addsf3(uVar1,uVar2);
  param_1[3] = uVar1;
  return param_1;
}


