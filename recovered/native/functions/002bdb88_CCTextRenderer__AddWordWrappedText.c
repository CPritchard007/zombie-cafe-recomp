/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bdb88 CCTextRenderer::AddWordWrappedText */

/* CCTextRenderer::AddWordWrappedText(void*, char const*, ccMat3x4 const*, unsigned int, float,
   float, unsigned char, bool) */

void CCTextRenderer::AddWordWrappedText
               (void *param_1,char *param_2,ccMat3x4 *param_3,uint param_4,float param_5,
               float param_6,uchar param_7,bool param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined3 in_stack_00000001;
  undefined3 in_stack_00000005;
  undefined4 local_188;
  char *local_184;
  int local_180;
  char *local_174;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  char local_11c [256];
  int local_1c;
  
  piVar7 = *(int **)(DAT_002bddb0 + 0x2bdb94);
  local_1c = *piVar7;
  local_14c = *(undefined4 *)param_3;
  uStack_148 = *(undefined4 *)(param_3 + 4);
  uStack_144 = *(undefined4 *)(param_3 + 8);
  local_140 = *(undefined4 *)(param_3 + 0xc);
  uStack_13c = *(undefined4 *)(param_3 + 0x10);
  uStack_138 = *(undefined4 *)(param_3 + 0x14);
  local_134 = *(undefined4 *)(param_3 + 0x18);
  uStack_130 = *(undefined4 *)(param_3 + 0x1c);
  uStack_12c = *(undefined4 *)(param_3 + 0x20);
  local_128 = *(undefined4 *)(param_3 + 0x24);
  local_124 = *(undefined4 *)(param_3 + 0x28);
  local_120 = *(undefined4 *)(param_3 + 0x2c);
  uVar8 = 0;
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  uVar3 = GetTextHeight(param_1);
  uVar3 = __addsf3(uVar3,_param_8);
  iVar2 = DAT_002bddb4;
  local_188 = 0;
  local_180 = 1;
  iVar6 = 0;
  local_184 = param_2;
  do {
    cVar1 = *local_184;
    if (cVar1 == '\0') {
      if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_180);
      }
      return;
    }
    iVar4 = strncmp(local_184,(char *)(iVar2 + 0x2bdbe2),10);
    if (iVar4 == 0) {
      local_188 = __addsf3(uVar8,local_158);
      FUN_002bb712(&local_168,param_3,&local_158);
      local_128 = local_168;
      local_124 = local_164;
      local_120 = local_160;
      AddText(param_1,local_11c,(ccMat3x4 *)&local_14c,param_4,0);
      local_11c[0] = '\0';
      local_174 = local_184 + 10;
      uVar8 = 0;
      iVar4 = 0;
      local_158 = local_188;
    }
    else {
      uVar5 = GetCharacterWidth(param_1,local_184);
                    /* WARNING: Load size is inaccurate */
      local_174 = local_184 + 1;
      if (*(int *)((int)param_1 + 4) == *param_1) {
        Flush(param_1,0);
      }
      if (cVar1 == '\n') {
        FUN_002bb712(&local_168,param_3,&local_158);
        iVar4 = 0;
        local_128 = local_168;
        local_124 = local_164;
        local_120 = local_160;
        AddText(param_1,local_11c,(ccMat3x4 *)&local_14c,param_4,0);
        local_11c[0] = '\0';
        local_154 = __subsf3(local_154,uVar3);
        local_180 = local_180 + 1;
        local_158 = 0;
        uVar8 = 0;
        local_188 = 0;
      }
      else {
        if (cVar1 == '\t') {
          FUN_002bb712(&local_168,param_3,&local_158);
          local_128 = local_168;
          local_124 = local_164;
          local_120 = local_160;
          AddText(param_1,local_11c,(ccMat3x4 *)&local_14c,param_4,0);
          uVar9 = *(undefined4 *)((int)param_1 + 0xfc);
          local_11c[0] = '\0';
          uVar5 = *(undefined4 *)((int)param_1 + 0x114);
          uVar8 = __mulsf3(uVar5,uVar9);
          uVar8 = __divsf3(local_158,uVar8);
          __addsf3(uVar8,0x3f000000);
          iVar6 = __fixsfsi();
          uVar8 = __floatsisf(iVar6 + 1);
          uVar8 = __mulsf3(uVar8,uVar5);
          local_158 = __mulsf3(uVar8,uVar9);
        }
        else {
          local_11c[iVar6] = cVar1;
          uVar8 = __addsf3(uVar8,uVar5);
          uVar5 = local_158;
          iVar4 = iVar6 + 1;
          local_11c[iVar6 + 1] = '\0';
          uVar9 = __addsf3(local_158,uVar8);
          iVar6 = __aeabi_fcmpgt(uVar9,_param_7);
          if ((iVar6 != 0) && (iVar6 = __aeabi_fcmpgt(uVar5,0), iVar6 != 0)) {
            local_158 = local_188;
            local_154 = __subsf3(local_154,uVar3);
            local_180 = local_180 + 1;
          }
          if ((cVar1 != ' ') && (local_184[1] != '\0')) goto LAB_002bdd8c;
          FUN_002bb712(&local_168,param_3,&local_158);
          local_128 = local_168;
          local_124 = local_164;
          local_120 = local_160;
          AddText(param_1,local_11c,(ccMat3x4 *)&local_14c,param_4,0);
          local_158 = __addsf3(local_158,uVar8);
          local_11c[0] = '\0';
        }
        iVar4 = 0;
        uVar8 = 0;
      }
    }
LAB_002bdd8c:
    local_184 = local_174;
    iVar6 = iVar4;
  } while( true );
}


