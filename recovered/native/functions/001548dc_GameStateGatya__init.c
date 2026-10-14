/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001548dc GameStateGatya::init */

/* GameStateGatya::init() */

undefined4 __thiscall GameStateGatya::init(GameStateGatya *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ScreenElement *pSVar4;
  CImage *pCVar5;
  CImage *pCVar6;
  CImage *pCVar7;
  ConfirmDialog *this_00;
  NoticeDialog *pNVar8;
  BuyToxinDialog *this_01;
  Vector<int> *pVVar9;
  int *piVar10;
  int iVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar12;
  
  iVar2 = DAT_00154b7c;
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadGatyaImages(*(ZombieCafe **)(this + 0xc));
  iVar1 = DAT_00154b80;
  piVar10 = *(int **)(iVar2 + 0x1548fa);
  iVar11 = *piVar10;
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar11,SUB41(*(undefined4 *)(iVar1 + 0x15490c + iVar2 * 4 + 0x54),0))
  ;
  *(undefined4 *)(this + 0x30) = uVar3;
  iVar11 = *piVar10;
  iVar2 = SmDev();
  uVar3 = FontManager::addFont(iVar11,SUB41(*(undefined4 *)(iVar1 + 0x15490c + iVar2 * 4 + 0x6c),0))
  ;
  *(undefined4 *)(this + 0x34) = uVar3;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = pSVar4;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x18) = pSVar4;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x1c) = pSVar4;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x20) = pSVar4;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x24) = pSVar4;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x28) = pSVar4;
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\t',(ScreenElement *)0x0);
  iVar2 = DAT_00154b84;
  *(ScreenElement **)(this + 0x2c) = pSVar4;
  iVar1 = DAT_00154b88;
  this[iVar2] = (GameStateGatya)0x0;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  *(CImage **)(this + 0xef0) = pCVar5;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  *(CImage **)(this + DAT_00154b8c) = pCVar6;
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x10,false);
  *(CImage **)(this + DAT_00154b90) = pCVar7;
  this_00 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_00,pCVar5,pCVar6,pCVar7,0,extraout_s0,(CImage *)0x3f800000);
  iVar2 = DAT_00154b94;
  *(ConfirmDialog **)(this + DAT_00154b94) = this_00;
  (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar2),100);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),0x22,false);
  *(CImage **)(this + DAT_00154b98) = pCVar5;
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar1),8,false);
  iVar2 = DAT_00154b9c;
  *(CImage **)(this + DAT_00154b9c) = pCVar6;
  pNVar8 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(pNVar8,pCVar5,pCVar6,extraout_s0_00);
  iVar1 = DAT_00154ba0;
  *(NoticeDialog **)(this + DAT_00154ba0) = pNVar8;
  (**(code **)(*(int *)pNVar8 + 0x1c))(pNVar8,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar1),0x66);
  pNVar8 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (pNVar8,*(CImage **)(this + DAT_00154b98),*(CImage **)(this + iVar2),extraout_s0_01);
  *(NoticeDialog **)(this + 0xf00) = pNVar8;
  (**(code **)(*(int *)pNVar8 + 0x1c))(pNVar8,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xf00),0x66);
  this_01 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_01);
  *(BuyToxinDialog **)(this + 0xed0) = this_01;
  (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
  (**(code **)(**(int **)(this + 0xed0) + 0x20))(*(int **)(this + 0xed0),0);
  iVar2 = *(int *)(this + 0xed0);
  *(undefined4 *)(iVar2 + 0xb0) = *(undefined4 *)(DAT_00154ba4 + 0x154b10);
  *(GameStateGatya **)(iVar2 + 0xb4) = this;
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xed0),0x65);
  pVVar9 = (Vector<int> *)operator_new(0xc);
  Vector<int>::Vector(pVVar9);
  *(Vector<int> **)(this + 0xeb0) = pVVar9;
  pVVar9 = (Vector<int> *)operator_new(0xc);
  fVar12 = (float)Vector<int>::Vector(pVVar9);
  *(Vector<int> **)(this + DAT_00154ba8) = pVVar9;
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xc,fVar12,false);
  return 1;
}


