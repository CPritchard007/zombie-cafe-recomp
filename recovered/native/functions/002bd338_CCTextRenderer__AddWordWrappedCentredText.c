/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd338 CCTextRenderer::AddWordWrappedCentredText */

/* CCTextRenderer::AddWordWrappedCentredText(void*, char const*, ccVec2 const*, unsigned int, float,
   float, unsigned char, bool) */

undefined8
CCTextRenderer::AddWordWrappedCentredText
          (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,float param_5,float param_6,
          uchar param_7,bool param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *__dest;
  undefined8 uVar7;
  undefined3 in_stack_00000001;
  undefined3 in_stack_00000005;
  undefined4 local_38;
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((param_2 == (char *)0x0) || (*(int *)((int)param_1 + 0x120) != 0)) {
    return CONCAT44(param_6,param_5);
  }
  uVar1 = GetTextHeight(param_1);
  uVar1 = __addsf3(uVar1,_param_8);
  local_20 = *(undefined4 *)param_3;
  local_1c = *(undefined4 *)(param_3 + 4);
  local_38 = 0;
  __dest = (char *)(DAT_002bd418 + 0x2bd374);
  local_30 = 0;
  uVar5 = 0;
  uVar6 = uVar5;
  do {
    uVar4 = (uint)(byte)param_2[uVar5];
    if ((uVar4 == 10) || (uVar4 == 0x20)) {
      uVar6 = uVar5;
    }
    uVar2 = GetCharacterWidth(param_1,uVar4);
    local_38 = __addsf3(local_38,uVar2);
    iVar3 = __aeabi_fcmpge(local_38,_param_7);
    if ((((iVar3 != 0) && (uVar6 != 0)) || (param_2[uVar5] == '\0')) || (uVar4 == 10)) {
      if (param_2[uVar5] == '\0') {
        uVar6 = uVar5;
      }
      strncpy(__dest,param_2 + local_30,uVar6 - local_30);
      __dest[uVar6 - local_30] = '\0';
      uVar7 = AddCenteredText(param_1,__dest,(ccVec2 *)&local_20,param_4);
      if (param_2[uVar5] == '\0') {
        return uVar7;
      }
      local_1c = __subsf3(local_1c,uVar1);
      local_30 = uVar6 + 1;
      local_38 = 0;
      while (uVar6 = uVar6 + 1, uVar6 <= uVar5) {
        uVar2 = GetCharacterWidth(param_1,(uint)(byte)param_2[uVar6]);
        local_38 = __addsf3(local_38,uVar2);
      }
      uVar6 = 0;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


