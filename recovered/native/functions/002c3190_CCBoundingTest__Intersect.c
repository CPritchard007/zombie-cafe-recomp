/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3190 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingCircle const*, ccVec2 const*, ccVec2 const*, ccVec2*) */

undefined4
CCBoundingTest::Intersect(ccBoundingCircle *param_1,ccVec2 *param_2,ccVec2 *param_3,ccVec2 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double __x;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar9 = *(undefined4 *)param_2;
  uVar1 = __subsf3(*(undefined4 *)param_3,uVar9);
  uVar10 = *(undefined4 *)(param_2 + 4);
  local_20 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_3 + 4),uVar10);
  uVar11 = *(undefined4 *)param_1;
  local_1c = uVar2;
  uVar3 = __subsf3(uVar9,uVar11);
  uVar13 = *(undefined4 *)(param_1 + 4);
  uVar4 = __subsf3(uVar10,uVar13);
  FUN_002c2940(&local_20);
  uVar15 = __extendsfdf2();
  uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar12 = (undefined4)uVar15;
  uVar3 = __mulsf3(uVar1,uVar3);
  uVar4 = __mulsf3(uVar2,uVar4);
  uVar3 = __addsf3(uVar3,uVar4);
  __addsf3(uVar3,uVar3);
  uVar15 = __extendsfdf2();
  uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar3 = (undefined4)uVar15;
  uVar4 = FUN_002c2940(param_1);
  uVar5 = FUN_002c2940(param_2);
  uVar6 = __mulsf3(*(undefined4 *)(param_1 + 8));
  uVar15 = __muldf3(uVar3,uVar8,uVar3,uVar8);
  uVar16 = __muldf3(uVar12,uVar14,DAT_002c34e8,DAT_002c34ec);
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __mulsf3(uVar9,uVar11);
  uVar11 = __mulsf3(uVar10,uVar13);
  uVar5 = __addsf3(uVar5,uVar11);
  uVar5 = __addsf3(uVar5,uVar5);
  uVar4 = __subsf3(uVar4,uVar5);
  __subsf3(uVar4,uVar6);
  uVar17 = __extendsfdf2();
  uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                    (int)((ulonglong)uVar17 >> 0x20));
  __x = (double)__subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                         (int)((ulonglong)uVar16 >> 0x20));
  iVar7 = __aeabi_dcmpeq(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),DAT_002c34f0,DAT_002c34f4);
  if (iVar7 == 0) {
    iVar7 = __aeabi_dcmpgt(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),DAT_002c34f0,DAT_002c34f4);
    uVar1 = SUB84(__x,0);
    if (iVar7 == 0) {
      return 0;
    }
    sqrt(__x);
    uVar4 = extraout_r1;
    uVar15 = __divdf3(DAT_002c34f8,DAT_002c34fc,uVar12,uVar14);
    uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar16 = __subdf3(DAT_002c34f0,DAT_002c34f4,uVar3,uVar8);
    uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar17 = __adddf3((int)uVar16,uVar11,uVar1,uVar4);
    __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar15,uVar6);
    uVar12 = __truncdfsf2();
    uVar3 = local_1c;
    uVar5 = __mulsf3(local_1c,uVar12);
    uVar2 = local_20;
    uVar5 = __addsf3(uVar5,*(undefined4 *)(param_2 + 4));
    uVar12 = __mulsf3(uVar2,uVar12);
    uVar12 = __addsf3(*(undefined4 *)param_2,uVar12);
    *(undefined4 *)param_4 = uVar12;
    *(undefined4 *)(param_4 + 4) = uVar5;
    uVar16 = __subdf3((int)uVar16,uVar11,uVar1,uVar4);
    __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,uVar6);
    uVar12 = __truncdfsf2();
    uVar2 = __mulsf3(uVar2,uVar12);
    local_48 = __addsf3(uVar2,*(undefined4 *)param_2);
    uVar2 = __mulsf3(uVar3,uVar12);
    local_4c = __addsf3(uVar2,*(undefined4 *)(param_2 + 4));
    __x = (double)CONCAT44(uVar4,uVar1);
  }
  else {
    uVar15 = __subdf3(DAT_002c34f0,DAT_002c34f4,uVar3,uVar8);
    uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_002c34f8,DAT_002c34fc);
    __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar12,uVar14);
    uVar3 = __truncdfsf2();
    uVar2 = __mulsf3(uVar3,uVar2);
    uVar2 = __addsf3(uVar2,uVar10);
    uVar1 = __mulsf3(uVar3,uVar1);
    uVar1 = __addsf3(uVar9,uVar1);
    *(undefined4 *)param_4 = uVar1;
    *(undefined4 *)(param_4 + 4) = uVar2;
  }
  uVar4 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)param_4;
  __subsf3(uVar2,uVar4);
  uVar1 = FUN_002c2928();
  uVar12 = *(undefined4 *)param_3;
  __subsf3(uVar2,uVar12);
  uVar2 = FUN_002c2928();
  uVar2 = __addsf3(uVar1,uVar2);
  __subsf3(uVar12,uVar4);
  uVar3 = FUN_002c2928();
  iVar7 = __aeabi_fcmple(uVar2,uVar3);
  if (iVar7 != 0) {
    uVar14 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_4 + 4);
    __subsf3(uVar5,uVar14);
    uVar2 = FUN_002c2928();
    uVar11 = *(undefined4 *)(param_3 + 4);
    __subsf3(uVar5,uVar11);
    uVar5 = FUN_002c2928();
    uVar5 = __addsf3(uVar2,uVar5);
    __subsf3(uVar11,uVar14);
    uVar6 = FUN_002c2928();
    iVar7 = __aeabi_fcmple(uVar5,uVar6);
    if (iVar7 != 0) {
      iVar7 = __aeabi_dcmpeq(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),DAT_002c34f0,DAT_002c34f4);
      if (iVar7 != 0) {
        return 1;
      }
      __subsf3(local_48,uVar4);
      uVar4 = FUN_002c2928();
      __subsf3(local_48,uVar12);
      uVar12 = FUN_002c2928();
      uVar12 = __addsf3(uVar4,uVar12);
      iVar7 = __aeabi_fcmple(uVar12,uVar3);
      if (iVar7 == 0) {
        return 1;
      }
      __subsf3(local_4c,uVar14);
      uVar3 = FUN_002c2928();
      __subsf3(local_4c,uVar11);
      uVar12 = FUN_002c2928();
      uVar12 = __addsf3(uVar3,uVar12);
      iVar7 = __aeabi_fcmple(uVar12,uVar6);
      if (iVar7 == 0) {
        return 1;
      }
      iVar7 = __aeabi_fcmpgt(uVar1,uVar4);
      if ((iVar7 == 0) && (iVar7 = __aeabi_fcmpgt(uVar2,uVar3), iVar7 == 0)) {
        return 1;
      }
      *(undefined4 *)param_4 = local_48;
      *(undefined4 *)(param_4 + 4) = local_4c;
      return 1;
    }
  }
  return 0;
}


