/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190324 FUN_00190324 */

void FUN_00190324(void)

{
  CImage *pCVar1;
  ZCImageButton *pZVar2;
  BitmapTextElement *pBVar3;
  TrueTypeTextElement *pTVar4;
  NoticeDialog *this;
  ConfirmDialog *this_00;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int unaff_r5;
  undefined4 unaff_r6;
  int iVar11;
  undefined4 unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  code *in_stack_00000024;
  int in_stack_00000034;
  int in_stack_00000194;
  
  *(undefined4 *)(unaff_r5 + 0x90) = unaff_r7;
  (*in_stack_00000024)(unaff_r6,unaff_r7);
  String::~String((String *)&stack0x00000044);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x90) + 0x7f) = 0x12;
  piVar9 = *(int **)(unaff_r5 + 0x14);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190728),10,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x40) = pZVar2;
  (*pcVar6)(piVar9,pZVar2);
  pcVar6 = *(code **)(**(int **)(unaff_r5 + 0x40) + 0x2c);
  String::String((String *)&stack0x0000004c,(char *)(DAT_0019072c + 0x19038c));
  iVar11 = *(int *)(unaff_r5 + 0x40);
  uVar5 = *(undefined4 *)(iVar11 + 0xc);
  uVar7 = *(undefined4 *)(iVar11 + 0x10);
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  uVar8 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190730);
  uVar5 = __floatsisf(uVar5);
  __mulsf3(uVar5,DAT_00190734);
  __fixsfsi();
  uVar5 = __floatsisf(uVar7);
  __mulsf3(uVar5,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar3,&stack0x0000004c,uVar8,0xffffffff);
  *(int *)(unaff_r5 + 0x94) = (int)pBVar3;
  (*pcVar6)(iVar11,pBVar3);
  String::~String((String *)&stack0x0000004c);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x94) + 0x7f) = 0x12;
  piVar9 = *(int **)(unaff_r5 + 0x14);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190738),0x31,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x48) = pZVar2;
  (*pcVar6)(piVar9,pZVar2);
  piVar9 = *(int **)(unaff_r5 + 0x14);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190728),10,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x4c) = pZVar2;
  (*pcVar6)(piVar9,pZVar2);
  pcVar6 = *(code **)(**(int **)(unaff_r5 + 0x4c) + 0x2c);
  String::String((String *)&stack0x00000054,(char *)(DAT_0019073c + 0x19048e));
  iVar11 = *(int *)(unaff_r5 + 0x4c);
  uVar5 = *(undefined4 *)(iVar11 + 0xc);
  uVar7 = *(undefined4 *)(iVar11 + 0x10);
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  uVar8 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190730);
  uVar5 = __floatsisf(uVar5);
  __mulsf3(uVar5,DAT_00190734);
  __fixsfsi();
  uVar5 = __floatsisf(uVar7);
  __mulsf3(uVar5,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar3,&stack0x00000054,uVar8,0xffffffff);
  *(int *)(unaff_r5 + 0x98) = (int)pBVar3;
  (*pcVar6)(iVar11,pBVar3);
  String::~String((String *)&stack0x00000054);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x98) + 0x7f) = 0x12;
  piVar9 = *(int **)(unaff_r5 + 0x14);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190728),10,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x50) = pZVar2;
  (*pcVar6)(piVar9,pZVar2);
  pcVar6 = *(code **)(**(int **)(unaff_r5 + 0x50) + 0x2c);
  String::String((String *)&stack0x0000005c,(char *)(DAT_00190740 + 0x190554));
  iVar11 = *(int *)(unaff_r5 + 0x50);
  uVar5 = *(undefined4 *)(iVar11 + 0xc);
  uVar7 = *(undefined4 *)(iVar11 + 0x10);
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  uVar8 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190730);
  uVar5 = __floatsisf(uVar5);
  __mulsf3(uVar5,DAT_00190734);
  __fixsfsi();
  uVar5 = __floatsisf(uVar7);
  __mulsf3(uVar5,DAT_00190734);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar3,&stack0x0000005c,uVar8,0xffffffff);
  *(int *)(unaff_r5 + 0x9c) = (int)pBVar3;
  (*pcVar6)(iVar11,pBVar3);
  String::~String((String *)&stack0x0000005c);
  iVar11 = DAT_00190744;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x9c) + 0x7f) = 0x12;
  piVar9 = *(int **)(unaff_r5 + 0x14);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  String::String((String *)&stack0x00000064,(char *)(iVar11 + 0x1905da));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000064,*(undefined4 *)(unaff_r5 + 0x74),0xff000000);
  *(TrueTypeTextElement **)(unaff_r5 + 0x8c) = pTVar4;
  (*pcVar6)(piVar9,pTVar4);
  String::~String((String *)&stack0x00000064);
  iVar11 = DAT_0019074c;
  piVar10 = *(int **)(in_stack_00000034 + DAT_00190748);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(unaff_r5 + 0x8c));
  L_PrintLog((char *)(iVar11 + 0x190630),(char *)(DAT_00190750 + 0x190634));
  sprintf(&stack0x00000094,(char *)(DAT_00190754 + 0x190642),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar11 + 0x190630),&stack0x00000094);
  piVar9 = *(int **)(unaff_r5 + 0x8c);
  (**(code **)(*piVar9 + 0x20))(piVar9,0);
  piVar9 = *(int **)(unaff_r5 + 0x24);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  String::String((String *)&stack0x0000006c,(char *)(DAT_00190758 + 0x190664));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x0000006c,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x84) = pTVar4;
  (*pcVar6)(piVar9,pTVar4);
  String::~String((String *)&stack0x0000006c);
  iVar11 = DAT_0019075c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(unaff_r5 + 0x84));
  L_PrintLog((char *)(iVar11 + 0x1906b4),(char *)(DAT_00190760 + 0x1906b8));
  sprintf(&stack0x00000094,(char *)(DAT_00190764 + 0x1906c6),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar11 + 0x1906b4),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))(*(int **)(unaff_r5 + 0x84),0);
  piVar9 = *(int **)(unaff_r5 + 0x24);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  String::String((String *)&stack0x00000074,(char *)(DAT_00190768 + 0x1906e8));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000074,*(undefined4 *)(unaff_r5 + 0x74),DAT_0019076c);
  *(TrueTypeTextElement **)(unaff_r5 + 0x88) = pTVar4;
  (*pcVar6)(piVar9,pTVar4);
  String::~String((String *)&stack0x00000074);
  iVar11 = iRam00190ad8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(unaff_r5 + 0x88));
  L_PrintLog((char *)(iVar11 + 0x190780),(char *)(iRam00190adc + 0x190784));
  sprintf(&stack0x00000094,(char *)(iRam00190ae0 + 0x190792),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar11 + 0x190780),&stack0x00000094);
  piVar9 = *(int **)(unaff_r5 + 0x88);
  (**(code **)(*piVar9 + 0x20))(piVar9,0);
  piVar9 = *(int **)(unaff_r5 + 0x1c);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  String::String((String *)&stack0x0000007c,(char *)(iRam00190ae4 + 0x1907b4));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x0000007c,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x78) = pTVar4;
  (*pcVar6)(piVar9,pTVar4);
  String::~String((String *)&stack0x0000007c);
  iVar11 = DAT_00190ae8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(unaff_r5 + 0x78));
  L_PrintLog((char *)(iVar11 + 0x1907fc),(char *)(DAT_00190aec + 0x190800));
  sprintf(&stack0x00000094,(char *)(DAT_00190af0 + 0x19080e),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar11 + 0x1907fc),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x78) + 0x20))(*(int **)(unaff_r5 + 0x78),0);
  piVar9 = *(int **)(unaff_r5 + 0x1c);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  String::String((String *)&stack0x00000084,(char *)(DAT_00190af4 + 0x190830));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x00000084,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x7c) = pTVar4;
  (*pcVar6)(piVar9,pTVar4);
  String::~String((String *)&stack0x00000084);
  iVar11 = DAT_00190af8;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(unaff_r5 + 0x7c));
  L_PrintLog((char *)(iVar11 + 0x190878),(char *)(DAT_00190afc + 0x19087c));
  sprintf(&stack0x00000094,(char *)(DAT_00190b00 + 0x19088a),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar11 + 0x190878),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),0);
  piVar9 = *(int **)(unaff_r5 + 0x1c);
  pcVar6 = *(code **)(*piVar9 + 0x2c);
  String::String((String *)&stack0x0000008c,(char *)(DAT_00190b04 + 0x1908ac));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar4,&stack0x0000008c,*(undefined4 *)(unaff_r5 + 0x74),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x80) = pTVar4;
  (*pcVar6)(piVar9,pTVar4);
  String::~String((String *)&stack0x0000008c);
  iVar11 = DAT_00190b08;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(unaff_r5 + 0x80));
  L_PrintLog((char *)(iVar11 + 0x1908f8),(char *)(DAT_00190b0c + 0x1908fc));
  sprintf(&stack0x00000094,(char *)(DAT_00190b10 + 0x19090a),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar11 + 0x1908f8),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
  uVar5 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_00190b14),false);
  *(undefined4 *)(unaff_r5 + 0x30) = uVar5;
  uVar5 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f0),false);
  *(undefined4 *)(unaff_r5 + 0x2c) = uVar5;
  this = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this,*(CImage **)(*(int *)(unaff_r5 + 0x2c) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x28),extraout_s0);
  *(NoticeDialog **)(unaff_r5 + 0x34) = this;
  ScreenElement::setOrder((ScreenElement *)this,4);
  (**(code **)(**(int **)(unaff_r5 + 0x34) + 0x1c))(*(int **)(unaff_r5 + 0x34),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x34));
  this_00 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (this_00,*(CImage **)(*(int *)(unaff_r5 + 0x2c) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x44),0,extraout_s0_00,(CImage *)0x40000000);
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


