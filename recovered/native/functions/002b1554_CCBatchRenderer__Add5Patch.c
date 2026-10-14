/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1554 CCBatchRenderer::Add5Patch */

/* CCBatchRenderer::Add5Patch(void*, ccVec2 const*, ccVec2 const*, ccTileUv const**) */

void CCBatchRenderer::Add5Patch(void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccTileUv **param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ccTileUv *pcVar5;
  ccVec2 *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
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
  
  uVar4 = *(undefined4 *)(*param_4 + 0x28);
  uVar10 = *(undefined4 *)(*param_4 + 0x2c);
  pcVar5 = param_4[1];
  uVar7 = *(undefined4 *)(param_4[3] + 0x2c);
  uVar1 = __addsf3(uVar10,*(undefined4 *)(pcVar5 + 0x2c));
  uVar1 = __addsf3(uVar1,uVar7);
  uVar8 = *(undefined4 *)(pcVar5 + 0x28);
  uVar9 = *(undefined4 *)(param_4[2] + 0x28);
  uVar2 = __subsf3(uVar4,uVar8);
  local_58 = __subsf3(uVar2,uVar9);
  uVar3 = __subsf3(uVar1,uVar10);
  local_54 = __subsf3(uVar3,uVar7);
  pcVar6 = (ccVec2 *)param_4[4];
  uVar10 = __subsf3(uVar7,uVar10);
  uVar10 = __mulsf3(uVar10,0x3f000000);
  uVar10 = __addsf3(uVar10,*(undefined4 *)(param_2 + 4));
  uVar10 = __addsf3(uVar10,*(undefined4 *)(pcVar6 + 0x34));
  uVar8 = __subsf3(uVar8,uVar9);
  uVar8 = __mulsf3(uVar8,0x3f000000);
  uVar8 = __addsf3(uVar8,*(undefined4 *)param_2);
  local_50 = __addsf3(uVar8,*(undefined4 *)(pcVar6 + 0x30));
  local_4c = uVar10;
  AddQuad(param_1,(ccVec2 *)&local_50,(ccVec2 *)&local_58,pcVar6);
  pcVar6 = (ccVec2 *)param_4[1];
  local_48 = *(undefined4 *)(pcVar6 + 0x20);
  local_44 = local_54;
  uVar10 = __addsf3(local_4c,*(undefined4 *)(pcVar6 + 0x34));
  uVar8 = __addsf3(*(undefined4 *)param_2,0);
  uVar2 = __mulsf3(uVar2,0x3f000000);
  uVar2 = __subsf3(uVar8,uVar2);
  local_40 = __addsf3(uVar2,*(undefined4 *)(pcVar6 + 0x30));
  local_3c = uVar10;
  AddQuad(param_1,(ccVec2 *)&local_40,(ccVec2 *)&local_48,pcVar6);
  pcVar6 = (ccVec2 *)param_4[2];
  local_38 = *(undefined4 *)(pcVar6 + 0x20);
  local_34 = local_54;
  uVar2 = __addsf3(local_4c,*(undefined4 *)(pcVar6 + 0x34));
  uVar10 = __addsf3(*(undefined4 *)param_2,0);
  uVar8 = __subsf3(uVar4,uVar9);
  uVar8 = __mulsf3(uVar8,0x3f000000);
  uVar10 = __addsf3(uVar10,uVar8);
  local_30 = __addsf3(uVar10,*(undefined4 *)(pcVar6 + 0x30));
  local_2c = uVar2;
  AddQuad(param_1,(ccVec2 *)&local_30,(ccVec2 *)&local_38,pcVar6);
  local_28 = *(undefined4 *)param_2;
  uVar2 = __addsf3(*(undefined4 *)(param_2 + 4),0);
  uVar3 = __mulsf3(uVar3,0x3f000000);
  local_24 = __addsf3(uVar2,uVar3);
  FUN_002b1528(param_1,&local_28,*param_4);
  local_20 = *(undefined4 *)param_2;
  uVar2 = __addsf3(*(undefined4 *)(param_2 + 4),0);
  uVar1 = __subsf3(uVar1,uVar7);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  local_1c = __subsf3(uVar2,uVar1);
  FUN_002b1528(param_1,&local_20,param_4[3]);
  return;
}


