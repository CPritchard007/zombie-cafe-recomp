/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c566c GameStatePrizeMenu::init */

/* GameStatePrizeMenu::init() */

undefined4 __thiscall GameStatePrizeMenu::init(GameStatePrizeMenu *this)

{
  undefined4 uVar1;
  int iVar2;
  ScreenElement *this_00;
  ImageElement *pIVar3;
  CImage *pCVar4;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  NoticeDialog *this_01;
  ConfirmDialog *this_02;
  Vector *pVVar7;
  void *__s;
  PrizeMenuDialog *this_03;
  int iVar8;
  int *piVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  code *local_2c;
  CImage *local_28;
  int local_24;
  String aSStack_20 [12];
  
  uVar1 = ZombieCafe::getEventRaid2_Theme();
  *(undefined4 *)(this + 100) = uVar1;
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadPrizeMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  LoadCafe();
  iVar8 = **(int **)(DAT_001c5a48 + 0x1c56aa);
  iVar2 = SmDev();
  uVar1 = FontManager::addFont(iVar8,SUB41(*(undefined4 *)(DAT_001c5a4c + iVar2 * 4 + 0x1c571a),0));
  *(undefined4 *)(this + 0x48) = uVar1;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x18) = this_00;
  local_2c = *(code **)(*(int *)this_00 + 0x2c);
  local_28 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c5a50),2,false);
  iVar2 = SmDev();
  local_24 = *(undefined4 *)(DAT_001c5a54 + iVar2 * 4 + 0x1c570e);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,local_28,extraout_s0,extraout_s1,(uchar)local_24,false);
  *(ImageElement **)(this + 0x20) = pIVar3;
  (*local_2c)(this_00,pIVar3);
  piVar9 = *(int **)(this + 0x18);
  local_2c = *(code **)(*piVar9 + 0x2c);
  iVar8 = DAT_001c5a58 + 0x1c573c;
  local_28 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c5a50),0x34,false);
  iVar2 = SmDev();
  local_24 = *(undefined4 *)(iVar8 + iVar2 * 4 + 0x24);
  iVar2 = SmDev();
  uVar1 = *(undefined4 *)(iVar8 + iVar2 * 4 + 0x24);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,local_28,extraout_s0_00,extraout_s1_00,(uchar)local_24,SUB41(uVar1,0));
  *(ImageElement **)(this + 0x28) = pIVar3;
  (*local_2c)(piVar9,pIVar3);
  piVar9 = *(int **)(this + 0x18);
  local_2c = *(code **)(*piVar9 + 0x2c);
  iVar8 = DAT_001c5a5c + 0x1c5792;
  local_28 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c5a60),0,false);
  iVar2 = SmDev();
  local_24 = *(undefined4 *)(iVar8 + iVar2 * 4 + 0x3c);
  iVar2 = SmDev();
  uVar1 = *(undefined4 *)(iVar8 + iVar2 * 4 + 0x3c);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,local_28,extraout_s0_01,extraout_s1_01,(uchar)local_24,SUB41(uVar1,0));
  *(ImageElement **)(this + 0x24) = pIVar3;
  uVar10 = (*local_2c)(piVar9,pIVar3);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x24),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar9 = *(int **)(this + 0x18);
  local_2c = *(code **)(*piVar9 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c5a50),3,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x44) = pZVar5;
  (*local_2c)(piVar9,pZVar5);
  piVar9 = *(int **)(this + 0x18);
  local_2c = *(code **)(*piVar9 + 0x2c);
  local_28 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001c5a64),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x06',local_28,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x40) = pZVar5;
  (*local_2c)(piVar9,pZVar5);
  local_2c = *(code **)(**(int **)(this + 0x40) + 0x2c);
  String::String(aSStack_20,(char *)(DAT_001c5a68 + 0x1c5868));
  iVar8 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  local_28 = *(CImage **)((*(int *)(DAT_001c5a6c + iVar2 * 4 + 0x1c58d0) + 0x136) * 4 + iVar8);
  iVar2 = *(int *)(this + 0x40);
  local_24 = *(undefined4 *)(iVar2 + 0x10);
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  local_38 = 0;
  local_34 = 0;
  local_3c = 9;
  local_40 = local_24;
  local_44 = uVar1;
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_20,local_28,0xffffffff,0,0,0);
  *(BitmapTextElement **)(this + 0x58) = pBVar6;
  (*local_2c)(iVar2,pBVar6);
  String::~String(aSStack_20);
  iVar2 = DAT_001c5a64;
  *(undefined1 *)(*(int *)(this + 0x58) + 0x7f) = 0x12;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),false);
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar1 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x2c) = uVar1;
  this_01 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_01,*(CImage **)(*(int *)(this + 0x2c) + 0x14),
             *(CImage **)(*(int *)(this + 0x30) + 0x28),extraout_s0_02);
  *(NoticeDialog **)(this + 0x34) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,100);
  (**(code **)(**(int **)(this + 0x34) + 0x1c))(*(int **)(this + 0x34),0x12);
  (**(code **)(**(int **)(this + 0x18) + 0x2c))(*(int **)(this + 0x18),*(undefined4 *)(this + 0x34))
  ;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_02,*(CImage **)(*(int *)(this + 0x2c) + 0x14),
             *(CImage **)(*(int *)(this + 0x30) + 0x28),*(CImage **)(*(int *)(this + 0x30) + 0x44),0
             ,extraout_s0_03,(CImage *)0x40000000);
  *(ConfirmDialog **)(this + 0x38) = this_02;
  ScreenElement::setOrder((ScreenElement *)this_02,99);
  (**(code **)(**(int **)(this + 0x38) + 0x1c))(*(int **)(this + 0x38),0x12);
  (**(code **)(**(int **)(this + 0x18) + 0x2c))(*(int **)(this + 0x18),*(undefined4 *)(this + 0x38))
  ;
  pVVar7 = (Vector *)operator_new(0xc);
  *(undefined4 *)pVVar7 = 10;
  __s = operator_new__(0x140);
  iVar2 = DAT_001c5a70;
  *(void **)(pVVar7 + 8) = __s;
  memset(__s,0,*(int *)pVVar7 << 5);
  iVar2 = *(int *)(iVar2 + 0x1c598a);
  *(undefined4 *)(pVVar7 + 4) = 0xffffffff;
  local_24 = 0;
  do {
    local_2c = *(code **)(*(int *)(this + 100) * 4 + iVar2);
    local_28 = (CImage *)((int)local_2c + local_24);
    local_30 = &local_44;
    local_44 = *(undefined4 *)((int)local_28 + 0x18);
    local_40 = *(undefined4 *)((int)local_28 + 0x1c);
    Vector<PrizeItemStatus>::addElement
              (pVVar7,*(undefined4 *)((int)local_2c + local_24),*(undefined4 *)((int)local_28 + 4),
               *(undefined4 *)((int)local_28 + 8),*(undefined4 *)((int)local_28 + 0xc),
               *(undefined4 *)((int)local_28 + 0x10),*(undefined4 *)((int)local_28 + 0x14));
    local_24 = local_24 + 0x20;
  } while (local_24 != 0x3e0);
  this_03 = (PrizeMenuDialog *)operator_new(0xb0);
  PrizeMenuDialog::PrizeMenuDialog(this_03,this,pVVar7,*(ConfirmDialog **)(this + 0x38));
  *(PrizeMenuDialog **)(this + 0x3c) = this_03;
  ScreenElement::setOrder((ScreenElement *)this_03,3);
  (**(code **)(**(int **)(this + 0x3c) + 0x1c))(*(int **)(this + 0x3c),0x12);
  (**(code **)(**(int **)(this + 0x18) + 0x2c))(*(int **)(this + 0x18),*(undefined4 *)(this + 0x3c))
  ;
  (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),1);
  PrizeMenuDialog::show(*(PrizeMenuDialog **)(this + 0x3c));
  return 1;
}


