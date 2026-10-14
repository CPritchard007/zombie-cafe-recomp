/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bfba8 CCClampedBSpline::Sample */

/* CCClampedBSpline::Sample(ccClampedBSpline const*, float) */

CCClampedBSpline * __thiscall
CCClampedBSpline::Sample(CCClampedBSpline *this,ccClampedBSpline *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 in_r2;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int local_38;
  int local_34;
  
  iVar1 = __aeabi_fcmple(in_r2,0);
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmplt(in_r2,0);
    iVar11 = 0;
    iVar10 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      for (; iVar11 != iVar10; iVar11 = iVar11 + 1) {
        iVar1 = __aeabi_fcmplt(in_r2,*(undefined4 *)(iVar11 * 4 + *(int *)(param_1 + 4)));
        if (iVar1 != 0) {
          iVar11 = iVar11 + -1;
          goto LAB_002bfc00;
        }
      }
      iVar11 = iVar10 + -1;
    }
LAB_002bfc00:
    iVar1 = *(int *)param_1;
    if (iVar11 != iVar10 + -1) {
      iVar12 = iVar11 + 1;
      iVar2 = 0;
      if ((-1 < iVar12) && (iVar2 = iVar12, iVar10 <= iVar12)) {
        iVar2 = iVar10 + -1;
      }
      uVar8 = *(undefined4 *)(iVar11 * 4 + *(int *)(param_1 + 4));
      uVar9 = __subsf3(*(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 4)),uVar8);
      iVar2 = __aeabi_fcmpeq(uVar9,0);
      if (iVar2 == 0) {
        uVar8 = __subsf3(in_r2,uVar8);
        local_38 = __divsf3(uVar8,uVar9);
      }
      else {
        local_38 = 0x3f800000;
      }
      if (iVar11 == iVar10 + -2) {
        puVar13 = (undefined4 *)(iVar1 + (iVar10 + -1) * 0xc);
        puVar7 = (undefined4 *)(iVar1 + iVar11 * 0xc);
        uVar8 = *puVar7;
        uVar9 = __subsf3(*puVar13,uVar8);
        uVar9 = __mulsf3(local_38,uVar9);
        uVar9 = __addsf3(uVar8,uVar9);
        uVar8 = puVar7[1];
        *(undefined4 *)this = uVar9;
        uVar9 = __subsf3(puVar13[1],uVar8);
        uVar9 = __mulsf3(local_38,uVar9);
        uVar8 = __addsf3(uVar8,uVar9);
        uVar9 = puVar7[2];
        *(undefined4 *)(this + 4) = uVar8;
        uVar8 = __subsf3(puVar13[2],uVar9);
        uVar8 = __mulsf3(local_38,uVar8);
      }
      else {
        uVar9 = __subsf3(0x3f800000,local_38);
        uVar8 = __mulsf3(local_38,local_38);
        uVar3 = __mulsf3(uVar8,local_38);
        uVar4 = __mulsf3(uVar9,uVar9);
        uVar9 = __mulsf3(uVar4,uVar9);
        uVar9 = __mulsf3(uVar9,DAT_002bff40);
        uVar4 = __mulsf3(uVar3,DAT_002bff44);
        uVar5 = __mulsf3(uVar8,DAT_002bff48);
        uVar4 = __subsf3(uVar4,uVar5);
        uVar4 = __addsf3(uVar4,0x40800000);
        uVar4 = __mulsf3(uVar4,DAT_002bff40);
        uVar5 = __mulsf3(uVar3,DAT_002bff4c);
        uVar8 = __mulsf3(uVar8,DAT_002bff44);
        uVar8 = __addsf3(uVar5,uVar8);
        uVar5 = __mulsf3(local_38,DAT_002bff44);
        uVar8 = __addsf3(uVar8,uVar5);
        uVar8 = __addsf3(uVar8,0x3f800000);
        uVar8 = __mulsf3(uVar8,DAT_002bff40);
        uVar3 = __mulsf3(uVar3,DAT_002bff40);
        local_38 = iVar11 + -1;
        iVar2 = 0;
        if ((-1 < local_38) && (iVar2 = local_38, iVar10 <= local_38)) {
          iVar2 = iVar10 + -1;
        }
        uVar5 = __mulsf3(uVar9,*(undefined4 *)(iVar1 + iVar2 * 0xc));
        iVar2 = 0;
        if ((-1 < iVar11) && (iVar2 = iVar11, iVar10 <= iVar11)) {
          iVar2 = iVar10 + -1;
        }
        uVar6 = __mulsf3(uVar4,*(undefined4 *)(iVar1 + iVar2 * 0xc));
        uVar5 = __addsf3(uVar5,uVar6);
        iVar2 = 0;
        if ((-1 < iVar12) && (iVar2 = iVar12, iVar10 <= iVar12)) {
          iVar2 = iVar10 + -1;
        }
        uVar6 = __mulsf3(uVar8,*(undefined4 *)(iVar1 + iVar2 * 0xc));
        uVar5 = __addsf3(uVar5,uVar6);
        local_34 = iVar11 + 2;
        iVar2 = 0;
        if ((-1 < local_34) && (iVar2 = local_34, iVar10 <= local_34)) {
          iVar2 = iVar10 + -1;
        }
        uVar6 = __mulsf3(uVar3,*(undefined4 *)(iVar1 + iVar2 * 0xc));
        uVar5 = __addsf3(uVar5,uVar6);
        *(undefined4 *)this = uVar5;
        iVar2 = 0;
        if ((-1 < local_38) && (iVar2 = local_38, iVar10 <= local_38)) {
          iVar2 = iVar10 + -1;
        }
        uVar5 = __mulsf3(uVar9,*(undefined4 *)(iVar1 + iVar2 * 0xc + 4));
        iVar2 = 0;
        if ((-1 < iVar11) && (iVar2 = iVar11, iVar10 <= iVar11)) {
          iVar2 = iVar10 + -1;
        }
        uVar6 = __mulsf3(uVar4,*(undefined4 *)(iVar1 + iVar2 * 0xc + 4));
        uVar5 = __addsf3(uVar5,uVar6);
        iVar2 = 0;
        if ((-1 < iVar12) && (iVar2 = iVar12, iVar10 <= iVar12)) {
          iVar2 = iVar10 + -1;
        }
        uVar6 = __mulsf3(uVar8,*(undefined4 *)(iVar1 + iVar2 * 0xc + 4));
        uVar5 = __addsf3(uVar5,uVar6);
        iVar2 = 0;
        if ((-1 < local_34) && (iVar2 = local_34, iVar10 <= local_34)) {
          iVar2 = iVar10 + -1;
        }
        uVar6 = __mulsf3(uVar3,*(undefined4 *)(iVar1 + iVar2 * 0xc + 4));
        uVar5 = __addsf3(uVar5,uVar6);
        *(undefined4 *)(this + 4) = uVar5;
        if (local_38 < 0) {
          local_38 = 0;
        }
        else if (iVar10 <= local_38) {
          local_38 = iVar10 + -1;
        }
        uVar9 = __mulsf3(uVar9,*(undefined4 *)(iVar1 + local_38 * 0xc + 8));
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        else if (iVar10 <= iVar11) {
          iVar11 = iVar10 + -1;
        }
        uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar1 + iVar11 * 0xc + 8));
        uVar9 = __addsf3(uVar9,uVar4);
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (iVar10 <= iVar12) {
          iVar12 = iVar10 + -1;
        }
        uVar8 = __mulsf3(uVar8,*(undefined4 *)(iVar1 + iVar12 * 0xc + 8));
        uVar9 = __addsf3(uVar9,uVar8);
        if (local_34 < 0) {
          local_34 = 0;
        }
        else if (iVar10 <= local_34) {
          local_34 = iVar10 + -1;
        }
        uVar8 = __mulsf3(uVar3,*(undefined4 *)(iVar1 + local_34 * 0xc + 8));
      }
      uVar9 = __addsf3(uVar9,uVar8);
      *(undefined4 *)(this + 8) = uVar9;
      return this;
    }
    puVar7 = (undefined4 *)(iVar1 + iVar11 * 0xc);
    *(undefined4 *)this = *puVar7;
    *(undefined4 *)(this + 4) = puVar7[1];
    uVar9 = puVar7[2];
  }
  else {
    puVar7 = *(undefined4 **)param_1;
    uVar8 = puVar7[1];
    *(undefined4 *)this = *puVar7;
    uVar9 = puVar7[2];
    *(undefined4 *)(this + 4) = uVar8;
  }
  *(undefined4 *)(this + 8) = uVar9;
  return this;
}


