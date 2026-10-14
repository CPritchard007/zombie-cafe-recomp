/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1928 CCBatchRenderer::Add9Patch */

/* CCBatchRenderer::Add9Patch(void*, ccVec2 const*, ccVec2 const*, ccTileUv const**, float, float)
    */

void CCBatchRenderer::Add9Patch
               (void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccTileUv **param_4,float param_5,
               float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  ccVec2 *pcVar11;
  ccTileUv *pcVar12;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
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
  
  uVar10 = *(undefined4 *)param_3;
  uVar1 = __mulsf3(uVar10,in_stack_00000000);
  uVar10 = __mulsf3(uVar10,in_stack_00000004);
  uVar2 = __mulsf3(in_stack_00000000,*(undefined4 *)(param_4[3] + 0x28));
  uVar3 = __mulsf3(in_stack_00000000,*(undefined4 *)(param_4[5] + 0x28));
  uVar4 = __mulsf3(in_stack_00000004,*(undefined4 *)(param_4[1] + 0x2c));
  uVar5 = __mulsf3(in_stack_00000004,*(undefined4 *)(param_4[7] + 0x2c));
  uVar6 = __subsf3(uVar1,uVar2);
  local_88 = __subsf3(uVar6,uVar3);
  uVar7 = __subsf3(uVar10,uVar4);
  local_84 = __subsf3(uVar7,uVar5);
  uVar8 = __subsf3(uVar2,uVar3);
  uVar8 = __mulsf3(uVar8,0x3f000000);
  local_80 = __addsf3(*(undefined4 *)param_2,uVar8);
  uVar8 = __subsf3(uVar5,uVar4);
  uVar8 = __mulsf3(uVar8,0x3f000000);
  local_7c = __addsf3(*(undefined4 *)(param_2 + 4),uVar8);
  iVar9 = javaGetAndroidDevice();
  if (iVar9 == 1) {
    local_88 = __addsf3(local_88,0x40000000);
    local_84 = __addsf3(local_84,0x40000000);
  }
  iVar9 = javaGetAndroidDevice();
  if (iVar9 == 0) {
    local_88 = __subsf3(local_88,0x40000000);
    local_84 = __subsf3(local_84,0x40000000);
  }
  pcVar11 = (ccVec2 *)param_4[4];
  uVar8 = __addsf3(local_7c,*(undefined4 *)(pcVar11 + 0x34));
  local_80 = __addsf3(local_80,*(undefined4 *)(pcVar11 + 0x30));
  local_7c = uVar8;
  AddQuad(param_1,(ccVec2 *)&local_80,(ccVec2 *)&local_88,pcVar11);
  pcVar11 = (ccVec2 *)param_4[3];
  local_74 = local_84;
  local_78 = uVar2;
  uVar2 = __addsf3(local_7c,*(undefined4 *)(pcVar11 + 0x34));
  uVar6 = __mulsf3(uVar6,0x3f000000);
  uVar6 = __subsf3(*(undefined4 *)param_2,uVar6);
  local_70 = __addsf3(uVar6,*(undefined4 *)(pcVar11 + 0x30));
  local_6c = uVar2;
  AddQuad(param_1,(ccVec2 *)&local_70,(ccVec2 *)&local_78,pcVar11);
  pcVar11 = (ccVec2 *)param_4[5];
  local_64 = local_84;
  local_68 = uVar3;
  uVar2 = __addsf3(local_7c,*(undefined4 *)(pcVar11 + 0x34));
  uVar1 = __subsf3(uVar1,uVar3);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __addsf3(uVar1,*(undefined4 *)param_2);
  local_60 = __addsf3(uVar1,*(undefined4 *)(pcVar11 + 0x30));
  local_5c = uVar2;
  AddQuad(param_1,(ccVec2 *)&local_60,(ccVec2 *)&local_68,pcVar11);
  pcVar11 = (ccVec2 *)param_4[1];
  local_58 = local_88;
  local_54 = uVar4;
  uVar1 = __mulsf3(uVar7,0x3f000000);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(param_2 + 4));
  uVar1 = __addsf3(uVar1,*(undefined4 *)(pcVar11 + 0x34));
  local_50 = __addsf3(local_80,*(undefined4 *)(pcVar11 + 0x30));
  local_4c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_50,(ccVec2 *)&local_58,pcVar11);
  pcVar11 = (ccVec2 *)param_4[7];
  local_48 = local_88;
  local_44 = uVar5;
  uVar1 = __subsf3(uVar10,uVar5);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),uVar1);
  uVar1 = __addsf3(uVar1,*(undefined4 *)(pcVar11 + 0x34));
  local_40 = __addsf3(local_80,*(undefined4 *)(pcVar11 + 0x30));
  local_3c = uVar1;
  AddQuad(param_1,(ccVec2 *)&local_40,(ccVec2 *)&local_48,pcVar11);
  pcVar12 = *param_4;
  uVar1 = __addsf3(local_4c,*(undefined4 *)(pcVar12 + 0x34));
  local_38 = __addsf3(local_70,*(undefined4 *)(pcVar12 + 0x30));
  local_34 = uVar1;
  FUN_002b1528(param_1,&local_38,pcVar12);
  pcVar12 = param_4[2];
  uVar1 = __addsf3(local_4c,*(undefined4 *)(pcVar12 + 0x34));
  local_30 = __addsf3(local_60,*(undefined4 *)(pcVar12 + 0x30));
  local_2c = uVar1;
  FUN_002b1528(param_1,&local_30,pcVar12);
  pcVar12 = param_4[6];
  uVar1 = __addsf3(local_3c,*(undefined4 *)(pcVar12 + 0x34));
  local_28 = __addsf3(local_70,*(undefined4 *)(pcVar12 + 0x30));
  local_24 = uVar1;
  FUN_002b1528(param_1,&local_28,pcVar12);
  pcVar12 = param_4[8];
  uVar1 = __addsf3(local_3c,*(undefined4 *)(pcVar12 + 0x34));
  local_20 = __addsf3(local_60,*(undefined4 *)(pcVar12 + 0x30));
  local_1c = uVar1;
  FUN_002b1528(param_1,&local_20,pcVar12);
  return;
}


