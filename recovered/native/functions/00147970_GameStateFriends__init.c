/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00147970 GameStateFriends::init */

/* GameStateFriends::init() */

undefined4 __thiscall GameStateFriends::init(GameStateFriends *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *pSVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  BitmapTextElement *pBVar6;
  String *this_00;
  ZCImageButton *pZVar7;
  CImage *pCVar8;
  NoticeDialog *this_01;
  InviteDialog *this_02;
  InviteContactList *this_03;
  ReferralCodeDialog *this_04;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
  
  iVar10 = DAT_00147c48 + 0x147980;
  L_PrintLog((char *)(DAT_00147c4c + 0x147982),(char *)(DAT_00147c50 + 0x147984));
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_00147c54) = 0xb;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(iVar1 + 0x44);
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  iVar11 = **(int **)(iVar10 + DAT_00147c58);
  iVar1 = SmDev();
  uVar2 = FontManager::addFont(iVar11,SUB41(*(undefined4 *)(iVar1 * 4 + DAT_00147c5c + 0x1479c8),0))
  ;
  *(undefined4 *)(this + 0x8c) = uVar2;
  pSVar3 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar3,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = pSVar3;
  pcVar9 = *(code **)(*(int *)pSVar3 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00147c60),4,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0x18) = pIVar5;
  (*pcVar9)(pSVar3,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00147c60),0x1d,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\t',true);
  *(ImageElement **)(this + 0x1c) = pIVar5;
  (*pcVar9)(piVar12,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  iVar11 = DAT_00147c64 + 0x147a68;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00147c60),0x22,false);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(iVar11 + iVar1 * 4 + 0x30);
  iVar1 = SmDev();
  uVar15 = *(undefined4 *)(iVar11 + iVar1 * 4 + 0x48);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,(uchar)uVar2,SUB41(uVar15,0));
  *(ImageElement **)(this + 0x20) = pIVar5;
  (*pcVar9)(piVar12,pIVar5);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_8c,0);
  iVar11 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00147c68 + iVar1 * 4 + 0x147ae2) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_8c,uVar2,0xffffffff,**(undefined4 **)(iVar10 + DAT_00147c6c),1,1,0x11,0,
             0);
  *(BitmapTextElement **)(this + 0x40) = pBVar6;
  (*pcVar9)(piVar12,pBVar6);
  String::~String(aSStack_8c);
  piVar12 = *(int **)(this + 0x40);
  pcVar9 = *(code **)(*piVar12 + 0x44);
  iVar1 = SmDev();
  if (iVar1 == 0) {
    Vector<String>::elementAt((int)aSStack_84);
  }
  else {
    String::String(aSStack_84,(char *)(DAT_00147c74 + 0x147b42));
  }
  (*pcVar9)(piVar12,aSStack_84);
  String::~String(aSStack_84);
  *(undefined4 *)(this + 0x44) = 0;
  StringBuffer::StringBuffer(aSStack_34);
  iVar1 = CCServer::IsConnected(*(void **)(*(int *)(this + 0xc) + DAT_00147c78));
  if (iVar1 == 0) {
    Vector<String>::elementAt((int)aSStack_7c);
    StringBuffer::append(aSStack_34,aSStack_7c);
    String::~String(aSStack_7c);
    String::String(aSStack_74,(char *)(DAT_00147c80 + 0x147b96));
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    Vector<String>::elementAt((int)aSStack_6c);
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
    piVar12 = *(int **)(this + 0x14);
    pcVar9 = *(code **)(*piVar12 + 0x2c);
    StringBuffer::toString();
    iVar11 = *(int *)(this + 0xc);
    iVar1 = SmDev();
    uVar15 = *(undefined4 *)
              ((*(int *)(&UNK_00147c46 + DAT_00147c88 + iVar1 * 4) + 0x136) * 4 + iVar11);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar10 + DAT_00147c8c));
    pBVar6 = (BitmapTextElement *)operator_new(0xc0);
    uVar19 = 1;
    uVar18 = 0;
    uVar20 = 0;
    uVar2 = __fixsfsi(uVar2);
    BitmapTextElement::BitmapTextElement
              (pBVar6,aSStack_64,uVar15,0xffffffff,uVar18,uVar19,uVar20,uVar2,0,0x12,0xf,1);
    *(BitmapTextElement **)(this + 0x44) = pBVar6;
    (*pcVar9)(piVar12,pBVar6);
    this_00 = aSStack_64;
  }
  else {
    piVar12 = *(int **)(this + 0x14);
    pcVar9 = *(code **)(*piVar12 + 0x2c);
    Vector<String>::elementAt((int)aSStack_5c);
    iVar11 = *(int *)(this + 0xc);
    iVar1 = SmDev();
    uVar15 = *(undefined4 *)((*(int *)(DAT_00148088 + iVar1 * 4 + 0x147d1a) + 0x136) * 4 + iVar11);
    iVar1 = SmDev();
    uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar10 + DAT_0014808c));
    pBVar6 = (BitmapTextElement *)operator_new(0xc0);
    uVar19 = 1;
    uVar18 = 0;
    uVar20 = 0;
    uVar2 = __fixsfsi(uVar2);
    BitmapTextElement::BitmapTextElement
              (pBVar6,aSStack_5c,uVar15,0xffffffff,uVar18,uVar19,uVar20,uVar2,0,0x12,0,0);
    *(BitmapTextElement **)(this + 0x44) = pBVar6;
    (*pcVar9)(piVar12,pBVar6);
    this_00 = aSStack_5c;
  }
  String::~String(this_00);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00148090),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x28) = pZVar7;
  (*pcVar9)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x28);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_54);
  iVar11 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00148098 + iVar1 * 4 + 0x147df8) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_54,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x48) = pBVar6;
  (*pcVar9)(piVar12,pBVar6);
  String::~String(aSStack_54);
  piVar12 = *(int **)(this + 0x28);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_4c,0);
  iVar11 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_0014809c + iVar1 * 4 + 0x147e54) + 0x136) * 4 + iVar11);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_4c,uVar2,0xffffffff,0xff000000,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x4c) = pBVar6;
  (*pcVar9)(piVar12,pBVar6);
  String::~String(aSStack_4c);
  if (*(char *)(*(int *)(this + 0xc) + DAT_001480a0) == '\0') {
    piVar12 = *(int **)(this + 0x4c);
    pcVar9 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_44);
    (*pcVar9)(piVar12,aSStack_44);
    String::~String(aSStack_44);
  }
  FUN_00145f84(*(undefined4 *)(this + 0x48),
               ((int)*(short *)(*(int *)(this + 0x28) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0x28) + 0x10) >> 1 & 0xffffU);
  piVar12 = *(int **)(this + 0x4c);
  pcVar9 = *(code **)(*piVar12 + 0x14);
  iVar11 = *(int *)(*(int *)(this + 0x28) + 0xc);
  iVar16 = *(int *)(*(int *)(this + 0x28) + 0x10);
  iVar1 = SmDev();
  uVar2 = __floatsisf((iVar16 * 3) / 2);
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar10 + DAT_001480a8)));
  uVar2 = __fixsfsi();
  (*pcVar9)(piVar12,iVar11 / 2,uVar2);
  piVar12 = *(int **)(this + 0x28);
  (**(code **)(*piVar12 + 0x18))(piVar12,piVar12[3],piVar12[4] << 1);
  iVar1 = DAT_00148090;
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00148090),8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\f',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x34) = pZVar7;
  (*pcVar9)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x34);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_3c);
  iVar16 = *(int *)(this + 0xc);
  iVar11 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_001480b0 + iVar11 * 4 + 0x147fa6) + 0x136) * 4 + iVar16);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_3c,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x50) = pBVar6;
  (*pcVar9)(piVar12,pBVar6);
  String::~String(aSStack_3c);
  (**(code **)(**(int **)(this + 0x50) + 0x14))
            (*(int **)(this + 0x50),*(int *)(*(int *)(this + 0x34) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x34) + 0x10) / 2);
  *(undefined4 *)(this + 0x80) = 0;
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),1,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x11',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x2c) = pZVar7;
  (*pcVar9)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),2,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x30) = pZVar7;
  (*pcVar9)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),5,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x24) = pZVar7;
  (*pcVar9)(piVar12,pZVar7);
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),7,false);
  *(undefined4 *)(this + 0x6c) = uVar2;
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x21,false);
  *(undefined4 *)(this + 0x70) = uVar2;
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x16,false);
  *(undefined4 *)(this + 0x84) = uVar2;
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x23,false);
  *(undefined4 *)(this + 0x88) = uVar2;
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  *(CImage **)(this + 0x60) = pCVar4;
  pCVar8 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  *(CImage **)(this + 100) = pCVar8;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_01,pCVar4,pCVar8,extraout_s0_00);
  *(NoticeDialog **)(this + 0x54) = this_01;
  (*pcVar9)(piVar12,this_01);
  (**(code **)(**(int **)(this + 0x54) + 0x1c))(*(int **)(this + 0x54),0x12);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  this_02 = (InviteDialog *)operator_new(0xd4);
  InviteDialog::InviteDialog(this_02,extraout_s0_01);
  *(InviteDialog **)(this + 0x58) = this_02;
  (*pcVar9)(piVar12,this_02);
  (**(code **)(**(int **)(this + 0x58) + 0x1c))(*(int **)(this + 0x58),0x12);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  this_03 = (InviteContactList *)operator_new(0xb4);
  InviteContactList::InviteContactList(this_03);
  *(InviteContactList **)(this + 0x5c) = this_03;
  (*pcVar9)(piVar12,this_03);
  (**(code **)(**(int **)(this + 0x5c) + 0x1c))(*(int **)(this + 0x5c),0x12);
  piVar12 = *(int **)(this + 0x14);
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  this_04 = (ReferralCodeDialog *)operator_new(0xa4);
  ReferralCodeDialog::ReferralCodeDialog(this_04);
  *(ReferralCodeDialog **)(this + 0x68) = this_04;
  (*pcVar9)(piVar12,this_04);
  (**(code **)(**(int **)(this + 0x68) + 0x1c))(*(int **)(this + 0x68),0x12);
  piVar12 = *(int **)(this + 0x20);
  iVar17 = piVar12[3];
  iVar16 = piVar12[4];
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  iVar1 = SmDev();
  iVar14 = *(int *)(this + 0x20);
  iVar13 = *(int *)(iVar14 + 0x10);
  iVar1 = *(int *)(iVar1 * 4 + *(int *)(iVar10 + DAT_00148304));
  iVar11 = SmDev();
  iVar11 = *(int *)(iVar11 * 4 + *(int *)(iVar10 + DAT_00148308));
  pSVar3 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement
            (pSVar3,iVar17 >> 1,iVar16 >> 1,iVar17 + iVar1 * -2,iVar13 + iVar11 * -2,'\x12',
             (ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x38) = pSVar3;
  (*pcVar9)(iVar14,pSVar3);
  piVar12 = *(int **)(this + 0x38);
  iVar1 = piVar12[3];
  pcVar9 = *(code **)(*piVar12 + 0x2c);
  pSVar3 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar3,0,0,iVar1,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x3c) = pSVar3;
  (*pcVar9)(piVar12,pSVar3);
  updateList(this,true);
  iVar1 = DAT_00148310;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0014830c) = 0;
  iVar11 = CCServer::IsConnected(*(void **)(*(int *)(this + 0xc) + iVar1));
  if (iVar11 == 0) {
    CCServer::ClearBanList();
  }
  else {
    CCServer::UpdateFriends
              (*(void **)((int)*(void **)(this + 0xc) + iVar1),
               *(_func_void_void_ptr **)(iVar10 + DAT_00148314),*(void **)(this + 0xc));
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return 1;
}


