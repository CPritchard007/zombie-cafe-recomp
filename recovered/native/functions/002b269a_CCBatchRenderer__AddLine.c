/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b269a CCBatchRenderer::AddLine */

/* CCBatchRenderer::AddLine(void*, ccVec2 const*, ccVec2 const*, float, unsigned int,
   CCBatchRenderer::ccLineCapType) */

void CCBatchRenderer::AddLine
               (void *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_5,
               uint param_5_00,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float __x;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar13 = *param_2;
  uVar1 = __subsf3(*param_3,uVar13);
  uVar12 = param_2[1];
  uVar2 = __subsf3(param_3[1],uVar12);
  uVar3 = __mulsf3(uVar1,0x3f000000);
  uVar3 = __addsf3(uVar13,uVar3);
  uVar13 = __mulsf3(uVar2,0x3f000000);
  uVar13 = __addsf3(uVar12,uVar13);
  uVar12 = __mulsf3(uVar1,uVar1);
  uVar4 = __mulsf3(uVar2,uVar2);
  uVar12 = __addsf3(uVar12,uVar4);
  sqrtf(__x);
  uVar4 = __divsf3(0x3f800000,uVar12);
  iVar5 = __mulsf3(uVar1,uVar4);
  uVar1 = __mulsf3(uVar2,uVar4);
  uVar2 = __mulsf3(uVar12,0x3f000000);
  uVar12 = __mulsf3(param_5,0x3f000000);
  if (param_6 == 0) {
    uVar4 = __mulsf3(iVar5,uVar2);
    uVar2 = __mulsf3(uVar1,uVar2);
    uVar6 = __subsf3(uVar3,uVar4);
    uVar7 = __subsf3(uVar13,uVar2);
    uVar1 = __mulsf3(uVar1,uVar12);
    uVar10 = __mulsf3(iVar5 + -0x80000000,uVar12);
    local_38 = __subsf3(uVar6,uVar1);
    local_34 = __subsf3(uVar7,uVar10);
    uVar3 = __addsf3(uVar3,uVar4);
    uVar4 = __addsf3(uVar13,uVar2);
    local_30 = __subsf3(uVar3,uVar1);
    local_2c = __subsf3(uVar4,uVar10);
    local_28 = __addsf3(uVar6,uVar1);
    local_24 = __addsf3(uVar7,uVar10);
    local_20 = __addsf3(uVar3,uVar1);
  }
  else {
    if (param_6 != 1) {
      return;
    }
    uVar4 = __mulsf3(iVar5,uVar2);
    uVar6 = __mulsf3(uVar1,uVar2);
    uVar7 = __subsf3(uVar3,uVar4);
    uVar8 = __subsf3(uVar13,uVar6);
    uVar9 = __mulsf3(uVar1,uVar12);
    uVar10 = __mulsf3(iVar5 + -0x80000000,uVar12);
    local_38 = __subsf3(uVar7,uVar9);
    local_34 = __subsf3(uVar8,uVar10);
    uVar11 = __addsf3(uVar3,uVar4);
    uVar4 = __addsf3(uVar13,uVar6);
    local_30 = __subsf3(uVar11,uVar9);
    local_2c = __subsf3(uVar4,uVar10);
    uVar2 = __addsf3(uVar2,uVar12);
    uVar12 = __mulsf3(iVar5,uVar2);
    uVar1 = __mulsf3(uVar1,uVar2);
    uVar2 = __subsf3(uVar3,uVar12);
    uVar6 = __subsf3(uVar13,uVar1);
    local_28 = uVar2;
    local_24 = uVar6;
    uVar3 = __addsf3(uVar3,uVar12);
    uVar1 = __addsf3(uVar13,uVar1);
    local_20 = uVar3;
    local_1c = uVar1;
    AddQuad(param_1,(ccVec2 *)&local_38,param_5_00);
    local_38 = uVar2;
    local_34 = uVar6;
    local_30 = uVar3;
    local_2c = uVar1;
    local_28 = __addsf3(uVar7,uVar9);
    local_24 = __addsf3(uVar8,uVar10);
    local_20 = __addsf3(uVar11,uVar9);
  }
  local_1c = __addsf3(uVar4,uVar10);
  AddQuad(param_1,(ccVec2 *)&local_38,param_5_00);
  return;
}


