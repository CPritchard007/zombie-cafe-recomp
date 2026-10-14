/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb712 FUN_002bb712 */

undefined8
FUN_002bb712(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = __mulsf3(uVar5,*param_2,uVar4,param_4,param_1,uVar4,param_3);
  uVar2 = __mulsf3(uVar6,param_2[3]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[6]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,param_2[9]);
  uVar2 = param_2[1];
  *param_1 = uVar1;
  uVar1 = __mulsf3(uVar5,uVar2);
  uVar2 = __mulsf3(uVar6,param_2[4]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[7]);
  uVar2 = __addsf3(uVar1,uVar2);
  uVar2 = __addsf3(uVar2,param_2[10]);
  uVar3 = param_2[2];
  param_1[1] = uVar2;
  uVar2 = __mulsf3(uVar5,uVar3);
  uVar3 = __mulsf3(uVar6,param_2[5]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar3 = __mulsf3(uVar4,param_2[8]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,param_2[0xb]);
  param_1[2] = uVar2;
  return CONCAT44(uVar1,param_1);
}


