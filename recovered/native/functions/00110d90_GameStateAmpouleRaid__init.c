/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00110d90 GameStateAmpouleRaid::init */

/* GameStateAmpouleRaid::init() */

undefined4 __thiscall GameStateAmpouleRaid::init(GameStateAmpouleRaid *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ScreenElement *this_00;
  NoticeDialog *this_01;
  HudElement *this_02;
  ConfirmDialog *this_03;
  CharacterDetails *this_04;
  ObjectiveCompleteDialog *this_05;
  ObjectiveDialog *this_06;
  MessageElement *this_07;
  BuyToxinDialog *this_08;
  CharacterCommandBar *this_09;
  undefined4 uVar4;
  CImage *pCVar5;
  FurnitureDialog *this_10;
  code *pcVar6;
  int iVar7;
  GameStateAmpouleRaid *pGVar8;
  int iVar9;
  int iVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00110e34),false);
  *(undefined4 *)(this + 0x70) = uVar1;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  iVar3 = DAT_00110e38;
  iVar9 = *(int *)(this + 0xc);
  *(undefined4 *)(this + 0x74) = uVar1;
  iVar10 = DAT_00110e3c + 0x110dc8;
  if (*(int *)(iVar9 + iVar3) == 0) {
    iVar2 = SmDev();
    String::String(aSStack_28,(String *)(iVar2 * 8 + *(int *)(iVar10 + DAT_00110e40)));
    String::String(aSStack_20,*(String **)(iVar10 + DAT_00110e44));
    uVar1 = PackedImage::createPackedImage(aSStack_28,0,aSStack_20,0);
    *(undefined4 *)(iVar9 + iVar3) = uVar1;
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    iVar9 = *(int *)(*(int *)(this + 0xc) + iVar3);
    iVar3 = SmDev();
    if (iVar3 == 4) {
      uVar1 = 0x40000000;
    }
    else {
      uVar1 = 0x3f800000;
    }
    *(undefined4 *)(iVar9 + 0x2c) = uVar1;
    uVar1 = __divsf3(0x3f800000);
    *(undefined4 *)(iVar9 + 0x30) = uVar1;
  }
  this[0xbc] = (GameStateAmpouleRaid)0x0;
  this[0xc2] = (GameStateAmpouleRaid)0x0;
  for (iVar3 = 0; iVar3 < *(int *)(*(int *)(this + 0xc) + DAT_0011121c + 4) + 1; iVar3 = iVar3 + 1)
  {
    iVar7 = iVar3 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xc4),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0011121c + 8) + iVar7) +
                              0x44));
    iVar9 = *(int *)(this + 0xd0);
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0011121c + 8) + iVar7) + 0x48);
    iVar2 = *(int *)(this + 0xd4) + 2;
    if (iVar9 < iVar2) {
      iVar9 = iVar9 * 2;
      if (iVar9 < iVar2) {
        iVar9 = iVar2;
      }
      Vector<long>::resize((Vector<long> *)(this + 0xd0),iVar9,-1);
    }
    iVar9 = DAT_0011121c;
    iVar2 = *(int *)(this + 0xd4);
    *(int *)(this + 0xd4) = iVar2 + 1;
    *(undefined4 *)((iVar2 + 1) * 4 + *(int *)(this + 0xd8)) = uVar1;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xdc),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + iVar9 + 8) + iVar7) + 0x4c))
    ;
    iVar9 = *(int *)(this + 0xe8);
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_0011121c + 8) + iVar7) + 0x40);
    iVar2 = *(int *)(this + 0xec) + 2;
    if (iVar9 < iVar2) {
      iVar9 = iVar9 * 2;
      if (iVar9 < iVar2) {
        iVar9 = iVar2;
      }
      Vector<float>::resize((Vector<float> *)(this + 0xe8),iVar9,-1);
    }
    iVar9 = *(int *)(this + 0xec);
    *(int *)(this + 0xec) = iVar9 + 1;
    *(undefined4 *)((iVar9 + 1) * 4 + *(int *)(this + 0xf0)) = uVar1;
  }
  makeAmpouleRaidCafe2(this);
  addEnemyZombie();
  iVar3 = DAT_00111220;
  *(undefined4 *)(this + 0x30) = 0;
  iVar9 = **(int **)(iVar10 + iVar3);
  iVar3 = SmDev();
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(iVar3 * 4 + iVar9);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0xbd] = (GameStateAmpouleRaid)0x0;
  this[0x20] = (GameStateAmpouleRaid)0x0;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x6c) = this_00;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x74) + 0x14),
             *(CImage **)(*(int *)(this + 0x70) + 0x28),extraout_s0);
  *(NoticeDialog **)(this + 0x7c) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,0x62);
  (**(code **)(**(int **)(this + 0x7c) + 0x1c))(*(int **)(this + 0x7c),0x12);
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x7c))
  ;
  this_02 = (HudElement *)operator_new(0x16c);
  HudElement::HudElement(this_02,*(_func_bool_void_ptr_int **)(iVar10 + DAT_00111224),this,false);
  *(HudElement **)(this + 0x68) = this_02;
  HudElement::setButtonAvailability((int)this_02,false);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x68),(int)**(char **)(iVar10 + DAT_00111228));
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x68))
  ;
  HudElement::invisibleAddToxinButton(*(HudElement **)(this + 0x68));
  this_03 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_03,*(CImage **)(*(int *)(this + 0x74) + 0x14),
             *(CImage **)(*(int *)(this + 0x70) + 0x28),*(CImage **)(*(int *)(this + 0x70) + 0x44),0
             ,extraout_s0_00,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x80) = this_03;
  ScreenElement::setOrder((ScreenElement *)this_03,99);
  (**(code **)(**(int **)(this + 0x80) + 0x1c))(*(int **)(this + 0x80),0x12);
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x80))
  ;
  this_04 = (CharacterDetails *)operator_new(0x194);
  CharacterDetails::CharacterDetails
            (this_04,(Vector *)(*(int *)(this + 0xc) + DAT_0011121c),false,
             *(ConfirmDialog **)(this + 0x80),(NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x02',false)
  ;
  pGVar8 = this + 0x98;
  *(CharacterDetails **)pGVar8 = this_04;
  (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)pGVar8 + 0x14))
            (*(int **)pGVar8,(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3 / 2);
  (**(code **)(**(int **)pGVar8 + 0x20))(*(int **)pGVar8,0);
  ScreenElement::setOrder(*(ScreenElement **)pGVar8,(int)**(char **)(iVar10 + DAT_0011122c));
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)pGVar8);
  this_05 = (ObjectiveCompleteDialog *)operator_new(0xb4);
  ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_05);
  pGVar8 = this + 0x88;
  *(ObjectiveCompleteDialog **)pGVar8 = this_05;
  (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
  (**(code **)(**(int **)pGVar8 + 0x14))
            (*(int **)pGVar8,*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)pGVar8,(int)**(char **)(iVar10 + DAT_00111230));
  (**(code **)(**(int **)pGVar8 + 0x20))(*(int **)pGVar8,0);
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)pGVar8);
  this_06 = (ObjectiveDialog *)operator_new(0x16c);
  ObjectiveDialog::ObjectiveDialog
            (this_06,*(ConfirmDialog **)(this + 0x80),*(ObjectiveCompleteDialog **)pGVar8,
             *(BuyToxinDialog **)(this + 0x84));
  *(ObjectiveDialog **)(this + 0x8c) = this_06;
  (**(code **)(*(int *)this_06 + 0x1c))(this_06,0x12);
  (**(code **)(**(int **)(this + 0x8c) + 0x14))
            (*(int **)(this + 0x8c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x8c),(int)**(char **)(iVar10 + DAT_00111234));
  (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x8c))
  ;
  this_07 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_07,*(CImage ***)(this + 0x70),'\f');
  *(MessageElement **)(this + 0x78) = this_07;
  ScreenElement::setOrder((ScreenElement *)this_07,100);
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x78))
  ;
  this_08 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_08);
  iVar3 = DAT_00111238;
  *(BuyToxinDialog **)(this + 0x84) = this_08;
  ScreenElement::setOrder((ScreenElement *)this_08,(int)**(char **)(iVar10 + iVar3));
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x84))
  ;
  (**(code **)(**(int **)(this + 0x84) + 0x1c))(*(int **)(this + 0x84),0x12);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  this_09 = (CharacterCommandBar *)operator_new(0xd8);
  CharacterCommandBar::CharacterCommandBar
            (this_09,*(ConfirmDialog **)(this + 0x80),*(BuyToxinDialog **)(this + 0x84));
  iVar3 = DAT_0011139c;
  pGVar8 = this + 0x90;
  *(CharacterCommandBar **)pGVar8 = this_09;
  uVar1 = CharacterCommandBar::addHealButton
                    (this_09,*(_func_void_void_ptr_ScreenElement_ptr **)(iVar10 + iVar3),this);
  *(undefined4 *)(this + 0x94) = uVar1;
  CharacterCommandBar::layout(*(CharacterCommandBar **)pGVar8);
  (**(code **)(**(int **)pGVar8 + 0x1c))(*(int **)pGVar8,0x11);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)pGVar8 + 0x14))
            (*(int **)pGVar8,(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3);
  ScreenElement::setOrder(*(ScreenElement **)pGVar8,(int)**(char **)(iVar10 + DAT_001113a0));
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)pGVar8);
  makePlayerZombie(this);
  autoSelectPlayerZombie(this);
  *(undefined4 *)(this + 0x128) = 0;
  if (*(int *)(this + 0x104) < 0) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  else {
    uVar1 = __floatsisf((int)*(short *)(**(int **)(this + 0x108) + 6));
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x34));
    __divsi3((int)*(short *)(*(int *)(this + 0xc) + 0x12),3);
    uVar4 = __floatsisf();
    iVar3 = __subsf3(uVar1,uVar4);
    iVar3 = __fixsfsi(iVar3 + -0x80000000);
    *(int *)(this + 0x30) = iVar3 << 0x10;
  }
  this[0xbe] = (GameStateAmpouleRaid)0x0;
  this[0xbf] = (GameStateAmpouleRaid)0x0;
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),2,false);
  this_10 = (FurnitureDialog *)operator_new(0xcc);
  uVar1 = 0x3f800000;
  FurnitureDialog::FurnitureDialog
            (this_10,(FurnitureData *)0x0,pCVar5,*(CImage **)(*(int *)(this + 0x70) + 0x28),
             extraout_s0_01);
  *(FurnitureDialog **)(this + 0x18) = this_10;
  (**(code **)(*(int *)this_10 + 0x1c))(this_10,0x12);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x10);
  pcVar6 = *(code **)(**(int **)(this + 0x18) + 0x14);
  (*pcVar6)(*(int **)(this + 0x18),(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3 / 2,
            pcVar6,uVar1);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x18),(int)**(char **)(iVar10 + DAT_001113a4));
  (**(code **)(**(int **)(this + 0x6c) + 0x2c))(*(int **)(this + 0x6c),*(undefined4 *)(this + 0x18))
  ;
  return 1;
}


