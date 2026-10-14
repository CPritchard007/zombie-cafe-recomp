/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a2ee0 GameStateEventRaid::init */

/* GameStateEventRaid::init() */

undefined4 __thiscall GameStateEventRaid::init(GameStateEventRaid *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ScreenElement *this_00;
  NoticeDialog *this_01;
  HudElement *this_02;
  ConfirmDialog *this_03;
  CharacterDetails *this_04;
  CharacterEvolution *this_05;
  ObjectiveCompleteDialog *this_06;
  ObjectiveDialog *this_07;
  MessageElement *this_08;
  BuyToxinDialog *this_09;
  CharacterCommandBar *this_10;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  GameStateEventRaid *pGVar7;
  int iVar8;
  float fVar9;
  float extraout_s0;
  float extraout_s0_00;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  iVar3 = DAT_001a2f94;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001a2f90),false);
  *(undefined4 *)(this + 0x68) = uVar1;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  iVar6 = *(int *)(this + 0xc);
  *(undefined4 *)(this + 0x6c) = uVar1;
  iVar8 = DAT_001a2f98 + 0x1a2f16;
  if (*(int *)(iVar6 + iVar3) == 0) {
    iVar2 = SmDev();
    String::String(aSStack_28,(String *)(iVar2 * 8 + *(int *)(iVar8 + DAT_001a2f9c)));
    String::String(aSStack_20,*(String **)(iVar8 + DAT_001a2fa0));
    uVar1 = PackedImage::createPackedImage(aSStack_28,0,aSStack_20,0);
    *(undefined4 *)(iVar6 + iVar3) = uVar1;
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    iVar6 = *(int *)(*(int *)(this + 0xc) + iVar3);
    iVar3 = SmDev();
    if (iVar3 == 4) {
      uVar1 = 0x40000000;
    }
    else {
      uVar1 = 0x3f800000;
    }
    *(undefined4 *)(iVar6 + 0x2c) = uVar1;
    uVar1 = __divsf3(0x3f800000);
    *(undefined4 *)(iVar6 + 0x30) = uVar1;
  }
  uVar1 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0xc));
  *(undefined4 *)(this + 0x1c) = uVar1;
  this[0xb8] = (GameStateEventRaid)0x0;
  this[0xbe] = (GameStateEventRaid)0x0;
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(this + 0xc) + DAT_001a3388 + 4) + 1; iVar3 = iVar3 + 1)
  {
    iVar6 = iVar3 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xc0),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001a3388 + 8) + iVar6) +
                              0x44));
    Vector<long>::addElement
              ((Vector<long> *)(this + 0xcc),
               *(long *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001a3388 + 8) + iVar6) + 0x48)
              );
    fVar9 = (float)Vector<int>::addElement
                             ((Vector<int> *)(this + 0xd8),
                              (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_001a3388
                                                               + 8) + iVar6) + 0x4c));
    Vector<float>::addElement((Vector<float> *)(this + 0xe4),fVar9);
  }
  setEventRaidLayoutNum(this);
  makeEventRaidCafe2(this);
  addEnemyZombie(this);
  iVar3 = DAT_001a338c;
  *(undefined4 *)(this + 0x28) = 0;
  iVar6 = **(int **)(iVar8 + iVar3);
  iVar3 = SmDev();
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(iVar3 * 4 + iVar6);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  this[0xb9] = (GameStateEventRaid)0x0;
  this[0x18] = (GameStateEventRaid)0x0;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 100) = this_00;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x6c) + 0x14),
             *(CImage **)(*(int *)(this + 0x68) + 0x28),extraout_s0);
  *(NoticeDialog **)(this + 0x74) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,0x62);
  (**(code **)(**(int **)(this + 0x74) + 0x1c))(*(int **)(this + 0x74),0x12);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x74));
  this_02 = (HudElement *)operator_new(0x16c);
  HudElement::HudElement(this_02,*(_func_bool_void_ptr_int **)(iVar8 + DAT_001a3390),this,false);
  *(HudElement **)(this + 0x60) = this_02;
  HudElement::setButtonAvailability((int)this_02,false);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x60),(int)**(char **)(iVar8 + DAT_001a3394));
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x60));
  HudElement::invisibleAddToxinButton(*(HudElement **)(this + 0x60));
  this_03 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_03,*(CImage **)(*(int *)(this + 0x6c) + 0x14),
             *(CImage **)(*(int *)(this + 0x68) + 0x28),*(CImage **)(*(int *)(this + 0x68) + 0x44),0
             ,extraout_s0_00,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x78) = this_03;
  ScreenElement::setOrder((ScreenElement *)this_03,99);
  (**(code **)(**(int **)(this + 0x78) + 0x1c))(*(int **)(this + 0x78),0x12);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x78));
  this_04 = (CharacterDetails *)operator_new(0x194);
  CharacterDetails::CharacterDetails
            (this_04,(Vector *)(*(int *)(this + 0xc) + DAT_001a3388),false,
             *(ConfirmDialog **)(this + 0x78),(NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x02',false)
  ;
  pGVar7 = this + 0x90;
  *(CharacterDetails **)pGVar7 = this_04;
  (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)pGVar7 + 0x14))
            (*(int **)pGVar7,(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3 / 2);
  (**(code **)(**(int **)pGVar7 + 0x20))(*(int **)pGVar7,0);
  pcVar5 = *(char **)(iVar8 + DAT_001a3398);
  ScreenElement::setOrder(*(ScreenElement **)pGVar7,(int)*pcVar5);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)pGVar7);
  this_05 = (CharacterEvolution *)operator_new(0xf4);
  CharacterEvolution::CharacterEvolution
            (this_05,(Vector *)(*(int *)(this + 0xc) + DAT_001a3388),false,
             *(ConfirmDialog **)(this + 0x78),(NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x02',false)
  ;
  pGVar7 = this + 0x94;
  *(CharacterEvolution **)pGVar7 = this_05;
  (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)pGVar7 + 0x14))
            (*(int **)pGVar7,(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3 / 2);
  (**(code **)(**(int **)pGVar7 + 0x20))(*(int **)pGVar7,0);
  ScreenElement::setOrder(*(ScreenElement **)pGVar7,(int)*pcVar5);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)pGVar7);
  this_06 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_06);
  *(ObjectiveCompleteDialog **)(this + 0x80) = this_06;
  (**(code **)(*(int *)this_06 + 0x1c))(this_06,0x12);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x80),(int)**(char **)(iVar8 + DAT_001a339c));
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x80));
  this_07 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_07,*(ConfirmDialog **)(this + 0x78),*(ObjectiveCompleteDialog **)(this + 0x80),
             *(BuyToxinDialog **)(this + 0x7c));
  *(ObjectiveDialog **)(this + 0x84) = this_07;
  (**(code **)(*(int *)this_07 + 0x1c))(this_07,0x12);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x84),(int)**(char **)(iVar8 + DAT_001a33a0));
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x84));
  this_08 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_08,*(CImage ***)(this + 0x68),'\f');
  *(MessageElement **)(this + 0x70) = this_08;
  ScreenElement::setOrder((ScreenElement *)this_08,100);
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x70));
  this_09 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_09);
  iVar3 = DAT_001a33a4;
  *(BuyToxinDialog **)(this + 0x7c) = this_09;
  ScreenElement::setOrder((ScreenElement *)this_09,(int)**(char **)(iVar8 + iVar3));
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)(this + 0x7c));
  (**(code **)(**(int **)(this + 0x7c) + 0x1c))(*(int **)(this + 0x7c),0x12);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
  this_10 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_10,*(ConfirmDialog **)(this + 0x78),*(BuyToxinDialog **)(this + 0x7c));
  iVar3 = DAT_001a34b0;
  pGVar7 = this + 0x88;
  *(CharacterCommandBar **)pGVar7 = this_10;
  uVar1 = CharacterCommandBar::addHealButton
                    (this_10,*(_func_void_void_ptr_ScreenElement_ptr **)(iVar8 + iVar3),this);
  *(undefined4 *)(this + 0x8c) = uVar1;
  CharacterCommandBar::layout(*(CharacterCommandBar **)pGVar7);
  (**(code **)(**(int **)pGVar7 + 0x1c))(*(int **)pGVar7,0x11);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)pGVar7 + 0x14))
            (*(int **)pGVar7,(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3);
  ScreenElement::setOrder(*(ScreenElement **)pGVar7,(int)**(char **)(iVar8 + DAT_001a34b4));
  (**(code **)(**(int **)(this + 100) + 0x2c))(*(int **)(this + 100),*(undefined4 *)pGVar7);
  makePlayerZombie(this);
  autoSelectPlayerZombie(this);
  *(undefined4 *)(this + 0x124) = 0;
  if (*(int *)(this + 0x100) < 0) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  else {
    uVar1 = __floatsisf((int)*(short *)(**(int **)(this + 0x104) + 6));
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x2c));
    __divsi3((int)*(short *)(*(int *)(this + 0xc) + 0x12),3);
    uVar4 = __floatsisf();
    iVar3 = __subsf3(uVar1,uVar4);
    iVar3 = __fixsfsi(iVar3 + -0x80000000);
    *(int *)(this + 0x28) = iVar3 << 0x10;
  }
  this[0xba] = (GameStateEventRaid)0x0;
  this[0xbb] = (GameStateEventRaid)0x0;
  return 1;
}


