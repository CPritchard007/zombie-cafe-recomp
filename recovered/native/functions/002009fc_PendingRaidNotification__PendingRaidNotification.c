/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002009fc PendingRaidNotification::PendingRaidNotification */

/* PendingRaidNotification::PendingRaidNotification(PendingOrderDialog*, RaidNotification*, int) */

PendingRaidNotification * __thiscall
PendingRaidNotification::PendingRaidNotification
          (PendingRaidNotification *this,PendingOrderDialog *param_1,RaidNotification *param_2,
          int param_3)

{
  bool bVar1;
  uchar uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ImageElement *this_00;
  int iVar8;
  BitmapTextElement *pBVar9;
  CImage *pCVar10;
  ZCImageButton *this_01;
  String *pSVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar16;
  int local_1d4;
  String aSStack_1b0 [8];
  String aSStack_1a8 [8];
  String aSStack_1a0 [8];
  String aSStack_198 [8];
  String aSStack_190 [8];
  String aSStack_188 [8];
  String aSStack_180 [8];
  String aSStack_178 [8];
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  String aSStack_158 [8];
  String aSStack_150 [8];
  String aSStack_148 [8];
  String aSStack_140 [8];
  String aSStack_138 [8];
  String aSStack_130 [8];
  String aSStack_128 [8];
  String aSStack_120 [8];
  String aSStack_118 [8];
  String aSStack_110 [8];
  StringBuffer aSStack_108 [28];
  StringBuffer aSStack_ec [28];
  FriendData aFStack_d0 [80];
  CImage *local_80;
  FriendData aFStack_74 [44];
  String aSStack_48 [8];
  String aSStack_40 [44];
  
  iVar12 = DAT_00200c8c + 0x200a0c;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar12 + DAT_00200c90) + 8;
  iVar12 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar12 + 0x40);
  iVar12 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar12 + 0x50);
  iVar12 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar12 + 0x44);
  iVar12 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar12 + 0x50);
  iVar12 = CapcomApp::getInstance();
  iVar12 = *(int *)(iVar12 + 4);
  StringBuffer::StringBuffer(aSStack_108);
  StringBuffer::StringBuffer(aSStack_ec);
  String::String(aSStack_1b0);
  String::String(aSStack_1a8);
  FriendData::FriendData(aFStack_d0);
  bVar1 = false;
  for (local_1d4 = 0; local_1d4 < *(int *)(iVar12 + DAT_00200c94 + 4) + 1; local_1d4 = local_1d4 + 1
      ) {
    FriendData::FriendData
              (aFStack_74,(FriendData *)(*(int *)(iVar12 + DAT_00200c94 + 8) + local_1d4 * 0x5c));
    String::String(aSStack_1a0,aSStack_48);
    iVar13 = String::equals((String *)param_2,aSStack_1a0);
    iVar8 = 1;
    if (iVar13 == 0) {
      String::String(aSStack_198,aSStack_40);
      iVar8 = String::equals((String *)param_2,aSStack_198);
      String::~String(aSStack_198);
    }
    String::~String(aSStack_1a0);
    if (iVar8 != 0) {
      FriendData::operator=(aFStack_d0,aFStack_74);
      bVar1 = true;
    }
    FriendData::~FriendData(aFStack_74);
  }
  *(RaidNotification **)(this + 0x68) = param_2;
  *(PendingOrderDialog **)(this + 0x60) = param_1;
  if (param_2[0x18] == (RaidNotification)0x0) {
    Vector<String>::elementAt((int)aSStack_150);
    StringBuffer::append(aSStack_108,aSStack_150);
    String::~String(aSStack_150);
    String::String(aSStack_148,(String *)(param_2 + 8));
    StringBuffer::append(aSStack_108,aSStack_148);
    String::~String(aSStack_148);
    String::String(aSStack_140,(char *)(DAT_00200cac + 0x200c02));
    StringBuffer::append(aSStack_108,aSStack_140);
    String::~String(aSStack_140);
    StringBuffer::toString();
    String::operator=(aSStack_1b0,aSStack_138);
    String::~String(aSStack_138);
    String::String(aSStack_130,(char *)(DAT_00200cb0 + 0x200c30));
    String::operator=(aSStack_1a8,aSStack_130);
    pSVar11 = aSStack_130;
  }
  else {
    Vector<String>::elementAt((int)aSStack_190);
    StringBuffer::append(aSStack_108,aSStack_190);
    String::~String(aSStack_190);
    String::String(aSStack_188,(String *)(param_2 + 8));
    StringBuffer::append(aSStack_108,aSStack_188);
    String::~String(aSStack_188);
    String::String(aSStack_180,(char *)(DAT_00200c9c + 0x200b3a));
    StringBuffer::append(aSStack_108,aSStack_180);
    String::~String(aSStack_180);
    StringBuffer::toString();
    String::operator=(aSStack_1b0,aSStack_178);
    String::~String(aSStack_178);
    Vector<String>::elementAt((int)aSStack_170);
    StringBuffer::append(aSStack_ec,aSStack_170);
    String::~String(aSStack_170);
    String::valueOf((int)aSStack_168);
    StringBuffer::append(aSStack_ec,aSStack_168);
    String::~String(aSStack_168);
    Vector<String>::elementAt((int)aSStack_160);
    StringBuffer::append(aSStack_ec,aSStack_160);
    String::~String(aSStack_160);
    StringBuffer::toString();
    String::operator=(aSStack_1a8,aSStack_158);
    pSVar11 = aSStack_158;
  }
  String::~String(pSVar11);
  uVar2 = __mulsf3(uVar4,uVar5);
  bVar3 = (bool)__mulsf3(uVar6,uVar7);
  if ((bVar1) && (local_80 != (CImage *)0x0)) {
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,local_80,extraout_s0,extraout_s1,uVar2,bVar3);
    *(ImageElement **)(this + 0x6c) = this_00;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
    iVar13 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  }
  else {
    iVar13 = 0;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  String::String(aSStack_128,aSStack_1b0);
  iVar8 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(iVar8 * 4 + DAT_00201004 + 0x200cce) + 0x136) * 4 + iVar12);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_128,uVar4,0xffffffff,0,1,0,param_3 - iVar13,0,9,0,0);
  *(BitmapTextElement **)(this + 0x74) = pBVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pBVar9);
  String::~String(aSStack_128);
  (**(code **)(**(int **)(this + 0x74) + 0x14))(*(int **)(this + 0x74),iVar13,0);
  String::String(aSStack_120,aSStack_1a8);
  iVar8 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_00201008 + iVar8 * 4 + 0x200d56) + 0x136) * 4 + iVar12);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_120,uVar4,0xffffffff,0,1,0,param_3 - iVar13,0,9,0,0);
  *(BitmapTextElement **)(this + 0x78) = pBVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pBVar9);
  String::~String(aSStack_120);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),iVar13,*(undefined4 *)(*(int *)(this + 0x74) + 0x10));
  iVar13 = *(int *)(*(int *)(this + 0x74) + 0x10);
  iVar8 = *(int *)(*(int *)(this + 0x78) + 0x10);
  pCVar10 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar12 + DAT_0020100c),0xb,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\t',pCVar10,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 100) = this_01;
  uVar16 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  ImageButton::setScale
            (*(ImageButton **)(this + 100),(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  iVar13 = iVar13 + iVar8;
  (**(code **)(**(int **)(this + 100) + 0x14))(*(int **)(this + 100),0,iVar13);
  pcVar14 = *(code **)(**(int **)(this + 100) + 0x2c);
  if (param_2[0x18] == (RaidNotification)0x0) {
    Vector<String>::elementAt((int)aSStack_110);
    iVar8 = SmDev();
    iVar15 = *(int *)(this + 100);
    uVar6 = *(undefined4 *)(iVar15 + 0xc);
    uVar4 = *(undefined4 *)((*(int *)(DAT_0020101c + iVar8 * 4 + 0x200e9c) + 0x136) * 4 + iVar12);
    uVar5 = *(undefined4 *)(iVar15 + 0x10);
    pBVar9 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              (pBVar9,aSStack_110,uVar4,0xffffffff,0,0,0,uVar6,uVar5,9,0,0);
    *(BitmapTextElement **)(this + 0x70) = pBVar9;
    (*pcVar14)(iVar15,pBVar9);
    pSVar11 = aSStack_110;
  }
  else {
    Vector<String>::elementAt((int)aSStack_118);
    iVar8 = SmDev();
    iVar15 = *(int *)(this + 100);
    uVar6 = *(undefined4 *)(iVar15 + 0xc);
    uVar4 = *(undefined4 *)((*(int *)(DAT_00201014 + iVar8 * 4 + 0x200e36) + 0x136) * 4 + iVar12);
    uVar5 = *(undefined4 *)(iVar15 + 0x10);
    pBVar9 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              (pBVar9,aSStack_118,uVar4,0xffffffff,0,0,0,uVar6,uVar5,9,0,0);
    *(BitmapTextElement **)(this + 0x70) = pBVar9;
    (*pcVar14)(iVar15,pBVar9);
    pSVar11 = aSStack_118;
  }
  String::~String(pSVar11);
  *(undefined1 *)(*(int *)(this + 0x70) + 0x7f) = 0x12;
  ScreenElement::setSize
            ((ScreenElement *)this,param_3,iVar13 + *(int *)(*(int *)(this + 100) + 0x10));
  FriendData::~FriendData(aFStack_d0);
  String::~String(aSStack_1a8);
  String::~String(aSStack_1b0);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_ec);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_108);
  return this;
}


