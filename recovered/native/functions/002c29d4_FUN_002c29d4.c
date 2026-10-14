/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c29d4 FUN_002c29d4 */

void FUN_002c29d4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 uVar2;
  undefined4 unaff_r5;
  undefined4 uVar3;
  
  uVar3 = param_1[2];
  uVar2 = param_1[1];
  uVar1 = __mulsf3(*param_1);
  uVar2 = __mulsf3(uVar2,uVar2);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar3,uVar3);
  __addsf3(uVar1,uVar2);
  __extendsfdf2();
  sqrt((double)CONCAT44(unaff_r5,unaff_r4));
  __truncdfsf2();
  return;
}


