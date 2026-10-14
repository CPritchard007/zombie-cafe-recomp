/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f892c FrequentFryerDialog::makeDescroptions */

/* FrequentFryerDialog::makeDescroptions() */

void __thiscall FrequentFryerDialog::makeDescroptions(FrequentFryerDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  BitmapTextElement *pBVar3;
  ImageElement *pIVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  CImage *pCVar13;
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_c8,(char *)(DAT_000f8d18 + 0xf8948));
  String::valueOf((int)aSStack_c0);
  String::operator+(aSStack_b8,aSStack_c8,aSStack_c0);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f8d20 + iVar1 * 4 + 0xf8980) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x68) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_b8,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xe0) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_b8);
  String::~String(aSStack_c0);
  String::~String(aSStack_c8);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_b0,(char *)(DAT_000f8d24 + 0xf89fe));
  String::valueOf((int)aSStack_a8);
  String::operator+(aSStack_a0,aSStack_b0,aSStack_a8);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f8d2c + iVar1 * 4 + 0xf8a36) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x6c) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_a0,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xe4) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_a0);
  String::~String(aSStack_a8);
  String::~String(aSStack_b0);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  Vector<String>::elementAt((int)aSStack_98);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f8d34 + iVar1 * 4 + 0xf8ae0) + 0x136) * 4 + iVar11);
  iVar11 = *(int *)(this + 8);
  iVar1 = *(int *)(*(int *)(this + 0x70) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_98,uVar7,0xff000000,0,1,iVar11 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xe8) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_98);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  Vector<String>::elementAt((int)aSStack_90);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f8d38 + iVar1 * 4 + 0xf8b78) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x74) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_90,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xec) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_90);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  String::valueOf((int)aSStack_88);
  Vector<String>::elementAt((int)aSStack_80);
  String::operator+(aSStack_78,aSStack_88,aSStack_80);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f8d44 + iVar1 * 4 + 0xf8c30) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x78) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_78,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xf0) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_78);
  String::~String(aSStack_80);
  String::~String(aSStack_88);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_70,(char *)(DAT_000f8d48 + 0xf8cae));
  String::valueOf((int)aSStack_68);
  String::operator+(aSStack_60,aSStack_70,aSStack_68);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f8d50 + iVar1 * 4 + 0xf8ce6) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x7c) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_60,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xf4) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_60);
  String::~String(aSStack_68);
  String::~String(aSStack_70);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_58,(char *)(DAT_000f9190 + 0xf8da6));
  String::valueOf((int)aSStack_50);
  String::operator+(aSStack_48,aSStack_58,aSStack_50);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f9198 + iVar1 * 4 + 0xf8dde) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x80) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_48,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xf8) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_48);
  String::~String(aSStack_50);
  String::~String(aSStack_58);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  Vector<String>::elementAt((int)aSStack_40);
  iVar12 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar11 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f919c + iVar1 * 4 + 0xf8e82) + 0x136) * 4 + iVar12);
  iVar1 = *(int *)(*(int *)(this + 0x84) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_40,uVar7,0xff000000,0,1,iVar11 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0xfc) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_40);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  Vector<String>::elementAt((int)aSStack_38);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f91a0 + iVar1 * 4 + 0xf8f16) + 0x136) * 4 + iVar11);
  iVar11 = *(int *)(this + 8);
  iVar1 = *(int *)(*(int *)(this + 0x88) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_38,uVar7,0xff000000,0,1,iVar11 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0x100) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_38);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  String::valueOf((int)aSStack_30);
  Vector<String>::elementAt((int)aSStack_28);
  String::operator+(aSStack_20,aSStack_30,aSStack_28);
  iVar11 = *(int *)(this + 0x60);
  iVar1 = SmDev();
  iVar12 = *(int *)(this + 8);
  uVar7 = *(undefined4 *)((*(int *)(DAT_000f91a8 + iVar1 * 4 + 0xf8fc6) + 0x136) * 4 + iVar11);
  iVar1 = *(int *)(*(int *)(this + 0x8c) + 4);
  uVar2 = CImage::getWidth(*(CImage **)(this + 0x130));
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar3,aSStack_20,uVar7,0xff000000,0,1,iVar12 - 5U & 0xffff | iVar1 << 0x10,uVar2,0,
             0x14,0,0);
  *(BitmapTextElement **)(this + 0x104) = pBVar3;
  (*pcVar6)(piVar10,pBVar3);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xe0) + 8);
  iVar8 = *(int *)(*(int *)(this + 0x90) + 4);
  pCVar13 = *(CImage **)(this + 0x13c);
  iVar9 = *(int *)(*(int *)(this + 0xe0) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x13c),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xb8) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xe4) + 8);
  iVar8 = *(int *)(*(int *)(this + 0x94) + 4);
  pCVar13 = *(CImage **)(this + 0x13c);
  iVar9 = *(int *)(*(int *)(this + 0xe4) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x13c),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xbc) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xe8) + 8);
  iVar8 = *(int *)(*(int *)(this + 0x98) + 4);
  iVar9 = *(int *)(*(int *)(this + 0xe8) + 0x10);
  iVar11 = CImage::getWidth(*(CImage **)(this + 0x13c));
  iVar12 = CImage::getHeight(*(CImage **)(this + 0x138));
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x138),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xc0) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xec) + 8);
  iVar8 = *(int *)(*(int *)(this + 0x9c) + 4);
  pCVar13 = *(CImage **)(this + 0x138);
  iVar9 = *(int *)(*(int *)(this + 0xec) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x138),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xc4) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xf0) + 8);
  iVar8 = *(int *)(*(int *)(this + 0xa0) + 4);
  pCVar13 = *(CImage **)(this + 0x140);
  iVar9 = *(int *)(*(int *)(this + 0xf0) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x140),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 200) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xf4) + 8);
  iVar8 = *(int *)(*(int *)(this + 0xa4) + 4);
  pCVar13 = *(CImage **)(this + 0x13c);
  iVar9 = *(int *)(*(int *)(this + 0xf4) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x13c),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xcc) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar5 = *(int *)(*(int *)(this + 0xf8) + 8);
  iVar8 = *(int *)(*(int *)(this + 0xa8) + 4);
  pCVar13 = *(CImage **)(this + 0x13c);
  iVar9 = *(int *)(*(int *)(this + 0xf8) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x13c),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xd0) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar8 = *(int *)(*(int *)(this + 0xac) + 4);
  iVar5 = *(int *)(*(int *)(this + 0xfc) + 8);
  pCVar13 = *(CImage **)(this + 0x138);
  iVar9 = *(int *)(*(int *)(this + 0xfc) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x138),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xd4) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar8 = *(int *)(*(int *)(this + 0xb0) + 4);
  iVar5 = *(int *)(*(int *)(this + 0x100) + 8);
  pCVar13 = *(CImage **)(this + 0x138);
  iVar9 = *(int *)(*(int *)(this + 0x100) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x138),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xd8) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x158);
  pcVar6 = *(code **)(*piVar10 + 0x2c);
  iVar1 = CImage::getWidth(*(CImage **)(this + 0x130));
  iVar8 = *(int *)(*(int *)(this + 0xb4) + 4);
  iVar5 = *(int *)(*(int *)(this + 0x104) + 8);
  pCVar13 = *(CImage **)(this + 0x140);
  iVar9 = *(int *)(*(int *)(this + 0x104) + 0x10);
  iVar11 = CImage::getWidth(pCVar13);
  iVar12 = CImage::getHeight(pCVar13);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(this + 0x140),
             (iVar1 / 2 + iVar8) * 0x10000 | iVar5 - iVar9 & 0xffffU,iVar11,iVar12,'\x14',false);
  *(ImageElement **)(this + 0xdc) = pIVar4;
  (*pcVar6)(piVar10,pIVar4);
  return;
}


