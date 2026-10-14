/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc360 CCTextRenderer::DrawTextUsingCallback */

/* CCTextRenderer::DrawTextUsingCallback(void*, char const*, ccVec2 const*, unsigned int, void
   (*)(void*, ccTexture2D*, ccVec2 const*, unsigned int, ccVec2 const*), void*, bool) */

void CCTextRenderer::DrawTextUsingCallback
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,
               _func_void_void_ptr_ccTexture2D_ptr_ccVec2_ptr_uint_ccVec2_ptr *param_5,void *param_6
               ,bool param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ccVec2 *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_58;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 != (char *)0x0) {
    uVar6 = *(undefined4 *)param_3;
    uVar3 = *(undefined4 *)(param_3 + 4);
    local_58 = param_2;
    while (*local_58 != '\0') {
      iVar1 = L_GetChar((STextRenderer *)param_1,local_58,&local_3c);
      local_58 = local_58 + iVar1;
      iVar1 = FUN_002bb7c0(param_1,local_3c);
      if (iVar1 != -1) {
        uVar5 = *(undefined4 *)((int)param_1 + 0xfc);
        pcVar4 = (ccVec2 *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34);
        uVar2 = __mulsf3(uVar5,*(undefined4 *)(pcVar4 + 0x24));
        uVar2 = __addsf3(uVar6,uVar2);
        local_38 = uVar2;
        local_28 = uVar2;
        uVar5 = __mulsf3(uVar5,*(undefined4 *)(pcVar4 + 0x2c));
        local_30 = __addsf3(uVar2,uVar5);
        uVar5 = *(undefined4 *)((int)param_1 + 0x100);
        local_20 = local_30;
        uVar2 = __subsf3(*(undefined4 *)((int)param_1 + 0x10),*(undefined4 *)(pcVar4 + 0x28));
        uVar2 = __mulsf3(uVar2,uVar5);
        uVar2 = __addsf3(uVar3,uVar2);
        local_34 = uVar2;
        local_2c = uVar2;
        uVar5 = __mulsf3(uVar5,*(undefined4 *)(pcVar4 + 0x30));
        local_24 = __subsf3(uVar2,uVar5);
        local_1c = local_24;
        (*param_5)(param_6,(ccTexture2D *)((int)param_1 + 0x24),(ccVec2 *)&local_38,param_4,pcVar4);
        uVar2 = __mulsf3(*(undefined4 *)(pcVar4 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
        uVar6 = __addsf3(uVar6,uVar2);
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = uVar6;
    *(undefined4 *)((int)param_1 + 0x108) = uVar3;
  }
  return;
}


