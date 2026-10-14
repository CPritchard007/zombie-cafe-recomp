/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fc5e4 ObjectiveDialog::ObjectiveDialog */

/* ObjectiveDialog::ObjectiveDialog(ConfirmDialog*, ObjectiveCompleteDialog*, BuyToxinDialog*) */

void __thiscall
ObjectiveDialog::ObjectiveDialog
          (ObjectiveDialog *this,ConfirmDialog *param_1,ObjectiveCompleteDialog *param_2,
          BuyToxinDialog *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uchar uVar3;
  bool bVar4;
  byte bVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  CImage *pCVar9;
  ImageElement *pIVar10;
  ScreenElement *pSVar11;
  int *piVar12;
  ZombieCafe *this_00;
  RatingBar *this_01;
  BitmapTextElement *pBVar13;
  ProgressBar *pPVar14;
  ZCImageButton *pZVar15;
  CapcomTrueTypeFont *pCVar16;
  ImageElement *this_02;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar17;
  CImage *pCVar18;
  code *pcVar19;
  CImage *pCVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  int iVar25;
  undefined4 uVar26;
  ObjectiveDialog *pOVar27;
  undefined4 *puVar28;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float fVar63;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  undefined8 uVar64;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  undefined4 uStack_4;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined1 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  uchar *puVar45;
  undefined4 *puVar46;
  int *piVar47;
  undefined4 *puVar48;
  int *piVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  uchar *puVar56;
  undefined4 *puVar57;
  undefined4 *puVar58;
  undefined4 *puVar59;
  undefined4 *puVar60;
  int *piVar61;
  undefined4 *puVar62;
  
  iVar2 = DAT_001fc9c8;
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar37 = &stack0xffffffec + DAT_001fc9c8;
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar45 = &stack0xffffffec + DAT_001fc9c8;
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  piVar47 = (int *)(&stack0xffffffec + DAT_001fc9c8);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  piVar49 = (int *)(&stack0xffffffec + DAT_001fc9c8);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar56 = &stack0xffffffec + DAT_001fc9c8;
  puVar57 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar59 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  piVar61 = (int *)(&stack0xffffffec + DAT_001fc9c8);
  puVar62 = (undefined4 *)(&stack0xffffffec + DAT_001fc9c8);
  *(BuyToxinDialog **)(&stack0x00000034 + DAT_001fc9c8) = param_3;
  iVar21 = DAT_001fc9cc + 0x1fc5f6;
  *(int *)(&stack0x00000014 + DAT_001fc9c8) = iVar21;
  *(ConfirmDialog **)(&stack0x0000002c + DAT_001fc9c8) = param_1;
  *(ObjectiveCompleteDialog **)(&stack0x00000030 + DAT_001fc9c8) = param_2;
  *(undefined4 *)(&stack0x00000200 + DAT_001fc9c8) = **(undefined4 **)(iVar21 + DAT_001fc9d0);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar21 + DAT_001fc9d4) + 8;
  *(undefined4 *)(this + 0xe8) = 10;
  pvVar6 = operator_new__(0x28);
  *(void **)(this + 0xf0) = pvVar6;
  memset(pvVar6,0,*(int *)(this + 0xe8) << 2);
  *(undefined4 *)(this + 0xec) = 0xffffffff;
  *(Vector<BitmapTextElement*> **)(&stack0x0000001c + iVar2) =
       (Vector<BitmapTextElement*> *)(this + 0xf4);
  Vector<BitmapTextElement*>::Vector((Vector<BitmapTextElement*> *)(this + 0xf4));
  *(undefined4 *)(this + 0x100) = 10;
  pvVar6 = operator_new__(0x28);
  *(void **)(this + 0x108) = pvVar6;
  memset(pvVar6,0,*(int *)(this + 0x100) << 2);
  *(undefined4 *)(this + 0x104) = 0xffffffff;
  *(Vector<BitmapTextElement*> **)(&stack0x00000020 + iVar2) =
       (Vector<BitmapTextElement*> *)(this + 0x10c);
  Vector<BitmapTextElement*>::Vector((Vector<BitmapTextElement*> *)(this + 0x10c));
  *(Vector<ImageElement*> **)(&stack0x00000024 + iVar2) = (Vector<ImageElement*> *)(this + 0x118);
  Vector<ImageElement*>::Vector((Vector<ImageElement*> *)(this + 0x118));
  *(Vector<ImageElement*> **)(&stack0x00000028 + iVar2) = (Vector<ImageElement*> *)(this + 0x124);
  Vector<ImageElement*>::Vector((Vector<ImageElement*> *)(this + 0x124));
  *(undefined4 *)(this + 0x130) = 10;
  pvVar6 = operator_new__(0x28);
  *(void **)(this + 0x138) = pvVar6;
  memset(pvVar6,0,*(int *)(this + 0x130) << 2);
  *(undefined4 *)(this + 0x134) = 0xffffffff;
  iVar7 = CapcomApp::getInstance();
  iVar17 = DAT_001fc9dc;
  iVar21 = DAT_001fc9d8;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar7 + 4);
  L_PrintLog((char *)(iVar17 + 0x1fc6c0),(char *)(iVar21 + 0x1fc6be));
  iVar21 = CapcomApp::getInstance();
  uVar22 = *(undefined4 *)(iVar21 + 0x40);
  iVar21 = CapcomApp::getInstance();
  uVar24 = *(undefined4 *)(iVar21 + 0x50);
  iVar21 = CapcomApp::getInstance();
  uVar26 = *(undefined4 *)(iVar21 + 0x44);
  uVar8 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar8;
  uVar8 = __mulsf3(uVar22,uVar24);
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar8;
  uVar8 = __mulsf3(uVar26,*(undefined4 *)(*(int *)(&stack0x0000000c + iVar2) + 0x50));
  iVar17 = DAT_001fc9e4;
  iVar21 = DAT_001fc9e0;
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(DAT_001fc9e0 + 0x1fc6f8));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc70c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc710));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc724) = uVar8;
  uVar8 = *(undefined4 *)(iVar17 + 0x1fc75c);
  *(int *)(&stack0x00000004 + iVar2) = iVar17 + 0x1fc71c;
  uVar8 = __floatsisf(uVar8);
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc770) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc744));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  iVar7 = DAT_001fc9e8;
  *(undefined4 *)(iVar17 + 0x1fc758) = uVar8;
  iVar17 = DAT_001fc9ec;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc76a));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc77e) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc752));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc766) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc76e));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc782) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc786));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc79a) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc782));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc796) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc79a));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc7ae) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc7b2));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc7c6) = uVar8;
  *(int *)(&stack0x00000018 + iVar2) = DAT_001fc9f0 + 0x1fc7d2;
  uVar8 = __floatsisf(*(undefined4 *)(DAT_001fc9f0 + 0x1fc802));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(*(int *)(&stack0x00000018 + iVar2) + 0x44) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc79e));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc7b2) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc7b6));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc7ca) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc7ce));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc7e2) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc728));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc73c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc740));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc754) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc758));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc76c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc770));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  iVar7 = *(int *)(&stack0x00000004 + iVar2);
  *(undefined4 *)(iVar21 + 0x1fc784) = uVar8;
  iVar21 = DAT_001fc9f4;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x10));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x24) = uVar8;
  iVar7 = DAT_001fc9f8;
  uVar8 = *(undefined4 *)(DAT_001fc9f8 + 0x1fc8ea);
  *(int *)(&stack0x00000010 + iVar2) = DAT_001fc9f8 + 0x1fc882;
  uVar8 = __floatsisf(uVar8);
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc8fe) = uVar8;
  puVar23 = *(undefined4 **)(&stack0x00000018 + iVar2);
  uVar8 = __floatsisf(*puVar23);
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  puVar23[5] = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc7e6));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc7fa) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc890));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc8a4) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc8a8));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc8bc) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc8c0));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  iVar17 = DAT_001fc9fc;
  *(undefined4 *)(iVar21 + 0x1fc8d4) = uVar8;
  iVar7 = DAT_001fca00;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc964));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc978) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc90e));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc922) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc93e));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc952) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc926));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc93a) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc8d8));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fc8ec) = uVar8;
  *(int *)(&stack0x00000038 + iVar2) = iVar21 + 0x1fc888;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fc8f0));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(*(int *)(&stack0x00000038 + iVar2) + 0x7c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc904));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc918) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc91c));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc930) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc934));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc948) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x1fc94c));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x1fc960) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc956));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc96a) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc96e));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  iVar21 = DAT_001fcdbc;
  *(undefined4 *)(iVar7 + 0x1fc982) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fca4a));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fca5e) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fca62));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fca76) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fca7a));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar21 + 0x1fca8e) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fca92));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  iVar17 = *(int *)(&stack0x00000010 + iVar2);
  *(undefined4 *)(iVar21 + 0x1fcaa6) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 8));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  iVar17 = *(int *)(&stack0x00000010 + iVar2);
  *(undefined4 *)(iVar17 + 0x1c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x20));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(*(int *)(&stack0x00000010 + iVar2) + 0x34) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x1fc986));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x1fc99a) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar21 + 0x1fca32));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  iVar17 = *(int *)(&stack0x00000010 + iVar2);
  *(undefined4 *)(iVar21 + 0x1fca46) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x38));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar17 + 0x4c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 + 0x50));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  iVar7 = *(int *)(&stack0x00000004 + iVar2);
  *(undefined4 *)(iVar17 + 100) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x58));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x00000008 + iVar2));
  uVar8 = __fixsfsi();
  *(undefined4 *)(iVar7 + 0x6c) = uVar8;
  uVar8 = __floatsisf(*(undefined4 *)(iVar7 + 0x70));
  __mulsf3(uVar8,*(undefined4 *)(&stack0x0000000c + iVar2));
  uVar8 = __fixsfsi();
  iVar21 = DAT_001fcdc0;
  *(undefined4 *)(iVar7 + 0x84) = uVar8;
  *(undefined4 *)(iVar21 + 0x1fcb26) = 1;
  iVar17 = *(int *)(&stack0x00000018 + iVar2);
  *(undefined4 *)(iVar21 + 0x1fcb3e) = 1;
  iVar21 = DAT_001fcdc4;
  *(undefined4 *)(iVar17 + 0x5c) = 2;
  *(undefined4 *)(iVar17 + 0x74) = 1;
  uVar22 = *(undefined4 *)(&stack0x0000002c + iVar2);
  *(undefined4 *)(iVar17 + 0x2c) = 0;
  *(undefined4 *)(iVar17 + 0x8c) = 1;
  *(undefined4 *)(iVar21 + 0x1fcb48) = 1;
  *(undefined4 *)(iVar21 + 0x1fcb60) = 1;
  uVar8 = *(undefined4 *)(&stack0x00000034 + iVar2);
  *(undefined4 *)(this + 0xb0) = uVar22;
  uVar22 = *(undefined4 *)(&stack0x00000030 + iVar2);
  *(undefined4 *)(iVar21 + 0x1fcb90) = 2;
  *(undefined4 *)(this + 0xb4) = uVar8;
  *(undefined4 *)(iVar21 + 0x1fcb78) = 0;
  *(undefined4 *)(iVar21 + 0x1fcba8) = 0;
  *(undefined4 *)(this + 0x15c) = uVar22;
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  uVar8 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0x60));
  *(undefined4 *)(this + 0x14c) = uVar8;
  iVar21 = DAT_001fcdc8;
  uVar8 = ObjectiveSystem::getRatingBonus();
  *(undefined4 *)(this + 0x150) = uVar8;
  uVar8 = ObjectiveSystem::getTotalBonusTime(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  uVar8 = __divsi3(uVar8,1000);
  *(undefined4 *)(this + 0x154) = uVar8;
  uVar8 = ObjectiveSystem::getBonusTimeRemaining
                    (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  uVar8 = __divsi3(uVar8,1000);
  *(undefined4 *)(this + 0x158) = uVar8;
  pCVar9 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false)
  ;
  pIVar10 = (ImageElement *)operator_new(0x98);
  uVar3 = __addsf3(*(undefined4 *)(&stack0x00000008 + iVar2),
                   *(undefined4 *)(&stack0x00000008 + iVar2));
  bVar4 = (bool)__addsf3(*(undefined4 *)(&stack0x0000000c + iVar2),
                         *(undefined4 *)(&stack0x0000000c + iVar2));
  *puVar28 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement(pIVar10,pCVar9,extraout_s0,extraout_s1,uVar3,bVar4);
  *(ImageElement **)(this + 100) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  Vector<String>::elementAt((int)(&stack0x0000004c + iVar2));
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fcdd0 + iVar21 * 4 + 0x1fcc46) + 0x136) * 4 + iVar17);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  *puVar29 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,&stack0x0000004c + iVar2,uVar8,0xffffffff);
  *(ScreenElement **)(this + 0xb8) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String((String *)(&stack0x0000004c + iVar2));
  L_PrintLog((char *)(DAT_001fcdd4 + 0x1fcc48),(char *)(DAT_001fcdd8 + 0x1fcc4a));
  pSVar11 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xac) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  iVar21 = DAT_001fcddc;
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001fcddc),0xb0,false)
  ;
  pIVar10 = (ImageElement *)operator_new(0x98);
  *puVar30 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar10,pCVar9,extraout_s0_00,extraout_s1_00,
             (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
             SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
  *(ImageElement **)(this + 0x70) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0x73,false);
  pIVar10 = (ImageElement *)operator_new(0x98);
  uVar8 = __mulsf3(*(undefined4 *)(&stack0x00000008 + iVar2),DAT_001fcde0);
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar8;
  bVar4 = (bool)__mulsf3(*(undefined4 *)(&stack0x0000000c + iVar2),DAT_001fcde0);
  *puVar31 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar10,pCVar9,extraout_s0_01,extraout_s1_01,
             (uchar)*(undefined4 *)(&stack0x00000004 + iVar2),bVar4);
  *(ImageElement **)(this + 0x68) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0x28,false);
  pOVar27 = this + 0x98;
  *(undefined4 *)pOVar27 = uVar8;
  pIVar10 = (ImageElement *)operator_new(0x98);
  pCVar9 = *(CImage **)pOVar27;
  *puVar32 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar10,pCVar9,extraout_s0_02,extraout_s1_02,
             (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
             SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
  *(ImageElement **)(this + 0x6c) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  pIVar10 = (ImageElement *)operator_new(0x98);
  pCVar9 = *(CImage **)pOVar27;
  *puVar33 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar10,pCVar9,extraout_s0_03,extraout_s1_03,
             (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
             SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
  *(ImageElement **)(this + 0x74) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  pIVar10 = (ImageElement *)operator_new(0x98);
  pCVar9 = *(CImage **)pOVar27;
  *puVar34 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar10,pCVar9,extraout_s0_04,extraout_s1_04,
             (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
             SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
  *(ImageElement **)(this + 0x78) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0xb4,false);
  *(undefined4 *)(this + 0x8c) = uVar8;
  pOVar27 = this + 0xa0;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(ObjectiveDialog **)(&stack0x00000010 + iVar2) = this + 0x8c;
  do {
    pIVar10 = (ImageElement *)operator_new(0x98);
    pCVar9 = (CImage *)**(undefined4 **)(&stack0x00000010 + iVar2);
    *puVar35 = 9;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    ImageElement::ImageElement
              (pIVar10,pCVar9,extraout_s0_05,extraout_s1_05,
               (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
               SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
    *(ImageElement **)pOVar27 = pIVar10;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
    iVar17 = ObjectiveSystem::getBonusStreak
                       (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fcdc8));
    if (iVar17 < *(int *)(&stack0x00000004 + iVar2)) {
      piVar12 = *(int **)pOVar27;
      pcVar19 = *(code **)(*piVar12 + 0x20);
    }
    else {
      piVar12 = *(int **)pOVar27;
      pcVar19 = *(code **)(*piVar12 + 0x20);
    }
    (*pcVar19)(piVar12,iVar17 >= *(int *)(&stack0x00000004 + iVar2));
    iVar17 = *(int *)(&stack0x00000004 + iVar2);
    pOVar27 = pOVar27 + 4;
    *(int *)(&stack0x00000004 + iVar2) = iVar17 + 1;
  } while (iVar17 + 1 != 3);
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0xae,false);
  *(undefined4 *)(this + 0x90) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0xaf,false);
  *(undefined4 *)(this + 0x94) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0xb9,false);
  *(undefined4 *)(this + 0x9c) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0xb3,false);
  *(undefined4 *)(this + 0x88) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar21),0xb5,false);
  *(undefined4 *)(this + 0x80) = uVar8;
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001fd22c),0xb6,false);
  *(undefined4 *)(this + 0x84) = uVar8;
  piVar12 = *(int **)(this + 0x68);
  this_00 = *(ZombieCafe **)(this + 0x60);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  pCVar9 = (CImage *)ZombieCafe::getModifiedRating(this_00);
  this_01 = (RatingBar *)operator_new(0x9c);
  pCVar18 = *(CImage **)(this + 0x80);
  pCVar20 = *(CImage **)(this + 0x84);
  *puVar36 = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  RatingBar::RatingBar(this_01,extraout_s0_06,pCVar9,pCVar18,pCVar20,(bool)*puVar37);
  *(RatingBar **)(this + 0x13c) = this_01;
  fVar63 = (float)(**(code **)(&stack0x00000004 + iVar2))(piVar12,this_01);
  RatingBar::setBonusValue(fVar63);
  ObjectiveSystem::getBonusStreak(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  Vector<String>::elementAt((int)(&stack0x00000054 + iVar2));
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fd238 + iVar21 * 4 + 0x1fcf64) + 0x136) * 4 + iVar17);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  *puVar38 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,&stack0x00000054 + iVar2,uVar8,0xffffffff);
  *(ScreenElement **)(this + 0xbc) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String((String *)(&stack0x00000054 + iVar2));
  ObjectiveSystem::getBonusStreak(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  Vector<String>::elementAt((int)(&stack0x0000005c + iVar2));
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fd240 + iVar21 * 4 + 0x1fcf84) + 0x136) * 4 + iVar17);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  *puVar39 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,&stack0x0000005c + iVar2,uVar8,0xffffffff);
  *(ScreenElement **)(this + 0xc0) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String((String *)(&stack0x0000005c + iVar2));
  iVar21 = ObjectiveSystem::getBonusStreak
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  if (iVar21 == 0) {
    (**(code **)(**(int **)(this + 0xbc) + 0x20))();
    (**(code **)(**(int **)(this + 0xc0) + 0x20))(*(int **)(this + 0xc0),0);
  }
  piVar12 = *(int **)(this + 0x68);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x00000064 + iVar2));
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fd248 + iVar21 * 4 + 0x1fd012) + 0x136) * 4 + iVar17);
  pBVar13 = (BitmapTextElement *)operator_new(0xc0);
  *puVar40 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement(pBVar13,&stack0x00000064 + iVar2,uVar8,0xff000000);
  *(BitmapTextElement **)(this + 0xc4) = pBVar13;
  (**(code **)(&stack0x00000004 + iVar2))(piVar12,pBVar13);
  String::~String((String *)(&stack0x00000064 + iVar2));
  piVar12 = *(int **)(this + 0x68);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x0000006c + iVar2));
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fd250 + iVar21 * 4 + 0x1fd0b0) + 0x136) * 4 + iVar17);
  pBVar13 = (BitmapTextElement *)operator_new(0xc0);
  *puVar41 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement(pBVar13,&stack0x0000006c + iVar2,uVar8,0xff000000);
  *(BitmapTextElement **)(this + 0xcc) = pBVar13;
  (**(code **)(&stack0x00000004 + iVar2))(piVar12,pBVar13);
  String::~String((String *)(&stack0x0000006c + iVar2));
  iVar21 = DAT_001fd234;
  uVar8 = ObjectiveSystem::getBonusTimeRemaining
                    (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  uVar22 = ObjectiveSystem::getBonusTimeRemaining
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  uVar24 = ObjectiveSystem::getBonusTimeRemaining
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  uVar24 = __divsi3(uVar24,DAT_001fd254);
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar24;
  uVar22 = __divsi3(uVar22,DAT_001fd258);
  __aeabi_idivmod(uVar22,0x3c);
  *puVar42 = extraout_r1;
  uVar8 = __divsi3(uVar8,1000);
  __aeabi_idivmod(uVar8,0x3c);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = extraout_r1_00;
  snprintf(&stack0x00000180 + iVar2,0x80,(char *)(DAT_001fd25c + 0x1fd104),
           *(undefined4 *)(&stack0x00000004 + iVar2));
  piVar12 = *(int **)(this + 0x68);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  String::String((String *)(&stack0x00000074 + iVar2),&stack0x00000180 + iVar2);
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fd260 + iVar21 * 4 + 0x1fd182) + 0x136) * 4 + iVar17);
  pBVar13 = (BitmapTextElement *)operator_new(0xc0);
  *puVar43 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement(pBVar13,&stack0x00000074 + iVar2,uVar8,0xff000000);
  *(BitmapTextElement **)(this + 0xd0) = pBVar13;
  (**(code **)(&stack0x00000004 + iVar2))(piVar12,pBVar13);
  String::~String((String *)(&stack0x00000074 + iVar2));
  piVar12 = *(int **)(this + 0x68);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  uVar8 = ObjectiveSystem::getBonusTimeRemaining
                    (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  uVar22 = ObjectiveSystem::getTotalBonusTime
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar22;
  pPVar14 = (ProgressBar *)operator_new(0x84);
  iVar21 = __divsi3(uVar8,1000);
  iVar17 = __divsi3(*(undefined4 *)(&stack0x00000010 + iVar2),1000);
  *puVar44 = 0xb2;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0xff000000;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0xffffffff;
  ProgressBar::ProgressBar
            (pPVar14,iVar21,iVar17,0xb1,*puVar45,*(int *)(&stack0xfffffff0 + iVar2),
             *(int *)(&stack0xfffffff4 + iVar2));
  pOVar27 = this + 0xdc;
  *(ProgressBar **)pOVar27 = pPVar14;
  (**(code **)(&stack0x00000004 + iVar2))(piVar12,pPVar14);
  (**(code **)(**(int **)pOVar27 + 0x1c))(*(int **)pOVar27,0x11);
  iVar21 = ObjectiveSystem::getBonusTimeRemaining
                     (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd234));
  if (iVar21 < 1) {
    (**(code **)(**(int **)pOVar27 + 0x20))(*(int **)pOVar27,0);
    (**(code **)(**(int **)(this + 0xcc) + 0x20))(*(int **)(this + 0xcc),0);
    (**(code **)(**(int **)(this + 0xd0) + 0x20))(*(int **)(this + 0xd0),0);
  }
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001fd22c),6,false);
  pZVar15 = (ZCImageButton *)operator_new(0xa0);
  *puVar46 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar15,'!',pCVar9,(CImage *)0x0,*piVar47,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0xe0) = pZVar15;
  uVar64 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xe0),(float)uVar64,(float)((ulonglong)uVar64 >> 0x20));
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001fd5b4),10,false);
  pZVar15 = (ZCImageButton *)operator_new(0xa0);
  *puVar48 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar15,'\x11',pCVar9,(CImage *)0x0,*piVar49,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  pOVar27 = this + 0xe4;
  *(ZCImageButton **)pOVar27 = pZVar15;
  uVar64 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
  ImageButton::setScale(*(ImageButton **)pOVar27,(float)uVar64,(float)((ulonglong)uVar64 >> 0x20));
  iVar21 = DAT_001fd5b8;
  piVar12 = *(int **)pOVar27;
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar12 + 0x2c);
  ObjectiveSystem::isSetComplete(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd5b8));
  Vector<String>::elementAt((int)(&stack0x0000007c + iVar2));
  iVar7 = *(int *)(this + 0x60);
  iVar17 = SmDev();
  *(undefined4 *)(&stack0x00000010 + iVar2) =
       *(undefined4 *)((*(int *)(DAT_001fd5c4 + iVar17 * 4 + 0x1fd372) + 0x136) * 4 + iVar7);
  pBVar13 = (BitmapTextElement *)operator_new(0xc0);
  *puVar50 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x12;
  BitmapTextElement::BitmapTextElement
            (pBVar13,&stack0x0000007c + iVar2,*(undefined4 *)(&stack0x00000010 + iVar2),0xffffffff);
  *(BitmapTextElement **)(this + 0xd4) = pBVar13;
  (**(code **)(&stack0x00000004 + iVar2))(piVar12,pBVar13);
  String::~String((String *)(&stack0x0000007c + iVar2));
  pCVar9 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001fd5b4),0x23,false)
  ;
  pIVar10 = (ImageElement *)operator_new(0x98);
  *puVar51 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar10,pCVar9,extraout_s0_07,extraout_s1_06,
             (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
             SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
  *(ImageElement **)(this + 0x7c) = pIVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
  piVar12 = *(int **)(this + 0x7c);
  pcVar19 = *(code **)(*piVar12 + 0x20);
  bVar5 = ObjectiveSystem::isSetComplete(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  (*pcVar19)(piVar12,bVar5 ^ 1);
  ObjectiveSystem::getObjectiveCount(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  ObjectiveSystem::getSetProgressCompletion(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  iVar25 = *(int *)(&stack0x00000014 + iVar2);
  String::valueOf((int)(&stack0x0000003c + iVar2));
  StringUtil::getEncodingString((StringUtil *)(&stack0x00000084 + iVar2),'\0');
  *puVar52 = 0;
  uVar8 = String::getBytes((String *)(&stack0x0000003c + iVar2),&stack0x00000084 + iVar2,0);
  *(undefined4 *)(this + 0x164) = uVar8;
  String::~String((String *)(&stack0x00000084 + iVar2));
  iVar7 = DAT_001fd5d0;
  iVar17 = DAT_001fd5cc;
  *(int *)(this + 0x168) = (int)*(short *)(&stack0x00000042 + iVar2);
  L_PrintLog((char *)(iVar7 + 0x1fd3fc),(char *)(iVar17 + 0x1fd3fa));
  String::String((String *)(&stack0x0000008c + iVar2),*(String **)(iVar25 + DAT_001fd5d4));
  iVar7 = **(int **)(iVar25 + DAT_001fd5d8);
  iVar17 = SmDev();
  uVar8 = *(undefined4 *)(iVar17 * 4 + iVar7);
  pCVar16 = (CapcomTrueTypeFont *)operator_new(0x160);
  uVar8 = __floatsisf(uVar8);
  CapcomTrueTypeFont::CapcomTrueTypeFont(pCVar16,&stack0x0000008c + iVar2,0,uVar8);
  *(CapcomTrueTypeFont **)(this + 0x160) = pCVar16;
  String::~String((String *)(&stack0x0000008c + iVar2));
  puVar23 = *(undefined4 **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001fd5dc);
  uVar8 = puVar23[1];
  uVar22 = puVar23[2];
  *(undefined4 *)(&stack0x00000154 + iVar2) = *puVar23;
  *(undefined4 *)(&stack0x00000158 + iVar2) = uVar8;
  *(undefined4 *)(&stack0x0000015c + iVar2) = uVar22;
  uVar8 = puVar23[4];
  uVar22 = puVar23[5];
  *(undefined4 *)(&stack0x00000160 + iVar2) = puVar23[3];
  *(undefined4 *)(&stack0x00000164 + iVar2) = uVar8;
  *(undefined4 *)(&stack0x00000168 + iVar2) = uVar22;
  uVar8 = puVar23[7];
  uVar22 = puVar23[8];
  *(undefined4 *)(&stack0x0000016c + iVar2) = puVar23[6];
  *(undefined4 *)(&stack0x00000170 + iVar2) = uVar8;
  *(undefined4 *)(&stack0x00000174 + iVar2) = uVar22;
  uVar8 = puVar23[10];
  *(undefined4 *)(&stack0x00000178 + iVar2) = puVar23[9];
  *(undefined4 *)(&stack0x0000017c + iVar2) = uVar8;
  (&stack0x0000016c)[iVar2] = 1;
  iVar7 = **(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001fd5e0);
  iVar17 = SmDev();
  uVar8 = __floatsisf(*(undefined4 *)(iVar17 * 4 + iVar7));
  *(undefined4 *)(&stack0x00000174 + iVar2) = uVar8;
  *(undefined4 *)(&stack0x00000170 + iVar2) =
       **(undefined4 **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001fd5e4);
  *(undefined1 **)(*(int *)(this + 0x160) + 0x15c) = &stack0x00000154 + iVar2;
  iVar17 = ObjectiveSystem::getSetCompletion(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  uVar8 = ObjectiveSystem::getObjectiveCount(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21));
  __divsi3(iVar17 * 100,uVar8);
  String::valueOf((int)(&stack0x00000094 + iVar2));
  Vector<String>::elementAt((int)(&stack0x0000009c + iVar2));
  String::operator+((String *)(&stack0x00000044 + iVar2),&stack0x00000094 + iVar2,
                    &stack0x0000009c + iVar2);
  String::~String((String *)(&stack0x0000009c + iVar2));
  String::~String((String *)(&stack0x00000094 + iVar2));
  String::String((String *)(&stack0x000000a4 + iVar2),(String *)(&stack0x00000044 + iVar2));
  iVar17 = *(int *)(this + 0x60);
  iVar21 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_001fd5ec + iVar21 * 4 + 0x1fd512) + 0x136) * 4 + iVar17);
  pSVar11 = (ScreenElement *)operator_new(0xc0);
  *puVar53 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar11,&stack0x000000a4 + iVar2,uVar8,0xffffffff);
  *(ScreenElement **)(this + 200) = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  String::~String((String *)(&stack0x000000a4 + iVar2));
  piVar12 = *(int **)(this + 200);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  do {
    iVar21 = DAT_001fdcb4;
    iVar17 = ObjectiveSystem::getObjectiveCount
                       (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fdcb4));
    if (iVar17 <= *(int *)(&stack0x00000004 + iVar2)) {
      iVar17 = CapcomApp::getInstance();
      *(undefined4 *)(&stack0x00000008 + iVar2) = *(undefined4 *)(iVar17 + 4);
      String::String((String *)(&stack0x0000014c + iVar2),0);
      iVar17 = SmDev();
      uVar8 = *(undefined4 *)
               ((*(int *)(iVar17 * 4 + DAT_001fdcb8 + 0x1fd9ec) + 0x136) * 4 +
               *(int *)(&stack0x00000008 + iVar2));
      pSVar11 = (ScreenElement *)operator_new(0xc0);
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 10;
      *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
      *puVar62 = 0xff000000;
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar11,&stack0x0000014c + iVar2,uVar8,0xffffffff);
      *(ScreenElement **)(this + 0xd8) = pSVar11;
      ScreenElement::addChild((ScreenElement *)this,pSVar11);
      String::~String((String *)(&stack0x0000014c + iVar2));
      piVar12 = *(int **)(this + 0xd8);
      pcVar19 = *(code **)(*piVar12 + 0x20);
      bVar5 = ObjectiveSystem::isSetComplete
                        (*(ObjectiveSystem **)(*(int *)(&stack0x00000008 + iVar2) + iVar21));
      (*pcVar19)(piVar12,bVar5 ^ 1);
      layout(this);
      L_PrintLog((char *)(DAT_001fdcbc + 0x1fda5c),(char *)(DAT_001fdcc0 + 0x1fda5e));
      String::~String((String *)(&stack0x00000044 + iVar2));
      String::~String((String *)(&stack0x0000003c + iVar2));
      if (*(int *)(&stack0x00000200 + iVar2) ==
          **(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001fdcc4)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this);
    }
    String::String((String *)(&stack0x000000ac + iVar2));
    iVar17 = ObjectiveSystem::getObjectiveGoal
                       (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                        *(int *)(&stack0x00000004 + iVar2));
    if (iVar17 == 1) {
      ObjectiveSystem::getObjectiveType
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                 *(int *)(&stack0x00000004 + iVar2));
      Vector<String>::elementAt((int)(&stack0x000000c4 + iVar2));
      String::String((String *)(&stack0x000000cc + iVar2),(char *)(DAT_001fd5f4 + 0x1fd576));
      ObjectiveSystem::getObjectiveGoal
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                 *(int *)(&stack0x00000004 + iVar2));
      String::valueOf((int)(&stack0x000000d4 + iVar2));
      StringUtil::replace((StringUtil *)(&stack0x000000bc + iVar2),&stack0x000000c4 + iVar2,
                          &stack0x000000cc + iVar2,&stack0x000000d4 + iVar2);
      String::operator=((String *)(&stack0x000000ac + iVar2),&stack0x000000bc + iVar2);
      String::~String((String *)(&stack0x000000bc + iVar2));
      String::~String((String *)(&stack0x000000d4 + iVar2));
      String::~String((String *)(&stack0x000000cc + iVar2));
      puVar1 = &stack0x000000c4;
    }
    else {
      ObjectiveSystem::getObjectiveType
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                 *(int *)(&stack0x00000004 + iVar2));
      Vector<String>::elementAt((int)(&stack0x000000e4 + iVar2));
      String::String((String *)(&stack0x000000ec + iVar2),(char *)(DAT_001fd99c + 0x1fd61a));
      ObjectiveSystem::getObjectiveGoal
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                 *(int *)(&stack0x00000004 + iVar2));
      String::valueOf((int)(&stack0x000000f4 + iVar2));
      StringUtil::replace((StringUtil *)(&stack0x000000dc + iVar2),&stack0x000000e4 + iVar2,
                          &stack0x000000ec + iVar2,&stack0x000000f4 + iVar2);
      String::operator=((String *)(&stack0x000000ac + iVar2),&stack0x000000dc + iVar2);
      String::~String((String *)(&stack0x000000dc + iVar2));
      String::~String((String *)(&stack0x000000f4 + iVar2));
      String::~String((String *)(&stack0x000000ec + iVar2));
      puVar1 = &stack0x000000e4;
    }
    String::~String((String *)(puVar1 + iVar2));
    iVar17 = ObjectiveSystem::getObjectiveType
                       (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                        *(int *)(&stack0x00000004 + iVar2));
    if (iVar17 == 4) {
      iVar7 = *(int *)(*(int *)(this + 0x60) + 0x4e8);
      iVar17 = ObjectiveSystem::getObjectiveRecipeIndex
                         (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                          *(int *)(&stack0x00000004 + iVar2));
      String::String((String *)(&stack0x0000010c + iVar2),(String *)(iVar7 + iVar17 * 0x1c));
      String::String((String *)(&stack0x00000114 + iVar2),(char *)(DAT_001fd9a0 + 0x1fd68c));
      String::operator+((String *)(&stack0x00000104 + iVar2),&stack0x0000010c + iVar2,
                        &stack0x00000114 + iVar2);
      String::String((String *)(&stack0x0000011c + iVar2),(String *)(&stack0x000000ac + iVar2));
      String::operator+((String *)(&stack0x000000fc + iVar2),&stack0x00000104 + iVar2,
                        &stack0x0000011c + iVar2);
      String::operator=((String *)(&stack0x000000ac + iVar2),&stack0x000000fc + iVar2);
      String::~String((String *)(&stack0x000000fc + iVar2));
      String::~String((String *)(&stack0x0000011c + iVar2));
      String::~String((String *)(&stack0x00000104 + iVar2));
      String::~String((String *)(&stack0x00000114 + iVar2));
      String::~String((String *)(&stack0x0000010c + iVar2));
    }
    String::String((String *)(&stack0x00000124 + iVar2),(String *)(&stack0x000000ac + iVar2));
    iVar7 = *(int *)(this + 0x60);
    iVar17 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(DAT_001fd9a4 + iVar17 * 4 + 0x1fd6fe) + 0x136) * 4 + iVar7);
    pBVar13 = (BitmapTextElement *)operator_new(0xc0);
    *puVar54 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
    BitmapTextElement::BitmapTextElement(pBVar13,&stack0x00000124 + iVar2,uVar8,0xff000000);
    Vector<BitmapTextElement*>::addElement
              (*(Vector<BitmapTextElement*> **)(&stack0x0000001c + iVar2),pBVar13);
    String::~String((String *)(&stack0x00000124 + iVar2));
    pBVar13[0x7f] = (BitmapTextElement)0x14;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pBVar13);
    uVar8 = ObjectiveSystem::getObjectiveCompletion
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
                       *(int *)(&stack0x00000004 + iVar2));
    iVar17 = *(int *)(this + 0x60);
    *(undefined4 *)(&stack0x00000010 + iVar2) = uVar8;
    uVar8 = ObjectiveSystem::getObjectiveGoal
                      (*(ObjectiveSystem **)(iVar17 + iVar21),*(int *)(&stack0x00000004 + iVar2));
    *(undefined4 *)(&stack0x00000018 + iVar2) = uVar8;
    iVar17 = SmDev();
    uVar8 = *(undefined4 *)(DAT_001fd9a8 + iVar17 * 4 + 0x1fd784);
    pPVar14 = (ProgressBar *)operator_new(0x84);
    *puVar55 = 0xad;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0xff000000;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar8;
    ProgressBar::ProgressBar
              (pPVar14,*(int *)(&stack0x00000010 + iVar2),*(int *)(&stack0x00000018 + iVar2),0xb1,
               *puVar56,*(int *)(&stack0xfffffff0 + iVar2),*(int *)(&stack0xfffffff4 + iVar2));
    Vector<ProgressBar*>::addElement((Vector<ProgressBar*> *)(this + 0x100),pPVar14);
    (**(code **)(*(int *)pPVar14 + 0x1c))(pPVar14,0x11);
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pPVar14);
    ObjectiveSystem::getObjectiveCompletion
              (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
               *(int *)(&stack0x00000004 + iVar2));
    String::valueOf((int)(&stack0x00000134 + iVar2));
    String::operator+((String *)(&stack0x0000012c + iVar2),&stack0x00000134 + iVar2);
    ObjectiveSystem::getObjectiveGoal
              (*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar21),
               *(int *)(&stack0x00000004 + iVar2));
    String::valueOf((int)(&stack0x0000013c + iVar2));
    String::operator+((String *)(&stack0x000000b4 + iVar2),&stack0x0000012c + iVar2,
                      &stack0x0000013c + iVar2);
    String::~String((String *)(&stack0x0000013c + iVar2));
    String::~String((String *)(&stack0x0000012c + iVar2));
    String::~String((String *)(&stack0x00000134 + iVar2));
    String::String((String *)(&stack0x00000144 + iVar2),(String *)(&stack0x000000b4 + iVar2));
    iVar17 = *(int *)(this + 0x60);
    iVar21 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(iVar21 * 4 + DAT_001fd9b0 + 0x1fd7f2) + 0x136) * 4 + iVar17);
    pBVar13 = (BitmapTextElement *)operator_new(0xc0);
    *puVar57 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x22;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
    *(BitmapTextElement **)(&stack0x00000010 + iVar2) = pBVar13;
    BitmapTextElement::BitmapTextElement(pBVar13,&stack0x00000144 + iVar2,uVar8,0xff000000);
    Vector<BitmapTextElement*>::addElement
              (*(Vector<BitmapTextElement*> **)(&stack0x00000020 + iVar2),
               *(BitmapTextElement **)(&stack0x00000010 + iVar2));
    String::~String((String *)(&stack0x00000144 + iVar2));
    *(undefined1 *)(*(int *)(&stack0x00000010 + iVar2) + 0x7f) = 0x22;
    ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(&stack0x00000010 + iVar2));
    pIVar10 = (ImageElement *)operator_new(0x98);
    pCVar9 = *(CImage **)(this + 0x90);
    *puVar58 = 10;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    ImageElement::ImageElement
              (pIVar10,pCVar9,extraout_s0_08,extraout_s1_07,
               (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
               SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
    Vector<ImageElement*>::addElement(*(Vector<ImageElement*> **)(&stack0x00000024 + iVar2),pIVar10)
    ;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar10);
    this_02 = (ImageElement *)operator_new(0x98);
    pCVar9 = *(CImage **)(this + 0x94);
    *puVar59 = 10;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    ImageElement::ImageElement
              (this_02,pCVar9,extraout_s0_09,extraout_s1_08,
               (uchar)*(undefined4 *)(&stack0x00000008 + iVar2),
               SUB41(*(undefined4 *)(&stack0x0000000c + iVar2),0));
    Vector<ImageElement*>::addElement(*(Vector<ImageElement*> **)(&stack0x00000028 + iVar2),this_02)
    ;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_02);
    pZVar15 = (ZCImageButton *)operator_new(0xa0);
    pCVar9 = *(CImage **)(this + 0x9c);
    *puVar60 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
    ZCImageButton::ZCImageButton
              (pZVar15,'\n',pCVar9,(CImage *)0x0,*piVar61,*(int *)(&stack0xfffffff0 + iVar2),
               (bool)(&stack0xfffffff4)[iVar2]);
    uVar64 = Vector<ZCImageButton*>::addElement((Vector<ZCImageButton*> *)(this + 0x130),pZVar15);
    ImageButton::setScale((ImageButton *)pZVar15,(float)uVar64,(float)((ulonglong)uVar64 >> 0x20));
    pZVar15[0x93] = (ZCImageButton)0x1;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
    Vector<int>::addElement((Vector<int> *)(this + 0xe8),-1);
    uVar8 = ObjectiveSystem::getObjectiveCompletion
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd9b4),
                       *(int *)(&stack0x00000004 + iVar2));
    iVar21 = *(int *)(this + 0x60);
    *(undefined4 *)(&stack0x00000018 + iVar2) = uVar8;
    iVar21 = ObjectiveSystem::getObjectiveGoal
                       (*(ObjectiveSystem **)(iVar21 + DAT_001fd9b4),
                        *(int *)(&stack0x00000004 + iVar2));
    if (*(int *)(&stack0x00000018 + iVar2) == iVar21) {
      iVar21 = ObjectiveSystem::getObjectiveCompleted
                         (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fd9b4),
                          *(int *)(&stack0x00000004 + iVar2));
      pcVar19 = *(code **)(**(int **)(&stack0x00000010 + iVar2) + 0x20);
      if (iVar21 != 0) {
        (*pcVar19)(*(int **)(&stack0x00000010 + iVar2),0);
        (**(code **)(*(int *)pIVar10 + 0x20))(pIVar10,1);
        uVar8 = 1;
        pcVar19 = *(code **)(*(int *)this_02 + 0x20);
        goto LAB_001fd976;
      }
      (*pcVar19)(*(undefined4 *)(&stack0x00000010 + iVar2),0);
      (**(code **)(*(int *)pIVar10 + 0x20))(pIVar10,0);
      (**(code **)(*(int *)this_02 + 0x20))(this_02,0);
      uVar8 = 1;
      pcVar19 = *(code **)(*(int *)pZVar15 + 0x20);
    }
    else {
      (**(code **)(**(int **)(&stack0x00000010 + iVar2) + 0x20))
                (*(int **)(&stack0x00000010 + iVar2),1);
      (**(code **)(*(int *)pIVar10 + 0x20))(pIVar10,0);
      uVar8 = 0;
      pcVar19 = *(code **)(*(int *)this_02 + 0x20);
LAB_001fd976:
      (*pcVar19)(this_02,uVar8);
      uVar8 = 0;
      pcVar19 = *(code **)(*(int *)pZVar15 + 0x20);
    }
    (*pcVar19)(pZVar15,uVar8);
    String::~String((String *)(&stack0x000000b4 + iVar2));
    String::~String((String *)(&stack0x000000ac + iVar2));
    *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + 1;
  } while( true );
}


