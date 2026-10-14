/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2910 BitmapTextElement::paintComponent */

/* BitmapTextElement::paintComponent(CapcomGraphics*) */

void __thiscall BitmapTextElement::paintComponent(BitmapTextElement *this,CapcomGraphics *param_1)

{
  BitmapTextElement BVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  BitmapTextElement *pBVar14;
  uint uVar15;
  char *pcVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar17;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar18;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar19;
  float extraout_s1_03;
  float extraout_s1_04;
  int local_ac;
  undefined4 local_a8;
  String aSStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [28];
  
  String::String(aSStack_98,(String *)(this + 0x60));
  iVar4 = operator==(aSStack_98,0);
  String::~String(aSStack_98);
  if (iVar4 != 0) {
    return;
  }
  local_ac = *(int *)(this + 0xc);
  if (this[0x7d] != (BitmapTextElement)0x0) {
    uVar5 = CCTextRenderer::GetStringWidth(*(void **)(this + 0x6c),*(char **)(this + 0xb8));
    __addsf3(uVar5,0x3f800000);
    local_ac = __fixsfsi();
    *(int *)(this + 0xc) = local_ac;
  }
  BVar1 = this[0x7f];
  if (((byte)BVar1 & 0x20) == 0) {
    bVar11 = (byte)BVar1 & 0x10;
    if (((byte)BVar1 & 0x10) == 0) {
      local_a8 = 0;
      bVar2 = bVar11;
    }
    else {
      local_a8 = __floatsisf(*(int *)(this + 0xc) - local_ac >> 1);
      bVar11 = 1;
      bVar2 = (byte)BVar1 & 0x20;
    }
  }
  else {
    local_a8 = __floatsisf(*(undefined4 *)(this + 0xc));
    bVar11 = 0;
    bVar2 = 1;
  }
  iVar4 = (**(code **)(*(int *)this + 0x4c))(this);
  if (this[0x7e] != (BitmapTextElement)0x0) {
    *(int *)(this + 0x10) = iVar4;
  }
  if ((int)((uint)(byte)this[0x7f] << 0x1d) < 0) {
    iVar4 = *(int *)(this + 0x10) - iVar4;
LAB_002a29d0:
    uVar5 = __floatsisf(iVar4);
  }
  else {
    uVar5 = 0;
    if ((int)((uint)(byte)this[0x7f] << 0x1e) < 0) {
      iVar4 = *(int *)(this + 0x10) - iVar4 >> 1;
      goto LAB_002a29d0;
    }
  }
  pvVar7 = *(void **)(this + 0x6c);
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = DAT_002a2d28;
  local_80 = local_a8;
  local_7c = uVar5;
  if (bVar11 == 0) {
    uVar6 = CCTextRenderer::GetTextHeight(pvVar7);
  }
  else {
    uVar6 = __floatsisf(local_ac / 2);
    local_80 = __addsf3(local_a8,uVar6);
    uVar6 = CCTextRenderer::GetTextHeight(pvVar7);
    uVar6 = __mulsf3(uVar6,0x3f000000);
  }
  local_7c = __addsf3(uVar5,uVar6);
  __fixsfsi(local_80);
  local_80 = __floatsisf();
  __fixsfsi(local_7c);
  local_7c = __floatsisf();
  if (this[0xb0] != (BitmapTextElement)0x0) {
    local_6c = DAT_002a2d28;
    local_50 = local_a8;
    local_78 = 0x3f800000;
    local_60 = 0x3f800000;
    local_54 = 0x3f800000;
    local_74 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_5c = 0;
    local_58 = 0;
    local_4c = uVar5;
    FUN_002a2828(auStack_30,&local_60,this + 0x98);
    FUN_002a2828(&local_48,auStack_30,&local_78);
    local_90 = local_48;
    local_8c = local_44;
    local_88 = local_40;
    local_84 = local_3c;
    local_80 = local_38;
    local_7c = local_34;
  }
  uVar13 = *(uint *)(this + 0x8c);
  uVar13 = ((int)uVar13 >> 0x10 & 0xffU) + (uVar13 & 0xff) * 0x10000 + (uVar13 & 0xff000000) +
           ((uint)(((int)uVar13 >> 8) << 0x18) >> 0x10);
  glMatrixMode(0x1700);
  glPushMatrix();
  if ((*(int *)(this + 0x70) == 0) || (this[0x84] == (BitmapTextElement)0x0)) {
    pvVar7 = *(void **)(this + 0x6c);
    pBVar14 = this + 0xb8;
    if (*(int *)(this + 0x94) == 0) {
      if (bVar11 != 0) {
        pcVar16 = *(char **)pBVar14;
        uVar3 = __floatsisf(*(undefined4 *)(this + 0xc));
        uVar12 = (undefined1)*(undefined4 *)(this + 0x88);
        fVar17 = extraout_s0;
        fVar19 = extraout_s1;
LAB_002a2bf0:
        CCTextRenderer::AddWordWrappedCentredText
                  (pvVar7,pcVar16,(ccMat2x3 *)&local_90,uVar13,fVar17,fVar19,uVar3,(bool)uVar12);
        goto LAB_002a2d66;
      }
      pcVar16 = *(char **)pBVar14;
      if (bVar2 != 0) {
LAB_002a2c08:
        uVar18 = __floatsisf(*(undefined4 *)(this + 0xc));
        CCTextRenderer::AddWordWrappedRightText
                  (pvVar7,pcVar16,(ccMat2x3 *)&local_90,uVar13,(float)uVar18,
                   (float)((ulonglong)uVar18 >> 0x20));
        goto LAB_002a2d66;
      }
      uVar3 = __floatsisf(*(undefined4 *)(this + 0xc));
      uVar12 = (undefined1)*(undefined4 *)(this + 0x88);
      fVar17 = extraout_s0_00;
      fVar19 = extraout_s1_00;
LAB_002a2c42:
      CCTextRenderer::AddWordWrappedText
                (pvVar7,pcVar16,(ccMat2x3 *)&local_90,uVar13,fVar17,fVar19,uVar3,(bool)uVar12);
      goto LAB_002a2d66;
    }
    if (bVar11 == 0) {
      pcVar16 = *(char **)pBVar14;
LAB_002a2ba6:
      uVar15 = *(uint *)(this + 0x90);
      uVar18 = __floatsisf(*(undefined4 *)(this + 0xc));
      CCTextRenderer::AddWordWrappedShadowedText
                (pvVar7,pcVar16,(ccMat2x3 *)&local_90,uVar13,uVar15,(float)uVar18,
                 (float)((ulonglong)uVar18 >> 0x20));
      goto LAB_002a2d66;
    }
    pcVar16 = *(char **)pBVar14;
  }
  else {
    iVar4 = (uint)(byte)this[0x86] * (uint)(byte)this[0x85];
    uVar15 = ((byte)this[0x86] - 1) + iVar4;
    if (iVar4 != 0) {
      iVar4 = *(int *)((iVar4 + -1) * 4 + *(int *)(*(int *)(this + 0x78) + 8));
    }
    if (uVar15 < *(int *)(*(int *)(this + 0x70) + 4) + 1U) {
      iVar9 = *(int *)(uVar15 * 4 + *(int *)(*(int *)(this + 0x78) + 8));
      puVar8 = (undefined1 *)(*(int *)(this + 0xb8) + iVar9);
      uVar12 = *puVar8;
      *puVar8 = 0;
      pvVar7 = *(void **)(this + 0x6c);
      iVar10 = *(int *)(this + 0xb8);
      if (*(int *)(this + 0x94) == 0) {
        if (bVar11 == 0) {
          if (bVar2 == 0) {
            uVar3 = __floatsisf(*(undefined4 *)(this + 0xc));
            CCTextRenderer::AddWordWrappedText
                      (pvVar7,(char *)(iVar10 + iVar4),(ccMat2x3 *)&local_90,uVar13,extraout_s0_04,
                       extraout_s1_04,uVar3,SUB41(*(undefined4 *)(this + 0x88),0));
          }
          else {
            uVar18 = __floatsisf(*(undefined4 *)(this + 0xc));
            CCTextRenderer::AddWordWrappedRightText
                      (pvVar7,(char *)(iVar10 + iVar4),(ccMat2x3 *)&local_90,uVar13,(float)uVar18,
                       (float)((ulonglong)uVar18 >> 0x20));
          }
        }
        else {
          uVar3 = __floatsisf(*(undefined4 *)(this + 0xc));
          CCTextRenderer::AddWordWrappedCentredText
                    (pvVar7,(char *)(iVar10 + iVar4),(ccMat2x3 *)&local_90,uVar13,extraout_s0_03,
                     extraout_s1_03,uVar3,SUB41(*(undefined4 *)(this + 0x88),0));
        }
      }
      else if (bVar11 == 0) {
        uVar15 = *(uint *)(this + 0x90);
        uVar18 = __floatsisf(*(undefined4 *)(this + 0xc));
        CCTextRenderer::AddWordWrappedShadowedText
                  (pvVar7,(char *)(iVar10 + iVar4),(ccMat2x3 *)&local_90,uVar13,uVar15,(float)uVar18
                   ,(float)((ulonglong)uVar18 >> 0x20));
      }
      else {
        uVar15 = *(uint *)(this + 0x90);
        uVar18 = __floatsisf(*(undefined4 *)(this + 0xc));
        CCTextRenderer::AddWordWrappedCentredShadowedText
                  (pvVar7,(char *)(iVar10 + iVar4),(ccMat2x3 *)&local_90,uVar13,uVar15,(float)uVar18
                   ,(float)((ulonglong)uVar18 >> 0x20));
      }
      *(undefined1 *)(*(int *)(this + 0xb8) + iVar9) = uVar12;
      goto LAB_002a2d66;
    }
    pvVar7 = *(void **)(this + 0x6c);
    pBVar14 = this + 0xb8;
    if (*(int *)(this + 0x94) == 0) {
      if (bVar11 != 0) {
        pcVar16 = (char *)(*(int *)pBVar14 + iVar4);
        uVar3 = __floatsisf(*(undefined4 *)(this + 0xc));
        uVar12 = (undefined1)*(undefined4 *)(this + 0x88);
        fVar17 = extraout_s0_01;
        fVar19 = extraout_s1_01;
        goto LAB_002a2bf0;
      }
      pcVar16 = (char *)(*(int *)pBVar14 + iVar4);
      if (bVar2 != 0) goto LAB_002a2c08;
      uVar3 = __floatsisf(*(undefined4 *)(this + 0xc));
      uVar12 = (undefined1)*(undefined4 *)(this + 0x88);
      fVar17 = extraout_s0_02;
      fVar19 = extraout_s1_02;
      goto LAB_002a2c42;
    }
    if (bVar11 == 0) {
      pcVar16 = (char *)(*(int *)pBVar14 + iVar4);
      goto LAB_002a2ba6;
    }
    pcVar16 = (char *)(*(int *)pBVar14 + iVar4);
  }
  uVar15 = *(uint *)(this + 0x90);
  uVar18 = __floatsisf(*(undefined4 *)(this + 0xc));
  CCTextRenderer::AddWordWrappedCentredShadowedText
            (pvVar7,pcVar16,(ccMat2x3 *)&local_90,uVar13,uVar15,(float)uVar18,
             (float)((ulonglong)uVar18 >> 0x20));
LAB_002a2d66:
  if (this[0xb0] == (BitmapTextElement)0x0) {
    CCTextRenderer::Flush(*(void **)(this + 0x6c),0);
  }
  else {
    glDisable(DAT_002a2dbc);
    CCTextRenderer::Flush(*(void **)(this + 0x6c),0);
    glEnable(DAT_002a2dbc);
  }
  glPopMatrix();
  glEnable(DAT_002a2dc0);
  glEnable(DAT_002a2dc4);
  glDisableClientState(DAT_002a2dc8);
  CapcomGraphics::setColor(param_1,-1);
  return;
}


