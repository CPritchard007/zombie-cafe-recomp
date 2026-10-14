/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd9c4 CCTextRenderer::AddWordWrappedRightText */

/* CCTextRenderer::AddWordWrappedRightText(void*, char const*, ccMat2x3 const*, unsigned int, float,
   float) */

void CCTextRenderer::AddWordWrappedRightText
               (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,float param_5,
               float param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int local_174;
  char *local_16c;
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
  
  piVar5 = *(int **)(DAT_002bdb84 + 0x2bd9d4);
  local_1c = *piVar5;
  local_174 = 0;
  if (*(int *)((int)param_1 + 0x120) == 0) {
    local_134 = *(undefined4 *)param_3;
    uStack_130 = *(undefined4 *)(param_3 + 4);
    uStack_12c = *(undefined4 *)(param_3 + 8);
    uVar6 = 0;
    local_128 = *(undefined4 *)(param_3 + 0xc);
    local_124 = *(undefined4 *)(param_3 + 0x10);
    local_120 = *(undefined4 *)(param_3 + 0x14);
    local_154 = 0;
    local_150 = 0;
    uVar2 = GetTextHeight(param_1);
    uVar2 = __addsf3(uVar2,in_stack_00000004);
    local_174 = 1;
    iVar4 = 0;
    param_5 = extraout_s0;
    param_6 = extraout_s1;
    for (local_16c = param_2; cVar1 = *local_16c, cVar1 != '\0'; local_16c = local_16c + 1) {
      uVar3 = GetCharacterWidth(param_1,local_16c);
                    /* WARNING: Load size is inaccurate */
      if (*(int *)((int)param_1 + 4) == *param_1) {
        Flush(param_1,1);
      }
      if (cVar1 == '\n') {
        FUN_002bb81c(&local_14c,param_3,&local_154);
        local_124 = local_14c;
        local_120 = local_148;
        iVar8 = 0;
        AddRightText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4);
        local_11c[0] = '\0';
        local_150 = __subsf3(local_150,uVar2);
        local_174 = local_174 + 1;
        local_154 = 0;
        uVar6 = 0;
        param_5 = extraout_s0_00;
        param_6 = extraout_s1_00;
      }
      else if (cVar1 == '\t') {
        FUN_002bb81c(&local_144,param_3,&local_154);
        local_124 = local_144;
        local_120 = local_140;
        AddRightText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4);
        iVar8 = 0;
        uVar7 = *(undefined4 *)((int)param_1 + 0xfc);
        local_11c[0] = '\0';
        uVar3 = *(undefined4 *)((int)param_1 + 0x114);
        uVar6 = __mulsf3(uVar3,uVar7);
        __addsf3(uVar6,0x3f000000);
        __fixsfsi();
        uVar6 = __floatsisf();
        uVar6 = __divsf3(local_154,uVar6);
        uVar6 = __addsf3(uVar6,0x3f800000);
        uVar6 = __mulsf3(uVar6,uVar3);
        local_154 = __mulsf3(uVar6,uVar7);
        uVar6 = 0;
        param_5 = extraout_s0_01;
        param_6 = extraout_s1_01;
      }
      else {
        local_11c[iVar4] = cVar1;
        uVar6 = __addsf3(uVar6,uVar3);
        uVar3 = local_154;
        iVar8 = iVar4 + 1;
        local_11c[iVar4 + 1] = '\0';
        uVar7 = __addsf3(local_154,uVar6);
        iVar4 = __aeabi_fcmpgt(uVar7,in_stack_00000000);
        param_5 = extraout_s0_02;
        param_6 = extraout_s1_02;
        if ((iVar4 != 0) &&
           (iVar4 = __aeabi_fcmpgt(uVar3,0), param_5 = extraout_s0_03, param_6 = extraout_s1_03,
           iVar4 != 0)) {
          local_154 = 0;
          local_150 = __subsf3(local_150,uVar2);
          local_174 = local_174 + 1;
          param_5 = extraout_s0_04;
          param_6 = extraout_s1_04;
        }
        if (local_16c[1] == '\0') {
          FUN_002bb81c(&local_13c,param_3,&local_154);
          local_124 = local_13c;
          local_120 = local_138;
          AddRightText(param_1,local_11c,(ccMat2x3 *)&local_134,param_4);
          local_154 = __addsf3(local_154,uVar6);
          uVar6 = 0;
          iVar8 = 0;
          local_11c[0] = '\0';
          param_5 = extraout_s0_05;
          param_6 = extraout_s1_05;
        }
      }
      iVar4 = iVar8;
    }
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_5,param_6,local_174);
}


