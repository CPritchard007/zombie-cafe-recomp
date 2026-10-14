/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad81a CCMat4x4::LookAt */

/* CCMat4x4::LookAt(ccMat4x4*, ccVec3 const*, ccVec3 const*, ccVec3 const*) */

void CCMat4x4::LookAt(ccMat4x4 *param_1,ccVec3 *param_2,ccVec3 *param_3,ccVec3 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_stack_ffffff98;
  int iVar9;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = __subsf3(*(undefined4 *)param_3,*(undefined4 *)param_2);
  uVar4 = __subsf3(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_2 + 4));
  uVar5 = __subsf3(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_2 + 8));
  uVar6 = __mulsf3(uVar3,uVar3);
  uVar7 = __mulsf3(uVar4,uVar4);
  uVar6 = __addsf3(uVar6,uVar7);
  uVar7 = __mulsf3(uVar5,uVar5);
  __addsf3(uVar6,uVar7);
  __extendsfdf2();
  sqrt((double)CONCAT44(uVar3,in_stack_ffffff98));
  uVar6 = __truncdfsf2();
  uVar6 = __divsf3(0x3f800000,uVar6);
  local_48 = __mulsf3(uVar3,uVar6);
  local_44 = __mulsf3(uVar4,uVar6);
  local_40 = __mulsf3(uVar5,uVar6);
  uVar5 = *(undefined4 *)(param_4 + 8);
  uVar3 = __mulsf3(*(undefined4 *)param_4);
  uVar4 = __mulsf3(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 4));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __mulsf3(uVar5,uVar5);
  __addsf3(uVar3,uVar4);
  __extendsfdf2();
  sqrt((double)CONCAT44(uVar5,in_stack_ffffff98));
  uVar3 = __truncdfsf2();
  uVar3 = __divsf3(0x3f800000,uVar3);
  local_30 = __mulsf3(*(undefined4 *)param_4,uVar3);
  local_2c = __mulsf3(*(undefined4 *)(param_4 + 4),uVar3);
  local_28 = __mulsf3(*(undefined4 *)(param_4 + 8),uVar3);
  FUN_002ad4e8(&local_3c,&local_48,&local_30);
  FUN_002ad4e8(&local_24,&local_3c,&local_48);
  iVar2 = local_40;
  iVar1 = local_44;
  *(undefined4 *)(param_1 + 0x10) = local_38;
  *(undefined4 *)param_1 = local_3c;
  *(undefined4 *)(param_1 + 4) = local_24;
  *(int *)(param_1 + 8) = local_48 + -0x80000000;
  *(undefined4 *)(param_1 + 0x14) = local_20;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x18) = local_44 + -0x80000000;
  *(undefined4 *)(param_1 + 0x24) = local_1c;
  *(int *)(param_1 + 0x28) = local_40 + -0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = local_34;
  iVar9 = local_48;
  uVar3 = __mulsf3(local_3c,*(undefined4 *)param_2);
  uVar4 = __mulsf3(local_38,*(undefined4 *)(param_2 + 4));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __mulsf3(local_34,*(undefined4 *)(param_2 + 8));
  iVar8 = __addsf3(uVar3,uVar4);
  *(int *)(param_1 + 0x30) = iVar8 + -0x80000000;
  uVar3 = __mulsf3(local_24,*(undefined4 *)param_2);
  uVar4 = __mulsf3(local_20,*(undefined4 *)(param_2 + 4));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __mulsf3(local_1c,*(undefined4 *)(param_2 + 8));
  iVar8 = __addsf3(uVar3,uVar4);
  *(int *)(param_1 + 0x34) = iVar8 + -0x80000000;
  uVar3 = __mulsf3(iVar9,*(undefined4 *)param_2);
  uVar4 = __mulsf3(iVar1,*(undefined4 *)(param_2 + 4));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __mulsf3(iVar2,*(undefined4 *)(param_2 + 8));
  uVar3 = __addsf3(uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


