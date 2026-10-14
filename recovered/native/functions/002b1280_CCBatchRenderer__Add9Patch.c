/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1280 CCBatchRenderer::Add9Patch */

/* CCBatchRenderer::Add9Patch(void*, ccVec2 const*, ccVec2 const*, ccTileUv const**) */

void CCBatchRenderer::Add9Patch(void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccTileUv **param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ccVec2 *pcVar7;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  
  uVar3 = *(undefined4 *)(param_4[3] + 0x28);
  uVar4 = *(undefined4 *)(param_4[5] + 0x28);
  uVar5 = *(undefined4 *)(param_4[1] + 0x2c);
  uVar6 = *(undefined4 *)(param_4[7] + 0x2c);
  uVar1 = __subsf3(*(undefined4 *)param_3,uVar3);
  local_a8 = __subsf3(uVar1,uVar4);
  uVar1 = __subsf3(*(undefined4 *)(param_3 + 4),uVar5);
  local_a4 = __subsf3(uVar1,uVar6);
  uVar1 = __subsf3(uVar3,uVar4);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  local_a0 = __addsf3(*(undefined4 *)param_2,uVar1);
  uVar1 = __subsf3(uVar6,uVar5);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  local_9c = __addsf3(*(undefined4 *)(param_2 + 4),uVar1);
  iVar2 = javaGetAndroidDevice();
  if (iVar2 == 1) {
    local_a8 = __addsf3(local_a8,0x40000000);
    local_a4 = __addsf3(local_a4,0x40000000);
  }
  iVar2 = javaGetAndroidDevice();
  if (iVar2 == 0) {
    local_a8 = __subsf3(local_a8,0x40000000);
    local_a4 = __subsf3(local_a4,0x40000000);
  }
  pcVar7 = (ccVec2 *)param_4[4];
  uVar1 = __addsf3(local_9c,*(undefined4 *)(pcVar7 + 0x34));
  local_a0 = __addsf3(local_a0,*(undefined4 *)(pcVar7 + 0x30));
  local_9c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_a0,(ccVec2 *)&local_a8,pcVar7);
  pcVar7 = (ccVec2 *)param_4[3];
  local_94 = local_a4;
  local_98 = uVar3;
  uVar1 = __addsf3(local_9c,*(undefined4 *)(pcVar7 + 0x34));
  uVar3 = __subsf3(*(undefined4 *)param_3,uVar3);
  uVar3 = __mulsf3(uVar3,0x3f000000);
  uVar3 = __subsf3(*(undefined4 *)param_2,uVar3);
  local_90 = __addsf3(uVar3,*(undefined4 *)(pcVar7 + 0x30));
  local_8c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_90,(ccVec2 *)&local_98,pcVar7);
  pcVar7 = (ccVec2 *)param_4[5];
  local_84 = local_a4;
  local_88 = uVar4;
  uVar1 = __addsf3(local_9c,*(undefined4 *)(pcVar7 + 0x34));
  uVar3 = __subsf3(*(undefined4 *)param_3,uVar4);
  uVar3 = __mulsf3(uVar3,0x3f000000);
  uVar3 = __addsf3(uVar3,*(undefined4 *)param_2);
  local_80 = __addsf3(uVar3,*(undefined4 *)(pcVar7 + 0x30));
  local_7c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_80,(ccVec2 *)&local_88,pcVar7);
  pcVar7 = (ccVec2 *)param_4[1];
  local_78 = local_a8;
  local_74 = uVar5;
  uVar1 = __subsf3(*(undefined4 *)(param_3 + 4),uVar5);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_2 + 4));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(pcVar7 + 0x34));
  local_70 = __addsf3(local_a0,*(undefined4 *)(pcVar7 + 0x30));
  local_6c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_70,(ccVec2 *)&local_78,pcVar7);
  pcVar7 = (ccVec2 *)param_4[7];
  local_68 = local_a8;
  local_64 = uVar6;
  uVar1 = __subsf3(*(undefined4 *)(param_3 + 4),uVar6);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),uVar1);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(pcVar7 + 0x34));
  local_60 = __addsf3(local_a0,*(undefined4 *)(pcVar7 + 0x30));
  local_5c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_60,(ccVec2 *)&local_68,pcVar7);
  pcVar7 = (ccVec2 *)*param_4;
  local_58 = *(undefined4 *)(pcVar7 + 0x28);
  local_54 = *(undefined4 *)(pcVar7 + 0x2c);
  uVar1 = __addsf3(local_6c,*(undefined4 *)(pcVar7 + 0x34));
  local_50 = __addsf3(local_90,*(undefined4 *)(pcVar7 + 0x30));
  local_4c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_50,(ccVec2 *)&local_58,pcVar7);
  pcVar7 = (ccVec2 *)param_4[2];
  local_48 = *(undefined4 *)(pcVar7 + 0x28);
  local_44 = *(undefined4 *)(pcVar7 + 0x2c);
  uVar1 = __addsf3(local_6c,*(undefined4 *)(pcVar7 + 0x34));
  local_40 = __addsf3(local_80,*(undefined4 *)(pcVar7 + 0x30));
  local_3c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_40,(ccVec2 *)&local_48,pcVar7);
  pcVar7 = (ccVec2 *)param_4[6];
  local_38 = *(undefined4 *)(pcVar7 + 0x28);
  local_34 = *(undefined4 *)(pcVar7 + 0x2c);
  uVar1 = __addsf3(local_5c,*(undefined4 *)(pcVar7 + 0x34));
  local_30 = __addsf3(local_90,*(undefined4 *)(pcVar7 + 0x30));
  local_2c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_30,(ccVec2 *)&local_38,pcVar7);
  pcVar7 = (ccVec2 *)param_4[8];
  local_28 = *(undefined4 *)(pcVar7 + 0x28);
  local_24 = *(undefined4 *)(pcVar7 + 0x2c);
  uVar1 = __addsf3(local_5c,*(undefined4 *)(pcVar7 + 0x34));
  local_20 = __addsf3(local_80,*(undefined4 *)(pcVar7 + 0x30));
  local_1c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_20,(ccVec2 *)&local_28,pcVar7);
  return;
}


