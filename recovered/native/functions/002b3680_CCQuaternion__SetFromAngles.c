/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3680 CCQuaternion::SetFromAngles */

/* CCQuaternion::SetFromAngles(ccQuaternion*, ccVec3 const*) */

void CCQuaternion::SetFromAngles(ccQuaternion *param_1,ccVec3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_stack_ffffffd4;
  
  __mulsf3(*(undefined4 *)(param_2 + 8),0x3f000000);
  __extendsfdf2();
  sin((double)CONCAT44(in_stack_ffffffd4,param_1));
  uVar1 = __truncdfsf2();
  cos((double)CONCAT44(uVar1,param_1));
  uVar2 = __truncdfsf2();
  __mulsf3(*(undefined4 *)(param_2 + 4),0x3f000000);
  __extendsfdf2();
  sin((double)CONCAT44(uVar1,param_1));
  uVar3 = __truncdfsf2();
  cos((double)CONCAT44(uVar1,param_1));
  uVar4 = __truncdfsf2();
  __mulsf3(*(undefined4 *)param_2,0x3f000000);
  __extendsfdf2();
  sin((double)CONCAT44(uVar1,param_1));
  uVar5 = __truncdfsf2();
  cos((double)CONCAT44(uVar1,param_1));
  uVar6 = __truncdfsf2();
  uVar7 = __mulsf3(uVar5,uVar4);
  uVar8 = __mulsf3(uVar6,uVar3);
  uVar9 = __mulsf3(uVar7,uVar2);
  uVar10 = __mulsf3(uVar8,uVar1);
  uVar9 = __subsf3(uVar9,uVar10);
  *(undefined4 *)param_1 = uVar9;
  uVar8 = __mulsf3(uVar8,uVar2);
  uVar7 = __mulsf3(uVar7,uVar1);
  uVar7 = __addsf3(uVar8,uVar7);
  *(undefined4 *)(param_1 + 4) = uVar7;
  uVar4 = __mulsf3(uVar6,uVar4);
  uVar3 = __mulsf3(uVar5,uVar3);
  uVar5 = __mulsf3(uVar4,uVar1);
  uVar6 = __mulsf3(uVar3,uVar2);
  uVar5 = __subsf3(uVar5,uVar6);
  *(undefined4 *)(param_1 + 8) = uVar5;
  uVar2 = __mulsf3(uVar4,uVar2);
  uVar1 = __mulsf3(uVar3,uVar1);
  uVar1 = __addsf3(uVar2,uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


