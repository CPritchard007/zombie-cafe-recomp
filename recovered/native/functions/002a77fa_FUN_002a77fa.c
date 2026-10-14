/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a77fa FUN_002a77fa */

undefined8 FUN_002a77fa(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar1 = __mulsf3(uVar3,*param_2);
  uVar2 = __mulsf3(uVar4,param_2[2]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,param_2[4]);
  uVar2 = param_2[1];
  *param_1 = uVar1;
  uVar1 = __mulsf3(uVar3,uVar2);
  uVar2 = __mulsf3(uVar4,param_2[3]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,param_2[5]);
  param_1[1] = uVar1;
  return CONCAT44(param_1,param_1);
}


