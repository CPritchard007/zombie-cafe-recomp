/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c49ac CCMeshRenderer::AssignMatrix */

/* CCMeshRenderer::AssignMatrix(ccMeshRenderer*, int, ccMat3x4 const*, ccMat3x4 const*) */

void CCMeshRenderer::AssignMatrix
               (ccMeshRenderer *param_1,int param_2,ccMat3x4 *param_3,ccMat3x4 *param_4)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)param_1 = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar3 = *(undefined4 *)param_3;
  uVar13 = *(undefined4 *)param_4;
  uVar4 = *(undefined4 *)(param_3 + 0xc);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar14 = *(undefined4 *)(param_4 + 4);
  uVar6 = *(undefined4 *)(param_4 + 8);
  uVar1 = __mulsf3(uVar3,uVar13);
  uVar2 = __mulsf3(uVar4,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar5,uVar6);
  local_48 = __addsf3(uVar1,uVar2);
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar8 = *(undefined4 *)(param_3 + 0x10);
  uVar9 = *(undefined4 *)(param_3 + 0x1c);
  uVar1 = __mulsf3(uVar7,uVar13);
  uVar2 = __mulsf3(uVar8,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar9,uVar6);
  local_44 = __addsf3(uVar1,uVar2);
  uVar10 = *(undefined4 *)(param_3 + 8);
  uVar11 = *(undefined4 *)(param_3 + 0x14);
  uVar12 = *(undefined4 *)(param_3 + 0x20);
  uVar1 = __mulsf3(uVar10,uVar13);
  uVar2 = __mulsf3(uVar11,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar12,uVar6);
  local_40 = __addsf3(uVar1,uVar2);
  uVar13 = *(undefined4 *)(param_4 + 0xc);
  uVar6 = *(undefined4 *)(param_4 + 0x14);
  uVar1 = __mulsf3(uVar3,uVar13);
  uVar14 = *(undefined4 *)(param_4 + 0x10);
  uVar2 = __mulsf3(uVar4,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar5,uVar6);
  local_3c = __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar7,uVar13);
  uVar2 = __mulsf3(uVar8,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar9,uVar6);
  local_38 = __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar10,uVar13);
  uVar2 = __mulsf3(uVar11,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar12,uVar6);
  local_34 = __addsf3(uVar1,uVar2);
  uVar13 = *(undefined4 *)(param_4 + 0x18);
  uVar6 = *(undefined4 *)(param_4 + 0x20);
  uVar1 = __mulsf3(uVar3,uVar13);
  uVar14 = *(undefined4 *)(param_4 + 0x1c);
  uVar2 = __mulsf3(uVar4,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar5,uVar6);
  local_30 = __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar7,uVar13);
  uVar2 = __mulsf3(uVar8,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar9,uVar6);
  local_2c = __addsf3(uVar1,uVar2);
  uVar1 = __mulsf3(uVar10,uVar13);
  uVar2 = __mulsf3(uVar11,uVar14);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar12,uVar6);
  local_28 = __addsf3(uVar1,uVar2);
  uVar6 = *(undefined4 *)(param_4 + 0x24);
  uVar1 = __mulsf3(uVar3,uVar6);
  uVar13 = *(undefined4 *)(param_4 + 0x28);
  uVar2 = __mulsf3(uVar4,uVar13);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar3 = *(undefined4 *)(param_4 + 0x2c);
  uVar2 = __mulsf3(uVar5,uVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  local_24 = __addsf3(uVar1,*(undefined4 *)(param_3 + 0x24));
  uVar1 = __mulsf3(uVar7,uVar6);
  uVar2 = __mulsf3(uVar8,uVar13);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar9,uVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  local_20 = __addsf3(uVar1,*(undefined4 *)(param_3 + 0x28));
  uVar1 = __mulsf3(uVar10,uVar6);
  uVar2 = __mulsf3(uVar11,uVar13);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __mulsf3(uVar12,uVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  local_1c = __addsf3(uVar1,*(undefined4 *)(param_3 + 0x2c));
  CCGFX::SetModelView((ccMat3x4 *)&local_48);
  return;
}


