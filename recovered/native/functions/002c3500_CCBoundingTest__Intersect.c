/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3500 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingCircle const*, ccVec2 const*, ccVec2 const*, ccVec2*,
   ccVec2*) */

undefined4
CCBoundingTest::Intersect
          (ccBoundingCircle *param_1,ccVec2 *param_2,ccVec2 *param_3,ccVec2 *param_4,ccVec2 *param_5
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
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar11 = *(undefined4 *)param_2;
  uVar1 = __subsf3(*(undefined4 *)param_3,uVar11);
  uVar14 = *(undefined4 *)(param_2 + 4);
  local_20 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_3 + 4),uVar14);
  uVar13 = *(undefined4 *)param_1;
  local_1c = uVar2;
  uVar3 = __subsf3(uVar11,uVar13);
  uVar12 = *(undefined4 *)(param_1 + 4);
  uVar4 = __subsf3(uVar14,uVar12);
  uVar5 = FUN_002c2940(&local_20);
  uVar3 = __mulsf3(uVar1,uVar3);
  uVar4 = __mulsf3(uVar2,uVar4);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar3 = __addsf3(uVar3,uVar3);
  uVar4 = FUN_002c2940(param_1);
  uVar6 = FUN_002c2940(param_2);
  uVar7 = __mulsf3(*(undefined4 *)(param_1 + 8));
  uVar8 = __mulsf3(uVar3,uVar3);
  uVar9 = __mulsf3(uVar5,0x40800000);
  uVar4 = __addsf3(uVar4,uVar6);
  uVar6 = __mulsf3(uVar11,uVar13);
  uVar12 = __mulsf3(uVar14,uVar12);
  uVar6 = __addsf3(uVar6,uVar12);
  uVar6 = __addsf3(uVar6,uVar6);
  uVar4 = __subsf3(uVar4,uVar6);
  uVar4 = __subsf3(uVar4,uVar7);
  uVar4 = __mulsf3(uVar9,uVar4);
  uVar4 = __subsf3(uVar8,uVar4);
  iVar10 = __aeabi_fcmpeq(uVar4,0);
  if (iVar10 == 0) {
    iVar10 = __aeabi_fcmpgt(uVar4,0);
    if (iVar10 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      __extendsfdf2(uVar4);
      sqrt((double)CONCAT44(uVar11,uVar3));
      uVar1 = __truncdfsf2();
      uVar2 = __divsf3(0x3f000000,uVar5);
      uVar3 = __subsf3(0,uVar3);
      uVar4 = __addsf3(uVar3,uVar1);
      uVar4 = __mulsf3(uVar4,uVar2);
      uVar1 = __subsf3(uVar3,uVar1);
      uVar3 = __mulsf3(uVar1,uVar2);
      uVar2 = local_1c;
      uVar1 = __mulsf3(local_1c,uVar4);
      uVar5 = __addsf3(uVar1,*(undefined4 *)(param_2 + 4));
      uVar1 = local_20;
      uVar4 = __mulsf3(local_20,uVar4);
      uVar4 = __addsf3(*(undefined4 *)param_2,uVar4);
      *(undefined4 *)param_4 = uVar4;
      *(undefined4 *)(param_4 + 4) = uVar5;
      uVar2 = __mulsf3(uVar2,uVar3);
      uVar2 = __addsf3(uVar2,*(undefined4 *)(param_2 + 4));
      uVar1 = __mulsf3(uVar1,uVar3);
      uVar1 = __addsf3(*(undefined4 *)param_2,uVar1);
      *(undefined4 *)param_5 = uVar1;
      *(undefined4 *)(param_5 + 4) = uVar2;
      uVar1 = 1;
    }
  }
  else {
    uVar3 = __subsf3(0,uVar3);
    uVar3 = __mulsf3(uVar3,0x3f000000);
    uVar3 = __divsf3(uVar3,uVar5);
    uVar2 = __mulsf3(uVar3,uVar2);
    uVar2 = __addsf3(uVar2,uVar14);
    uVar1 = __mulsf3(uVar3,uVar1);
    uVar1 = __addsf3(uVar11,uVar1);
    *(undefined4 *)param_4 = uVar1;
    *(undefined4 *)(param_4 + 4) = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


