/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001acd40 GameStateEventRaid2::init */

/* GameStateEventRaid2::init() */

undefined4 __thiscall GameStateEventRaid2::init(GameStateEventRaid2 *this)

{
  undefined4 uVar1;
  ScreenElement *this_00;
  NoticeDialog *this_01;
  HudElement *this_02;
  ConfirmDialog *this_03;
  ObjectiveCompleteDialog *this_04;
  ObjectiveDialog *this_05;
  MessageElement *this_06;
  BuyToxinDialog *this_07;
  CharacterCommandBar *this_08;
  undefined4 uVar2;
  CImage *pCVar3;
  ImageElement *pIVar4;
  BitmapTextElement *pBVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  GameStateEventRaid2 *pGVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar11 = DAT_001acdbc;
  puts((char *)(DAT_001acdb8 + 0x1acd4e));
  uVar1 = ZombieCafe::getEventRaid2_Theme();
  *(undefined4 *)(this + 0x34) = uVar1;
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  iVar13 = DAT_001acdc0;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + iVar11),false);
  *(undefined4 *)(this + 0x8c) = uVar1;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x90) = uVar1;
  iVar13 = iVar13 + 0x1acd8a;
  if (*(int *)(this + 0x34) < 9) {
    uVar1 = *(undefined4 *)(DAT_001acdc8 + *(int *)(this + 0x30) * 4 + 0x1acdee);
  }
  else {
    uVar1 = *(undefined4 *)(DAT_001acdc4 + *(int *)(this + 0x30) * 4 + 0x1acdce);
  }
  *(undefined4 *)(this + 0x6c) = uVar1;
  this[0xd8] = (GameStateEventRaid2)0x0;
  this[0xde] = (GameStateEventRaid2)0x0;
  for (iVar11 = 0; iVar11 < *(int *)(*(int *)(this + 0xc) + DAT_001ad1a8 + 4) + 1;
      iVar11 = iVar11 + 1) {
    iVar8 = iVar11 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xe0),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001ad1a8 + 8) + iVar8) +
                              0x44));
    iVar12 = *(int *)(this + 0xec);
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001ad1a8 + 8) + iVar8) + 0x48);
    iVar6 = *(int *)(this + 0xf0) + 2;
    if (iVar12 < iVar6) {
      iVar12 = iVar12 * 2;
      if (iVar12 < iVar6) {
        iVar12 = iVar6;
      }
      Vector<long>::resize((Vector<long> *)(this + 0xec),iVar12,-1);
    }
    iVar12 = *(int *)(this + 0xf0);
    *(int *)(this + 0xf0) = iVar12 + 1;
    *(undefined4 *)((iVar12 + 1) * 4 + *(int *)(this + 0xf4)) = uVar1;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xf8),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001ad1a8 + 8) + iVar8) +
                              0x4c));
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001ad1a8 + 8) + iVar8) + 0x40);
    iVar12 = *(int *)(this + 0x108) + 2;
    if (*(int *)(this + 0x104) < iVar12) {
      iVar6 = *(int *)(this + 0x104) * 2;
      if (iVar6 < iVar12) {
        iVar6 = iVar12;
      }
      Vector<float>::resize((Vector<float> *)(this + 0x104),iVar6,-1);
    }
    iVar12 = *(int *)(this + 0x108);
    *(int *)(this + 0x108) = iVar12 + 1;
    *(undefined4 *)((iVar12 + 1) * 4 + *(int *)(this + 0x10c)) = uVar1;
  }
  makeEventRaidCafe(this);
  *(undefined4 *)(this + 0x140) = 0;
  iVar11 = 10;
  do {
    iVar11 = iVar11 + -1;
    addEnemyZombie(this,0);
    iVar12 = DAT_001ad1ac;
  } while (iVar11 != 0);
  *(undefined4 *)(this + 0x40) = 0;
  iVar12 = **(int **)(iVar13 + iVar12);
  iVar11 = SmDev();
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(iVar11 * 4 + iVar12);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0xd9] = (GameStateEventRaid2)0x0;
  this[0x2c] = (GameStateEventRaid2)0x0;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x88) = this_00;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x90) + 0x14),
             *(CImage **)(*(int *)(this + 0x8c) + 0x28),extraout_s0);
  pGVar9 = this + 0x98;
  *(NoticeDialog **)pGVar9 = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,0x62);
  (**(code **)(**(int **)pGVar9 + 0x1c))(*(int **)pGVar9,0x12);
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)pGVar9);
  this_02 = (HudElement *)operator_new(0x16c);
  HudElement::HudElement(this_02,*(_func_bool_void_ptr_int **)(iVar13 + DAT_001ad1b0),this,false);
  *(HudElement **)(this + 0x84) = this_02;
  HudElement::setButtonAvailability((int)this_02,false);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x84),(int)**(char **)(iVar13 + DAT_001ad1b4));
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)(this + 0x84))
  ;
  HudElement::invisibleAddToxinButton(*(HudElement **)(this + 0x84));
  this_03 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_03,*(CImage **)(*(int *)(this + 0x90) + 0x14),
             *(CImage **)(*(int *)(this + 0x8c) + 0x28),*(CImage **)(*(int *)(this + 0x8c) + 0x44),0
             ,extraout_s0_00,(CImage *)0x40000000);
  pGVar9 = this + 0x9c;
  *(ConfirmDialog **)pGVar9 = this_03;
  ScreenElement::setOrder((ScreenElement *)this_03,99);
  (**(code **)(**(int **)pGVar9 + 0x1c))(*(int **)pGVar9,0x12);
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)pGVar9);
  this_04 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_04);
  pGVar9 = this + 0xa4;
  *(ObjectiveCompleteDialog **)pGVar9 = this_04;
  (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
  (**(code **)(**(int **)pGVar9 + 0x14))
            (*(int **)pGVar9,*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)pGVar9,(int)**(char **)(iVar13 + DAT_001ad1b8));
  (**(code **)(**(int **)pGVar9 + 0x20))(*(int **)pGVar9,0);
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)pGVar9);
  this_05 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_05,*(ConfirmDialog **)(this + 0x9c),*(ObjectiveCompleteDialog **)pGVar9,
             *(BuyToxinDialog **)(this + 0xa0));
  *(ObjectiveDialog **)(this + 0xa8) = this_05;
  (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
  (**(code **)(**(int **)(this + 0xa8) + 0x14))
            (*(int **)(this + 0xa8),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xa8),(int)**(char **)(iVar13 + DAT_001ad1bc));
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)(this + 0xa8))
  ;
  this_06 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_06,*(CImage ***)(this + 0x8c),'\f');
  *(MessageElement **)(this + 0x94) = this_06;
  ScreenElement::setOrder((ScreenElement *)this_06,100);
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)(this + 0x94))
  ;
  this_07 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_07);
  iVar11 = DAT_001ad1c0;
  pGVar9 = this + 0xa0;
  *(BuyToxinDialog **)pGVar9 = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(iVar13 + iVar11));
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)pGVar9);
  (**(code **)(**(int **)pGVar9 + 0x1c))(*(int **)pGVar9,0x12);
  (**(code **)(**(int **)pGVar9 + 0x20))(*(int **)pGVar9,0);
  this_08 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_08,*(ConfirmDialog **)(this + 0x9c),*(BuyToxinDialog **)pGVar9);
  *(CharacterCommandBar **)(this + 0xac) = this_08;
  CharacterCommandBar::layout(this_08);
  (**(code **)(**(int **)(this + 0xac) + 0x1c))(*(int **)(this + 0xac),0x11);
  iVar11 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)(this + 0xac) + 0x14))
            (*(int **)(this + 0xac),(iVar11 >> 0x10) - (iVar11 >> 0x1f) >> 1,(int)(short)iVar11);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xac),(int)**(char **)(iVar13 + DAT_001ad4b0));
  (**(code **)(**(int **)(this + 0x88) + 0x2c))(*(int **)(this + 0x88),*(undefined4 *)(this + 0xac))
  ;
  makePlayerZombie(this);
  autoSelectPlayerZombie(this);
  *(undefined4 *)(this + 0x144) = 0;
  iVar11 = *(int *)(this + 0xc);
  if (*(int *)(this + 0x120) < 0) {
    *(undefined4 *)(this + 0x40) = 0;
  }
  else {
    uVar1 = __floatsisf((int)*(short *)(**(int **)(this + 0x124) + 6));
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x44));
    __divsi3((int)*(short *)(iVar11 + 0x12),3);
    uVar2 = __floatsisf();
    iVar13 = __subsf3(uVar1,uVar2);
    iVar13 = __fixsfsi(iVar13 + -0x80000000);
    *(int *)(this + 0x40) = iVar13 << 0x10;
  }
  piVar10 = *(int **)(this + 0x88);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_001ad4b4),0xe2,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,pCVar3,extraout_s0_01,extraout_s1,(uchar)DAT_001ad4b8,(bool)(uchar)DAT_001ad4b8)
  ;
  *(ImageElement **)(this + 0x78) = pIVar4;
  (*pcVar7)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x88);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_30,(char *)(DAT_001ad4bc + 0x1ad2a2));
  iVar13 = *(int *)(this + 0xc);
  iVar11 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_001ad4c0 + iVar11 * 4 + 0x1ad316) + 0x136) * 4 + iVar13);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_30,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xbc) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_30);
  iVar12 = *(int *)(this + 0xbc);
  iVar13 = SmDev();
  iVar11 = DAT_001ad4c8;
  *(undefined4 *)(iVar12 + 0xbc) = *(undefined4 *)(DAT_001ad4c4 + iVar13 * 4 + 0x1ad380);
  piVar10 = *(int **)(this + 0x88);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_28,(char *)(iVar11 + 0x1ad31a));
  iVar13 = *(int *)(this + 0xc);
  iVar11 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_001ad4cc + iVar11 * 4 + 0x1ad390) + 0x136) * 4 + iVar13);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_28,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xc0) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_28);
  iVar13 = *(int *)(this + 0xc0);
  iVar11 = SmDev();
  *(undefined4 *)(iVar13 + 0xbc) = *(undefined4 *)(DAT_001ad4d0 + iVar11 * 4 + 0x1ad3fa);
  piVar10 = *(int **)(this + 0x88);
  iVar13 = DAT_001ad4d4 + 0x1ad394;
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  iVar11 = SmDev();
  uVar1 = *(undefined4 *)(iVar13 + iVar11 * 4 + 0x10);
  iVar11 = SmDev();
  uVar2 = *(undefined4 *)(iVar13 + iVar11 * 4 + 0x28);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(*(int *)(this + 0x90) + 0x14),extraout_s0_02,extraout_s1_00,
             (uchar)uVar1,SUB41(uVar2,0));
  *(ImageElement **)(this + 0x7c) = pIVar4;
  (*pcVar7)(piVar10,pIVar4);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
  piVar10 = *(int **)(this + 0x7c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_20,(char *)(DAT_001ad4d8 + 0x1ad3ec));
  iVar13 = *(int *)(this + 0xc);
  iVar11 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_001ad4dc + iVar11 * 4 + 0x1ad440) + 0x136) * 4 + iVar13);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_20,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xc4) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_20);
  piVar10 = *(int **)(this + 0xc4);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  this[0xda] = (GameStateEventRaid2)0x0;
  this[0xdb] = (GameStateEventRaid2)0x0;
  return 1;
}


