/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b8ab4 GameStateEventRaid3::init */

/* GameStateEventRaid3::init() */

undefined4 __thiscall GameStateEventRaid3::init(GameStateEventRaid3 *this)

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
  GameStateEventRaid3 *pGVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  puts((char *)(DAT_001b8b08 + 0x1b8ac2));
  *(undefined4 *)(this + 0x34) = 0;
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  iVar13 = DAT_001b8b10;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001b8b0c),false);
  *(undefined4 *)(this + 0x90) = uVar1;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x94) = uVar1;
  iVar13 = iVar13 + 0x1b8b00;
  this[0xe4] = (GameStateEventRaid3)0x0;
  this[0xea] = (GameStateEventRaid3)0x0;
  for (iVar11 = 0; iVar11 < *(int *)(*(int *)(this + 0xc) + DAT_001b8eec + 4) + 1;
      iVar11 = iVar11 + 1) {
    iVar8 = iVar11 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xec),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b8eec + 8) + iVar8) +
                              0x44));
    iVar12 = *(int *)(this + 0xf8);
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b8eec + 8) + iVar8) + 0x48);
    iVar6 = *(int *)(this + 0xfc) + 2;
    if (iVar12 < iVar6) {
      iVar12 = iVar12 * 2;
      if (iVar12 < iVar6) {
        iVar12 = iVar6;
      }
      Vector<long>::resize((Vector<long> *)(this + 0xf8),iVar12,-1);
    }
    iVar12 = *(int *)(this + 0xfc);
    *(int *)(this + 0xfc) = iVar12 + 1;
    *(undefined4 *)((iVar12 + 1) * 4 + *(int *)(this + 0x100)) = uVar1;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0x104),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b8eec + 8) + iVar8) +
                              0x4c));
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001b8eec + 8) + iVar8) + 0x40);
    iVar12 = *(int *)(this + 0x114) + 2;
    if (*(int *)(this + 0x110) < iVar12) {
      iVar6 = *(int *)(this + 0x110) * 2;
      if (iVar6 < iVar12) {
        iVar6 = iVar12;
      }
      Vector<float>::resize((Vector<float> *)(this + 0x110),iVar6,-1);
    }
    iVar12 = *(int *)(this + 0x114);
    *(int *)(this + 0x114) = iVar12 + 1;
    *(undefined4 *)((iVar12 + 1) * 4 + *(int *)(this + 0x118)) = uVar1;
  }
  makeEventRaidCafe(this);
  *(undefined4 *)(this + 0x14c) = 0;
  iVar11 = 10;
  do {
    iVar11 = iVar11 + -1;
    addEnemyZombie(this,0);
    iVar12 = DAT_001b8ef0;
  } while (iVar11 != 0);
  *(undefined4 *)(this + 0x40) = 0;
  iVar12 = **(int **)(iVar13 + iVar12);
  iVar11 = SmDev();
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(iVar11 * 4 + iVar12);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0xe5] = (GameStateEventRaid3)0x0;
  this[0x2c] = (GameStateEventRaid3)0x0;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x8c) = this_00;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x94) + 0x14),
             *(CImage **)(*(int *)(this + 0x90) + 0x28),extraout_s0);
  pGVar9 = this + 0x9c;
  *(NoticeDialog **)pGVar9 = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,0x62);
  (**(code **)(**(int **)pGVar9 + 0x1c))(*(int **)pGVar9,0x12);
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)pGVar9);
  this_02 = (HudElement *)operator_new(0x16c);
  HudElement::HudElement(this_02,*(_func_bool_void_ptr_int **)(iVar13 + DAT_001b8ef4),this,false);
  pGVar9 = this + 0x88;
  *(HudElement **)pGVar9 = this_02;
  HudElement::setButtonAvailability((int)this_02,false);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  HudElement::setButtonAvailability(*(int *)pGVar9,true);
  ScreenElement::setOrder(*(ScreenElement **)pGVar9,(int)**(char **)(iVar13 + DAT_001b8ef8));
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)pGVar9);
  HudElement::invisibleAddToxinButton(*(HudElement **)pGVar9);
  this_03 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_03,*(CImage **)(*(int *)(this + 0x94) + 0x14),
             *(CImage **)(*(int *)(this + 0x90) + 0x28),*(CImage **)(*(int *)(this + 0x90) + 0x44),0
             ,extraout_s0_00,(CImage *)0x40000000);
  pGVar9 = this + 0xa0;
  *(ConfirmDialog **)pGVar9 = this_03;
  ScreenElement::setOrder((ScreenElement *)this_03,99);
  (**(code **)(**(int **)pGVar9 + 0x1c))(*(int **)pGVar9,0x12);
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)pGVar9);
  this_04 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_04);
  pGVar9 = this + 0xa8;
  *(ObjectiveCompleteDialog **)pGVar9 = this_04;
  (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
  (**(code **)(**(int **)pGVar9 + 0x14))
            (*(int **)pGVar9,*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)pGVar9,(int)**(char **)(iVar13 + DAT_001b8efc));
  (**(code **)(**(int **)pGVar9 + 0x20))(*(int **)pGVar9,0);
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)pGVar9);
  this_05 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_05,*(ConfirmDialog **)(this + 0xa0),*(ObjectiveCompleteDialog **)pGVar9,
             *(BuyToxinDialog **)(this + 0xa4));
  *(ObjectiveDialog **)(this + 0xac) = this_05;
  (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
  (**(code **)(**(int **)(this + 0xac) + 0x14))
            (*(int **)(this + 0xac),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xac),(int)**(char **)(iVar13 + DAT_001b8f00));
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)(this + 0xac))
  ;
  this_06 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_06,*(CImage ***)(this + 0x90),'\f');
  *(MessageElement **)(this + 0x98) = this_06;
  ScreenElement::setOrder((ScreenElement *)this_06,100);
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)(this + 0x98))
  ;
  this_07 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_07);
  iVar11 = DAT_001b8f04;
  pGVar9 = this + 0xa4;
  *(BuyToxinDialog **)pGVar9 = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(iVar13 + iVar11));
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)pGVar9);
  (**(code **)(**(int **)pGVar9 + 0x1c))(*(int **)pGVar9,0x12);
  (**(code **)(**(int **)pGVar9 + 0x20))(*(int **)pGVar9,0);
  this_08 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_08,*(ConfirmDialog **)(this + 0xa0),*(BuyToxinDialog **)pGVar9);
  *(CharacterCommandBar **)(this + 0xb0) = this_08;
  CharacterCommandBar::layout(this_08);
  (**(code **)(**(int **)(this + 0xb0) + 0x1c))(*(int **)(this + 0xb0),0x11);
  iVar11 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)(this + 0xb0) + 0x14))
            (*(int **)(this + 0xb0),(iVar11 >> 0x10) - (iVar11 >> 0x1f) >> 1,(int)(short)iVar11);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xb0),(int)**(char **)(iVar13 + DAT_001b92d4));
  (**(code **)(**(int **)(this + 0x8c) + 0x2c))(*(int **)(this + 0x8c),*(undefined4 *)(this + 0xb0))
  ;
  makePlayerZombie(this);
  autoSelectPlayerZombie(this);
  *(undefined4 *)(this + 0x150) = 0;
  iVar13 = *(int *)(this + 0xc);
  if (*(int *)(this + 300) < 0) {
    *(undefined4 *)(this + 0x40) = 0;
  }
  else {
    uVar1 = __floatsisf((int)*(short *)(**(int **)(this + 0x130) + 6));
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x44));
    __divsi3((int)*(short *)(iVar13 + 0x12),3);
    uVar2 = __floatsisf();
    iVar11 = __subsf3(uVar1,uVar2);
    iVar11 = __fixsfsi(iVar11 + -0x80000000);
    *(int *)(this + 0x40) = iVar11 << 0x10;
  }
  piVar10 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar13 + DAT_001b92d8),0xe2,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,pCVar3,extraout_s0_01,extraout_s1,(uchar)DAT_001b92dc,(bool)(uchar)DAT_001b92dc)
  ;
  *(ImageElement **)(this + 0x78) = pIVar4;
  (*pcVar7)(piVar10,pIVar4);
  piVar10 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_40,(char *)(DAT_001b92e0 + 0x1b8fec));
  iVar11 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(iVar13 * 4 + DAT_001b92e4 + 0x1b9000) + 0x136) * 4 + iVar11);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_40,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xc0) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_40);
  iVar12 = *(int *)(this + 0xc0);
  iVar11 = SmDev();
  iVar13 = DAT_001b92ec;
  *(undefined4 *)(iVar12 + 0xbc) = *(undefined4 *)(DAT_001b92e8 + iVar11 * 4 + 0x1b9068);
  piVar10 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_38,(char *)(iVar13 + 0x1b9062));
  iVar11 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(iVar13 * 4 + DAT_001b92f0 + 0x1b9078) + 0x136) * 4 + iVar11);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_38,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xc4) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_38);
  iVar11 = *(int *)(this + 0xc4);
  iVar13 = SmDev();
  iVar12 = DAT_001b92f4 + 0x1b90c8;
  *(undefined4 *)(iVar11 + 0xbc) = *(undefined4 *)(iVar12 + iVar13 * 4 + 0x18);
  piVar10 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)(iVar12 + iVar13 * 4 + 0x30);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(*(int *)(this + 0x94) + 0x14),extraout_s0_02,extraout_s1_00,
             (uchar)uVar1,false);
  *(ImageElement **)(this + 0x7c) = pIVar4;
  (*pcVar7)(piVar10,pIVar4);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
  piVar10 = *(int **)(this + 0x7c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_30,(char *)(DAT_001b92f8 + 0x1b9124));
  iVar11 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_001b92fc + iVar13 * 4 + 0x1b9180) + 0x136) * 4 + iVar11);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_30,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 200) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_30);
  piVar10 = *(int **)(this + 0x7c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_28,(char *)(DAT_001b9300 + 0x1b9186));
  iVar11 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_001b9304 + iVar13 * 4 + 0x1b91e2) + 0x136) * 4 + iVar11);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_28,uVar1,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xcc) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_28);
  iVar11 = DAT_001b9308 + 0x1b91ec;
  (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
  (**(code **)(**(int **)(this + 0xcc) + 0x20))(*(int **)(this + 0xcc),0);
  piVar10 = *(int **)(this + 0x8c);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)(iVar11 + iVar13 * 4 + 0x60);
  iVar13 = SmDev();
  uVar2 = *(undefined4 *)(iVar11 + iVar13 * 4 + 0x78);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(*(int *)(this + 0x94) + 0x14),extraout_s0_03,extraout_s1_01,
             (uchar)uVar1,SUB41(uVar2,0));
  *(ImageElement **)(this + 0x80) = pIVar4;
  (*pcVar7)(piVar10,pIVar4);
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  piVar10 = *(int **)(this + 0x80);
  pcVar7 = *(code **)(*piVar10 + 0x2c);
  String::String(aSStack_20,(char *)(DAT_001b930c + 0x1b9260));
  iVar11 = *(int *)(this + 0xc);
  iVar13 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_001b9310 + iVar13 * 4 + 0x1b9284) + 0x136) * 4 + iVar11);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_20,uVar1,0xffffff92,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xd0) = pBVar5;
  (*pcVar7)(piVar10,pBVar5);
  String::~String(aSStack_20);
  piVar10 = *(int **)(this + 0xd0);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  this[0xe6] = (GameStateEventRaid3)0x0;
  this[0xe7] = (GameStateEventRaid3)0x0;
  return 1;
}


