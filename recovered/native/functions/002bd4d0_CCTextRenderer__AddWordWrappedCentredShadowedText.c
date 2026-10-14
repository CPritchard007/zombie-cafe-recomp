/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd4d0 CCTextRenderer::AddWordWrappedCentredShadowedText */

/* CCTextRenderer::AddWordWrappedCentredShadowedText(void*, char const*, ccMat2x3 const*, unsigned
   int, unsigned int, float, float) */

undefined8
CCTextRenderer::AddWordWrappedCentredShadowedText
          (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,uint param_5,float param_6,
          float param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *__dest;
  undefined8 uVar7;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_58;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0x120) != 0) {
    return CONCAT44(param_7,param_6);
  }
  uVar1 = GetTextHeight(param_1);
  uVar1 = __addsf3(uVar1,in_stack_00000008);
  local_30 = *(undefined4 *)param_3;
  uStack_2c = *(undefined4 *)(param_3 + 4);
  uStack_28 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  local_20 = *(undefined4 *)(param_3 + 0x10);
  local_1c = *(undefined4 *)(param_3 + 0x14);
  local_40 = 0;
  local_3c = 0;
  local_58 = 0;
  __dest = (char *)(DAT_002bd5c0 + 0x2bd512);
  local_4c = 0;
  uVar5 = 0;
  uVar6 = uVar5;
  do {
    uVar4 = (uint)(byte)param_2[uVar5];
    if ((uVar4 == 10) || (uVar4 == 0x20)) {
      uVar6 = uVar5;
    }
    uVar2 = GetCharacterWidth(param_1,uVar4);
    local_58 = __addsf3(local_58,uVar2);
    iVar3 = __aeabi_fcmpge(local_58,in_stack_00000004);
    if (((iVar3 != 0) && (uVar6 != 0)) || (param_2[uVar5] == '\0')) {
      if (param_2[uVar5] == '\0') {
        uVar6 = uVar5;
      }
      strncpy(__dest,param_2 + local_4c,uVar6 - local_4c);
      __dest[uVar6 - local_4c] = '\0';
      FUN_002bb81c(&local_38,param_3,&local_40);
      local_20 = local_38;
      local_1c = local_34;
      uVar7 = AddCenteredShadowedText(param_1,__dest,(ccMat2x3 *)&local_30,param_4,param_5);
      if (param_2[uVar5] == '\0') {
        return uVar7;
      }
      local_3c = __subsf3(local_3c,uVar1);
      local_4c = uVar6 + 1;
      local_58 = 0;
      while (uVar6 = uVar6 + 1, uVar6 <= uVar5) {
        uVar2 = GetCharacterWidth(param_1,(uint)(byte)param_2[uVar6]);
        local_58 = __addsf3(local_58,uVar2);
      }
      uVar6 = 0;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


