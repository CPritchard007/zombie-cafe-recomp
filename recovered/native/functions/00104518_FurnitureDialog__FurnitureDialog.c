/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00104518 FurnitureDialog::FurnitureDialog */

/* FurnitureDialog::FurnitureDialog(FurnitureData*, CImage*, CImage*, float) */

void __thiscall
FurnitureDialog::FurnitureDialog
          (FurnitureDialog *this,FurnitureData *param_1,CImage *param_2,CImage *param_3,
          float param_4)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ScreenElement *pSVar6;
  ZCImageButton *this_00;
  Furniture *this_01;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  FurnitureDialog *pFVar14;
  int *piVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar16;
  float extraout_s1_00;
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar7 = DAT_001048e4 + 0x104528;
  local_1c = **(int **)(iVar7 + DAT_001048e8);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar7 + DAT_001048ec) + 8;
  *(undefined4 *)(this + 0xb8) = 0;
  *(FurnitureDialog **)(this + 0xbc) = this + 0xb4;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  iVar3 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar11 = __mulsf3(uVar11,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(this + 0x60) = uVar11;
  iVar3 = CapcomApp::getInstance();
  uVar11 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar11 = __mulsf3(uVar11,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(this + 100) = uVar11;
  *(undefined4 *)(this + 0x70) = 0;
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(this + 0x68) = iVar3;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f0),2,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  uVar1 = __addsf3(*(undefined4 *)(this + 0x60));
  bVar2 = (bool)__addsf3(*(undefined4 *)(this + 100));
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x74) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x74) + 0xc),
             *(int *)(*(int *)(this + 0x74) + 0x10));
  piVar8 = *(int **)(iVar7 + DAT_001048f0);
  iVar12 = *piVar8;
  iVar3 = SmDev();
  uVar11 = FontManager::addFont
                     (iVar12,SUB41(*(undefined4 *)(DAT_001048f4 + iVar3 * 4 + 0x104654),0));
  String::String(aSStack_134,(char *)(DAT_001048f8 + 0x104636));
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_134,uVar11,0xffffffff,0,1,0x11,0);
  *(ScreenElement **)(this + 0x7c) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_134);
  piVar15 = *(int **)(iVar7 + DAT_001048fc);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0x7c));
  L_PrintLog((char *)(DAT_00104900 + 0x104680),(char *)(DAT_00104904 + 0x104682));
  sprintf(acStack_11c,(char *)(DAT_00104908 + 0x104690),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(DAT_0010490c + 0x10469c),acStack_11c);
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 0x11;
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),*(int *)(*(int *)(this + 0x74) + 0xc) / 2,0x19);
  uVar9 = *(undefined4 *)(*(int *)(this + 0x74) + 0xc);
  piVar13 = *(int **)(this + 0x7c);
  __mulsf3(*(undefined4 *)(this + 100),DAT_00104910);
  uVar11 = __fixsfsi();
  (**(code **)(*piVar13 + 0x18))(piVar13,uVar9,uVar11);
  pSVar6 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar6,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x78) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),0x32,
             *(int *)(*(int *)(this + 0x7c) + 8) + *(int *)(*(int *)(this + 0x7c) + 0x10) + 10);
  (**(code **)(**(int **)(this + 0x78) + 0x18))
            (*(int **)(this + 0x78),*(int *)(*(int *)(this + 0x7c) + 0xc) + -100,3);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
  *(undefined4 *)(*(int *)(this + 0x78) + 0x18) = 0xffffffff;
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'\x12',param_3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x98) = this_00;
  uVar16 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x98),(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  *(undefined4 *)(this + 0x9c) = 0;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_00104914),0x4c,false)
  ;
  pIVar5 = (ImageElement *)operator_new(0x98);
  uVar11 = 9;
  uVar9 = 0;
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_00,extraout_s1_00,(uchar)*(undefined4 *)(this + 0x60),
             SUB41(*(undefined4 *)(this + 100),0));
  *(ImageElement **)(this + 0x90) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  piVar13 = *(int **)(this + 0x90);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  (*pcVar10)(piVar13,0x14,
             *(int *)(*(int *)(this + 0x7c) + 8) + *(int *)(*(int *)(this + 0x7c) + 0x10) +
             *(int *)(*(int *)(this + 0x78) + 0x10) + 0x14,pcVar10,uVar11,uVar9);
  iVar12 = *piVar8;
  iVar3 = SmDev();
  uVar11 = FontManager::addFont
                     (iVar12,SUB41(*(undefined4 *)(DAT_00104918 + iVar3 * 4 + 0x104816),0));
  String::String(aSStack_12c,0);
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_12c,uVar11,0xffffffff,1,1,9,0);
  *(ScreenElement **)(this + 0x80) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_12c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0x80));
  L_PrintLog((char *)(DAT_0010491c + 0x104826),(char *)(DAT_00104920 + 0x104828));
  sprintf(acStack_11c,(char *)(DAT_00104924 + 0x104836),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(DAT_00104928 + 0x104842),acStack_11c);
  String::String(aSStack_124,0);
  pSVar6 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar6,aSStack_124,uVar11,0xffffffff,0,0,9,0);
  *(ScreenElement **)(this + 0x84) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_124);
  piVar13 = *(int **)(iVar7 + DAT_001048fc);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(this + 0x84));
  L_PrintLog((char *)(DAT_0010492c + 0x10489a),(char *)(DAT_00104930 + 0x10489c));
  sprintf(acStack_11c,(char *)(DAT_00104934 + 0x1048aa),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(DAT_00104938 + 0x1048b6),acStack_11c);
  if (param_1 != (FurnitureData *)0x0) {
    pFVar14 = this + 0xa0;
    *(FurnitureData **)pFVar14 = param_1;
    this_01 = (Furniture *)operator_new(100);
    Furniture::Furniture(this_01,*(FurnitureData **)pFVar14);
    *(Furniture **)(this + 0xa4) = this_01;
    *(short *)(this + 0xb0) = (short)*(undefined4 *)(*(int *)pFVar14 + 0x24);
  }
  this[0x14] = (FurnitureDialog)0x0;
  if (local_1c != **(int **)(iVar7 + DAT_001049cc)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


