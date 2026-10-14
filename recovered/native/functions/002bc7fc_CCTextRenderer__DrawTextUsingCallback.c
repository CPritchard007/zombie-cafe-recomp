/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc7fc CCTextRenderer::DrawTextUsingCallback */

/* CCTextRenderer::DrawTextUsingCallback(void*, char const*, ccMat2x3 const*, unsigned int, void
   (*)(void*, ccTexture2D*, ccVec2 const*, unsigned int, ccVec2 const*), void*) */

void CCTextRenderer::DrawTextUsingCallback
               (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,
               _func_void_void_ptr_ccTexture2D_ptr_ccVec2_ptr_uint_ccVec2_ptr *param_5,void *param_6
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ccVec2 *pcVar7;
  undefined4 uVar8;
  char *local_b4;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [8];
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
  
  local_88 = 0;
  local_84 = 0;
  local_b4 = param_2;
  while (*local_b4 != '\0') {
    iVar3 = L_GetChar((STextRenderer *)param_1,local_b4,&local_8c);
    local_b4 = local_b4 + iVar3;
    iVar3 = FUN_002bb7c0(param_1,local_8c);
    if (iVar3 != -1) {
      pcVar7 = (ccVec2 *)(*(int *)((int)param_1 + 0x20) + iVar3 * 0x34);
      FUN_002bb81c(auStack_80,param_3,&local_88);
      uVar8 = *(undefined4 *)((int)param_1 + 0xfc);
      uVar4 = __mulsf3(uVar8,*(undefined4 *)(pcVar7 + 0x24));
      uVar6 = *(undefined4 *)((int)param_1 + 0x100);
      local_78 = uVar4;
      uVar5 = __subsf3(*(undefined4 *)((int)param_1 + 0x10),*(undefined4 *)(pcVar7 + 0x28));
      uVar5 = __mulsf3(uVar5,uVar6);
      local_74 = uVar5;
      uVar8 = __mulsf3(uVar8,*(undefined4 *)(pcVar7 + 0x2c));
      uVar8 = __addsf3(uVar4,uVar8);
      local_70 = uVar8;
      uVar6 = __mulsf3(uVar6,*(undefined4 *)(pcVar7 + 0x30));
      local_6c = __subsf3(uVar5,uVar6);
      local_68 = uVar8;
      local_64 = uVar5;
      local_60 = uVar4;
      local_5c = local_6c;
      FUN_002bb81c(&local_58,param_3,&local_78);
      uVar5 = local_54;
      uVar4 = local_58;
      local_74 = local_54;
      local_78 = local_58;
      FUN_002bb81c(&local_50,param_3,&local_70);
      uVar6 = local_4c;
      uVar8 = local_50;
      local_70 = local_50;
      local_6c = local_4c;
      FUN_002bb81c(&local_48,param_3,&local_68);
      uVar2 = local_44;
      uVar1 = local_48;
      local_68 = local_48;
      local_64 = local_44;
      FUN_002bb81c(&local_40,param_3,&local_60);
      local_38 = uVar4;
      local_34 = uVar5;
      local_60 = local_40;
      local_30 = uVar1;
      local_5c = local_3c;
      local_28 = local_40;
      local_2c = uVar2;
      local_24 = local_3c;
      local_20 = uVar8;
      local_1c = uVar6;
      (*param_5)(param_6,(ccTexture2D *)((int)param_1 + 0x24),(ccVec2 *)&local_38,param_4,pcVar7);
      uVar4 = __mulsf3(*(undefined4 *)(pcVar7 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
      local_88 = __addsf3(local_88,uVar4);
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x104) = local_88;
  *(undefined4 *)((int)param_1 + 0x108) = 0;
  return;
}


