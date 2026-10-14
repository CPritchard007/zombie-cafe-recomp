/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b16fc CCBatchRenderer::Add5Patch */

/* CCBatchRenderer::Add5Patch(void*, ccVec2 const*, ccVec2 const*, ccTileUv const**, float, float)
    */

void CCBatchRenderer::Add5Patch
               (void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccTileUv **param_4,float param_5,
               float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ccTileUv *pcVar10;
  ccVec2 *pcVar11;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 local_7c;
  undefined4 local_78;
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
  
  uVar8 = *(undefined4 *)(*param_4 + 0x2c);
  pcVar10 = param_4[1];
  uVar9 = *(undefined4 *)(param_4[3] + 0x2c);
  uVar1 = __mulsf3(in_stack_00000000,*(undefined4 *)(*param_4 + 0x28));
  uVar2 = __addsf3(uVar8,*(undefined4 *)(pcVar10 + 0x2c));
  uVar2 = __addsf3(uVar2,uVar9);
  uVar2 = __mulsf3(uVar2,in_stack_00000004);
  uVar3 = __mulsf3(in_stack_00000000,*(undefined4 *)(pcVar10 + 0x28));
  uVar4 = __mulsf3(in_stack_00000000,*(undefined4 *)(param_4[2] + 0x28));
  uVar8 = __mulsf3(uVar8,in_stack_00000004);
  uVar9 = __mulsf3(uVar9,in_stack_00000004);
  uVar5 = __subsf3(uVar1,uVar3);
  local_58 = __subsf3(uVar5,uVar4);
  uVar6 = __subsf3(uVar2,uVar8);
  local_54 = __subsf3(uVar6,uVar9);
  uVar3 = __subsf3(uVar3,uVar4);
  uVar3 = __mulsf3(uVar3,0x3f000000);
  local_50 = __addsf3(*(undefined4 *)param_2,uVar3);
  uVar3 = __subsf3(uVar9,uVar8);
  uVar3 = __mulsf3(uVar3,0x3f000000);
  local_4c = __addsf3(*(undefined4 *)(param_2 + 4),uVar3);
  javaGetAndroidDevice();
  iVar7 = __aeabi_fcmpge(**(undefined4 **)(DAT_002b1920 + 0x2b17c4),0x3f800000);
  if (iVar7 == 0) {
    iVar7 = __aeabi_fcmplt(uVar1,DAT_002b1924);
    if (iVar7 == 0) {
      local_78 = 0;
      local_7c = 0;
    }
    else {
      local_78 = 4;
      local_7c = 0;
    }
  }
  else {
    local_78 = 0xfffffffd;
    local_7c = 2;
  }
  pcVar11 = (ccVec2 *)param_4[4];
  uVar3 = __addsf3(local_4c,*(undefined4 *)(pcVar11 + 0x34));
  local_50 = __addsf3(local_50,*(undefined4 *)(pcVar11 + 0x30));
  local_4c = uVar3;
  AddQuad(param_1,(ccVec2 *)&local_50,(ccVec2 *)&local_58,pcVar11);
  pcVar11 = (ccVec2 *)param_4[1];
  local_48 = *(undefined4 *)(pcVar11 + 0x20);
  local_44 = local_54;
  uVar3 = __addsf3(local_4c,*(undefined4 *)(pcVar11 + 0x34));
  uVar8 = __floatsisf(local_7c);
  uVar8 = __addsf3(uVar8,*(undefined4 *)param_2);
  uVar5 = __mulsf3(uVar5,0x3f000000);
  uVar8 = __subsf3(uVar8,uVar5);
  local_40 = __addsf3(uVar8,*(undefined4 *)(pcVar11 + 0x30));
  local_3c = uVar3;
  AddQuad(param_1,(ccVec2 *)&local_40,(ccVec2 *)&local_48,pcVar11);
  pcVar11 = (ccVec2 *)param_4[2];
  local_38 = *(undefined4 *)(pcVar11 + 0x20);
  local_34 = local_54;
  uVar3 = __addsf3(local_4c,*(undefined4 *)(pcVar11 + 0x34));
  uVar8 = __floatsisf(local_78);
  uVar8 = __addsf3(uVar8,*(undefined4 *)param_2);
  uVar1 = __subsf3(uVar1,uVar4);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  uVar1 = __addsf3(uVar8,uVar1);
  local_30 = __addsf3(uVar1,*(undefined4 *)(pcVar11 + 0x30));
  local_2c = uVar3;
  AddQuad(param_1,(ccVec2 *)&local_30,(ccVec2 *)&local_38,pcVar11);
  local_28 = *(undefined4 *)param_2;
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),0x3f800000);
  uVar3 = __mulsf3(uVar6,0x3f000000);
  local_24 = __addsf3(uVar1,uVar3);
  FUN_002b1528(param_1,&local_28,*param_4);
  local_20 = *(undefined4 *)param_2;
  uVar1 = __addsf3(*(undefined4 *)(param_2 + 4),0x3f800000);
  uVar2 = __subsf3(uVar2,uVar9);
  uVar2 = __mulsf3(uVar2,0x3f000000);
  local_1c = __subsf3(uVar1,uVar2);
  FUN_002b1528(param_1,&local_20,param_4[3]);
  return;
}


