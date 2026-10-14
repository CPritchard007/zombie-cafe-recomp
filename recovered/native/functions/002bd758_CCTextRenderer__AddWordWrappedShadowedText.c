/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd758 CCTextRenderer::AddWordWrappedShadowedText */

/* CCTextRenderer::AddWordWrappedShadowedText(void*, char const*, ccMat2x3 const*, unsigned int,
   unsigned int, float, float) */

void CCTextRenderer::AddWordWrappedShadowedText
               (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,uint param_5,
               float param_6,float param_7)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s1;
  undefined8 uVar11;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 uVar12;
  undefined4 extraout_s1_05;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int local_17c;
  undefined4 local_178;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  char local_11c [256];
  int local_1c;
  
  uVar11 = CONCAT44(param_7,param_6);
  piVar7 = *(int **)(DAT_002bd98c + 0x2bd768);
  local_1c = *piVar7;
  local_17c = 0;
  if (*(int *)((int)param_1 + 0x120) == 0) {
    local_134 = *(undefined4 *)param_3;
    uStack_130 = *(undefined4 *)(param_3 + 4);
    uStack_12c = *(undefined4 *)(param_3 + 8);
    uVar8 = 0;
    local_128 = *(undefined4 *)(param_3 + 0xc);
    local_124 = *(undefined4 *)(param_3 + 0x10);
    local_120 = *(undefined4 *)(param_3 + 0x14);
    local_15c = 0;
    local_158 = 0;
    uVar3 = GetTextHeight(param_1);
    uVar3 = __addsf3(uVar3,in_stack_00000008);
    uVar11 = CONCAT44(extraout_s1,extraout_s0);
    local_178 = 0;
    local_17c = 1;
    iVar10 = 0;
    while (cVar2 = *param_2, cVar2 != '\0') {
      iVar4 = strncmp(param_2,(char *)(DAT_002bd990 + 0x2bd7b6),10);
      if (iVar4 == 0) {
        local_178 = __addsf3(uVar8,local_15c);
        FUN_002bb81c(&local_154,param_3,&local_15c);
        local_124 = local_154;
        local_120 = local_150;
        uVar11 = AddShadowedText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4,param_5);
        local_11c[0] = '\0';
        uVar8 = 0;
        iVar10 = 0;
        param_2 = param_2 + 10;
        local_15c = local_178;
      }
      else {
        uVar5 = GetCharacterWidth(param_1,param_2);
                    /* WARNING: Load size is inaccurate */
        pcVar6 = param_2 + 1;
        if (*(int *)((int)param_1 + 4) == *param_1) {
          Flush(param_1,1);
        }
        if (cVar2 == '\n') {
          FUN_002bb81c(&local_14c,param_3,&local_15c);
          local_124 = local_14c;
          local_120 = local_148;
          AddShadowedText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4,param_5);
          local_11c[0] = '\0';
          local_158 = __subsf3(local_158,uVar3);
          uVar11 = CONCAT44(extraout_s1_00,extraout_s0_00);
          local_17c = local_17c + 1;
          local_15c = 0;
          uVar8 = 0;
          local_178 = 0;
          iVar10 = 0;
          param_2 = pcVar6;
        }
        else if (cVar2 == '\t') {
          FUN_002bb81c(&local_144,param_3,&local_15c);
          local_124 = local_144;
          local_120 = local_140;
          AddShadowedText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4,param_5);
          uVar9 = *(undefined4 *)((int)param_1 + 0xfc);
          local_11c[0] = '\0';
          uVar5 = *(undefined4 *)((int)param_1 + 0x114);
          uVar8 = __mulsf3(uVar5,uVar9);
          __addsf3(uVar8,0x3f000000);
          __fixsfsi();
          uVar8 = __floatsisf();
          uVar8 = __divsf3(local_15c,uVar8);
          uVar8 = __addsf3(uVar8,0x3f800000);
          uVar8 = __mulsf3(uVar8,uVar5);
          local_15c = __mulsf3(uVar8,uVar9);
          uVar11 = CONCAT44(extraout_s1_01,extraout_s0_01);
          uVar8 = 0;
          iVar10 = 0;
          param_2 = pcVar6;
        }
        else {
          local_11c[iVar10] = cVar2;
          uVar8 = __addsf3(uVar8,uVar5);
          uVar5 = local_15c;
          local_11c[iVar10 + 1] = '\0';
          uVar9 = __addsf3(local_15c,uVar8);
          iVar4 = __aeabi_fcmpgt(uVar9,in_stack_00000004);
          uVar9 = extraout_s0_02;
          uVar12 = extraout_s1_02;
          if ((iVar4 != 0) &&
             (iVar4 = __aeabi_fcmpgt(uVar5,0), uVar9 = extraout_s0_03, uVar12 = extraout_s1_03,
             iVar4 != 0)) {
            local_15c = local_178;
            local_158 = __subsf3(local_158,uVar3);
            local_17c = local_17c + 1;
            uVar9 = extraout_s0_04;
            uVar12 = extraout_s1_04;
          }
          uVar11 = CONCAT44(uVar12,uVar9);
          if ((cVar2 == ' ') ||
             (pcVar1 = param_2 + 1, iVar10 = iVar10 + 1, param_2 = pcVar6, *pcVar1 == '\0')) {
            FUN_002bb81c(&local_13c,param_3,&local_15c);
            local_124 = local_13c;
            local_120 = local_138;
            AddShadowedText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4,param_5);
            local_15c = __addsf3(local_15c,uVar8);
            uVar11 = CONCAT44(extraout_s1_05,extraout_s0_05);
            iVar10 = 0;
            local_11c[0] = '\0';
            uVar8 = 0;
            param_2 = pcVar6;
          }
        }
      }
    }
  }
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_17c);
}


