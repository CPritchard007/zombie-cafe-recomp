/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fefe4 CookingOrder::CookingOrder */

/* CookingOrder::CookingOrder(PendingOrderDialog*, Stove*, int) */

CookingOrder * __thiscall
CookingOrder::CookingOrder
          (CookingOrder *this,PendingOrderDialog *param_1,Stove *param_2,int param_3)

{
  uchar uVar1;
  bool bVar2;
  CookingOrder CVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CImage *pCVar8;
  ImageElement *pIVar9;
  int iVar10;
  ScreenElement *pSVar11;
  ZCImageButton *pZVar12;
  Recipe *pRVar13;
  int iVar14;
  undefined4 uVar15;
  BitmapTextElement *pBVar16;
  CookingOrder CVar17;
  int iVar18;
  int iVar19;
  code *pcVar20;
  FoodStack *pFVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar25;
  float extraout_s1_01;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar4 = DAT_001ff35c + 0x1feff2;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar18 = *(int *)(iVar4 + DAT_001ff360);
  *(Stove **)(this + 0x7c) = param_2;
  *(PendingOrderDialog **)(this + 0x60) = param_1;
  *(int *)this = iVar18 + 8;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  iVar18 = CapcomApp::getInstance();
  uVar24 = *(undefined4 *)(iVar18 + 0x40);
  iVar18 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar18 + 0x50);
  iVar18 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar18 + 0x44);
  iVar18 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar18 + 0x50);
  iVar18 = CapcomApp::getInstance();
  uVar5 = __mulsf3(uVar24,uVar5);
  uVar6 = __mulsf3(uVar6,uVar7);
  iVar18 = *(int *)(iVar18 + 4);
  if (*(char *)(iVar18 + DAT_001ff364) == '\0') {
    pCVar8 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar18 + DAT_001ff368),
                        (int)*(short *)(*(int *)(iVar18 + 0x4e8) +
                                        (uint)**(ushort **)(param_2 + 100) * 0x1c + 0x14),true);
    pIVar9 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar9,pCVar8,extraout_s0_00,extraout_s1_00,(uchar)uVar5,SUB41(uVar6,0));
  }
  else {
    pCVar8 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar18 + DAT_001ff368),
                        (int)*(short *)(*(int *)(iVar18 + 0x4e8) +
                                        (uint)**(ushort **)(param_2 + 100) * 0x1c + 0x14),true);
    pIVar9 = (ImageElement *)operator_new(0x98);
    uVar1 = __mulsf3(uVar5,0x3f000000);
    bVar2 = (bool)__mulsf3(uVar6,0x3f000000);
    ImageElement::ImageElement(pIVar9,pCVar8,extraout_s0,extraout_s1,uVar1,bVar2);
  }
  *(ImageElement **)(this + 100) = pIVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar9);
  String::String(aSStack_40,(String *)(*(int *)(param_2 + 100) + 0x14));
  iVar10 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(iVar10 * 4 + DAT_001ff36c + 0x1ff0fa) + 0x136) * 4 + iVar18);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,aSStack_40,uVar7,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x6c) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String(aSStack_40);
  Recipe::getFullName((char)&stack0xffffffec + 0xdc);
  iVar10 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_001ff370 + iVar10 * 4 + 0x1ff174) + 0x136) * 4 + iVar18);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,aSStack_38,uVar7,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x68) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String(aSStack_38);
  iVar10 = *(int *)(this + 100);
  iVar19 = *(int *)(*(int *)(this + 0x6c) + 0x10) + *(int *)(*(int *)(this + 0x68) + 0x10);
  uVar7 = __floatsisf(iVar19);
  uVar24 = __floatsisf(*(undefined4 *)(iVar10 + 0x10));
  uVar7 = __divsf3(uVar7,uVar24);
  *(undefined4 *)(iVar10 + 0x6c) = uVar7;
  *(undefined4 *)(iVar10 + 0x68) = uVar7;
  iVar10 = *(int *)(this + 100);
  uVar7 = __floatsisf(*(undefined4 *)(iVar10 + 0xc));
  __mulsf3(uVar7,*(undefined4 *)(iVar10 + 0x68));
  uVar7 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),uVar7,0);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),uVar7,*(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar18 + DAT_001ff374),0x79,false);
  pZVar12 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar12,'!',pCVar8,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x84) = pZVar12;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar12);
  (**(code **)(**(int **)(this + 0x84) + 0x14))(*(int **)(this + 0x84),param_3,0);
  __mulsf3(uVar5,0x3f400000);
  uVar25 = __mulsf3(uVar6,0x3f400000);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x84),(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar18 + DAT_001ff374),0x7a,false);
  pZVar12 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar12,'!',pCVar8,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = pZVar12;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar12);
  pFVar21 = *(FoodStack **)(param_2 + 100);
  pRVar13 = (Recipe *)FoodStack::getRecipe(pFVar21);
  iVar10 = Recipe::getCookTimeSeconds(pRVar13,(uchar)pFVar21[8]);
  iVar14 = __divsi3(*(undefined4 *)(param_2 + 0x70),DAT_001ff378);
  uVar24 = __floatsisf(iVar10 + iVar14);
  uVar15 = __mulsf3(*(undefined4 *)(**(int **)(iVar18 + 0x590) + 0xb30),
                    *(undefined4 *)(*(int *)(param_2 + 0x38) + 0x60));
  __divsf3(uVar24,uVar15);
  uVar24 = __fixsfsi();
  *(undefined4 *)(this + 0x9c) = uVar24;
  CVar3 = (CookingOrder)Stove::isBurned(param_2);
  this[0xa0] = CVar3;
  iVar10 = DAT_001ff374;
  CVar17 = (CookingOrder)0x0;
  if (*(int *)(this + 0x9c) < 1) {
    CVar17 = (CookingOrder)((byte)CVar3 ^ 1);
  }
  this[0xa1] = CVar17;
  uVar24 = PackedImage::getImage(*(PackedImage **)(iVar18 + iVar10),0x81,false);
  iVar10 = DAT_001ff374;
  *(undefined4 *)(this + 0x8c) = uVar24;
  uVar24 = PackedImage::getImage(*(PackedImage **)(iVar18 + iVar10),0x7a,false);
  *(undefined4 *)(this + 0x90) = uVar24;
  uVar24 = PackedImage::getImage(*(PackedImage **)(iVar18 + DAT_001ff374),0x83,false);
  *(undefined4 *)(this + 0x94) = uVar24;
  if ((*(int *)(this + 0x9c) < 1) && (this[0xa0] == (CookingOrder)0x0)) {
    *(undefined4 *)(*(int *)(this + 0x80) + 0x60) = *(undefined4 *)(this + 0x8c);
    (**(code **)(**(int **)(this + 0x84) + 0x20))();
  }
  else if (this[0xa0] == (CookingOrder)0x0) {
    *(undefined4 *)(*(int *)(this + 0x80) + 0x60) = *(undefined4 *)(this + 0x90);
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x80) + 0x60) = uVar24;
  }
  if ((0 < *(int *)(this + 0x9c)) || (this[0xa0] != (CookingOrder)0x0)) {
    if (this[0xa0] == (CookingOrder)0x0) {
      pFVar21 = *(FoodStack **)(param_2 + 100);
      uVar24 = *(undefined4 *)(param_2 + 0x70);
      pRVar13 = (Recipe *)FoodStack::getRecipe(pFVar21);
      iVar10 = __divsi3(uVar24,1000);
      Recipe::getFinishToxinCost(pRVar13,(uchar)pFVar21[8],iVar10);
    }
    piVar22 = *(int **)(this + 0x80);
    pcVar20 = *(code **)(*piVar22 + 0x2c);
    pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar18 + DAT_001ff664),0x24,false);
    pIVar9 = (ImageElement *)operator_new(0x98);
    uVar24 = 9;
    uVar15 = 0;
    ImageElement::ImageElement
              (pIVar9,pCVar8,extraout_s0_01,extraout_s1_01,(uchar)uVar5,SUB41(uVar6,0));
    *(ImageElement **)(this + 0x88) = pIVar9;
    (*pcVar20)(piVar22,pIVar9,pcVar20,this + 0x88,uVar24,uVar15);
    piVar22 = *(int **)(this + 0x80);
    pcVar20 = *(code **)(*piVar22 + 0x2c);
    String::String(aSStack_30,0);
    iVar10 = SmDev();
    uVar24 = *(undefined4 *)((*(int *)(DAT_001ff668 + iVar10 * 4 + 0x1ff454) + 0x136) * 4 + iVar18);
    pBVar16 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              (pBVar16,aSStack_30,uVar24,0xff000000,0xffffffff,1,1,0xc,0,0);
    *(BitmapTextElement **)(this + 0x98) = pBVar16;
    (*pcVar20)(piVar22,pBVar16);
    String::~String(aSStack_30);
    piVar22 = *(int **)(this + 0x98);
    pcVar20 = *(code **)(*piVar22 + 0x44);
    String::valueOf((int)aSStack_28);
    (*pcVar20)(piVar22,aSStack_28);
    String::~String(aSStack_28);
    piVar22 = *(int **)(this + 0x98);
    pcVar20 = *(code **)(*piVar22 + 0x14);
    if (*(char *)(iVar18 + DAT_001ff66c) == '\0') {
      iVar10 = SmDev();
      uVar23 = *(undefined4 *)(iVar10 * 4 + *(int *)(iVar4 + DAT_001ff670));
      iVar10 = CapcomApp::getInstance();
      uVar24 = *(undefined4 *)(iVar10 + 0x50);
      iVar10 = SmDev();
      uVar15 = *(undefined4 *)(iVar10 * 4 + *(int *)(iVar4 + DAT_001ff674));
      iVar4 = CapcomApp::getInstance();
      __mulsf3(uVar23,uVar24);
      uVar24 = __fixsfsi();
      __mulsf3(uVar15,*(undefined4 *)(iVar4 + 0x50));
      uVar15 = __fixsfsi();
    }
    else {
      iVar10 = SmDev();
      uVar24 = *(undefined4 *)(iVar10 * 4 + *(int *)(iVar4 + DAT_001ff670));
      iVar4 = CapcomApp::getInstance();
      __mulsf3(uVar24,*(undefined4 *)(iVar4 + 0x50));
      uVar24 = __fixsfsi();
      uVar15 = 0x5a;
    }
    (*pcVar20)(piVar22,uVar24,uVar15);
  }
  piVar22 = *(int **)(this + 0x80);
  pCVar8 = (CImage *)piVar22[0x18];
  uVar24 = CImage::getWidth(pCVar8);
  uVar15 = CImage::getHeight(pCVar8);
  iVar4 = *piVar22;
  uVar24 = __floatsisf(uVar24);
  __mulsf3(uVar24,uVar5);
  uVar5 = __fixsfsi();
  uVar24 = __floatsisf(uVar15);
  __mulsf3(uVar24,uVar6);
  uVar6 = __fixsfsi();
  (**(code **)(iVar4 + 0x18))(piVar22,uVar5,uVar6);
  uVar25 = (**(code **)(**(int **)(this + 0x80) + 0x14))
                     (*(int **)(this + 0x80),param_3 - *(int *)(*(int *)(this + 0x84) + 0xc),0);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x80),(float)uVar25,(float)((ulonglong)uVar25 >> 0x20));
  String::String(aSStack_20,(char *)(DAT_001ff678 + 0x1ff586));
  iVar4 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_001ff67c + iVar4 * 4 + 0x1ff5ac) + 0x136) * 4 + iVar18);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,aSStack_20,uVar5,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x78) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),uVar7,
             *(int *)(*(int *)(this + 0x68) + 0x10) + *(int *)(*(int *)(this + 0x6c) + 0x10));
  ScreenElement::setSize
            ((ScreenElement *)this,param_3,iVar19 + *(int *)(*(int *)(this + 0x80) + 0x10));
  return this;
}


