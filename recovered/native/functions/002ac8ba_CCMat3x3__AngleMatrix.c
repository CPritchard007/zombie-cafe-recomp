/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac8ba CCMat3x3::AngleMatrix */

/* CCMat3x3::AngleMatrix(ccVec3 const*, ccMat3x3*) */

void CCMat3x3::AngleMatrix(ccVec3 *param_1,ccMat3x3 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  
  __extendsfdf2(*(undefined4 *)(param_1 + 8));
  sin((double)CONCAT44(in_stack_ffffffd4,in_stack_ffffffd0));
  iVar1 = __truncdfsf2();
  cos((double)CONCAT44(iVar1,in_stack_ffffffd0));
  uVar2 = __truncdfsf2();
  __extendsfdf2(*(undefined4 *)(param_1 + 4));
  sin((double)CONCAT44(iVar1,in_stack_ffffffd0));
  iVar3 = __truncdfsf2();
  cos((double)CONCAT44(iVar1,in_stack_ffffffd0));
  uVar4 = __truncdfsf2();
  __extendsfdf2(*(undefined4 *)param_1);
  sin((double)CONCAT44(iVar1,in_stack_ffffffd0));
  iVar5 = __truncdfsf2();
  cos((double)CONCAT44(iVar1,in_stack_ffffffd0));
  uVar6 = __truncdfsf2();
  uVar7 = __mulsf3(uVar4,uVar2);
  *(undefined4 *)param_2 = uVar7;
  uVar7 = __mulsf3(uVar4,iVar1);
  *(int *)(param_2 + 8) = iVar3 + -0x80000000;
  *(undefined4 *)(param_2 + 4) = uVar7;
  uVar7 = __mulsf3(iVar5,iVar3);
  uVar8 = __mulsf3(uVar7,uVar2);
  uVar9 = __mulsf3(uVar6,iVar1 + -0x80000000);
  uVar8 = __addsf3(uVar8,uVar9);
  *(undefined4 *)(param_2 + 0xc) = uVar8;
  uVar7 = __mulsf3(uVar7,iVar1);
  uVar8 = __mulsf3(uVar6,uVar2);
  uVar7 = __addsf3(uVar7,uVar8);
  *(undefined4 *)(param_2 + 0x10) = uVar7;
  uVar7 = __mulsf3(iVar5,uVar4);
  *(undefined4 *)(param_2 + 0x14) = uVar7;
  uVar7 = __mulsf3(uVar6,iVar3);
  uVar8 = __mulsf3(uVar7,uVar2);
  uVar9 = __mulsf3(iVar5,iVar1);
  uVar8 = __addsf3(uVar8,uVar9);
  *(undefined4 *)(param_2 + 0x18) = uVar8;
  uVar7 = __mulsf3(uVar7,iVar1);
  uVar2 = __mulsf3(iVar5 + -0x80000000,uVar2);
  uVar2 = __addsf3(uVar7,uVar2);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  uVar2 = __mulsf3(uVar6,uVar4);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  return;
}


