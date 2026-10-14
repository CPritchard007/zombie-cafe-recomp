/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c409a CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingSphere const*, ccVec3 const*, ccVec3 const*, ccVec3*,
   ccVec3*) */

undefined4
CCBoundingTest::Intersect
          (ccBoundingSphere *param_1,ccVec3 *param_2,ccVec3 *param_3,ccVec3 *param_4,ccVec3 *param_5
          )

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
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_stack_ffffff98;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar12 = *(undefined4 *)param_2;
  uVar1 = __subsf3(*(undefined4 *)param_3,uVar12);
  uVar17 = *(undefined4 *)(param_2 + 4);
  local_24 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_3 + 4),uVar17);
  uVar15 = *(undefined4 *)(param_2 + 8);
  local_20 = uVar2;
  uVar3 = __subsf3(*(undefined4 *)(param_3 + 8),uVar15);
  uVar13 = *(undefined4 *)param_1;
  local_1c = uVar3;
  uVar4 = __subsf3(uVar12,uVar13);
  uVar16 = *(undefined4 *)(param_1 + 4);
  uVar5 = __subsf3(uVar17,uVar16);
  uVar14 = *(undefined4 *)(param_1 + 8);
  uVar6 = __subsf3(uVar15,uVar14);
  uVar7 = FUN_002c2960(&local_24);
  uVar8 = __addsf3(uVar1,uVar1);
  uVar4 = __mulsf3(uVar8,uVar4);
  uVar8 = __addsf3(uVar2,uVar2);
  uVar5 = __mulsf3(uVar8,uVar5);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __addsf3(uVar3,uVar3);
  uVar5 = __mulsf3(uVar5,uVar6);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = FUN_002c2960(param_1);
  uVar6 = FUN_002c2960(param_2);
  uVar8 = __mulsf3(*(undefined4 *)(param_1 + 0xc));
  uVar9 = __mulsf3(uVar4,uVar4);
  uVar10 = __mulsf3(uVar7,0x40800000);
  uVar5 = __addsf3(uVar5,uVar6);
  uVar6 = __addsf3(uVar12,uVar12);
  uVar6 = __mulsf3(uVar6,uVar13);
  uVar13 = __addsf3(uVar17,uVar17);
  uVar13 = __mulsf3(uVar13,uVar16);
  uVar6 = __addsf3(uVar6,uVar13);
  uVar13 = __addsf3(uVar15,uVar15);
  uVar13 = __mulsf3(uVar13,uVar14);
  uVar6 = __addsf3(uVar6,uVar13);
  uVar5 = __subsf3(uVar5,uVar6);
  uVar5 = __subsf3(uVar5,uVar8);
  uVar5 = __mulsf3(uVar10,uVar5);
  uVar5 = __subsf3(uVar9,uVar5);
  iVar11 = __aeabi_fcmpeq(uVar5,0);
  if (iVar11 == 0) {
    iVar11 = __aeabi_fcmpgt(uVar5,0);
    if (iVar11 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      __extendsfdf2(uVar5);
      sqrt((double)CONCAT44(uVar12,in_stack_ffffff98));
      uVar1 = __truncdfsf2();
      uVar2 = __divsf3(0x3f000000,uVar7);
      uVar3 = __subsf3(0,uVar4);
      uVar4 = __addsf3(uVar3,uVar1);
      uVar4 = __mulsf3(uVar4,uVar2);
      uVar1 = __subsf3(uVar3,uVar1);
      uVar5 = __mulsf3(uVar1,uVar2);
      uVar2 = local_1c;
      uVar1 = local_20;
      uVar3 = local_24;
      uVar6 = __mulsf3(local_20,uVar4);
      uVar6 = __addsf3(uVar6,*(undefined4 *)(param_2 + 4));
      uVar7 = __mulsf3(uVar2,uVar4);
      uVar7 = __addsf3(uVar7,*(undefined4 *)(param_2 + 8));
      uVar4 = __mulsf3(uVar3,uVar4);
      uVar4 = __addsf3(*(undefined4 *)param_2,uVar4);
      *(undefined4 *)param_4 = uVar4;
      *(undefined4 *)(param_4 + 4) = uVar6;
      *(undefined4 *)(param_4 + 8) = uVar7;
      uVar1 = __mulsf3(uVar1,uVar5);
      uVar1 = __addsf3(uVar1,*(undefined4 *)(param_2 + 4));
      uVar2 = __mulsf3(uVar2,uVar5);
      uVar2 = __addsf3(uVar2,*(undefined4 *)(param_2 + 8));
      uVar3 = __mulsf3(uVar3,uVar5);
      uVar3 = __addsf3(*(undefined4 *)param_2,uVar3);
      *(undefined4 *)param_5 = uVar3;
      *(undefined4 *)(param_5 + 4) = uVar1;
      *(undefined4 *)(param_5 + 8) = uVar2;
      uVar1 = 1;
    }
  }
  else {
    uVar4 = __subsf3(0,uVar4);
    uVar4 = __mulsf3(uVar4,0x3f000000);
    uVar4 = __divsf3(uVar4,uVar7);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar2 = __addsf3(uVar2,uVar17);
    uVar3 = __mulsf3(uVar4,uVar3);
    uVar3 = __addsf3(uVar3,uVar15);
    uVar1 = __mulsf3(uVar4,uVar1);
    uVar1 = __addsf3(uVar12,uVar1);
    *(undefined4 *)param_4 = uVar1;
    *(undefined4 *)(param_4 + 4) = uVar2;
    *(undefined4 *)(param_4 + 8) = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}


