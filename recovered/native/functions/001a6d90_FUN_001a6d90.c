/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a6d90 FUN_001a6d90 */

void FUN_001a6d90(void)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ZCImageButton *pZVar6;
  BitmapTextElement *pBVar7;
  TrueTypeTextElement *pTVar8;
  int iVar9;
  NoticeDialog *this;
  ConfirmDialog *pCVar10;
  int iVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 unaff_r4;
  int iVar15;
  undefined4 uVar16;
  GameStateEventRaidMenu *unaff_r5;
  undefined4 unaff_r6;
  int *piVar17;
  ImageButton *this_00;
  int *piVar18;
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
  float extraout_s1;
  undefined8 uVar19;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  code *in_stack_00000024;
  int in_stack_00000034;
  int in_stack_00000194;
  
  *(undefined4 *)(unaff_r5 + 0x1c) = unaff_r6;
  (*in_stack_00000024)(unaff_r4,unaff_r6);
  iVar3 = GameStateEventRaidMenu::getTitleResoucesID(unaff_r5);
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar15 = DAT_001a7184 + 0x1a6db0;
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001a7180),iVar3,false);
  iVar3 = SmDev();
  uVar1 = __addsf3(*(undefined4 *)(iVar15 + iVar3 * 4 + 0x68));
  iVar3 = SmDev();
  bVar2 = (bool)__addsf3(*(undefined4 *)(iVar15 + iVar3 * 4 + 0x68));
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(unaff_r5 + 0x20) = pIVar5;
  (*pcVar13)(piVar17,pIVar5);
  pIVar5 = *(ImageElement **)(unaff_r5 + 0x20);
  iVar3 = SmDev();
  iVar15 = DAT_001a7188 + 0x1a6e14;
  __mulsf3(*(undefined4 *)(iVar15 + iVar3 * 4 + 0x68),*(undefined4 *)(unaff_r5 + 0xb4));
  iVar3 = SmDev();
  uVar19 = __mulsf3(*(undefined4 *)(iVar15 + iVar3 * 4 + 0x68),*(undefined4 *)(unaff_r5 + 0xb4));
  ImageElement::setScale(pIVar5,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001a7180),3,false)
  ;
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x58) = pZVar6;
  (*pcVar13)(piVar17,pZVar6);
  iVar3 = DAT_001a7194;
  L_PrintLog((char *)(DAT_001a718c + 0x1a6e80),(char *)(DAT_001a7190 + 0x1a6e82));
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x06',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x54) = pZVar6;
  (*pcVar13)(piVar17,pZVar6);
  uVar16 = *(undefined4 *)(unaff_r5 + 0xb4);
  this_00 = *(ImageButton **)(unaff_r5 + 0x54);
  __mulsf3(uVar16,DAT_001a7198);
  uVar19 = __mulsf3(uVar16,0x3fc00000);
  ImageButton::setScale(this_00,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  pcVar13 = *(code **)(**(int **)(unaff_r5 + 0x54) + 0x2c);
  String::String((String *)&stack0x0000003c,(char *)(DAT_001a719c + 0x1a6eee));
  uVar16 = *(undefined4 *)(unaff_r5 + 0x54);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x0000003c,*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_001a71a0),
             0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x98) = pBVar7;
  (*pcVar13)(uVar16,pBVar7);
  String::~String((String *)&stack0x0000003c);
  iVar3 = DAT_001a7194;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x98) + 0x7f) = 0x12;
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x5c) = pZVar6;
  (*pcVar13)(piVar17,pZVar6);
  pcVar13 = *(code **)(**(int **)(unaff_r5 + 0x5c) + 0x2c);
  String::String((String *)&stack0x00000044,(char *)(DAT_001a71a4 + 0x1a6f90));
  iVar3 = *(int *)(unaff_r5 + 0x5c);
  uVar16 = *(undefined4 *)(iVar3 + 0xc);
  uVar12 = *(undefined4 *)(iVar3 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar14 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_001a71a0);
  uVar16 = __floatsisf(uVar16);
  __mulsf3(uVar16,DAT_001a71a8);
  __fixsfsi();
  uVar16 = __floatsisf(uVar12);
  __mulsf3(uVar16,DAT_001a71a8);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar7,&stack0x00000044,uVar14,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0xa0) = pBVar7;
  (*pcVar13)(iVar3,pBVar7);
  String::~String((String *)&stack0x00000044);
  iVar3 = DAT_001a7194;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xa0) + 0x7f) = 0x12;
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),10,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x60) = pZVar6;
  uVar19 = (*pcVar13)(piVar17,pZVar6);
  ImageButton::setScale
            (*(ImageButton **)(unaff_r5 + 0x60),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  pcVar13 = *(code **)(**(int **)(unaff_r5 + 0x60) + 0x2c);
  String::String((String *)&stack0x0000004c,(char *)(DAT_001a71ac + 0x1a7062));
  iVar3 = *(int *)(unaff_r5 + 0x60);
  uVar16 = *(undefined4 *)(iVar3 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar12 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_001a71a0);
  uVar16 = __floatsisf(uVar16);
  __mulsf3(uVar16,DAT_001a71a8);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar7,&stack0x0000004c,uVar12,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x9c) = pBVar7;
  (*pcVar13)(iVar3,pBVar7);
  String::~String((String *)&stack0x0000004c);
  iVar3 = DAT_001a71b0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x9c) + 0x7f) = 0x12;
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)&stack0x00000054,(char *)(iVar3 + 0x1a70da));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x00000054,*(undefined4 *)(unaff_r5 + 100),0xff000000);
  *(TrueTypeTextElement **)(unaff_r5 + 0x84) = pTVar8;
  (*pcVar13)(piVar17,pTVar8);
  String::~String((String *)&stack0x00000054);
  iVar3 = DAT_001a71b8;
  piVar17 = *(int **)(in_stack_00000034 + DAT_001a71b4);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x84));
  L_PrintLog((char *)(iVar3 + 0x1a7130),(char *)(DAT_001a71bc + 0x1a7134));
  sprintf(&stack0x00000094,(char *)(DAT_001a71c0 + 0x1a7142),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a7130),&stack0x00000094);
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x20))(*(int **)(unaff_r5 + 0x84),0);
  L_PrintLog((char *)(DAT_001a71c4 + 0x1a7160),(char *)(DAT_001a71c8 + 0x1a7162));
  piVar18 = *(int **)(unaff_r5 + 0x1c);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x0000005c,(char *)(DAT_001a71cc + 0x1a7170));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x0000005c,*(undefined4 *)(unaff_r5 + 100),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x68) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x0000005c);
  iVar3 = DAT_001a75bc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x68));
  L_PrintLog((char *)(iVar3 + 0x1a720a),(char *)(DAT_001a75c0 + 0x1a720e));
  sprintf(&stack0x00000094,(char *)(DAT_001a75c4 + 0x1a721c),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a720a),&stack0x00000094);
  piVar18 = *(int **)(unaff_r5 + 0x1c);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x00000064,(char *)(DAT_001a75c8 + 0x1a7234));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x00000064,*(undefined4 *)(unaff_r5 + 100),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x6c) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x00000064);
  iVar3 = DAT_001a75cc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x6c));
  L_PrintLog((char *)(iVar3 + 0x1a727c),(char *)(DAT_001a75d0 + 0x1a7280));
  sprintf(&stack0x00000094,(char *)(DAT_001a75d4 + 0x1a728e),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a727c),&stack0x00000094);
  piVar18 = *(int **)(unaff_r5 + 0x1c);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x0000006c,(char *)(DAT_001a75d8 + 0x1a72a6));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x0000006c,*(undefined4 *)(unaff_r5 + 100),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x70) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x0000006c);
  iVar3 = DAT_001a75dc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x70));
  L_PrintLog((char *)(iVar3 + 0x1a72ee),(char *)(DAT_001a75e0 + 0x1a72f2));
  sprintf(&stack0x00000094,(char *)(DAT_001a75e4 + 0x1a7300),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a72ee),&stack0x00000094);
  piVar18 = *(int **)(unaff_r5 + 0x1c);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x00000074,(char *)(DAT_001a75e8 + 0x1a7318));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x00000074,*(undefined4 *)(unaff_r5 + 100),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x74) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x00000074);
  iVar3 = DAT_001a75ec;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x74));
  L_PrintLog((char *)(iVar3 + 0x1a7360),(char *)(DAT_001a75f0 + 0x1a7364));
  sprintf(&stack0x00000094,(char *)(DAT_001a75f4 + 0x1a7372),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a7360),&stack0x00000094);
  piVar18 = *(int **)(unaff_r5 + 0x1c);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x0000007c,(char *)(DAT_001a75f8 + 0x1a738a));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x0000007c,*(undefined4 *)(unaff_r5 + 100),0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x78) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x0000007c);
  iVar3 = DAT_001a75fc;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x78));
  L_PrintLog((char *)(iVar3 + 0x1a73d2),(char *)(DAT_001a7600 + 0x1a73d6));
  sprintf(&stack0x00000094,(char *)(DAT_001a7604 + 0x1a73e4),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a73d2),&stack0x00000094);
  piVar18 = *(int **)(unaff_r5 + 0x1c);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x00000084,(char *)(DAT_001a7608 + 0x1a73fc));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x00000084,*(undefined4 *)(unaff_r5 + 100),DAT_001a760c);
  *(TrueTypeTextElement **)(unaff_r5 + 0x7c) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x00000084);
  iVar3 = DAT_001a7610;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x7c));
  L_PrintLog((char *)(iVar3 + 0x1a7442),(char *)(DAT_001a7614 + 0x1a7446));
  sprintf(&stack0x00000094,(char *)(DAT_001a7618 + 0x1a7454),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a7442),&stack0x00000094);
  L_PrintLog((char *)(DAT_001a761c + 0x1a7468),(char *)(DAT_001a7620 + 0x1a746a));
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x0000008c,(char *)(DAT_001a7624 + 0x1a7478));
  pTVar8 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar8,&stack0x0000008c,*(undefined4 *)(unaff_r5 + 100),DAT_001a760c);
  *(TrueTypeTextElement **)(unaff_r5 + 0x80) = pTVar8;
  (*pcVar13)(piVar18,pTVar8);
  String::~String((String *)&stack0x0000008c);
  iVar3 = DAT_001a7628;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar17,*(TrueTypeTextElement **)(unaff_r5 + 0x80));
  L_PrintLog((char *)(iVar3 + 0x1a74c2),(char *)(DAT_001a762c + 0x1a74c6));
  iVar15 = DAT_001a7634;
  sprintf(&stack0x00000094,(char *)(DAT_001a7630 + 0x1a74d4),*(int *)(*piVar17 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x1a74c2),&stack0x00000094);
  iVar3 = DAT_001a7638;
  (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x38,false);
  iVar9 = SmDev();
  uVar16 = *(undefined4 *)(iVar9 * 4 + iVar15 + 0x1a74ee);
  iVar9 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 * 4 + iVar15 + 0x1a74ee);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_00,extraout_s1_00,(uchar)uVar16,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x28) = pIVar5;
  uVar19 = (*pcVar13)(piVar17,pIVar5);
  iVar15 = DAT_001a763c;
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x28),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  piVar17 = *(int **)(unaff_r5 + 0x28);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x39,false);
  iVar9 = SmDev();
  uVar16 = *(undefined4 *)(iVar9 * 4 + iVar15 + 0x1a755a);
  iVar9 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 * 4 + iVar15 + 0x1a755a);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_01,extraout_s1_01,(uchar)uVar16,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x2c) = pIVar5;
  (*pcVar13)(piVar17,pIVar5);
  piVar17 = *(int **)(unaff_r5 + 0x28);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar9 = DAT_001a7640 + 0x1a75ae;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x39,false);
  iVar15 = SmDev();
  uVar16 = *(undefined4 *)(iVar15 * 4 + iVar9);
  iVar15 = SmDev();
  uVar12 = *(undefined4 *)(iVar15 * 4 + iVar9);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_02,extraout_s1_02,(uchar)uVar16,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x30) = pIVar5;
  (*pcVar13)(piVar17,pIVar5);
  piVar17 = *(int **)(unaff_r5 + 0x28);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  iVar9 = DAT_001a7a44 + 0x1a768c;
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x39,false);
  iVar15 = SmDev();
  uVar16 = *(undefined4 *)(iVar15 * 4 + iVar9);
  iVar15 = SmDev();
  uVar12 = *(undefined4 *)(iVar15 * 4 + iVar9);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar5,pCVar4,extraout_s0_03,extraout_s1_03,(uchar)uVar16,SUB41(uVar12,0));
  *(ImageElement **)(unaff_r5 + 0x34) = pIVar5;
  uVar19 = (*pcVar13)(piVar17,pIVar5);
  uVar19 = ImageElement::setScale
                     (*(ImageElement **)(unaff_r5 + 0x2c),(float)uVar19,
                      (float)((ulonglong)uVar19 >> 0x20));
  uVar19 = ImageElement::setScale
                     (*(ImageElement **)(unaff_r5 + 0x30),(float)uVar19,
                      (float)((ulonglong)uVar19 >> 0x20));
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x34),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x31,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_04,extraout_s1_04,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x38) = pIVar5;
  uVar19 = (*pcVar13)(piVar17,pIVar5);
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x38),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  GameStateEventRaidMenu::setEventRaidSoulPosition(unaff_r5);
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),0x60,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_05,extraout_s1_05,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x3c) = pIVar5;
  uVar19 = (*pcVar13)(piVar17,pIVar5);
  iVar3 = DAT_001a7a48;
  ImageElement::setScale
            (*(ImageElement **)(unaff_r5 + 0x3c),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (**(code **)(**(int **)(unaff_r5 + 0x3c) + 0x20))(*(int **)(unaff_r5 + 0x3c),0);
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar3),DAT_001a7a4c,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_06,extraout_s1_06,'\0',false);
  *(ImageElement **)(unaff_r5 + 0x88) = pIVar5;
  (*pcVar13)(piVar17,pIVar5);
  pIVar5 = *(ImageElement **)(unaff_r5 + 0x88);
  uVar19 = __mulsf3(*(undefined4 *)(unaff_r5 + 0xb4),DAT_001a7a50);
  ImageElement::setScale(pIVar5,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001a7a48),0x118,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x8c) = pZVar6;
  (*pcVar13)(piVar17,pZVar6);
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001a7a48),DAT_001a7a54,false)
  ;
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x90) = pZVar6;
  (*pcVar13)(piVar17,pZVar6);
  piVar17 = *(int **)(unaff_r5 + 0x14);
  pcVar13 = *(code **)(*piVar17 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001a7a48),0x120,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(unaff_r5 + 0x94) = pZVar6;
  uVar19 = (*pcVar13)(piVar17,pZVar6);
  uVar19 = ImageButton::setScale
                     (*(ImageButton **)(unaff_r5 + 0x8c),(float)uVar19,
                      (float)((ulonglong)uVar19 >> 0x20));
  uVar19 = ImageButton::setScale
                     (*(ImageButton **)(unaff_r5 + 0x90),(float)uVar19,
                      (float)((ulonglong)uVar19 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(unaff_r5 + 0x94),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar16 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_001a7a48),false);
  *(undefined4 *)(unaff_r5 + 0x44) = uVar16;
  uVar16 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f0),false);
  *(undefined4 *)(unaff_r5 + 0x40) = uVar16;
  this = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this,*(CImage **)(*(int *)(unaff_r5 + 0x40) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x44) + 0x28),extraout_s0_07);
  *(NoticeDialog **)(unaff_r5 + 0x48) = this;
  ScreenElement::setOrder((ScreenElement *)this,4);
  (**(code **)(**(int **)(unaff_r5 + 0x48) + 0x1c))(*(int **)(unaff_r5 + 0x48),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x48));
  L_PrintLog((char *)(DAT_001a7a58 + 0x1a7938),(char *)(DAT_001a7a5c + 0x1a793a));
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(unaff_r5 + 0x40) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x44) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 0x44) + 0x44),0,extraout_s0_08,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x4c) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(unaff_r5 + 0x4c) + 0x1c))(*(int **)(unaff_r5 + 0x4c),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x4c));
  pCVar10 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog
            (pCVar10,*(CImage **)(*(int *)(unaff_r5 + 0x40) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x44) + 0x3d0),
             *(CImage **)(*(int *)(unaff_r5 + 0x44) + 0x3d0),0,extraout_s0_09,(CImage *)0x40000000);
  *(ConfirmDialog **)(unaff_r5 + 0x50) = pCVar10;
  ScreenElement::setOrder((ScreenElement *)pCVar10,99);
  (**(code **)(**(int **)(unaff_r5 + 0x50) + 0x1c))(*(int **)(unaff_r5 + 0x50),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x50));
  iVar3 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(unaff_r5 + 0xc));
  iVar15 = ZombieCafe::getEventRaid_cafeLevelNext(*(ZombieCafe **)(unaff_r5 + 0xc));
  iVar9 = ZombieCafe::getEventRaid_cafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (((iVar3 < iVar15) &&
      (((iVar11 = ZombieCafe::getEventRaid_status(*(ZombieCafe **)(unaff_r5 + 0xc)), iVar11 == 2 ||
        (iVar11 == 0)) &&
       (iVar11 = GameStateEventRaidMenu::getEventRaidMenu_MiddleLevel(unaff_r5),
       iVar3 == iVar11 + -1)))) && ((iVar15 == iVar11 && (iVar15 < iVar9)))) {
    ZombieCafe::addEventRaid_cafeLevel(*(ZombieCafe **)(unaff_r5 + 0xc));
  }
  L_PrintLog((char *)(DAT_001a7a60 + 0x1a7a0a),(char *)(DAT_001a7a64 + 0x1a7a0c));
  if (in_stack_00000194 == **(int **)(in_stack_00000034 + DAT_001a7a68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


