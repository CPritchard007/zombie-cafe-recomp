/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3a84 CCQuaternion::ToMat3x3 */

/* CCQuaternion::ToMat3x3(ccQuaternion const*, ccMat3x3*) */

void CCQuaternion::ToMat3x3(ccQuaternion *param_1,ccMat3x3 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_38;
  
  uVar9 = *(undefined4 *)param_1;
  iVar1 = __aeabi_fcmpge(uVar9,DAT_002b3c94);
  uVar10 = *(undefined4 *)(param_1 + 4);
  uVar11 = *(undefined4 *)(param_1 + 8);
  if (((((iVar1 != 0) && (iVar1 = __aeabi_fcmple(uVar9,DAT_002b3c98), iVar1 != 0)) &&
       (iVar1 = __aeabi_fcmpge(uVar10,DAT_002b3c94), iVar1 != 0)) &&
      ((iVar1 = __aeabi_fcmple(uVar10,DAT_002b3c98), iVar1 != 0 &&
       (iVar1 = __aeabi_fcmpge(uVar11,DAT_002b3c94), iVar1 != 0)))) &&
     (iVar1 = __aeabi_fcmple(uVar11,DAT_002b3c98), iVar1 != 0)) {
    uVar6 = __subsf3(*(undefined4 *)(param_1 + 0xc),0x3f800000);
    iVar1 = __aeabi_fcmpge(uVar6,DAT_002b3c94);
    if ((iVar1 != 0) && (iVar1 = __aeabi_fcmple(uVar6,DAT_002b3c98), iVar1 != 0)) {
      *(undefined4 *)param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0x3f800000;
      return;
    }
  }
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = __mulsf3(uVar9,uVar9);
  uVar7 = __mulsf3(uVar10,uVar10);
  uVar6 = __addsf3(uVar6,uVar7);
  uVar7 = __mulsf3(uVar11,uVar11);
  uVar6 = __addsf3(uVar6,uVar7);
  uVar7 = __mulsf3(uVar8,uVar8);
  uVar6 = __addsf3(uVar6,uVar7);
  iVar1 = __aeabi_fcmpge(uVar6,DAT_002b3c94);
  if ((iVar1 == 0) || (iVar1 = __aeabi_fcmple(uVar6,DAT_002b3c98), iVar1 == 0)) {
    local_38 = __divsf3(0x40000000,uVar6);
  }
  else {
    local_38 = 0x3f800000;
  }
  uVar6 = __mulsf3(uVar9,local_38);
  uVar7 = __mulsf3(uVar10,local_38);
  uVar2 = __mulsf3(uVar11,local_38);
  uVar3 = __mulsf3(uVar8,uVar6);
  uVar4 = __mulsf3(uVar8,uVar7);
  uVar8 = __mulsf3(uVar8,uVar2);
  uVar6 = __mulsf3(uVar9,uVar6);
  uVar5 = __mulsf3(uVar9,uVar7);
  uVar9 = __mulsf3(uVar9,uVar2);
  uVar7 = __mulsf3(uVar10,uVar7);
  uVar10 = __mulsf3(uVar10,uVar2);
  uVar11 = __mulsf3(uVar11,uVar2);
  uVar2 = __addsf3(uVar7,uVar11);
  uVar2 = __subsf3(0x3f800000,uVar2);
  *(undefined4 *)param_2 = uVar2;
  uVar2 = __subsf3(uVar5,uVar8);
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar2 = __addsf3(uVar9,uVar4);
  *(undefined4 *)(param_2 + 8) = uVar2;
  uVar8 = __addsf3(uVar5,uVar8);
  *(undefined4 *)(param_2 + 0xc) = uVar8;
  uVar11 = __addsf3(uVar6,uVar11);
  uVar11 = __subsf3(0x3f800000,uVar11);
  *(undefined4 *)(param_2 + 0x10) = uVar11;
  uVar11 = __subsf3(uVar10,uVar3);
  *(undefined4 *)(param_2 + 0x14) = uVar11;
  uVar9 = __subsf3(uVar9,uVar4);
  *(undefined4 *)(param_2 + 0x18) = uVar9;
  uVar9 = __addsf3(uVar10,uVar3);
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  uVar9 = __addsf3(uVar6,uVar7);
  uVar9 = __subsf3(0x3f800000,uVar9);
  *(undefined4 *)(param_2 + 0x20) = uVar9;
  return;
}


