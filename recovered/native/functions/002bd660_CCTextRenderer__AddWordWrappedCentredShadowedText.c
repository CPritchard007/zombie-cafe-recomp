/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd660 CCTextRenderer::AddWordWrappedCentredShadowedText */

/* CCTextRenderer::AddWordWrappedCentredShadowedText(void*, char const*, ccVec2 const*, unsigned
   int, unsigned int, float, float) */

undefined8
CCTextRenderer::AddWordWrappedCentredShadowedText
          (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,uint param_5,float param_6,
          float param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *__dest;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0x120) != 0) {
    return CONCAT44(param_7,param_6);
  }
  uVar1 = GetTextHeight(param_1);
  uVar1 = __addsf3(uVar1,in_stack_00000008);
  local_20 = *(undefined4 *)param_3;
  local_1c = *(undefined4 *)(param_3 + 4);
  uVar7 = 0;
  __dest = (char *)(DAT_002bd734 + 0x2bd696);
  local_2c = 0;
  uVar5 = 0;
  uVar6 = uVar5;
  do {
    uVar4 = (uint)(byte)param_2[uVar5];
    if ((uVar4 == 10) || (uVar4 == 0x20)) {
      uVar6 = uVar5;
    }
    uVar2 = GetCharacterWidth(param_1,uVar4);
    uVar7 = __addsf3(uVar7,uVar2);
    iVar3 = __aeabi_fcmpge(uVar7,in_stack_00000004);
    if (((iVar3 != 0) && (uVar6 != 0)) || (param_2[uVar5] == '\0')) {
      if (param_2[uVar5] == '\0') {
        uVar6 = uVar5;
      }
      strncpy(__dest,param_2 + local_2c,uVar6 - local_2c);
      __dest[uVar6 - local_2c] = '\0';
      uVar8 = AddCenteredShadowedText(param_1,__dest,(ccVec2 *)&local_20,param_4,param_5);
      if (param_2[uVar5] == '\0') {
        return uVar8;
      }
      local_1c = __subsf3(local_1c,uVar1);
      local_2c = uVar6 + 1;
      uVar7 = 0;
      while (uVar6 = uVar6 + 1, uVar6 <= uVar5) {
        uVar2 = GetCharacterWidth(param_1,(uint)(byte)param_2[uVar6]);
        uVar7 = __addsf3(uVar7,uVar2);
      }
      uVar6 = 0;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


