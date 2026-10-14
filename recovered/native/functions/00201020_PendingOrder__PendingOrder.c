/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00201020 PendingOrder::PendingOrder */

/* PendingOrder::PendingOrder(PendingOrderDialog*, Order const*, int) */

PendingOrder * __thiscall
PendingOrder::PendingOrder
          (PendingOrder *this,PendingOrderDialog *param_1,Order *param_2,int param_3)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CImage *pCVar8;
  ImageElement *this_00;
  ScreenElement *pSVar9;
  ulong uVar10;
  ZCImageButton *pZVar11;
  BitmapTextElement *pBVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  PendingOrder *pPVar17;
  int iVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar19;
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  StringUtil aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar3 = DAT_002010e4 + 0x20102e;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar3 + DAT_002010e8) + 8;
  *(Order **)(this + 0x80) = param_2;
  *(PendingOrderDialog **)(this + 0x60) = param_1;
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = CapcomApp::getInstance();
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar5 = __mulsf3(uVar6,uVar7);
  iVar16 = *(int *)(iVar3 + 4);
  iVar3 = *(int *)(param_1 + 0x60);
  if (*(char *)(iVar16 + DAT_002010ec) == '\0') {
    pCVar8 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar3 + DAT_002010f0),
                        (int)*(short *)(*(int *)(iVar3 + 0x4e8) + (uint)(byte)param_2[0x18] * 0x1c +
                                       0x14),true);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (this_00,pCVar8,extraout_s0_00,extraout_s1_00,(uchar)uVar4,SUB41(uVar5,0));
  }
  else {
    pCVar8 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar3 + DAT_002010f0),
                        (int)*(short *)(*(int *)(iVar3 + 0x4e8) + (uint)(byte)param_2[0x18] * 0x1c +
                                       0x14),true);
    this_00 = (ImageElement *)operator_new(0x98);
    uVar1 = __mulsf3(uVar4,0x3f000000);
    bVar2 = (bool)__mulsf3(uVar5,0x3f000000);
    ImageElement::ImageElement(this_00,pCVar8,extraout_s0,extraout_s1,uVar1,bVar2);
  }
  *(ImageElement **)(this + 100) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_c4,(String *)(param_2 + 8));
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(iVar3 * 4 + DAT_00201524 + 0x201148) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_c4,uVar4,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x6c) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_c4);
  Recipe::getFullName((char)&stack0xffffffec + 'X');
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_00201528 + iVar3 * 4 + 0x2011c4) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_bc,uVar4,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x68) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_bc);
  iVar3 = *(int *)(this + 100);
  iVar13 = *(int *)(*(int *)(this + 0x6c) + 0x10) + *(int *)(*(int *)(this + 0x68) + 0x10);
  uVar4 = __floatsisf(iVar13);
  uVar5 = __floatsisf(*(undefined4 *)(iVar3 + 0x10));
  uVar4 = __divsf3(uVar4,uVar5);
  *(undefined4 *)(iVar3 + 0x6c) = uVar4;
  *(undefined4 *)(iVar3 + 0x68) = uVar4;
  iVar3 = *(int *)(this + 100);
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 + 0xc));
  __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x68));
  uVar4 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),uVar4,0);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),uVar4,*(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
  StringBuffer::StringBuffer(aSStack_34);
  Vector<String>::elementAt((int)aSStack_b4);
  StringBuffer::append(aSStack_34,aSStack_b4);
  String::~String(aSStack_b4);
  String::String(aSStack_ac,(char *)(DAT_00201530 + 0x201276));
  StringBuffer::append(aSStack_34,aSStack_ac);
  String::~String(aSStack_ac);
  Vector<String>::elementAt((int)aSStack_a4);
  StringBuffer::append(aSStack_34,aSStack_a4);
  String::~String(aSStack_a4);
  String::String(aSStack_9c,(char *)(DAT_00201538 + 0x2012ae));
  StringBuffer::append(aSStack_34,aSStack_9c);
  String::~String(aSStack_9c);
  Vector<String>::elementAt((int)aSStack_94);
  StringBuffer::append(aSStack_34,aSStack_94);
  String::~String(aSStack_94);
  StringBuffer::toString();
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_00201540 + iVar3 * 4 + 0x20130a) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_8c,uVar4,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x70) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_8c);
  (**(code **)(**(int **)(this + 0x70) + 0x14))(*(int **)(this + 0x70),0,iVar13);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_84,(char *)(DAT_00201544 + 0x201354));
  StringBuffer::append(aSStack_34,aSStack_84);
  String::~String(aSStack_84);
  Recipe::getCost((Recipe *)
                  (*(int *)(*(int *)(param_1 + 0x60) + 0x4e8) + (uint)(byte)param_2[0x18] * 0x1c),
                  (uchar)param_2[0x19]);
  String::valueOf((int)aSStack_7c);
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  String::String(aSStack_74,(char *)(DAT_00201548 + 0x201398));
  StringBuffer::append(aSStack_34,aSStack_74);
  String::~String(aSStack_74);
  String::String(aSStack_6c,(char *)(DAT_0020154c + 0x2013b0));
  StringBuffer::append(aSStack_34,aSStack_6c);
  String::~String(aSStack_6c);
  Recipe::getSellPrice
            ((Recipe *)
             (*(int *)(*(int *)(param_1 + 0x60) + 0x4e8) + (uint)(byte)param_2[0x18] * 0x1c),
             (uchar)param_2[0x19]);
  Recipe::getServings((Recipe *)
                      (*(int *)(*(int *)(param_1 + 0x60) + 0x4e8) + (uint)(byte)param_2[0x18] * 0x1c
                      ),(uchar)param_2[0x19]);
  String::valueOf((int)aSStack_64);
  StringBuffer::append(aSStack_34,aSStack_64);
  String::~String(aSStack_64);
  String::String(aSStack_5c,(char *)(DAT_00201550 + 0x201408));
  StringBuffer::append(aSStack_34,aSStack_5c);
  String::~String(aSStack_5c);
  uVar10 = Recipe::getCookTimeSeconds
                     ((Recipe *)
                      (*(int *)(*(int *)(param_1 + 0x60) + 0x4e8) + (uint)(byte)param_2[0x18] * 0x1c
                      ),(uchar)param_2[0x19]);
  StringUtil::createTimeString(aSStack_54,uVar10,'\x02');
  StringBuffer::append(aSStack_34,aSStack_54);
  String::~String((String *)aSStack_54);
  StringBuffer::toString();
  iVar3 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_00201554 + iVar3 * 4 + 0x20146e) + 0x136) * 4 + iVar16);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_4c,uVar4,0xffffffff,1,1,0x21,0,0);
  *(ScreenElement **)(this + 0x74) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_4c);
  *(undefined1 *)(*(int *)(this + 0x74) + 0x7f) = 0x21;
  (**(code **)(**(int **)(this + 0x74) + 0x14))(*(int **)(this + 0x74),param_3,iVar13);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  iVar14 = *(int *)(*(int *)(this + 0x70) + 0x10);
  pCVar8 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(param_1 + 0x60) + DAT_00201558),0x12,false);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'!',pCVar8,(CImage *)0x0,0,0,false);
  pPVar17 = this + 0x88;
  *(ZCImageButton **)pPVar17 = pZVar11;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  ImageButton::setScale(*(ImageButton **)pPVar17,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (**(code **)(**(int **)pPVar17 + 0x14))(*(int **)pPVar17,param_3,0);
  pcVar15 = *(code **)(**(int **)pPVar17 + 0x2c);
  Vector<String>::elementAt((int)aSStack_44);
  iVar3 = SmDev();
  iVar18 = *(int *)pPVar17;
  uVar5 = *(undefined4 *)((*(int *)(DAT_002017a0 + iVar3 * 4 + 0x201586) + 0x136) * 4 + iVar16);
  uVar4 = *(undefined4 *)(iVar18 + 0xc);
  uVar6 = *(undefined4 *)(iVar18 + 0x10);
  pBVar12 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar12,aSStack_44,uVar5,0xffffffff,0,0,0,uVar4,uVar6,9,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar12;
  (*pcVar15)(iVar18,pBVar12);
  String::~String(aSStack_44);
  iVar3 = DAT_002017a4;
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x12;
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(param_1 + 0x60) + iVar3),0xb,false);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'!',pCVar8,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x84) = pZVar11;
  uVar19 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x84),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),param_3 - *(int *)(*(int *)(this + 0x88) + 0xc),0);
  pcVar15 = *(code **)(**(int **)(this + 0x84) + 0x2c);
  Vector<String>::elementAt((int)aSStack_3c);
  iVar3 = SmDev();
  iVar18 = *(int *)(this + 0x84);
  uVar4 = *(undefined4 *)(iVar18 + 0x10);
  uVar5 = *(undefined4 *)((*(int *)(DAT_002017ac + iVar3 * 4 + 0x201664) + 0x136) * 4 + iVar16);
  uVar6 = *(undefined4 *)(iVar18 + 0xc);
  pBVar12 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar12,aSStack_3c,uVar5,0xffffffff,0,0,0,uVar6,uVar4,9,0,0);
  *(BitmapTextElement **)(this + 0x78) = pBVar12;
  (*pcVar15)(iVar18,pBVar12);
  String::~String(aSStack_3c);
  *(undefined1 *)(*(int *)(this + 0x78) + 0x7f) = 0x12;
  ScreenElement::setSize((ScreenElement *)this,param_3,iVar13 + iVar14);
  return this;
}


