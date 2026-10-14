/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022279c ZukanHeadButton::ZukanHeadButton */

/* ZukanHeadButton::ZukanHeadButton(CharacterData*, unsigned char, int, int, int, int, long) */

ZukanHeadButton * __thiscall
ZukanHeadButton::ZukanHeadButton
          (ZukanHeadButton *this,CharacterData *param_1,uchar param_2,int param_3,int param_4,
          int param_5,int param_6,long param_7)

{
  ZukanHeadButton ZVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *this_00;
  undefined4 uVar7;
  ScreenElement *pSVar8;
  String *this_01;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  uint uVar15;
  float extraout_s0;
  float extraout_s1;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_5,param_6,0,0,'\x14',(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_00222a7c + 0x2227be) + 8;
  iVar3 = CapcomApp::getInstance();
  iVar14 = *(int *)(iVar3 + 4);
  iVar3 = SmDev();
  uVar7 = DAT_00222a84;
  if ((iVar3 != 4) && (iVar3 = SmDev(), uVar7 = DAT_00222a84, iVar3 != 3)) {
    uVar7 = DAT_00222a80;
  }
  *(long *)(this + 100) = param_7;
  this[0x60] = (ZukanHeadButton)param_2;
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x44);
  pCVar6 = (CImage *)getHeadImage(this,param_1);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar4 = __divsf3(uVar7,uVar4);
  uVar2 = __mulsf3(uVar4,uVar5);
  ImageElement::ImageElement(this_00,pCVar6,extraout_s0,extraout_s1,uVar2,SUB41(uVar7,0));
  *(ImageElement **)(this + 0x68) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  uVar7 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x68) + 0x10));
  uVar4 = __mulsf3(uVar5,DAT_00222a88);
  iVar3 = __aeabi_fcmpgt(uVar7,uVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar7 = __subsf3(uVar7,uVar4);
    __mulsf3(uVar7,0x3f000000);
    iVar3 = __fixsfsi();
  }
  ScreenElement::setPosition((ScreenElement *)this,param_5,param_6 + iVar3);
  iVar12 = *(int *)(*(int *)(this + 0x68) + 0xc);
  iVar10 = *(int *)(*(int *)(this + 0x68) + 0x10);
  iVar3 = SmDev();
  iVar9 = *(int *)(DAT_00222a8c + 0x22288e);
  ScreenElement::setSize((ScreenElement *)this,iVar12,iVar10 + *(int *)(iVar3 * 4 + iVar9));
  uVar7 = DAT_00222a90;
  ZVar1 = this[0x60];
  if (ZVar1 == (ZukanHeadButton)0x0) {
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 100) = uVar7;
  }
  else {
    *(undefined4 *)(this + 100) = 0xffffffff;
    if (ZVar1 == (ZukanHeadButton)0x1) {
      String::String(aSStack_30,(char *)(DAT_00222a94 + 0x2228be));
      iVar3 = SmDev();
      uVar7 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_00222a98 + 0x2228cc) + 0x136) * 4 + iVar14);
      pSVar8 = (ScreenElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar8,aSStack_30,uVar7,DAT_00222a9c,0xffffffff,0,1,0x12,0,0);
      *(ScreenElement **)(this + 0x6c) = pSVar8;
      ScreenElement::addChild((ScreenElement *)this,pSVar8);
      this_01 = aSStack_30;
    }
    else if (ZVar1 == (ZukanHeadButton)0x2) {
      String::String(aSStack_28,(char *)(DAT_00222aa0 + 0x222912));
      iVar3 = SmDev();
      uVar7 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_00222aa4 + 0x222920) + 0x136) * 4 + iVar14);
      pSVar8 = (ScreenElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar8,aSStack_28,uVar7,DAT_00222aa8,0xffffffff,0,1,0x12,0,0);
      *(ScreenElement **)(this + 0x6c) = pSVar8;
      ScreenElement::addChild((ScreenElement *)this,pSVar8);
      this_01 = aSStack_28;
    }
    else {
      String::String(aSStack_20,(char *)(DAT_00222aac + 0x222962));
      iVar3 = SmDev();
      uVar7 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_00222ab0 + 0x222970) + 0x136) * 4 + iVar14);
      pSVar8 = (ScreenElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar8,aSStack_20,uVar7,DAT_00222ab4,0xffffffff,0,1,0x12,0,0);
      *(ScreenElement **)(this + 0x6c) = pSVar8;
      ScreenElement::addChild((ScreenElement *)this,pSVar8);
      this_01 = aSStack_20;
    }
    String::~String(this_01);
    piVar11 = *(int **)(this + 0x6c);
    pcVar13 = *(code **)(*piVar11 + 0x18);
    iVar3 = SmDev();
    (*pcVar13)(piVar11,*(undefined4 *)(iVar3 * 4 + *(int *)(DAT_00222ab8 + 0x2229c0)),
               *(undefined4 *)(this + 0x10));
    piVar11 = *(int **)(this + 0x6c);
    iVar14 = *(int *)(this + 0xc);
    iVar10 = *(int *)(this + 0x10);
    pcVar13 = *(code **)(*piVar11 + 0x14);
    iVar3 = SmDev();
    (*pcVar13)(piVar11,iVar14 / 2,iVar10 / 2 + *(int *)(DAT_00222abc + iVar3 * 4 + 0x2229f8));
    *(undefined1 *)(*(int *)(this + 0x6c) + 0x7f) = 0x12;
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  }
  piVar11 = *(int **)(this + 0x68);
  iVar14 = *(int *)(this + 0xc);
  iVar10 = *(int *)(this + 0x10);
  iVar3 = SmDev();
  uVar15 = iVar10 - *(int *)(iVar9 + iVar3 * 4);
  (**(code **)(*piVar11 + 0x14))
            (piVar11,(int)(uVar15 & 0xffff | iVar14 / 2 << 0x10) >> 0x10,(int)(short)uVar15);
  return this;
}


