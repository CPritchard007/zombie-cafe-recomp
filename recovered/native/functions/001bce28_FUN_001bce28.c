/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bce28 FUN_001bce28 */

void FUN_001bce28(BitmapTextElement *param_1)

{
  CImage *pCVar1;
  ZCImageButton *pZVar2;
  int iVar3;
  BitmapTextElement *pBVar4;
  TrueTypeTextElement *pTVar5;
  ImageElement *pIVar6;
  NoticeDialog *this;
  ConfirmDialog *pCVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 unaff_r4;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  GameStateEventRaid3Menu *pGVar14;
  GameStateEventRaid3Menu *unaff_r5;
  int iVar15;
  char *pcVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined8 uVar17;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  undefined4 uStack0000000c;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  code *in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000194;
  
  uStack0000000c = in_stack_00000028;
  uStack00000018 = 0;
  uStack0000001c = 0;
  uStack00000014 = 9;
  BitmapTextElement::BitmapTextElement(param_1,&stack0x0000003c,in_stack_00000024,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0xb4) = param_1;
  (*in_stack_00000020)(unaff_r4,param_1);
  String::~String((String *)&stack0x0000003c);
  *(undefined1 *)(*(int *)(unaff_r5 + 0xb4) + 0x7f) = 0x12;
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd238),10,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x58) = pZVar2;
  (*pcVar8)(piVar10,pZVar2);
  pcVar8 = *(code **)(**(int **)(unaff_r5 + 0x58) + 0x2c);
  String::String((String *)&stack0x00000044,(char *)(DAT_001bd23c + 0x1bceb4));
  iVar11 = *(int *)(unaff_r5 + 0xc);
  iVar3 = SmDev();
  iVar15 = *(int *)(unaff_r5 + 0x58);
  uVar9 = *(undefined4 *)((*(int *)(DAT_001bd240 + iVar3 * 4 + 0x1bcf06) + 0x136) * 4 + iVar11);
  uVar12 = *(undefined4 *)(iVar15 + 0xc);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  uStack00000018 = 0;
  uStack0000001c = 0;
  uStack00000014 = 9;
  uStack0000000c = uVar12;
  BitmapTextElement::BitmapTextElement(pBVar4,&stack0x00000044,uVar9,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0xb8) = pBVar4;
  (*pcVar8)(iVar15,pBVar4);
  String::~String((String *)&stack0x00000044);
  iVar3 = DAT_001bd244;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xb8) + 0x7f) = 0x12;
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x0000004c,(char *)(iVar3 + 0x1bcf2a));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000004c,*(undefined4 *)(unaff_r5 + 0x8c),0xff000000);
  *(TrueTypeTextElement **)(unaff_r5 + 0xb0) = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x0000004c);
  iVar3 = DAT_001bd24c;
  piVar13 = *(int **)(in_stack_0000002c + DAT_001bd248);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(unaff_r5 + 0xb0));
  L_PrintLog((char *)(iVar3 + 0x1bcf84),(char *)(DAT_001bd250 + 0x1bcf88));
  sprintf(&stack0x00000094,(char *)(DAT_001bd254 + 0x1bcf96),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bcf84),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0xb0);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  piVar10 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x00000054,(char *)(DAT_001bd258 + 0x1bcfb8));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000054,*(undefined4 *)(unaff_r5 + 0x8c),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x90) = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x00000054);
  iVar3 = DAT_001bd25c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(unaff_r5 + 0x90));
  L_PrintLog((char *)(iVar3 + 0x1bd00c),(char *)(DAT_001bd260 + 0x1bd010));
  sprintf(&stack0x00000094,(char *)(DAT_001bd264 + 0x1bd01e),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd00c),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x0000005c,(char *)(DAT_001bd268 + 0x1bd036));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000005c,*(undefined4 *)(unaff_r5 + 0x8c),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x94) = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x0000005c);
  iVar3 = DAT_001bd26c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(unaff_r5 + 0x94));
  L_PrintLog((char *)(iVar3 + 0x1bd08a),(char *)(DAT_001bd270 + 0x1bd08e));
  sprintf(&stack0x00000094,(char *)(DAT_001bd274 + 0x1bd09c),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd08a),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x00000064,(char *)(DAT_001bd278 + 0x1bd0b4));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000064,*(undefined4 *)(unaff_r5 + 0x8c),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x98) = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x00000064);
  iVar3 = DAT_001bd27c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(unaff_r5 + 0x98));
  L_PrintLog((char *)(iVar3 + 0x1bd108),(char *)(DAT_001bd280 + 0x1bd10c));
  sprintf(&stack0x00000094,(char *)(DAT_001bd284 + 0x1bd11a),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd108),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x0000006c,(char *)(DAT_001bd288 + 0x1bd132));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000006c,*(undefined4 *)(unaff_r5 + 0x8c),DAT_001bd28c);
  *(TrueTypeTextElement **)(unaff_r5 + 0x9c) = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x0000006c);
  iVar3 = DAT_001bd290;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(unaff_r5 + 0x9c));
  L_PrintLog((char *)(iVar3 + 0x1bd184),(char *)(DAT_001bd294 + 0x1bd188));
  sprintf(&stack0x00000094,(char *)(DAT_001bd298 + 0x1bd196),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd184),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x00000074,(char *)(DAT_001bd29c + 0x1bd1ae));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000074,*(undefined4 *)(unaff_r5 + 0x8c),DAT_001bd28c);
  *(TrueTypeTextElement **)(unaff_r5 + 0xa0) = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x00000074);
  iVar3 = DAT_001bd2a0;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)(unaff_r5 + 0xa0));
  L_PrintLog((char *)(iVar3 + 0x1bd200),(char *)(DAT_001bd2a4 + 0x1bd204));
  sprintf(&stack0x00000094,(char *)(DAT_001bd2a8 + 0x1bd212),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd200),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0xa0);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  piVar10 = *(int **)(unaff_r5 + 0x1c);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd238),10,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x06',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 100) = pZVar2;
  (*pcVar8)(piVar10,pZVar2);
  pcVar8 = *(code **)(**(int **)(unaff_r5 + 100) + 0x2c);
  String::String((String *)&stack0x0000007c,(char *)(DAT_001bd6cc + 0x1bd2e8));
  iVar11 = *(int *)(unaff_r5 + 0xc);
  iVar3 = SmDev();
  iVar15 = *(int *)(unaff_r5 + 100);
  uVar9 = *(undefined4 *)((*(int *)(DAT_001bd6d0 + iVar3 * 4 + 0x1bd33a) + 0x136) * 4 + iVar11);
  uVar12 = *(undefined4 *)(iVar15 + 0xc);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  uStack00000018 = 0;
  uStack0000001c = 0;
  uStack00000014 = 0x12;
  uStack0000000c = uVar12;
  BitmapTextElement::BitmapTextElement(pBVar4,&stack0x0000007c,uVar9,0xffffffff);
  pGVar14 = unaff_r5 + 0xc0;
  *(BitmapTextElement **)pGVar14 = pBVar4;
  (*pcVar8)(iVar15,pBVar4);
  String::~String((String *)&stack0x0000007c);
  iVar3 = DAT_001bd6d4;
  (**(code **)(**(int **)pGVar14 + 0x14))
            (*(int **)pGVar14,*(int *)(*(int *)(unaff_r5 + 100) + 0xc) / 2,
             *(int *)(*(int *)(unaff_r5 + 100) + 0x10) / 2);
  *(undefined1 *)(*(int *)pGVar14 + 0x7f) = 0x12;
  (**(code **)(**(int **)(unaff_r5 + 100) + 0x20))(*(int **)(unaff_r5 + 100),0);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x47,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x12',pCVar1,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x68) = pZVar2;
  (*pcVar8)(piVar10,pZVar2);
  piVar10 = *(int **)(unaff_r5 + 0x68);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar1,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x78) = pIVar6;
  (*pcVar8)(piVar10,pIVar6);
  (**(code **)(**(int **)(unaff_r5 + 0x68) + 0x20))(*(int **)(unaff_r5 + 0x68),0);
  (**(code **)(**(int **)(unaff_r5 + 0x78) + 0x20))(*(int **)(unaff_r5 + 0x78),0);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x48,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x12',pCVar1,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x6c) = pZVar2;
  (*pcVar8)(piVar10,pZVar2);
  piVar10 = *(int **)(unaff_r5 + 0x6c);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar1,extraout_s0_00,extraout_s1_00,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x7c) = pIVar6;
  (*pcVar8)(piVar10,pIVar6);
  (**(code **)(**(int **)(unaff_r5 + 0x6c) + 0x20))(*(int **)(unaff_r5 + 0x6c),0);
  (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x20))(*(int **)(unaff_r5 + 0x7c),0);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x49,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x12',pCVar1,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x70) = pZVar2;
  (*pcVar8)(piVar10,pZVar2);
  piVar10 = *(int **)(unaff_r5 + 0x70);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar1,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x80) = pIVar6;
  (*pcVar8)(piVar10,pIVar6);
  (**(code **)(**(int **)(unaff_r5 + 0x70) + 0x20))(*(int **)(unaff_r5 + 0x70),0);
  (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x4a,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x12',pCVar1,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x74) = pZVar2;
  (*pcVar8)(piVar10,pZVar2);
  piVar10 = *(int **)(unaff_r5 + 0x74);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x46,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar1,extraout_s0_02,extraout_s1_02,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x84) = pIVar6;
  (*pcVar8)(piVar10,pIVar6);
  iVar11 = DAT_001bd6d8 + 0x1bd5a6;
  (**(code **)(**(int **)(unaff_r5 + 0x74) + 0x20))(*(int **)(unaff_r5 + 0x74),0);
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))(*(int **)(unaff_r5 + 0x84),0);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bd6d4),0x4b,false);
  iVar3 = SmDev();
  uVar9 = *(undefined4 *)(iVar11 + iVar3 * 4 + 0x54);
  iVar3 = SmDev();
  uVar12 = *(undefined4 *)(iVar11 + iVar3 * 4 + 0x54);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar1,extraout_s0_03,extraout_s1_03,(uchar)uVar9,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x88) = pIVar6;
  (*pcVar8)(piVar10,pIVar6);
  piVar10 = *(int **)(unaff_r5 + 0x88);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  piVar10 = *(int **)(unaff_r5 + 0x20);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x00000084,(char *)(DAT_001bd6dc + 0x1bd61e));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x00000084,*(undefined4 *)(unaff_r5 + 0x8c),0xffffffff);
  pGVar14 = unaff_r5 + 0xa8;
  *(TrueTypeTextElement **)pGVar14 = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x00000084);
  (**(code **)(**(int **)pGVar14 + 0x20))(*(int **)pGVar14,0);
  piVar13 = *(int **)(in_stack_0000002c + DAT_001bd6e0);
  pcVar16 = (char *)(DAT_001bd6e4 + 0x1bd676);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)pGVar14);
  L_PrintLog(pcVar16,(char *)(DAT_001bd6e8 + 0x1bd682));
  sprintf(&stack0x00000094,(char *)(DAT_001bd6ec + 0x1bd690),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog(pcVar16,&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0x20);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  String::String((String *)&stack0x0000008c,(char *)(DAT_001bd6f0 + 0x1bd6aa));
  pTVar5 = (TrueTypeTextElement *)operator_new(0xe4);
  uStack0000000c = 0;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar5,&stack0x0000008c,*(undefined4 *)(unaff_r5 + 0x8c),DAT_001bda9c);
  pGVar14 = unaff_r5 + 0xac;
  *(TrueTypeTextElement **)pGVar14 = pTVar5;
  (*pcVar8)(piVar10,pTVar5);
  String::~String((String *)&stack0x0000008c);
  (**(code **)(**(int **)pGVar14 + 0x20))(*(int **)pGVar14,0);
  iVar3 = DAT_001bdaa0;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar13,*(TrueTypeTextElement **)pGVar14);
  L_PrintLog((char *)(iVar3 + 0x1bd72e),(char *)(DAT_001bdaa4 + 0x1bd732));
  sprintf(&stack0x00000094,(char *)(DAT_001bdaa8 + 0x1bd740),*(int *)(*piVar13 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1bd72e),&stack0x00000094);
  piVar10 = *(int **)(unaff_r5 + 0x14);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  iVar11 = DAT_001bdab0 + 0x1bd75c;
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bdaac),0x38,false);
  iVar3 = SmDev();
  uVar9 = *(undefined4 *)(iVar11 + iVar3 * 4 + 0x6c);
  iVar3 = SmDev();
  uVar12 = *(undefined4 *)(iVar11 + iVar3 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar1,extraout_s0_04,extraout_s1_04,(uchar)uVar9,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x38) = pIVar6;
  uVar17 = (*pcVar8)(piVar10,pIVar6);
  iVar3 = DAT_001bdab4;
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x38),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  piVar10 = *(int **)(unaff_r5 + 0x38);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bdaac),0x39,false);
  iVar11 = SmDev();
  uVar9 = *(undefined4 *)(iVar3 + 0x1bd7be + iVar11 * 4 + 0x6c);
  iVar11 = SmDev();
  uVar12 = *(undefined4 *)(iVar3 + 0x1bd7be + iVar11 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar1,extraout_s0_05,extraout_s1_05,(uchar)uVar9,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x3c) = pIVar6;
  uVar17 = (*pcVar8)(piVar10,pIVar6);
  iVar3 = DAT_001bdab8;
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x3c),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  piVar10 = *(int **)(unaff_r5 + 0x38);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bdaac),0x39,false);
  iVar11 = SmDev();
  uVar9 = *(undefined4 *)(iVar3 + 0x1bd822 + iVar11 * 4 + 0x6c);
  iVar11 = SmDev();
  uVar12 = *(undefined4 *)(iVar3 + 0x1bd822 + iVar11 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar1,extraout_s0_06,extraout_s1_06,(uchar)uVar9,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x40) = pIVar6;
  uVar17 = (*pcVar8)(piVar10,pIVar6);
  iVar3 = DAT_001bdabc;
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x40),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  piVar10 = *(int **)(unaff_r5 + 0x38);
  pcVar8 = *(code **)(*piVar10 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bdaac),0x39,false);
  iVar11 = SmDev();
  uVar9 = *(undefined4 *)(iVar3 + 0x1bd886 + iVar11 * 4 + 0x6c);
  iVar11 = SmDev();
  uVar12 = *(undefined4 *)(iVar3 + 0x1bd886 + iVar11 * 4 + 0x6c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar6,pCVar1,extraout_s0_07,extraout_s1_07,(uchar)uVar9,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x44) = pIVar6;
  uVar17 = (*pcVar8)(piVar10,pIVar6);
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x44),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  GameStateEventRaid3Menu::setEventRaid3SoulPosition(unaff_r5);
  GameStateEventRaid3Menu::SoulVisible(SUB41(unaff_r5,0));
  uVar9 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001bdac0),false);
  *(undefined4 *)(unaff_r5 + 0x34) = uVar9;
  uVar9 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f0),false);
  *(undefined4 *)(unaff_r5 + 0x30) = uVar9;
  this = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this,*(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x34) + 0x28),extraout_s0_08);
  *(NoticeDialog **)(unaff_r5 + 0x48) = this;
  ScreenElement::setOrder((ScreenElement *)this,4);
  (**(code **)(**(int **)(unaff_r5 + 0x48) + 0x1c))(*(int **)(unaff_r5 + 0x48),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x48));
  pCVar7 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar7,*(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x34) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 0x34) + 0x44),0,extraout_s0_09,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x4c) = pCVar7;
  ScreenElement::setOrder((ScreenElement *)pCVar7,99);
  (**(code **)(**(int **)(unaff_r5 + 0x4c) + 0x1c))(*(int **)(unaff_r5 + 0x4c),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x4c));
  pCVar7 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar7,*(CImage **)(*(int *)(unaff_r5 + 0x30) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x34) + 0x3d0),
             *(CImage **)(*(int *)(unaff_r5 + 0x34) + 0x48),0,extraout_s0_10,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x50) = pCVar7;
  ScreenElement::setOrder((ScreenElement *)pCVar7,99);
  (**(code **)(**(int **)(unaff_r5 + 0x50) + 0x1c))(*(int **)(unaff_r5 + 0x50),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x50));
  if (in_stack_00000194 == **(int **)(in_stack_0000002c + DAT_001bdac4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


