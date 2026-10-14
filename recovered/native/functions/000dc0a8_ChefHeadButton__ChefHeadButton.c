/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dc0a8 ChefHeadButton::ChefHeadButton */

/* ChefHeadButton::ChefHeadButton(CharacterData*, int, int, int, int) */

ChefHeadButton * __thiscall
ChefHeadButton::ChefHeadButton
          (ChefHeadButton *this,CharacterData *param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ScreenElement *pSVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  code *pcVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s1;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [6];
  ChefHeadButton CStack_3a;
  StringUtil aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_4,param_5,0,0,'\x14',(ScreenElement *)0x0);
  iVar2 = DAT_000dc3d8;
  *(undefined4 *)(this + 0x74) = 0;
  *(int *)this = *(int *)(iVar2 + 0xdc0ce) + 8;
  iVar2 = CapcomApp::getInstance();
  iVar13 = *(int *)(iVar2 + 4);
  iVar2 = SmDev();
  uVar11 = DAT_000dc3e0;
  if ((iVar2 != 4) && (iVar2 = SmDev(), uVar11 = DAT_000dc3e0, iVar2 != 3)) {
    uVar11 = DAT_000dc3dc;
  }
  iVar2 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  pCVar4 = (CImage *)getHeadImage(this,param_1);
  pIVar5 = (ImageElement *)operator_new(0x98);
  uVar1 = __mulsf3(uVar11,uVar3);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,uVar1,(bool)uVar1);
  *(ImageElement **)(this + 0x60) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  this[0x7d] = (ChefHeadButton)0x0;
  uVar10 = (uint)*(ushort *)(param_1 + DAT_000dc3e4);
  if ((((uVar10 + DAT_000dc3e8 == 0) || (uVar10 + DAT_000dc3ec == 0)) || (uVar10 == DAT_000dc3f0))
     || (uVar10 == DAT_000dc3f4)) {
    this[0x7d] = (ChefHeadButton)0x1;
  }
  ScreenElement::setPosition((ScreenElement *)this,param_4,param_5);
  iVar2 = *(int *)(DAT_000dc3f8 + 0xdc178);
  if ((*(int *)(param_1 + 0xb20) == 0) ||
     (*(char *)(*(int *)(iVar13 + DAT_000dc3fc + 8) + param_3) != '\0')) {
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    iVar9 = *(int *)(*(int *)(this + 0x60) + 0xc);
    iVar16 = *(int *)(*(int *)(this + 0x60) + 0x10);
    iVar7 = SmDev();
    iVar16 = iVar16 + *(int *)(iVar2 + iVar7 * 4);
  }
  else {
    if (param_1[DAT_000dc400] == (CharacterData)0x0) {
      pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000dc404),0x27,false);
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,pCVar4,'\f',true);
    }
    else {
      pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000dc404),0x26,false);
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,pCVar4,'\f',true);
    }
    *(ImageElement **)(this + 100) = pIVar5;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
    String::String(aSStack_50,0);
    iVar9 = SmDev();
    uVar11 = *(undefined4 *)((*(int *)(iVar9 * 4 + DAT_000dc408 + 0xdc1f2) + 0x136) * 4 + iVar13);
    pSVar6 = (ScreenElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              ((BitmapTextElement *)pSVar6,aSStack_50,uVar11,0xff000000,0xffffffff,1,1,9,0,0);
    *(ScreenElement **)(this + 0x68) = pSVar6;
    ScreenElement::addChild((ScreenElement *)this,pSVar6);
    String::~String(aSStack_50);
    *(undefined1 *)(*(int *)(this + 0x68) + 0xb0) = 1;
    *(undefined1 *)(*(int *)(this + 0x68) + 0x7f) = 10;
    piVar14 = *(int **)(this + 0x68);
    pcVar12 = *(code **)(*piVar14 + 0x44);
    String::valueOf((int)aSStack_48);
    (*pcVar12)(piVar14,aSStack_48);
    String::~String(aSStack_48);
    iVar9 = *(int *)(*(int *)(this + 100) + 0xc);
    iVar15 = *(int *)(*(int *)(this + 0x60) + 0xc);
    iVar16 = *(int *)(*(int *)(this + 0x60) + 0x10);
    iVar8 = *(int *)(*(int *)(this + 0x68) + 0xc);
    iVar7 = SmDev();
    iVar9 = iVar9 + iVar8;
    if (iVar9 < iVar15) {
      iVar9 = iVar15;
    }
    iVar16 = iVar16 + *(int *)(iVar2 + iVar7 * 4);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar9,iVar16);
  if ((*(int *)(iVar13 + 0x680) < (int)(uint)(byte)param_1[DAT_000dc40c]) &&
     (*(char *)(*(int *)(iVar13 + 0x988) + param_3) == '\0')) {
    pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_000dc404),0x30,false);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
    iVar9 = DAT_000dc40c;
    *(ImageElement **)(this + 0x70) = pIVar5;
    iVar7 = *(int *)(DAT_000dc410 + 0xdc2ec);
    if (param_1[iVar9] == (CharacterData)0xff) {
      *(undefined4 *)(this + 0x78) = 0;
      this[0x7c] = (ChefHeadButton)0x0;
      String::String(aSStack_20,
                     (String *)
                     (*(int *)(*(int *)(iVar13 + 0x4b0) + 8) +
                     **(int **)(DAT_000dc5f4 + 0xdc430) * 8));
      iVar9 = SmDev();
      uVar11 = *(undefined4 *)((*(int *)(DAT_000dc5f8 + iVar9 * 4 + 0xdc460) + 0x136) * 4 + iVar13);
      pSVar6 = (ScreenElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar6,aSStack_20,uVar11,0xff000000,0xffffffff,0,1,0x12,0,0);
      *(ScreenElement **)(this + 0x6c) = pSVar6;
      ScreenElement::addChild((ScreenElement *)this,pSVar6);
      String::~String(aSStack_20);
      piVar14 = *(int **)(this + 0x6c);
      pcVar12 = *(code **)(*piVar14 + 0x18);
      iVar13 = SmDev();
      (*pcVar12)(piVar14,*(undefined4 *)(iVar7 + iVar13 * 4),*(undefined4 *)(this + 0x10));
      (**(code **)(**(int **)(this + 0x6c) + 0x14))
                (*(int **)(this + 0x6c),*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) / 2);
      *(undefined1 *)(*(int *)(this + 0x6c) + 0x7f) = 0x12;
    }
    else {
      String::valueOf((int)aSStack_40);
      StringUtil::getEncodingString(aSStack_38,'\0');
      uVar11 = String::getBytes(aSStack_40,aSStack_38,0,0,0);
      *(undefined4 *)(this + 0x78) = uVar11;
      String::~String((String *)aSStack_38);
      this[0x7c] = CStack_3a;
      *(undefined4 *)(this + 0x6c) = 0;
      String::String(aSStack_30,0);
      iVar9 = SmDev();
      uVar11 = *(undefined4 *)((*(int *)(iVar9 * 4 + DAT_000dc414 + 0xdc338) + 0x136) * 4 + iVar13);
      pSVar6 = (ScreenElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar6,aSStack_30,uVar11,0xff000000,0xffffffff,0,1,0x12,0,0);
      *(ScreenElement **)(this + 0x74) = pSVar6;
      ScreenElement::addChild((ScreenElement *)this,pSVar6);
      String::~String(aSStack_30);
      piVar14 = *(int **)(this + 0x74);
      pcVar12 = *(code **)(*piVar14 + 0x18);
      iVar13 = SmDev();
      (*pcVar12)(piVar14,*(undefined4 *)(iVar7 + iVar13 * 4),*(undefined4 *)(this + 0x10));
      (**(code **)(**(int **)(this + 0x74) + 0x14))
                (*(int **)(this + 0x74),*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) / 2);
      *(undefined1 *)(*(int *)(this + 0x74) + 0x7f) = 0x12;
      piVar14 = *(int **)(this + 0x74);
      pcVar12 = *(code **)(*piVar14 + 0x44);
      String::String(aSStack_28,*(char **)(this + 0x78));
      (*pcVar12)(piVar14,aSStack_28);
      String::~String(aSStack_28);
      String::~String(aSStack_40);
    }
  }
  else {
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  iVar9 = *(int *)(this + 0x10);
  piVar14 = *(int **)(this + 0x60);
  iVar7 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar10 = iVar9 - *(int *)(iVar2 + iVar13 * 4);
  (**(code **)(*piVar14 + 0x14))
            (piVar14,(int)(uVar10 & 0xffff | iVar7 / 2 << 0x10) >> 0x10,(int)(short)uVar10);
  piVar14 = *(int **)(this + 100);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0x14))(piVar14,0,(int)*(short *)(this + 0x10));
  }
  iVar2 = *(int *)(this + 100);
  if ((iVar2 != 0) && (piVar14 = *(int **)(this + 0x68), piVar14 != (int *)0x0)) {
    (**(code **)(*piVar14 + 0x14))
              (piVar14,(int)((*(int *)(iVar2 + 0xc) / 2 + *(int *)(iVar2 + 4)) * 0x10000 |
                            (uint)*(ushort *)(iVar2 + 8)) >> 0x10,(int)(short)*(ushort *)(iVar2 + 8)
              );
  }
  piVar14 = *(int **)(this + 0x70);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0x14))
              (piVar14,(int)(*(int *)(this + 0x10) / 2 & 0xffffU | *(int *)(this + 0xc) / 2 << 0x10)
                       >> 0x10,(int)(short)(*(int *)(this + 0x10) / 2));
  }
  return this;
}


