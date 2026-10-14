/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b37ac CCQuaternion::SLerp */

/* CCQuaternion::SLerp(ccQuaternion*, ccQuaternion*, ccQuaternion*, float) */

void CCQuaternion::SLerp(ccQuaternion *param_1,ccQuaternion *param_2,ccQuaternion *param_3,
                        float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double __x;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 in_stack_ffffffbc;
  undefined4 local_30;
  
  uVar11 = *(undefined4 *)param_3;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar10 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_3 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)(param_3 + 0xc);
  uVar1 = __mulsf3(param_4,uVar10,uVar11);
  uVar2 = __mulsf3(uVar4,uVar7);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar5,uVar8);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __addsf3(uVar6,uVar9);
  uVar1 = __addsf3(uVar1,uVar2);
  iVar3 = __aeabi_fcmplt(uVar1,0);
  if (iVar3 == 0) {
    local_30 = 0x3f800000;
  }
  else {
    uVar1 = __subsf3(0,uVar1);
    local_30 = DAT_002b39fc;
  }
  uVar2 = __subsf3(0x3f800000,uVar1);
  iVar3 = __aeabi_fcmplt(uVar2,DAT_002b3a00);
  if (iVar3 == 0) {
    __extendsfdf2(uVar1);
    acos((double)CONCAT44(in_stack_ffffffbc,uVar6));
    uVar2 = __truncdfsf2();
    uVar4 = __extendsfdf2();
    sin((double)CONCAT44(in_stack_ffffffbc,uVar6));
    uVar1 = extraout_r1;
    uVar5 = __subsf3(0x3f800000,in_r3);
    __mulsf3(uVar5,uVar2);
    uVar5 = __extendsfdf2();
    sin((double)CONCAT44(uVar1,uVar4));
    __truncdfsf2(uVar4,uVar1);
    __x = (double)__extendsfdf2();
    __divdf3(uVar5,extraout_r1_00,SUB84(__x,0),(int)((ulonglong)__x >> 0x20));
    uVar1 = __truncdfsf2();
    __mulsf3(in_r3,uVar2);
    __extendsfdf2();
    sin(__x);
    uVar12 = __divdf3();
    uVar13 = __extendsfdf2(local_30);
    __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
             (int)((ulonglong)uVar13 >> 0x20));
    uVar2 = __truncdfsf2();
    uVar4 = __mulsf3(uVar1,*(undefined4 *)(param_2 + 4));
    uVar5 = __mulsf3(uVar2,*(undefined4 *)(param_3 + 4));
    uVar4 = __addsf3(uVar4,uVar5);
    uVar5 = __mulsf3(uVar1,*(undefined4 *)(param_2 + 8));
    uVar6 = __mulsf3(uVar2,*(undefined4 *)(param_3 + 8));
    uVar5 = __addsf3(uVar5,uVar6);
    uVar6 = __mulsf3(uVar1,*(undefined4 *)(param_2 + 0xc));
    uVar7 = __mulsf3(uVar2,*(undefined4 *)(param_3 + 0xc));
    uVar6 = __addsf3(uVar6,uVar7);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)param_2);
    uVar2 = __mulsf3(uVar2,*(undefined4 *)param_3);
    uVar1 = __addsf3(uVar1,uVar2);
    *(undefined4 *)param_1 = uVar1;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    *(undefined4 *)(param_1 + 8) = uVar5;
  }
  else {
    uVar1 = __subsf3(0x3f800000,in_r3);
    uVar2 = __mulsf3(in_r3,local_30);
    uVar10 = __mulsf3(uVar10,uVar1);
    uVar11 = __mulsf3(uVar11,uVar2);
    uVar10 = __addsf3(uVar10,uVar11);
    *(undefined4 *)param_1 = uVar10;
    uVar4 = __mulsf3(uVar4,uVar1);
    uVar7 = __mulsf3(uVar7,uVar2);
    uVar4 = __addsf3(uVar4,uVar7);
    *(undefined4 *)(param_1 + 4) = uVar4;
    uVar4 = __mulsf3(uVar5,uVar1);
    uVar5 = __mulsf3(uVar8,uVar2);
    uVar4 = __addsf3(uVar4,uVar5);
    *(undefined4 *)(param_1 + 8) = uVar4;
    uVar1 = __mulsf3(uVar6,uVar1);
    uVar2 = __mulsf3(uVar9,uVar2);
    uVar1 = __addsf3(uVar1,uVar2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}


