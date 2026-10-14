/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ff908 CompleteOrder::CompleteOrder */

/* CompleteOrder::CompleteOrder(PendingOrderDialog*, FoodStack*, int) */

CompleteOrder * __thiscall
CompleteOrder::CompleteOrder
          (CompleteOrder *this,PendingOrderDialog *param_1,FoodStack *param_2,int param_3)

{
  uchar uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CImage *pCVar5;
  ImageElement *this_00;
  int iVar6;
  ScreenElement *pSVar7;
  ZCImageButton *pZVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar15;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar9 = DAT_001ffc94;
  *(PendingOrderDialog **)(this + 0x60) = param_1;
  iVar9 = *(int *)(iVar9 + 0x1ff924);
  *(FoodStack **)(this + 0x78) = param_2;
  *(int *)this = iVar9 + 8;
  *(undefined4 *)(this + 0x74) = 0;
  iVar9 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar9 + 0x40);
  iVar9 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar9 + 0x50);
  iVar9 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar9 + 0x44);
  iVar9 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar9 + 0x50);
  iVar9 = CapcomApp::getInstance();
  uVar11 = __mulsf3(uVar11,uVar13);
  uVar3 = __mulsf3(uVar3,uVar4);
  iVar9 = *(int *)(iVar9 + 4);
  if (*(char *)(iVar9 + DAT_001ffc98) == '\0') {
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar9 + DAT_001ffc9c),
                        (int)*(short *)(*(int *)(iVar9 + 0x4e8) + (uint)*(ushort *)param_2 * 0x1c +
                                       0x14),true);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (this_00,pCVar5,extraout_s0_00,extraout_s1_00,(uchar)uVar11,SUB41(uVar3,0));
  }
  else {
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar9 + DAT_001ffc9c),
                        (int)*(short *)(*(int *)(iVar9 + 0x4e8) + (uint)*(ushort *)param_2 * 0x1c +
                                       0x14),true);
    this_00 = (ImageElement *)operator_new(0x98);
    uVar1 = __mulsf3(uVar11,0x3f000000);
    bVar2 = (bool)__mulsf3(uVar3,0x3f000000);
    ImageElement::ImageElement(this_00,pCVar5,extraout_s0,extraout_s1,uVar1,bVar2);
  }
  *(ImageElement **)(this + 100) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_30,(String *)(param_2 + 0x14));
  iVar6 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(iVar6 * 4 + DAT_001ffca0 + 0x1ffa0e) + 0x136) * 4 + iVar9);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_30,uVar4,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x6c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_30);
  Recipe::getFullName((char)&stack0xffffffec + 0xec);
  iVar6 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_001ffca4 + iVar6 * 4 + 0x1ffa84) + 0x136) * 4 + iVar9);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_28,uVar4,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x68) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_28);
  iVar6 = *(int *)(this + 100);
  iVar10 = *(int *)(*(int *)(this + 0x6c) + 0x10) + *(int *)(*(int *)(this + 0x68) + 0x10);
  uVar4 = __floatsisf(iVar10);
  uVar13 = __floatsisf(*(undefined4 *)(iVar6 + 0x10));
  uVar4 = __divsf3(uVar4,uVar13);
  *(undefined4 *)(iVar6 + 0x6c) = uVar4;
  *(undefined4 *)(iVar6 + 0x68) = uVar4;
  iVar6 = *(int *)(this + 100);
  uVar4 = __floatsisf(*(undefined4 *)(iVar6 + 0xc));
  __mulsf3(uVar4,*(undefined4 *)(iVar6 + 0x68));
  uVar4 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),uVar4,0);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),uVar4,*(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar9 + DAT_001ffca8),0x84,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'!',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x7c) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  (**(code **)(**(int **)(this + 0x7c) + 0x14))(*(int **)(this + 0x7c),param_3,0);
  __mulsf3(uVar11,0x3f400000);
  uVar15 = __mulsf3(uVar3,0x3f400000);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x7c),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar9 + DAT_001ffca8),0x81,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'!',pCVar5,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  uVar15 = (**(code **)(**(int **)(this + 0x80) + 0x14))
                     (*(int **)(this + 0x80),param_3 - *(int *)(*(int *)(this + 0x7c) + 0xc),0);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x80),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  Vector<String>::elementAt((int)aSStack_20);
  iVar6 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_001ffcb0 + iVar6 * 4 + 0x1ffbe4) + 0x136) * 4 + iVar9);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_20,uVar3,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x70) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_20);
  iVar6 = *(int *)(this + 0x80);
  piVar12 = *(int **)(this + 0x70);
  uVar3 = *(undefined4 *)(iVar6 + 4);
  iVar14 = *piVar12;
  iVar9 = __divsi3(*(int *)(iVar6 + 0x10) << 1,3);
  (**(code **)(iVar14 + 0x14))(piVar12,uVar3,iVar9 + *(int *)(iVar6 + 8));
  ScreenElement::setSize
            ((ScreenElement *)this,param_3,
             iVar10 + *(int *)(*(int *)(this + 0x7c) + 0x10) +
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  return this;
}


