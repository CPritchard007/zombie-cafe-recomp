/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00101b50 FriendMenuElement::FriendMenuElement */

/* FriendMenuElement::FriendMenuElement(CImage**, CImage**, int, int, unsigned char, int) */

FriendMenuElement * __thiscall
FriendMenuElement::FriendMenuElement
          (FriendMenuElement *this,CImage **param_1,CImage **param_2,int param_3,int param_4,
          uchar param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  BitmapTextElement *pBVar7;
  ScreenElement *pSVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ImageElement *pIVar14;
  int iVar15;
  CImage *pCVar16;
  int *piVar17;
  code *pcVar18;
  undefined4 uVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  FriendMenuElement *pFVar23;
  int iVar24;
  uint uVar25;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  uchar uVar26;
  bool bVar27;
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar24 = DAT_00101f48;
  ScreenElement::ScreenElement
            ((ScreenElement *)this,0,0,param_3,param_4,param_5,(ScreenElement *)0x0);
  iVar24 = iVar24 + 0x101b7c;
  *(int *)this = *(int *)(iVar24 + DAT_00101f4c) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x50);
  iVar1 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(this + 0x60) = 0;
  *(CImage ***)(this + 100) = param_1;
  *(CImage ***)(this + 0x68) = param_2;
  *(int *)(this + 0x84) = param_6;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  String::String(aSStack_8c,0);
  iVar6 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(iVar6 * 4 + DAT_00101f50 + 0x101bd2) + 0x136) * 4 + iVar1);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar7,aSStack_8c,uVar19,0xffffffff,1,1,0,9,0);
  *(BitmapTextElement **)(this + 0x80) = pBVar7;
  String::~String(aSStack_8c);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x80),6);
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 0x80));
  uVar25 = *(uint *)(*(int *)(this + 0x80) + 0x10);
  String::String(aSStack_84,0);
  iVar6 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(DAT_00101f54 + iVar6 * 4 + 0x101c4a) + 0x136) * 4 + iVar1);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,aSStack_84,uVar19,0xffffffff,**(undefined4 **)(iVar24 + DAT_00101f58),0,1,
             uVar25 & 0xffff | (param_3 >> 1) << 0x10,param_3,0,0x11,0,0);
  *(BitmapTextElement **)(this + 0x6c) = pBVar7;
  String::~String(aSStack_84);
  *(undefined1 *)(*(int *)(this + 0x6c) + 0x7f) = 0x11;
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x6c),5);
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 0x6c));
  StringBuffer::StringBuffer(aSStack_34);
  Vector<String>::elementAt((int)aSStack_7c);
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  String::String(aSStack_74,(char *)(DAT_00101f60 + 0x101ccc));
  StringBuffer::append(aSStack_34,aSStack_74);
  String::~String(aSStack_74);
  Vector<String>::elementAt((int)aSStack_6c);
  StringBuffer::append(aSStack_34,aSStack_6c);
  String::~String(aSStack_6c);
  String::String(aSStack_64,(char *)(DAT_00101f68 + 0x101d02));
  StringBuffer::append(aSStack_34,aSStack_64);
  String::~String(aSStack_64);
  Vector<String>::elementAt((int)aSStack_5c);
  StringBuffer::append(aSStack_34,aSStack_5c);
  String::~String(aSStack_5c);
  StringBuffer::toString();
  iVar6 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(iVar6 * 4 + DAT_00101f70 + 0x101d46) + 0x136) * 4 + iVar1);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_54,uVar19,0xffffffff,1,1,param_4 & 0xffffU,0,0,0xc,
             0,0);
  *(ScreenElement **)(this + 0x70) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_54);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  String::String(aSStack_4c,0);
  iVar6 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(iVar6 * 4 + DAT_00101f74 + 0x101dac) + 0x136) * 4 + iVar1);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_4c,uVar19,0xffffffff,1,1,
             param_4 & 0xffffU | param_3 << 0x10,0,0,0x24,0,0);
  *(ScreenElement **)(this + 0x74) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_4c);
  *(undefined1 *)(*(int *)(this + 0x74) + 0x7f) = 0x21;
  pSVar8 = *(ScreenElement **)(this + 0x70);
  pCVar16 = *param_2;
  piVar17 = *(int **)(iVar24 + DAT_00101f78);
  iVar15 = *piVar17;
  iVar20 = **(int **)(iVar24 + DAT_00101f7c);
  iVar6 = SmDev();
  uVar19 = __floatsisf(iVar20 - (param_4 >> 4));
  __addsf3(uVar19,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar24 + DAT_00101f80)));
  iVar6 = __fixsfsi();
  lVar9 = ScreenElement::localToParentCoords(pSVar8,iVar15,iVar6);
  uVar19 = CImage::getWidth(pCVar16);
  piVar21 = *(int **)(iVar24 + DAT_00101f84);
  iVar15 = *piVar21;
  iVar6 = SmDev();
  uVar10 = *(undefined4 *)(iVar6 * 4 + iVar15);
  uVar11 = CImage::getHeight(pCVar16);
  iVar6 = **(int **)(iVar24 + DAT_00101f88);
  iVar24 = SmDev();
  uVar12 = *(undefined4 *)(iVar24 * 4 + iVar6);
  iVar6 = *piVar21;
  iVar24 = SmDev();
  uVar13 = *(undefined4 *)(iVar24 * 4 + iVar6);
  iVar6 = *piVar21;
  iVar24 = SmDev();
  uVar22 = *(undefined4 *)(iVar24 * 4 + iVar6);
  pIVar14 = (ImageElement *)operator_new(0x98);
  uVar19 = __floatsisf(uVar19);
  __mulsf3(uVar19,uVar10);
  iVar24 = __fixsfsi();
  uVar19 = __floatsisf(uVar11);
  __mulsf3(uVar19,uVar12);
  iVar6 = __fixsfsi();
  ImageElement::ImageElement
            (pIVar14,pCVar16,lVar9,iVar24,iVar6,extraout_s0,extraout_s1,(uchar)uVar13,
             SUB41(uVar22,0));
  *(ImageElement **)(this + 0x88) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  pSVar8 = *(ScreenElement **)(this + 0x88);
  lVar9 = ScreenElement::localToParentCoords
                    (pSVar8,param_3 + *piVar17 + *(int *)(pSVar8 + 0xc) >> 1,*(int *)(pSVar8 + 0x10)
                    );
  pCVar16 = param_1[0x1f];
  uVar19 = CImage::getWidth(pCVar16);
  uVar10 = CImage::getHeight(pCVar16);
  pIVar14 = (ImageElement *)operator_new(0x98);
  uVar2 = __mulsf3(uVar2,uVar3);
  uVar3 = __mulsf3(uVar4,uVar5);
  pCVar16 = param_1[0x1f];
  uVar4 = __floatsisf(uVar19);
  __mulsf3(uVar4,uVar2);
  iVar24 = __fixsfsi();
  uVar4 = __floatsisf(uVar10);
  __mulsf3(uVar4,uVar3);
  iVar6 = __fixsfsi();
  uVar26 = (uchar)uVar2;
  bVar27 = SUB41(uVar3,0);
  ImageElement::ImageElement
            (pIVar14,pCVar16,lVar9,iVar24,iVar6,extraout_s0_00,extraout_s1_00,uVar26,bVar27);
  pFVar23 = this + 0x8c;
  *(ImageElement **)pFVar23 = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  pcVar18 = *(code **)(**(int **)pFVar23 + 0x2c);
  String::String(aSStack_44,0);
  iVar24 = SmDev();
  iVar15 = *(int *)pFVar23;
  uVar4 = *(undefined4 *)((*(int *)(DAT_0010231c + iVar24 * 4 + 0x102010) + 0x136) * 4 + iVar1);
  iVar6 = *(int *)(iVar15 + 0xc);
  iVar24 = *(int *)(iVar15 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,aSStack_44,uVar4,0xffffffff,1,1,
             (((iVar6 >> 1) + -2) * 0x10000 | iVar24 * 5 >> 3 & 0xffffU) - 5,0,0,0x12,0,0);
  *(BitmapTextElement **)(this + 0x7c) = pBVar7;
  (*pcVar18)(iVar15,pBVar7);
  String::~String(aSStack_44);
  CapcomApp::getInstance();
  Vector<String>::elementAt((int)aSStack_3c);
  iVar24 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar24 * 4 + DAT_00102324 + 0x10206c) + 0x136) * 4 + iVar1);
  uVar4 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x8c),
                     *(int *)(*(ScreenElement **)(this + 0x8c) + 0xc) >> 1,0);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,aSStack_3c,uVar5,0xffffffff,1,1,uVar4,0,0,0x14,0,0);
  *(ScreenElement **)(this + 0x78) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_3c);
  pSVar8 = *(ScreenElement **)(this + 0x78);
  iVar24 = CImage::getHeight(param_1[0x38]);
  lVar9 = ScreenElement::localToParentCoords(pSVar8,*(int *)(pSVar8 + 0xc) >> 1,-iVar24 >> 1);
  pCVar16 = param_1[0x38];
  uVar4 = CImage::getWidth(pCVar16);
  uVar5 = CImage::getHeight(pCVar16);
  pIVar14 = (ImageElement *)operator_new(0x98);
  pCVar16 = param_1[0x38];
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,uVar2);
  iVar24 = __fixsfsi();
  uVar4 = __floatsisf(uVar5);
  __mulsf3(uVar4,uVar3);
  iVar1 = __fixsfsi();
  ImageElement::ImageElement
            (pIVar14,pCVar16,lVar9,iVar24,iVar1,extraout_s0_01,extraout_s1_01,uVar26,bVar27);
  *(ImageElement **)(this + 0x90) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  iVar24 = *(int *)(this + 0x78);
  pCVar16 = param_1[0x45];
  iVar6 = *(int *)(iVar24 + 4);
  iVar20 = *(int *)(iVar24 + 8);
  iVar15 = *(int *)(iVar24 + 0x10);
  uVar4 = CImage::getWidth(pCVar16);
  uVar5 = CImage::getHeight(pCVar16);
  pIVar14 = (ImageElement *)operator_new(0x98);
  pCVar16 = param_1[0x45];
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,uVar2);
  iVar24 = __fixsfsi();
  uVar4 = __floatsisf(uVar5);
  __mulsf3(uVar4,uVar3);
  iVar1 = __fixsfsi();
  ImageElement::ImageElement
            (pIVar14,pCVar16,iVar6 << 0x10 | iVar20 - iVar15 & 0xffffU,iVar24,iVar1,extraout_s0_02,
             extraout_s1_02,uVar26,bVar27);
  *(ImageElement **)(this + 0x98) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  pCVar16 = param_1[0x7c];
  iVar6 = *(int *)(this + 0xc);
  uVar25 = *(uint *)(this + 0x10);
  uVar4 = CImage::getWidth(pCVar16);
  uVar5 = CImage::getHeight(pCVar16);
  pIVar14 = (ImageElement *)operator_new(0x98);
  pCVar16 = param_1[0x7c];
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,uVar2);
  iVar24 = __fixsfsi();
  uVar2 = __floatsisf(uVar5);
  __mulsf3(uVar2,uVar3);
  iVar1 = __fixsfsi();
  ImageElement::ImageElement
            (pIVar14,pCVar16,
             (int)(short)uVar25 >> 1 & 0xffffU |
             ((int)(uVar25 & 0xffff | iVar6 << 0x10) >> 0x11) << 0x10,iVar24,iVar1,extraout_s0_03,
             extraout_s1_03,uVar26,bVar27);
  *(ImageElement **)(this + 0x94) = pIVar14;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar14);
  return this;
}


