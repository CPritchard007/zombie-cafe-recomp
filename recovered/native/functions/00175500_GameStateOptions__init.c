/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00175500 GameStateOptions::init */

/* GameStateOptions::init() */

undefined4 __thiscall GameStateOptions::init(GameStateOptions *this)

{
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  int iVar5;
  BitmapTextElement *pBVar6;
  Slider *pSVar7;
  ZCImageButton *pZVar8;
  NotificationOptions *this_01;
  CImage *pCVar9;
  CImage *pCVar10;
  ConfirmDialog *this_02;
  NoticeDialog *this_03;
  code *pcVar11;
  int *piVar12;
  int *piVar13;
  GameStateOptions *pGVar14;
  int iVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s0_00;
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
  
  iVar1 = DAT_001758e8 + 0x17550e;
  L_PrintLog((char *)(DAT_001758f0 + 0x175518),(char *)(DAT_001758ec + 0x175514));
  iVar5 = DAT_001758f8;
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_001758f4) = 5;
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  this[0x84] = (GameStateOptions)0x1;
  this[0xa9] = (GameStateOptions)0x0;
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x17,false);
  *(undefined4 *)(this + 0x6c) = uVar2;
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x18,false);
  *(undefined4 *)(this + 0x70) = uVar2;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar11 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),4,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x18) = pIVar4;
  (*pcVar11)(this_00,pIVar4);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001758f8),0x1d,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
  *(ImageElement **)(this + 0x1c) = pIVar4;
  (*pcVar11)(piVar12,pIVar4);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_78);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(iVar5 * 4 + DAT_00175900 + 0x175604) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  piVar13 = *(int **)(iVar1 + DAT_00175904);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_78,uVar2,0xffffffff,*piVar13,*piVar13 != 0,1,1,0x11,0);
  *(BitmapTextElement **)(this + 0x20) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_78);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_70);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_0017590c + iVar5 * 4 + 0x175694) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_70,uVar2,*piVar13,1,1,0xc,0,0);
  *(BitmapTextElement **)(this + 0x24) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_70);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_68,0);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175910 + iVar5 * 4 + 0x1756f0) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_68,uVar2,*piVar13,1,1,0x24,0,0);
  *(BitmapTextElement **)(this + 0x28) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_68);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pSVar7 = (Slider *)operator_new(0x74);
  Slider::Slider(pSVar7,*(CImage **)(this + 0x6c),*(CImage **)(this + 0x70),'\x11');
  *(Slider **)(this + 0x74) = pSVar7;
  (*pcVar11)(piVar12,pSVar7);
  Slider::setPercent(*(int *)(this + 0x74));
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_60);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175918 + iVar5 * 4 + 0x17578a) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_60,uVar2,*piVar13,1,1,0xc,0,0);
  *(BitmapTextElement **)(this + 0x2c) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_60);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_58,0);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_0017591c + iVar5 * 4 + 0x1757e6) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_58,uVar2,*piVar13,1,1,0x24,0,0);
  *(BitmapTextElement **)(this + 0x30) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_58);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pSVar7 = (Slider *)operator_new(0x74);
  Slider::Slider(pSVar7,*(CImage **)(this + 0x6c),*(CImage **)(this + 0x70),'\x11');
  *(Slider **)(this + 0x78) = pSVar7;
  (*pcVar11)(piVar12,pSVar7);
  Slider::setPercent(*(int *)(this + 0x78));
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001758f8),0x11,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x11',true);
  *(ImageElement **)(this + 0x40) = pIVar4;
  (*pcVar11)(piVar12,pIVar4);
  piVar12 = *(int **)(this + 0x40);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_50);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175928 + iVar5 * 4 + 0x1758b0) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_50,uVar2,0xffffffff,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x34) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_50);
  piVar12 = *(int **)(this + 0x40);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001758f8),0x24,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x4c) = pZVar8;
  (*pcVar11)(piVar12,pZVar8);
  piVar12 = *(int **)(this + 0x4c);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_48);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175d50 + iVar5 * 4 + 0x17599c) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_48,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x5c) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_48);
  FUN_00174ba8(*(undefined4 *)(this + 0x5c),
               ((int)*(short *)(*(int *)(this + 0x4c) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0x4c) + 0x10) >> 1 & 0xffffU);
  piVar12 = *(int **)(this + 0x34);
  iVar15 = *(int *)(*(int *)(this + 0x40) + 0xc);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar5 = __divsi3((*(int *)(*(int *)(this + 0x40) + 0x10) - piVar12[4]) -
                   *(int *)(*(int *)(this + 0x4c) + 0x10),5);
  uVar2 = __floatsisf(iVar5 << 1);
  iVar5 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar1 + DAT_00175d54)));
  uVar2 = __fixsfsi();
  (*pcVar11)(piVar12,iVar15 >> 1,uVar2);
  iVar5 = DAT_00175d58;
  (**(code **)(**(int **)(this + 0x4c) + 0x14))
            (*(int **)(this + 0x4c),*(undefined4 *)(*(int *)(this + 0x34) + 4),
             *(int *)(*(int *)(this + 0x40) + 0x10) - *(int *)(*(int *)(this + 0x34) + 8));
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x12,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x11',true);
  *(ImageElement **)(this + 0x44) = pIVar4;
  (*pcVar11)(piVar12,pIVar4);
  piVar12 = *(int **)(this + 0x44);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_40);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175d60 + iVar5 * 4 + 0x175aba) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_40,uVar2,0xffffffff,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x38) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_40);
  piVar12 = *(int **)(this + 0x44);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00175d58),0x10,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x50) = pZVar8;
  (*pcVar11)(piVar12,pZVar8);
  piVar12 = *(int **)(this + 0x50);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)aSStack_38);
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175d68 + iVar5 * 4 + 0x175b60) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_38,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x60) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_38);
  FUN_00174ba8(*(undefined4 *)(this + 0x60),
               ((int)*(short *)(*(int *)(this + 0x50) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0x50) + 0x10) >> 1 & 0xffffU);
  piVar12 = *(int **)(this + 0x38);
  iVar15 = *piVar12;
  iVar16 = *(int *)(*(int *)(this + 0x44) + 0xc);
  iVar5 = __divsi3((*(int *)(*(int *)(this + 0x44) + 0x10) - piVar12[4]) -
                   *(int *)(*(int *)(this + 0x50) + 0x10),5);
  (**(code **)(iVar15 + 0x14))(piVar12,iVar16 >> 1,iVar5 << 1);
  (**(code **)(**(int **)(this + 0x50) + 0x14))
            (*(int **)(this + 0x50),*(undefined4 *)(*(int *)(this + 0x38) + 4),
             *(int *)(*(int *)(this + 0x44) + 0x10) - *(int *)(*(int *)(this + 0x38) + 8));
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00175d58),0x12,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x11',true);
  *(ImageElement **)(this + 0x48) = pIVar4;
  (*pcVar11)(piVar12,pIVar4);
  piVar12 = *(int **)(this + 0x48);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_30,(char *)(DAT_00175d6c + 0x175c22));
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175d70 + iVar5 * 4 + 0x175c4e) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_30,uVar2,0xffffffff,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x3c) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_30);
  piVar12 = *(int **)(this + 0x48);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00175d58),0x24,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x54) = pZVar8;
  (*pcVar11)(piVar12,pZVar8);
  piVar12 = *(int **)(this + 0x54);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_28,(char *)(DAT_00175d74 + 0x175cbc));
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175d78 + iVar5 * 4 + 0x175ce8) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_28,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 100) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_28);
  piVar12 = *(int **)(this + 0x54);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_20,(char *)(DAT_00175d7c + 0x175d1a));
  iVar15 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_00175d80 + iVar5 * 4 + 0x175d46) + 0x136) * 4 + iVar15);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_20,uVar2,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x68) = pBVar6;
  (*pcVar11)(piVar12,pBVar6);
  String::~String(aSStack_20);
  FUN_00174ba8(*(undefined4 *)(this + 100),
               ((int)*(short *)(*(int *)(this + 0x54) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0x54) + 0x10) >> 1 & 0xffffU);
  FUN_00174ba8(*(undefined4 *)(this + 0x68),
               ((int)*(short *)(*(int *)(this + 0x54) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(this + 0x54) + 0x10) >> 1 & 0xffffU);
  piVar12 = *(int **)(this + 0x3c);
  iVar15 = *(int *)(*(int *)(this + 0x48) + 0xc);
  pcVar11 = *(code **)(*piVar12 + 0x14);
  iVar5 = __divsi3((*(int *)(*(int *)(this + 0x48) + 0x10) - piVar12[4]) -
                   *(int *)(*(int *)(this + 0x54) + 0x10),5);
  uVar2 = __floatsisf(iVar5 << 1);
  iVar5 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar1 + DAT_00176094)));
  uVar2 = __fixsfsi();
  (*pcVar11)(piVar12,iVar15 >> 1,uVar2);
  (**(code **)(**(int **)(this + 0x54) + 0x14))
            (*(int **)(this + 0x54),*(undefined4 *)(*(int *)(this + 0x3c) + 4),
             *(int *)(*(int *)(this + 0x48) + 0x10) - *(int *)(*(int *)(this + 0x3c) + 8));
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00176098),5,false);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x58) = pZVar8;
  (*pcVar11)(piVar12,pZVar8);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  this_01 = (NotificationOptions *)operator_new(0xe0);
  NotificationOptions::NotificationOptions(this_01);
  pGVar14 = this + 0xa4;
  *(NotificationOptions **)pGVar14 = this_01;
  (*pcVar11)(piVar12,this_01);
  (**(code **)(**(int **)pGVar14 + 0x1c))(*(int **)pGVar14,0x12);
  (**(code **)(**(int **)pGVar14 + 0x20))(*(int **)pGVar14,0);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00176098),0x22,false);
  *(CImage **)(this + 0x88) = pCVar3;
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00176098),8,false);
  *(CImage **)(this + 0x8c) = pCVar9;
  pCVar10 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00176098),0x10,false)
  ;
  *(CImage **)(this + 0x90) = pCVar10;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_02,pCVar3,pCVar9,pCVar10,0,extraout_s0,(CImage *)0x3f800000);
  *(ConfirmDialog **)(this + 0x7c) = this_02;
  (*pcVar11)(piVar12,this_02);
  (**(code **)(**(int **)(this + 0x7c) + 0x1c))(*(int **)(this + 0x7c),0x12);
  piVar12 = *(int **)(this + 0x14);
  pcVar11 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00176098),0x22,false);
  *(CImage **)(this + 0x9c) = pCVar3;
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00176098),8,false);
  *(CImage **)(this + 0xa0) = pCVar9;
  this_03 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_03,pCVar3,pCVar9,extraout_s0_00);
  *(NoticeDialog **)(this + 0x98) = this_03;
  (*pcVar11)(piVar12,this_03);
  piVar12 = *(int **)(this + 0x98);
  (**(code **)(*piVar12 + 0x1c))(piVar12,0x12);
  L_PrintLog((char *)(DAT_0017609c + 0x175f9c),(char *)(DAT_001760a0 + 0x175f9e));
  return 1;
}


