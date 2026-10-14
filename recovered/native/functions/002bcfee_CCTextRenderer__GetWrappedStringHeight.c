/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bcfee CCTextRenderer::GetWrappedStringHeight */

/* CCTextRenderer::GetWrappedStringHeight(void*, char const*, float, float, unsigned char, bool) */

void CCTextRenderer::GetWrappedStringHeight
               (void *param_1,char *param_2,float param_3,float param_4,uchar param_5,bool param_6)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte in_stack_00000000;
  char in_stack_00000004;
  int local_28;
  
  uVar2 = GetTextHeight(param_1);
  uVar2 = __addsf3(uVar2,param_6);
  if (in_stack_00000000 == 0) {
    uVar8 = 1000;
  }
  else {
    uVar8 = (uint)in_stack_00000000 << 1;
  }
  uVar7 = 0;
  local_28 = 1;
  do {
    while( true ) {
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar4 = __floatunsisf(local_28);
        __mulsf3(uVar4,uVar2);
        return;
      }
      GetCharacterWidth(param_1,param_2);
      if (-1 < (int)((uint)bVar1 << 0x18)) break;
      if (((in_stack_00000004 == '\0') || (uVar7 < uVar8)) ||
         (iVar3 = MultiByteString::checkBreakOk(param_2), iVar3 == 0)) {
        param_2 = (char *)((byte *)param_2 + 3);
        uVar7 = uVar7 + 2;
      }
      else {
        bVar6 = true;
        bVar5 = false;
LAB_002bd094:
        local_28 = local_28 + 1;
        if (bVar5) {
          if (bVar6) {
            param_2 = (char *)((byte *)param_2 + 3);
            uVar7 = 0;
          }
          else {
            param_2 = (char *)((byte *)param_2 + 1);
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
      }
    }
    if ((bVar1 == 10) || (bVar1 == 0x5c)) {
      bVar6 = false;
      bVar5 = true;
      goto LAB_002bd094;
    }
    if ((in_stack_00000004 != '\0') && (uVar8 <= uVar7)) {
      bVar5 = false;
      bVar6 = false;
      goto LAB_002bd094;
    }
    param_2 = (char *)((byte *)param_2 + 1);
    uVar7 = uVar7 + 1;
  } while( true );
}


