/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc444 CCTextRenderer::DrawWordWrappedTextUsingCallback */

/* CCTextRenderer::DrawWordWrappedTextUsingCallback(void*, char const*, ccVec2 const*, float, float,
   int, unsigned int, void (*)(void*, ccTexture2D*, ccVec2 const*, unsigned int, ccVec2 const*),
   void*) */

void CCTextRenderer::DrawWordWrappedTextUsingCallback
               (void *param_1,char *param_2,ccVec2 *param_3,float param_4,float param_5,int param_6,
               uint param_7,_func_void_void_ptr_ccTexture2D_ptr_ccVec2_ptr_uint_ccVec2_ptr *param_8,
               void *param_9)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 auStack_70 [2];
  undefined4 auStack_68 [2];
  char acStack_60 [4];
  int local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  int local_44;
  size_t local_40;
  ccVec2 *local_3c;
  _func_void_void_ptr_ccTexture2D_ptr_ccVec2_ptr_uint_ccVec2_ptr *local_38;
  size_t local_34;
  char *local_30;
  size_t local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_48 = (undefined1 *)auStack_70;
  piVar7 = *(int **)(DAT_002bc64c + 0x2bc450);
  local_1c = *piVar7;
  local_50 = in_stack_0000000c;
  local_54 = in_stack_00000010;
  local_44 = param_6;
  local_3c = param_3;
  uVar4 = __addsf3(param_7,*(undefined4 *)((int)param_1 + 0x10));
  local_4c = __mulsf3(uVar4,*(undefined4 *)((int)param_1 + 0x100));
  local_58 = piVar7;
  if (param_2 != (char *)0x0) {
    local_40 = strlen(param_2);
    iVar1 = -(local_40 + 0xf & 0xfffffff8);
    local_30 = acStack_60 + iVar1;
    memset(local_30,0,local_40 + 1);
    local_24 = *(undefined4 *)local_3c;
    local_20 = *(undefined4 *)(local_3c + 4);
    local_34 = 0xffffffff;
    local_2c = 0;
    local_38 = (_func_void_void_ptr_ccTexture2D_ptr_ccVec2_ptr_uint_ccVec2_ptr *)0x0;
    local_5c = ((int)param_8 >> 0x1f) - (int)param_8;
    while (param_2[local_2c] != '\0') {
      iVar5 = L_GetChar((STextRenderer *)param_1,param_2 + local_2c,&local_28);
      uVar3 = local_28;
      local_2c = local_2c + iVar5;
      iVar5 = FUN_002bb7c0(param_1,local_28);
      if (iVar5 == -1) {
        if (uVar3 == 10) {
LAB_002bc4f2:
          uVar4 = __addsf3(local_44,*(undefined4 *)local_3c);
          local_24 = __addsf3(uVar4,uVar4);
          local_34 = 0xffffffff;
        }
      }
      else {
        if (uVar3 == 10) goto LAB_002bc4f2;
        if (uVar3 == 0x20) {
          local_34 = local_2c;
        }
        uVar4 = __mulsf3(*(undefined4 *)(*(int *)((int)param_1 + 0x20) + iVar5 * 0x34 + 0x20),
                         *(undefined4 *)((int)param_1 + 0xfc));
        local_24 = __addsf3(local_24,uVar4);
      }
      uVar8 = *(undefined4 *)local_3c;
      uVar4 = __subsf3(local_24,uVar8);
      iVar5 = __aeabi_fcmpge(uVar4,local_44);
      if ((iVar5 != 0) || (param_2[local_2c] == '\0')) {
        local_38 = local_38 + 1;
        local_24 = uVar8;
        local_20 = __subsf3(local_20,local_4c);
        if (((int)local_34 < 0) || (param_2[local_2c] == '\0')) {
          strncpy(local_30,param_2,local_2c);
          bVar2 = false;
          sVar6 = local_2c;
        }
        else {
          strncpy(local_30,param_2,local_34);
          bVar2 = true;
          sVar6 = local_34;
        }
        param_2 = param_2 + sVar6;
        if (((((((int)local_38 >> 0x1f) - ((int)param_8 >> 0x1f)) + (uint)(param_8 <= local_38) &
              0xff) != 0) && (local_5c < 0)) && (*param_2 != '\0')) {
          sVar6 = strlen(local_30);
          if (3 < (int)sVar6) {
            if ((bVar2) && ((int)(sVar6 + 3) < (int)local_40)) {
              sVar6 = sVar6 + 3;
            }
            local_30[sVar6 - 1] = '.';
            local_30[sVar6 - 2] = '.';
            local_30[sVar6 - 3] = '.';
          }
          sVar6 = strlen(param_2);
          param_2 = param_2 + sVar6;
        }
        *(undefined4 *)((int)auStack_70 + iVar1) = local_50;
        uVar4 = local_54;
        *(undefined4 *)((int)auStack_68 + iVar1) = 0;
        *(undefined4 *)((int)auStack_70 + iVar1 + 4) = uVar4;
        DrawTextUsingCallback
                  (param_1,local_30,(ccVec2 *)&local_24,(uint)param_9,
                   *(_func_void_void_ptr_ccTexture2D_ptr_ccVec2_ptr_uint_ccVec2_ptr **)
                    ((int)auStack_70 + iVar1),*(void **)((int)auStack_70 + iVar1 + 4),
                   *(bool *)((int)auStack_68 + iVar1));
        memset(local_30,0,local_40);
        local_34 = 0xffffffff;
        local_2c = 0;
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = local_24;
    *(undefined4 *)((int)param_1 + 0x108) = local_20;
  }
  if (local_1c == *local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


