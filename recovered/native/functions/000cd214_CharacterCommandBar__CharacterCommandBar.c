/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cd214 CharacterCommandBar::CharacterCommandBar */

/* CharacterCommandBar::CharacterCommandBar(ConfirmDialog*, BuyToxinDialog*) */

CharacterCommandBar * __thiscall
CharacterCommandBar::CharacterCommandBar
          (CharacterCommandBar *this,ConfirmDialog *param_1,BuyToxinDialog *param_2)

{
  void *__s;
  int iVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  ScreenElement *pSVar3;
  ProgressBar *this_01;
  int *piVar4;
  ZCImageButton *this_02;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float extraout_s0;
  float extraout_s1;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_000cd578 + 0xcd22c) + 8;
  *(undefined4 *)(this + 0x74) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0x7c) = __s;
  memset(__s,0,*(int *)(this + 0x74) << 2);
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(CharacterCommandBar **)(this + 0x90) = this + 0x88;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(CharacterCommandBar **)(this + 0xa4) = this + 0x9c;
  *(ConfirmDialog **)(this + 0xc4) = param_1;
  *(BuyToxinDialog **)(this + 200) = param_2;
  iVar1 = CapcomApp::getInstance();
  iVar7 = DAT_000cd580;
  iVar6 = DAT_000cd57c;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar1 + 4);
  L_PrintLog((char *)(iVar7 + 0xcd282),(char *)(iVar6 + 0xcd280));
  *(undefined2 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0xb8] = (CharacterCommandBar)0x0;
  *(undefined4 *)(this + 100) = 0;
  this[0x69] = (CharacterCommandBar)0x0;
  iVar6 = *(int *)(this + 0x60);
  if ((int)(short)*(int *)(iVar6 + 0x10) < *(int *)(iVar6 + 0x10) >> 0x10) {
    pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + DAT_000cd584),0x1a,false);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,pCVar2,'\f',true);
  }
  else {
    pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar6 + DAT_000cd584),0x1a,false);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,pCVar2,'\f',true);
  }
  *(ImageElement **)(this + 0xbc) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_28,0);
  iVar7 = *(int *)(this + 0x60);
  iVar6 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000cd588 + iVar6 * 4 + 0xcd338) + 0x136) * 4 + iVar7);
  pSVar3 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar3,aSStack_28,uVar8,0xffffffff,0,0,0xc,0,0);
  *(ScreenElement **)(this + 0x6c) = pSVar3;
  ScreenElement::addChild((ScreenElement *)this,pSVar3);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x6c) + 0x7f) = 10;
  String::String(aSStack_20,0);
  iVar7 = *(int *)(this + 0x60);
  iVar6 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_000cd58c + iVar6 * 4 + 0xcd3aa) + 0x136) * 4 + iVar7);
  pSVar3 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar3,aSStack_20,uVar8,DAT_000cd590,0,1,0xc,0,0);
  *(ScreenElement **)(this + 0x70) = pSVar3;
  ScreenElement::addChild((ScreenElement *)this,pSVar3);
  String::~String(aSStack_20);
  this_01 = (ProgressBar *)operator_new(0x84);
  ProgressBar::ProgressBar(this_01,100,100,'&','\'',-1,-1);
  *(ProgressBar **)(this + 0xb0) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  piVar4 = *(int **)(this + 0xb0);
  (**(code **)(*piVar4 + 0x1c))(piVar4,10);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_000cd584),6,false);
  this_02 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_02,'!',pCVar2,(CImage *)0x0,0,0,true);
  CapcomLinkedList<CImage*>::add
            ((CapcomLinkedList<CImage*> *)(this + 0x9c),*(CImage **)(this_02 + 0x60));
  CapcomLinkedList<ScreenElement*>::add
            ((CapcomLinkedList<ScreenElement*> *)(this + 0x88),(ScreenElement *)this_02);
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_02);
  puVar5 = (undefined4 *)operator_new(0xc);
  uVar8 = *(undefined4 *)(DAT_000cd594 + 0xcd42e);
  *puVar5 = this_02;
  puVar5[2] = this;
  puVar5[1] = uVar8;
  *(undefined4 **)(this + 0x80) = puVar5;
  ImageButton::setScale((ImageButton *)this_02,extraout_s0,extraout_s1);
  iVar7 = *(int *)(this + 0xbc);
  iVar6 = *(int *)(**(int **)(this + 0x80) + 0xc) / 2 + *(int *)(iVar7 + 0xc);
  *(int *)(this + 0xc) = iVar6;
  *(int *)(this + 0x10) = *(int *)(iVar7 + 0x10) + *(int *)(**(int **)(this + 0x80) + 0x10) / 2;
  (**(code **)(*(int *)this_02 + 0x14))(this_02,iVar6,0);
  piVar4 = *(int **)(this + 0xbc);
  (**(code **)(*piVar4 + 0x14))(piVar4,0,*(undefined4 *)(this + 0x10));
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_000cd584),0x24,false);
  *(undefined4 *)(this + 0xd0) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_000cd584),0x1d,false);
  *(undefined4 *)(this + 0xd4) = uVar8;
  iVar6 = 0xc;
  do {
    iVar7 = *(int *)(this + 0x78) + 2;
    if (*(int *)(this + 0x74) < iVar7) {
      iVar1 = *(int *)(this + 0x74) * 2;
      if (iVar1 < iVar7) {
        iVar1 = iVar7;
      }
      Vector<CommandButton*>::resize((Vector<CommandButton*> *)(this + 0x74),iVar1,-1);
    }
    iVar7 = *(int *)(this + 0x78);
    *(int *)(this + 0x78) = iVar7 + 1;
    iVar6 = iVar6 + -1;
    *(undefined4 *)((iVar7 + 1) * 4 + *(int *)(this + 0x7c)) = 0;
  } while (iVar6 != 0);
  L_PrintLog((char *)(DAT_000cd59c + 0xcd4e4),(char *)(DAT_000cd5a0 + 0xcd4e6));
  return this;
}


