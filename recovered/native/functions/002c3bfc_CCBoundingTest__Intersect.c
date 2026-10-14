/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3bfc CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingBox const*, ccBoundingSphere const*, ccVec3*, ccMat3x4
   const*, ccMat3x4 const*, ccVec3 const*) */

undefined4
CCBoundingTest::Intersect
          (ccBoundingBox *param_1,ccBoundingSphere *param_2,ccVec3 *param_3,ccMat3x4 *param_4,
          ccMat3x4 *param_5,ccVec3 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ccBoundingSphere *pcVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = *(undefined4 *)param_2;
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)(param_2 + 8);
  uVar1 = __mulsf3(uVar5,*(undefined4 *)(param_5 + 4));
  uVar2 = __mulsf3(uVar6,*(undefined4 *)(param_5 + 0x10));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar7,*(undefined4 *)(param_5 + 0x1c));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_5 + 0x28));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_1 + 4));
  uVar2 = __mulsf3(uVar5,*(undefined4 *)(param_5 + 8));
  uVar3 = __mulsf3(uVar6,*(undefined4 *)(param_5 + 0x14));
  uVar2 = __addsf3(uVar2,uVar3);
  uVar3 = __mulsf3(uVar7,*(undefined4 *)(param_5 + 0x20));
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,*(undefined4 *)(param_5 + 0x2c));
  uVar2 = __addsf3(uVar2,*(undefined4 *)(param_1 + 8));
  uVar3 = __mulsf3(uVar5,*(undefined4 *)param_5);
  uVar5 = __mulsf3(uVar6,*(undefined4 *)(param_5 + 0xc));
  uVar3 = __addsf3(uVar3,uVar5);
  uVar5 = __mulsf3(uVar7,*(undefined4 *)(param_5 + 0x18));
  uVar3 = __addsf3(uVar3,uVar5);
  uVar3 = __addsf3(uVar3,*(undefined4 *)(param_5 + 0x24));
  iVar4 = DAT_002c3db8;
  uVar3 = __addsf3(uVar3,*(undefined4 *)param_1);
  local_24 = __subsf3(uVar3,*(undefined4 *)param_6);
  local_20 = __subsf3(uVar1,*(undefined4 *)(param_6 + 4));
  local_1c = __subsf3(uVar2,*(undefined4 *)(param_6 + 8));
  pcVar8 = *(ccBoundingSphere **)(iVar4 + 0x2c3cd0);
  fVar10 = (float)__addsf3(*(undefined4 *)(param_2 + 0xc));
  CCBoundingSphere::Init(pcVar8,(ccVec3 *)&local_24,fVar10);
  uVar1 = Intersect(param_1,pcVar8,param_3);
  iVar4 = __aeabi_fcmple(uVar1,0);
  if (iVar4 != 0) {
    uVar6 = *(undefined4 *)param_3;
    uVar7 = *(undefined4 *)(param_3 + 8);
    uVar2 = __mulsf3(uVar6,*(undefined4 *)(param_4 + 4));
    uVar9 = *(undefined4 *)(param_3 + 4);
    uVar3 = __mulsf3(uVar9,*(undefined4 *)(param_4 + 0x10));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar7,*(undefined4 *)(param_4 + 0x1c));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __mulsf3(uVar6,*(undefined4 *)(param_4 + 8));
    uVar5 = __mulsf3(uVar9,*(undefined4 *)(param_4 + 0x14));
    uVar3 = __addsf3(uVar3,uVar5);
    uVar5 = __mulsf3(uVar7,*(undefined4 *)(param_4 + 0x20));
    uVar3 = __addsf3(uVar3,uVar5);
    uVar5 = __mulsf3(uVar6,*(undefined4 *)param_4);
    uVar6 = __mulsf3(uVar9,*(undefined4 *)(param_4 + 0xc));
    uVar5 = __addsf3(uVar5,uVar6);
    uVar6 = __mulsf3(uVar7,*(undefined4 *)(param_4 + 0x18));
    uVar5 = __addsf3(uVar5,uVar6);
    *(undefined4 *)param_3 = uVar5;
    *(undefined4 *)(param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 8) = uVar3;
  }
  return uVar1;
}


