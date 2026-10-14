/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000da488 CharacterPortrait::CharacterPortrait */

/* CharacterPortrait::CharacterPortrait(Character*, unsigned char) */

CharacterPortrait * __thiscall
CharacterPortrait::CharacterPortrait(CharacterPortrait *this,Character *param_1,uchar param_2)

{
  int iVar1;
  CharacterInstance *this_00;
  CImage *pCVar2;
  ImageElement *pIVar3;
  ProgressBar *this_01;
  ScreenElement *pSVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar11 = DAT_000da868;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar11 = iVar11 + 0xda4a0;
  *(int *)this = *(int *)(iVar11 + DAT_000da86c) + 8;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(iVar1 + 4);
  iVar1 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar8 = __mulsf3(uVar8,*(undefined4 *)(iVar1 + 0x50));
  *(undefined4 *)(this + 0x94) = uVar8;
  iVar1 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = CapcomApp::getInstance();
  uVar8 = __mulsf3(uVar8,*(undefined4 *)(iVar1 + 0x50));
  *(undefined4 *)(this + 0x98) = uVar8;
  this[0x9d] = (CharacterPortrait)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  if (param_1 != (Character *)0x0) {
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,param_1,(CFPathFinder *)0x0);
    *(CharacterInstance **)(this + 0x6c) = this_00;
  }
  *(undefined4 *)(this + 0x68) = 0;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x90) + DAT_000da870),0x4c,false)
  ;
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)(DAT_000da874 + iVar1 * 4 + 0xda58e);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)(DAT_000da878 + iVar1 * 4 + 0xda5b6);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,(uchar)uVar8,SUB41(uVar5,0));
  *(ImageElement **)(this + 0x60) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x60) + 0xc),
             *(int *)(*(int *)(this + 0x60) + 0x10));
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x90) + DAT_000da870),0x28,false)
  ;
  pIVar3 = (ImageElement *)operator_new(0x98);
  uVar8 = 0x11;
  uVar5 = 0;
  ImageElement::ImageElement
            (pIVar3,pCVar2,extraout_s0_00,extraout_s1_00,(uchar)*(undefined4 *)(this + 0x94),
             SUB41(*(undefined4 *)(this + 0x98),0));
  *(ImageElement **)(this + 100) = pIVar3;
  (**(code **)(*(int *)pIVar3 + 0x14))
            (pIVar3,*(int *)(*(int *)(this + 0x60) + 0xc) / 2,0,*(code **)(*(int *)pIVar3 + 0x14),
             uVar8,uVar5);
  iVar6 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  iVar1 = *(int *)(iVar1 * 4 + *(int *)(iVar11 + DAT_000da87c));
  this_01 = (ProgressBar *)operator_new(0x84);
  ProgressBar::ProgressBar(this_01,100,100,'&','7',-1,iVar6 + iVar1 * -4);
  *(ProgressBar **)(this + 0x70) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  piVar10 = *(int **)(this + 0x70);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x60) + 0xc);
  iVar1 = SmDev();
  (*pcVar7)(piVar10,iVar6 / 2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_000da880)));
  (**(code **)(**(int **)(this + 0x70) + 0x1c))(*(int **)(this + 0x70),0x11);
  ProgressBar::setValue(*(ProgressBar **)(this + 0x70),100,true);
  String::String(aSStack_40,0);
  iVar6 = *(int *)(this + 0x90);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000da884 + iVar1 * 4 + 0xda65c) + 0x136) * 4 + iVar6);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_40,uVar8,0xff000000,1,1,0x21,0,0);
  *(ScreenElement **)(this + 0x7c) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_40);
  pSVar4 = *(ScreenElement **)(this + 0x70);
  piVar10 = *(int **)(this + 0x7c);
  iVar1 = ScreenElement::localToParentCoords(pSVar4,*(int *)(pSVar4 + 0xc),*(int *)(pSVar4 + 0x10));
  (**(code **)(*piVar10 + 0x14))(piVar10,iVar1 >> 0x10,(int)(short)iVar1);
  String::String(aSStack_38,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x90) + 0x4b0) + 8) +
                 **(int **)(iVar11 + DAT_000da888) * 8));
  iVar6 = *(int *)(this + 0x90);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000da88c + iVar1 * 4 + 0xda6f8) + 0x136) * 4 + iVar6);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_38,uVar8,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x80) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_38);
  piVar10 = *(int **)(this + 0x80);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar1 = SmDev();
  iVar6 = *(int *)(iVar11 + DAT_000da890);
  uVar8 = *(undefined4 *)(iVar1 * 4 + iVar6);
  iVar1 = SmDev();
  (*pcVar7)(piVar10,uVar8,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_000da894)));
  String::String(aSStack_30,0);
  iVar9 = *(int *)(this + 0x90);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000da898 + iVar1 * 4 + 0xda794) + 0x136) * 4 + iVar9);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_30,uVar8,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x84) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_30);
  piVar10 = *(int **)(this + 0x84);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)(iVar6 + iVar1 * 4);
  iVar1 = SmDev();
  (*pcVar7)(piVar10,uVar8,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_000da89c)));
  String::String(aSStack_28,(char *)(DAT_000da8a0 + 0xda7c4));
  iVar6 = *(int *)(this + 0x90);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000da8a4 + iVar1 * 4 + 0xda830) + 0x136) * 4 + iVar6);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_28,uVar8,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x88) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_28);
  piVar10 = *(int **)(this + 0x88);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar1 = SmDev();
  iVar6 = *(int *)(iVar11 + DAT_000da8a8);
  uVar8 = *(undefined4 *)(iVar1 * 4 + iVar6);
  iVar1 = SmDev();
  (*pcVar7)(piVar10,uVar8,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_000da8ac)));
  String::String(aSStack_20,0);
  iVar9 = *(int *)(this + 0x90);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000da8b0 + iVar1 * 4 + 0xda8b6) + 0x136) * 4 + iVar9);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_20,uVar8,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_20);
  piVar10 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)(iVar6 + iVar1 * 4);
  iVar1 = SmDev();
  (*pcVar7)(piVar10,uVar8,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_000da99c)));
  this[0x9c] = (CharacterPortrait)0x0;
  ScreenElement::setAnchor((ScreenElement *)this,param_2);
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  return this;
}


