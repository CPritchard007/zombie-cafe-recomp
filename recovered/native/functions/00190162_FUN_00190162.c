/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190162 FUN_00190162 */

void FUN_00190162(void)

{
  CImage *pCVar1;
  ImageElement *pIVar2;
  ZCImageButton *pZVar3;
  int iVar4;
  BitmapTextElement *pBVar5;
  TrueTypeTextElement *pTVar6;
  NoticeDialog *this;
  ConfirmDialog *this_00;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_r4;
  int *piVar11;
  int *piVar12;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  code *in_stack_00000024;
  int in_stack_00000034;
  int in_stack_00000194;
  
  *(undefined4 *)(unaff_r5 + 0x1c) = unaff_r6;
  (*in_stack_00000024)(unaff_r4,unaff_r6);
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + unaff_r7),0x22,false);
  pIVar2 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar2,pCVar1,extraout_s0,extraout_s1,(uchar)DAT_00190310,false);
  *(ImageElement **)(unaff_r5 + 0x24) = pIVar2;
  (*pcVar8)(piVar11,pIVar2);
  (**(code **)(**(int **)(unaff_r5 + 0x24) + 0x20))(*(int **)(unaff_r5 + 0x24),0);
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190304),0x30,false);
  pIVar2 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar2,pCVar1,'\x12',true);
  *(ImageElement **)(unaff_r5 + 0x20) = pIVar2;
  (*pcVar8)(piVar11,pIVar2);
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190304),3,false)
  ;
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'$',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x44) = pZVar3;
  (*pcVar8)(piVar11,pZVar3);
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190314),10,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x3c) = pZVar3;
  (*pcVar8)(piVar11,pZVar3);
  iVar4 = SmDev();
  if ((iVar4 != 4) && (iVar4 = SmDev(), iVar4 != 3)) {
    FUN_00190b20();
  }
  pcVar8 = *(code **)(**(int **)(unaff_r5 + 0x3c) + 0x2c);
  String::String((String *)&stack0x0000003c,(char *)(DAT_00190318 + 0x19027e));
  iVar4 = *(int *)(unaff_r5 + 0x3c);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  uVar7 = *(undefined4 *)(iVar4 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0019031c);
  uVar9 = __floatsisf(uVar9);
  __mulsf3(uVar9,DAT_00190320);
  __fixsfsi();
  uVar9 = __floatsisf(uVar7);
  __mulsf3(uVar9,DAT_00190320);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar5,&stack0x0000003c,uVar10,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x90) = pBVar5;
  (*pcVar8)(iVar4,pBVar5);
  String::~String((String *)&stack0x0000003c);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x90) + 0x7f) = 0x12;
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190728),10,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x40) = pZVar3;
  (*pcVar8)(piVar11,pZVar3);
  pcVar8 = *(code **)(**(int **)(unaff_r5 + 0x40) + 0x2c);
  String::String((String *)&stack0x0000004c,(char *)(DAT_0019072c + 0x19038c));
  iVar4 = *(int *)(unaff_r5 + 0x40);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  uVar7 = *(undefined4 *)(iVar4 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190730);
  uVar9 = __floatsisf(uVar9);
  __mulsf3(uVar9,DAT_00190734);
  __fixsfsi();
  uVar9 = __floatsisf(uVar7);
  __mulsf3(uVar9,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar5,&stack0x0000004c,uVar10,0xffffffff);
  *(int *)(unaff_r5 + 0x94) = (int)pBVar5;
  (*pcVar8)(iVar4,pBVar5);
  String::~String((String *)&stack0x0000004c);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x94) + 0x7f) = 0x12;
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190738),0x31,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x48) = pZVar3;
  (*pcVar8)(piVar11,pZVar3);
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190728),10,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x4c) = pZVar3;
  (*pcVar8)(piVar11,pZVar3);
  pcVar8 = *(code **)(**(int **)(unaff_r5 + 0x4c) + 0x2c);
  String::String((String *)&stack0x00000054,(char *)(DAT_0019073c + 0x19048e));
  iVar4 = *(int *)(unaff_r5 + 0x4c);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  uVar7 = *(undefined4 *)(iVar4 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190730);
  uVar9 = __floatsisf(uVar9);
  __mulsf3(uVar9,DAT_00190734);
  __fixsfsi();
  uVar9 = __floatsisf(uVar7);
  __mulsf3(uVar9,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar5,&stack0x00000054,uVar10,0xffffffff);
  *(int *)(unaff_r5 + 0x98) = (int)pBVar5;
  (*pcVar8)(iVar4,pBVar5);
  String::~String((String *)&stack0x00000054);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x98) + 0x7f) = 0x12;
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190728),10,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar3,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x50) = pZVar3;
  (*pcVar8)(piVar11,pZVar3);
  pcVar8 = *(code **)(**(int **)(unaff_r5 + 0x50) + 0x2c);
  String::String((String *)&stack0x0000005c,(char *)(DAT_00190740 + 0x190554));
  iVar4 = *(int *)(unaff_r5 + 0x50);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  uVar7 = *(undefined4 *)(iVar4 + 0x10);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190730);
  uVar9 = __floatsisf(uVar9);
  __mulsf3(uVar9,DAT_00190734);
  __fixsfsi();
  uVar9 = __floatsisf(uVar7);
  __mulsf3(uVar9,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar5,&stack0x0000005c,uVar10,0xffffffff);
  *(int *)(unaff_r5 + 0x9c) = (int)pBVar5;
  (*pcVar8)(iVar4,pBVar5);
  String::~String((String *)&stack0x0000005c);
  iVar4 = DAT_00190744;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x9c) + 0x7f) = 0x12;
  piVar11 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String((String *)&stack0x00000064,(char *)(iVar4 + 0x1905da));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000064,*(undefined4 *)(unaff_r5 + 0x74),0xff000000);
  *(TrueTypeTextElement **)(unaff_r5 + 0x8c) = pTVar6;
  (*pcVar8)(piVar11,pTVar6);
  String::~String((String *)&stack0x00000064);
  iVar4 = DAT_0019074c;
  piVar12 = *(int **)(in_stack_00000034 + DAT_00190748);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(unaff_r5 + 0x8c));
  L_PrintLog((char *)(iVar4 + 0x190630),(char *)(DAT_00190750 + 0x190634));
  sprintf(&stack0x00000094,(char *)(DAT_00190754 + 0x190642),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x190630),&stack0x00000094);
  piVar11 = *(int **)(unaff_r5 + 0x8c);
  (**(code **)(*piVar11 + 0x20))(piVar11,0);
  piVar11 = *(int **)(unaff_r5 + 0x24);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String((String *)&stack0x0000006c,(char *)(DAT_00190758 + 0x190664));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x0000006c,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x84) = pTVar6;
  (*pcVar8)(piVar11,pTVar6);
  String::~String((String *)&stack0x0000006c);
  iVar4 = DAT_0019075c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(unaff_r5 + 0x84));
  L_PrintLog((char *)(iVar4 + 0x1906b4),(char *)(DAT_00190760 + 0x1906b8));
  sprintf(&stack0x00000094,(char *)(DAT_00190764 + 0x1906c6),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1906b4),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))(*(int **)(unaff_r5 + 0x84),0);
  piVar11 = *(int **)(unaff_r5 + 0x24);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String((String *)&stack0x00000074,(char *)(DAT_00190768 + 0x1906e8));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000074,*(undefined4 *)(unaff_r5 + 0x74),DAT_0019076c);
  *(TrueTypeTextElement **)(unaff_r5 + 0x88) = pTVar6;
  (*pcVar8)(piVar11,pTVar6);
  String::~String((String *)&stack0x00000074);
  iVar4 = iRam00190ad8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(unaff_r5 + 0x88));
  L_PrintLog((char *)(iVar4 + 0x190780),(char *)(iRam00190adc + 0x190784));
  sprintf(&stack0x00000094,(char *)(iRam00190ae0 + 0x190792),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x190780),&stack0x00000094);
  piVar11 = *(int **)(unaff_r5 + 0x88);
  (**(code **)(*piVar11 + 0x20))(piVar11,0);
  piVar11 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String((String *)&stack0x0000007c,(char *)(iRam00190ae4 + 0x1907b4));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x0000007c,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x78) = pTVar6;
  (*pcVar8)(piVar11,pTVar6);
  String::~String((String *)&stack0x0000007c);
  iVar4 = DAT_00190ae8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(unaff_r5 + 0x78));
  L_PrintLog((char *)(iVar4 + 0x1907fc),(char *)(DAT_00190aec + 0x190800));
  sprintf(&stack0x00000094,(char *)(DAT_00190af0 + 0x19080e),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1907fc),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x78) + 0x20))(*(int **)(unaff_r5 + 0x78),0);
  piVar11 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String((String *)&stack0x00000084,(char *)(DAT_00190af4 + 0x190830));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x00000084,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x7c) = pTVar6;
  (*pcVar8)(piVar11,pTVar6);
  String::~String((String *)&stack0x00000084);
  iVar4 = DAT_00190af8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(unaff_r5 + 0x7c));
  L_PrintLog((char *)(iVar4 + 0x190878),(char *)(DAT_00190afc + 0x19087c));
  sprintf(&stack0x00000094,(char *)(DAT_00190b00 + 0x19088a),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x190878),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),0);
  piVar11 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar11 + 0x2c);
  String::String((String *)&stack0x0000008c,(char *)(DAT_00190b04 + 0x1908ac));
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar6,&stack0x0000008c,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x80) = pTVar6;
  (*pcVar8)(piVar11,pTVar6);
  String::~String((String *)&stack0x0000008c);
  iVar4 = DAT_00190b08;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar12,*(TrueTypeTextElement **)(unaff_r5 + 0x80));
  L_PrintLog((char *)(iVar4 + 0x1908f8),(char *)(DAT_00190b0c + 0x1908fc));
  sprintf(&stack0x00000094,(char *)(DAT_00190b10 + 0x19090a),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(iVar4 + 0x1908f8),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
  uVar9 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190b14),false);
  *(undefined4 *)(unaff_r5 + 0x30) = uVar9;
  uVar9 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f0),false);
  *(undefined4 *)(unaff_r5 + 0x2c) = uVar9;
  this = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this,*(CImage **)(*(int *)(unaff_r5 + 0x2c) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x28),extraout_s0_00);
  *(NoticeDialog **)(unaff_r5 + 0x34) = this;
  ScreenElement::setOrder((ScreenElement *)this,4);
  (**(code **)(**(int **)(unaff_r5 + 0x34) + 0x1c))(*(int **)(unaff_r5 + 0x34),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x34));
  this_00 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_00,*(CImage **)(*(int *)(unaff_r5 + 0x2c) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x44),0,extraout_s0_01,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x38) = this_00;
  ScreenElement::setOrder((ScreenElement *)this_00,99);
  (**(code **)(**(int **)(unaff_r5 + 0x38) + 0x1c))(*(int **)(unaff_r5 + 0x38),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x38));
  if (in_stack_00000194 == **(int **)(in_stack_00000034 + DAT_00190b18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


