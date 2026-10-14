/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bddb8 CCTextRenderer::dispText */

/* CCTextRenderer::dispText(void*, char const*, ccMat2x3 const*, unsigned int, float, float,
   unsigned char, bool, ccMktAnchor) */

void CCTextRenderer::dispText
               (void *param_1,byte *param_2,undefined4 *param_3,uint param_4,undefined4 param_7,
               undefined4 param_8,byte param_7_00,char param_8_00,int param_9)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_17c;
  uint local_174;
  int local_170;
  byte local_160 [4];
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
  byte local_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002bdfc4 + 0x2bddd6);
  local_1c = *piVar5;
  if (param_7_00 == 0) {
    local_174 = 1000;
  }
  else {
    local_174 = (uint)param_7_00 << 1;
  }
  local_134 = *param_3;
  uStack_130 = param_3[1];
  uStack_12c = param_3[2];
  local_128 = param_3[3];
  local_124 = param_3[4];
  local_120 = param_3[5];
  local_15c = 0;
  local_158 = 0;
  uVar3 = GetTextHeight(param_1);
  uVar3 = __addsf3(uVar3,param_8);
  local_160[0] = 0;
  local_160[1] = 0;
  local_160[2] = 0;
  if ((param_9 - 7U < 2) || (param_9 == 1)) {
    local_17c = 0;
  }
  else if ((param_9 == 0) || (param_9 == 6)) {
    local_17c = 1;
  }
  else {
    local_17c = 2 - (uint)(param_9 == 2);
  }
  do {
    uVar8 = 0;
    uVar9 = 0;
LAB_002bdf56:
    do {
      while( true ) {
        bVar2 = *param_2;
        if (bVar2 == 0) {
          if (local_17c == 1) {
            FUN_002bb81c(&local_144,param_3,&local_15c);
            local_124 = local_144;
            local_120 = local_140;
            AddCenteredText(param_1,(char *)local_11c,(ccMat2x3 *)&local_134,param_4);
          }
          else {
            FUN_002bb81c(&local_13c,param_3,&local_15c);
            local_124 = local_13c;
            local_120 = local_138;
            AddText(param_1,(char *)local_11c,(ccMat2x3 *)&local_134,param_4);
          }
          if (local_1c == *piVar5) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(0);
        }
        GetCharacterWidth(param_1,(char *)param_2);
        uVar4 = (uint)(bVar2 >> 7);
        local_160[2] = 0;
        local_160[1] = 0;
        if (uVar4 == 0) break;
        local_160[0] = *param_2;
        local_160[1] = param_2[1];
        local_160[2] = param_2[2];
        if (param_8_00 == '\0') {
          local_170 = 3;
        }
        else {
          local_170 = 3;
          if (local_174 <= uVar9) {
            iVar6 = MultiByteString::checkBreakOk((char *)param_2);
            uVar7 = 0;
            if (iVar6 != 0) goto LAB_002bdfb2;
          }
        }
LAB_002bdec6:
        iVar6 = 0;
        do {
          uVar7 = uVar8;
          pbVar1 = local_160 + iVar6;
          iVar6 = iVar6 + 1;
          local_11c[uVar7] = *pbVar1;
          uVar8 = uVar7 + 1;
        } while (iVar6 < local_170);
        local_11c[uVar7 + 1] = 0;
        if (uVar4 == 0) {
          param_2 = param_2 + 1;
          uVar9 = uVar9 + 1;
        }
        else {
          param_2 = param_2 + 3;
          uVar9 = uVar9 + 2;
        }
      }
      local_160[0] = *param_2;
      if ((bVar2 == 10) || (bVar2 == 0x5c)) {
        uVar7 = 1;
      }
      else {
        local_170 = 1;
        if ((param_8_00 == '\0') || (uVar7 = uVar4, uVar9 < local_174)) goto LAB_002bdec6;
      }
LAB_002bdfb2:
      if (local_17c == 1) {
        FUN_002bb81c(&local_154,param_3,&local_15c);
        local_124 = local_154;
        local_120 = local_150;
        AddCenteredText(param_1,(char *)local_11c,(ccMat2x3 *)&local_134,param_4);
      }
      else {
        FUN_002bb81c(&local_14c,param_3,&local_15c);
        local_124 = local_14c;
        local_120 = local_148;
        AddText(param_1,(char *)local_11c,(ccMat2x3 *)&local_134,param_4);
      }
      local_158 = __subsf3(local_158,uVar3);
      uVar8 = uVar7;
      uVar9 = uVar7;
    } while (uVar7 == 0);
    if (uVar4 == 0) {
      param_2 = param_2 + 1;
      uVar8 = uVar4;
      uVar9 = uVar4;
      goto LAB_002bdf56;
    }
    param_2 = param_2 + 3;
  } while( true );
}


