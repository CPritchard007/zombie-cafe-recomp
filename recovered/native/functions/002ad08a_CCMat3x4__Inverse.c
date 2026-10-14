/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad08a CCMat3x4::Inverse */

/* CCMat3x4::Inverse(ccMat3x4*, ccMat3x4 const*) */

void CCMat3x4::Inverse(ccMat3x4 *param_1,ccMat3x4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = *(undefined4 *)param_2;
  *(undefined4 *)param_1 = uVar1;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 8) = uVar4;
  uVar9 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  uVar10 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(param_2 + 0x24));
  uVar9 = __mulsf3(uVar9,*(undefined4 *)(param_2 + 0x28));
  uVar1 = __addsf3(uVar1,uVar9);
  uVar9 = __mulsf3(uVar10,*(undefined4 *)(param_2 + 0x2c));
  iVar2 = __addsf3(uVar1,uVar9);
  *(int *)(param_1 + 0x24) = iVar2 + -0x80000000;
  uVar1 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x24));
  uVar9 = __mulsf3(uVar5,*(undefined4 *)(param_2 + 0x28));
  uVar1 = __addsf3(uVar1,uVar9);
  uVar9 = __mulsf3(uVar7,*(undefined4 *)(param_2 + 0x2c));
  iVar2 = __addsf3(uVar1,uVar9);
  *(int *)(param_1 + 0x28) = iVar2 + -0x80000000;
  uVar1 = __mulsf3(uVar4,*(undefined4 *)(param_2 + 0x24));
  uVar9 = __mulsf3(uVar6,*(undefined4 *)(param_2 + 0x28));
  uVar1 = __addsf3(uVar1,uVar9);
  uVar9 = __mulsf3(uVar8,*(undefined4 *)(param_2 + 0x2c));
  iVar2 = __addsf3(uVar1,uVar9);
  *(int *)(param_1 + 0x2c) = iVar2 + -0x80000000;
  return;
}


