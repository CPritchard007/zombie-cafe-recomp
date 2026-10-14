/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002154b8 RecipeBook::RecipeBook */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00216f8a) */
/* WARNING: Removing unreachable block (ram,0x00216f8a) */
/* RecipeBook::RecipeBook(CImage**, CImage**, NoticeDialog*, ConfirmDialog*, bool, unsigned char*,
   unsigned char) */

RecipeBook * __thiscall
RecipeBook::RecipeBook
          (RecipeBook *this,CImage **param_1,CImage **param_2,NoticeDialog *param_3,
          ConfirmDialog *param_4,bool param_5,uchar *param_6,uchar param_7)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  CImage *pCVar12;
  ImageElement *pIVar13;
  ScreenElement *pSVar14;
  ZCImageButton *pZVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  ImageElement *this_00;
  BitmapTextElement *pBVar18;
  ImageElement *this_01;
  undefined1 *puVar19;
  int iVar20;
  undefined4 uVar21;
  undefined *puVar22;
  int iVar23;
  code *pcVar24;
  int iVar25;
  RecipeBook *pRVar26;
  int *piVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 *puVar30;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar31;
  float extraout_s1_01;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  int local_19c;
  int local_190;
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar23 = DAT_002158b0 + 0x2154d6;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar23 + DAT_002158b4) + 8;
  Vector<ZCImageButton*>::Vector((Vector<ZCImageButton*> *)(this + 0x6c));
  Vector<ImageElement*>::Vector((Vector<ImageElement*> *)(this + 0x78));
  *(undefined4 *)(this + 0x84) = 10;
  pvVar7 = operator_new__(0x28);
  *(void **)(this + 0x8c) = pvVar7;
  memset(pvVar7,0,*(int *)(this + 0x84) << 2);
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  Vector<ImageElement*>::Vector((Vector<ImageElement*> *)(this + 0x90));
  Vector<ImageElement*>::Vector((Vector<ImageElement*> *)(this + 0x9c));
  Vector<ZCImageButton*>::Vector((Vector<ZCImageButton*> *)(this + 0xa8));
  Vector<ImageElement*>::Vector((Vector<ImageElement*> *)(this + 0xb4));
  *(undefined4 *)(this + 0xc0) = 10;
  pvVar7 = operator_new__(0x28);
  *(void **)(this + 200) = pvVar7;
  memset(pvVar7,0,*(int *)(this + 0xc0) << 2);
  iVar25 = DAT_002158bc;
  iVar8 = DAT_002158b8;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  L_PrintLog((char *)(iVar8 + 0x215566),(char *)(iVar25 + 0x215568));
  iVar8 = CapcomApp::getInstance();
  uVar9 = *(undefined4 *)(iVar8 + 0x40);
  iVar10 = CapcomApp::getInstance();
  iVar25 = DAT_002158c4;
  iVar8 = DAT_002158c0;
  uVar28 = *(undefined4 *)(iVar10 + 0x44);
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002158c0 + 0x215580));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar8 + 0x215594) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar8 + 0x215598));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar8 + 0x2155ac) = uVar11;
  iVar10 = DAT_002158c8;
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002158c8 + 0x2155fc));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar10 + 0x215610) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar10 + 0x215614));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar10 + 0x215628) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar8 + 0x2155b0));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar8 + 0x2155c4) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar8 + 0x2155c8));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar8 + 0x2155dc) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x2155f2));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x215606) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x21560a));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  iVar20 = DAT_002158cc;
  *(undefined4 *)(iVar25 + 0x21561e) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar20 + 0x215690));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar20 + 0x2156a4) = uVar11;
  iVar4 = DAT_002158d0;
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002158d0 + 0x215644));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  iVar5 = DAT_002158d4;
  *(undefined4 *)(iVar4 + 0x215658) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar5 + 0x215652));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x215666) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x21568c));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x2156a0) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x2156a4));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x2156b8) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x2155aa));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x2155be) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x2155c2));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x2155d6) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x2155da));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x2155ee) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x21565c));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x215670) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x215674));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x215688) = uVar11;
  iVar4 = DAT_002158d8;
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002158d8 + 0x2156f2));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x215706) = uVar11;
  iVar5 = DAT_002158dc;
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002158dc + 0x215740));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x215754) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x21570a));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x21571e) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x215722));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x215736) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x215752));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x215766) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x21573a));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x21574e) = uVar11;
  iVar4 = DAT_002158e0;
  uVar11 = __floatsisf(*(undefined4 *)(DAT_002158e0 + 0x215762));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x215776) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x21577a));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x21578e) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x215622));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x215636) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar5 + 0x215710));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x215724) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar5 + 0x215728));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x21573c) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar5 + 0x215758));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x21576c) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar5 + 0x215770));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar5 + 0x215784) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar20 + 0x215678));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar20 + 0x21568c) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar20 + 0x215648));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar20 + 0x21565c) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar20 + 0x215660));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar20 + 0x215674) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x215792));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x2157a6) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x2157aa));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x2157be) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x2157c2));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x2157d6) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar4 + 0x2157da));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  iVar25 = DAT_002158e4;
  *(undefined4 *)(iVar4 + 0x2157ee) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x215892));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x2158a6) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x2158aa));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)((int)&DAT_002158bc + iVar25 + 2) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)((int)&DAT_002158c0 + iVar25 + 2));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)((int)&DAT_002158d4 + iVar25 + 2) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)((int)&DAT_002158d8 + iVar25 + 2));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x2158ee) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar25 + 0x2158f2));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar25 + 0x215906) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar10 + 0x2155b4));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar10 + 0x2155c8) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar10 + 0x2155cc));
  __mulsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar10 + 0x2155e0) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar10 + 0x2155e4));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar10 + 0x2155f8) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar8 + 0x2155e0));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar8 + 0x2155f4) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar8 + 0x2155f8));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar8 + 0x21560c) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(iVar20 + 0x215630));
  __mulsf3(uVar11,uVar28);
  uVar11 = __fixsfsi();
  *(undefined4 *)(iVar20 + 0x215644) = uVar11;
  iVar8 = CapcomApp::getInstance();
  uVar11 = __mulsf3(*(undefined4 *)(iVar8 + 0x48),0x3fc00000);
  *(undefined4 *)(DAT_00215d70 + 0x2159d2) = uVar11;
  iVar8 = CapcomApp::getInstance();
  uVar11 = __mulsf3(*(undefined4 *)(iVar8 + 0x48),DAT_00215d74);
  iVar8 = DAT_00215d78;
  *(undefined4 *)(DAT_00215d78 + 0x2159fe) = uVar11;
  uVar9 = __mulsf3(*(undefined4 *)(iVar8 + 0x215a02),uVar9);
  *(undefined4 *)(iVar8 + 0x215a16) = uVar9;
  uVar9 = __mulsf3(*(undefined4 *)(iVar8 + 0x215a1a),uVar28);
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(iVar8 + 0x215a2e) = uVar9;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(CImage ***)(this + 0x138) = param_1;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(CImage ***)(this + 0x13c) = param_2;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(NoticeDialog **)(this + 0x144) = param_3;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(ConfirmDialog **)(this + 0x148) = param_4;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x162] = (RecipeBook)param_5;
  *(uchar **)(this + 0x164) = param_6;
  ScreenElement::setAnchor((ScreenElement *)this,param_7);
  iVar8 = CapcomApp::getInstance();
  iVar8 = *(int *)(iVar8 + 4);
  *(int *)(this + 0x60) = iVar8;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x160] = (RecipeBook)0x0;
  this[DAT_00215d7c] = (RecipeBook)0x0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined2 *)(this + 0x170) = 0;
  pCVar12 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar8 + 0x7f0),0,false);
  pIVar13 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar13,pCVar12,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x140) = pIVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
  pSVar14 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar14,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 100) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  piVar27 = *(int **)(this + 100);
  pcVar24 = *(code **)(*piVar27 + 0x2c);
  pSVar14 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar14,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x68) = pSVar14;
  (*pcVar24)(piVar27,pSVar14);
  String::String(aSStack_144,0);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00215d80 + iVar8 * 4 + 0x215b48) + 0x136) * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_144,uVar9,**(undefined4 **)(iVar23 + DAT_00215d84)
             ,1,1,0,9,0);
  *(ScreenElement **)(this + 0x110) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_144);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0x110),6);
  String::String(aSStack_13c,0);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00215d88 + iVar8 * 4 + 0x215bc6) + 0x136) * 4 + iVar25);
  iVar8 = SmDev();
  uVar11 = *(undefined4 *)(DAT_00215d8c + iVar8 * 4 + 0x215b8e);
  iVar8 = SmDev();
  uVar29 = *(uint *)(DAT_00215d90 + iVar8 * 4 + 0x215b84);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_13c,uVar9,**(undefined4 **)(iVar23 + DAT_00215d98)
             ,**(undefined4 **)(iVar23 + DAT_00215d94),0,1,0,uVar11,0,0x11,uVar29 & 0xff,0);
  *(ScreenElement **)(this + 0xfc) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_13c);
  L_PrintLog((char *)(DAT_00215d9c + 0x215bcc),(char *)(DAT_00215da0 + 0x215bce));
  pRVar26 = this + 0xfc;
  *(undefined1 *)(*(int *)pRVar26 + 0x7f) = 0x11;
  (**(code **)(**(int **)pRVar26 + 0x58))(*(int **)pRVar26,0);
  ScreenElement::setOrder(*(ScreenElement **)pRVar26,5);
  StringBuffer::StringBuffer(aSStack_34);
  Vector<String>::elementAt((int)aSStack_134);
  StringBuffer::append(aSStack_34,aSStack_134);
  String::~String(aSStack_134);
  String::String(aSStack_12c,(char *)(DAT_00215da8 + 0x215c20));
  StringBuffer::append(aSStack_34,aSStack_12c);
  String::~String(aSStack_12c);
  Vector<String>::elementAt((int)aSStack_124);
  StringBuffer::append(aSStack_34,aSStack_124);
  String::~String(aSStack_124);
  String::String(aSStack_11c,(char *)(DAT_00215db0 + 0x215c58));
  StringBuffer::append(aSStack_34,aSStack_11c);
  String::~String(aSStack_11c);
  Vector<String>::elementAt((int)aSStack_114);
  StringBuffer::append(aSStack_34,aSStack_114);
  String::~String(aSStack_114);
  String::String(aSStack_10c,(char *)(DAT_00215db8 + 0x215c90));
  StringBuffer::append(aSStack_34,aSStack_10c);
  String::~String(aSStack_10c);
  Vector<String>::elementAt((int)aSStack_104);
  StringBuffer::append(aSStack_34,aSStack_104);
  String::~String(aSStack_104);
  StringBuffer::toString();
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar29 = *(uint *)(this + 0x10);
  uVar9 = *(undefined4 *)((*(int *)(DAT_00215dc0 + iVar8 * 4 + 0x215d38) + 0x136) * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_fc,uVar9,**(undefined4 **)(iVar23 + DAT_00215dc4),
             1,1,uVar29 & 0xffff,0,0,9,0,0);
  *(ScreenElement **)(this + 0x100) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_fc);
  String::String(aSStack_f4,0);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar21 = *(undefined4 *)
            ((*(int *)((int)&DAT_00215da0 + DAT_00215dc8 + iVar8 * 4) + 0x136) * 4 + iVar25);
  uVar11 = *(undefined4 *)(this + 0xc);
  iVar8 = SmDev();
  uVar29 = *(uint *)(this + 0x10);
  iVar25 = *(int *)(iVar23 + DAT_00215dcc);
  uVar9 = *(undefined4 *)(iVar8 * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  puVar30 = *(undefined4 **)(iVar23 + DAT_002161b4);
  uVar28 = *puVar30;
  uVar32 = 1;
  uVar33 = 1;
  uVar11 = __floatsisf(uVar11);
  __addsf3(uVar11,uVar9);
  iVar8 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_f4,uVar21,uVar28,uVar32,uVar33,
             iVar8 << 0x10 | uVar29 & 0xffff,0,0,0x21,0,0);
  *(ScreenElement **)(this + 0x120) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_f4);
  *(undefined1 *)(*(int *)(this + 0x120) + 0x7f) = 0x21;
  String::String(aSStack_ec,0);
  iVar10 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)((*(int *)(DAT_002161b8 + iVar8 * 4 + 0x215ea8) + 0x136) * 4 + iVar10);
  uVar11 = *(undefined4 *)(this + 0xc);
  iVar8 = SmDev();
  uVar29 = *(uint *)(this + 0x10);
  uVar9 = *(undefined4 *)(iVar25 + iVar8 * 4);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  uVar21 = *puVar30;
  uVar32 = 1;
  uVar33 = 1;
  uVar11 = __floatsisf(uVar11);
  __addsf3(uVar11,uVar9);
  iVar8 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_ec,uVar28,uVar21,uVar32,uVar33,
             iVar8 << 0x10 | uVar29 & 0xffff,0,0,0x21,0,0);
  *(ScreenElement **)(this + 0x124) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_ec);
  *(undefined1 *)(*(int *)(this + 0x124) + 0x7f) = 0x21;
  String::String(aSStack_e4,0);
  iVar10 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)((*(int *)(DAT_002161bc + iVar8 * 4 + 0x215f40) + 0x136) * 4 + iVar10);
  uVar11 = *(undefined4 *)(this + 0xc);
  iVar8 = SmDev();
  uVar29 = *(uint *)(this + 0x10);
  uVar9 = *(undefined4 *)(iVar25 + iVar8 * 4);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  uVar21 = *puVar30;
  uVar32 = 1;
  uVar33 = 1;
  uVar11 = __floatsisf(uVar11);
  __addsf3(uVar11,uVar9);
  iVar8 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_e4,uVar28,uVar21,uVar32,uVar33,
             iVar8 << 0x10 | uVar29 & 0xffff,0,0,0x21,0,0);
  *(ScreenElement **)(this + 0x128) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_e4);
  *(undefined1 *)(*(int *)(this + 0x128) + 0x7f) = 0x21;
  String::String(aSStack_dc,0);
  iVar10 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)((*(int *)(DAT_002161c0 + iVar8 * 4 + 0x215fd8) + 0x136) * 4 + iVar10);
  uVar11 = *(undefined4 *)(this + 0xc);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(iVar25 + iVar8 * 4);
  uVar29 = *(uint *)(this + 0x10);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  uVar21 = *puVar30;
  uVar32 = 1;
  uVar33 = 1;
  uVar11 = __floatsisf(uVar11);
  __addsf3(uVar11,uVar9);
  iVar8 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_dc,uVar28,uVar21,uVar32,uVar33,
             iVar8 << 0x10 | uVar29 & 0xffff,0,0,0x21,0,0);
  *(ScreenElement **)(this + 300) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_dc);
  *(undefined1 *)(*(int *)(this + 300) + 0x7f) = 0x21;
  Vector<String>::elementAt((int)aSStack_d4);
  iVar10 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(this + 0xc);
  uVar11 = *(undefined4 *)((*(int *)(DAT_002161c8 + iVar8 * 4 + 0x216080) + 0x136) * 4 + iVar10);
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)(iVar25 + iVar8 * 4);
  uVar29 = *(uint *)(this + 0x10);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  uVar21 = 1;
  uVar32 = 1;
  uVar9 = __floatsisf(uVar9);
  __addsf3(uVar9,uVar28);
  iVar8 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_d4,uVar11,DAT_002161cc,uVar21,uVar32,
             iVar8 << 0x10 | uVar29 & 0xffff,0,0,9,0,0);
  *(ScreenElement **)(this + 0x130) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_d4);
  pCVar12 = *param_2;
  uVar9 = CImage::getWidth(pCVar12);
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)(DAT_002161d0 + iVar8 * 4 + 0x2160c2);
  uVar11 = CImage::getHeight(pCVar12);
  iVar8 = SmDev();
  uVar21 = *(undefined4 *)(DAT_002161d4 + iVar8 * 4 + 0x2160da);
  iVar8 = SmDev();
  uVar32 = *(undefined4 *)(DAT_002161d8 + iVar8 * 4 + 0x2160ea);
  iVar8 = SmDev();
  uVar33 = *(undefined4 *)(DAT_002161dc + iVar8 * 4 + 0x2160fa);
  pIVar13 = (ImageElement *)operator_new(0x98);
  uVar9 = __floatsisf(uVar9);
  __mulsf3(uVar9,uVar28);
  iVar8 = __fixsfsi();
  uVar9 = __floatsisf(uVar11);
  __mulsf3(uVar9,uVar21);
  iVar25 = __fixsfsi();
  ImageElement::ImageElement
            (pIVar13,pCVar12,0,iVar8,iVar25,extraout_s0_00,extraout_s1_00,(uchar)uVar32,
             SUB41(uVar33,0));
  *(ImageElement **)(this + 0xe4) = pIVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
  CapcomApp::getInstance();
  Vector<String>::elementAt((int)aSStack_cc);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar21 = *(undefined4 *)((*(int *)(DAT_002161e4 + iVar8 * 4 + 0x21618a) + 0x136) * 4 + iVar25);
  uVar32 = *(undefined4 *)(this + 0xc);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar23 + DAT_002161e8));
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar23 + DAT_002161ec));
  uVar11 = *(undefined4 *)(*(int *)(this + 0xe4) + 8);
  iVar8 = CImage::getHeight(param_1[0x1f]);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  uVar33 = 1;
  uVar34 = 1;
  uVar11 = __floatsisf(uVar11);
  uVar11 = __addsf3(uVar28,uVar11);
  uVar28 = __floatsisf(iVar8 >> 1);
  __subsf3(uVar11,uVar28);
  uVar29 = __fixsfsi();
  uVar11 = __floatsisf(uVar32);
  __addsf3(uVar11,uVar9);
  iVar8 = __fixsfsi();
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_cc,uVar21,0xff000000,uVar33,uVar34,
             uVar29 & 0xffff | iVar8 << 0x10,0,0,9,0,0);
  *(ScreenElement **)(this + 0x104) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_cc);
  String::String(aSStack_c4,0);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00216554 + iVar8 * 4 + 0x2162b2) + 0x136) * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_c4,uVar9,0xff000000,1,1,0,0,0,0x11,0,0);
  *(ScreenElement **)(this + 0x10c) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_c4);
  iVar25 = *(int *)(*(int *)(this + 0x104) + 0xc);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar23 + DAT_00216558));
  iVar8 = SmDev();
  uVar28 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar23 + DAT_0021655c));
  uVar11 = *(undefined4 *)(*(int *)(this + 0xe4) + 8);
  iVar8 = CImage::getHeight(param_1[0x1f]);
  pIVar13 = (ImageElement *)operator_new(0x98);
  pCVar12 = param_1[0x38];
  uVar11 = __floatsisf(uVar11);
  uVar11 = __addsf3(uVar28,uVar11);
  uVar28 = __floatsisf(iVar8 >> 1);
  __subsf3(uVar11,uVar28);
  uVar29 = __fixsfsi();
  uVar11 = __floatsisf(iVar25 >> 1);
  __addsf3(uVar11,uVar9);
  iVar8 = __fixsfsi();
  ImageElement::ImageElement(pIVar13,pCVar12,iVar8 << 0x10 | uVar29 & 0xffff,'\x12',true);
  *(ImageElement **)(this + 0xe8) = pIVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
  String::String(aSStack_bc,0);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_00216560 + iVar8 * 4 + 0x2163c6) + 0x136) * 4 + iVar25);
  pSVar14 = *(ScreenElement **)(this + 0xe8);
  iVar25 = *(int *)(pSVar14 + 0x10);
  iVar8 = SmDev();
  uVar9 = __floatsisf(-iVar25 >> 4);
  __addsf3(uVar9,*(undefined4 *)(iVar8 * 4 + *(int *)(iVar23 + DAT_00216564)));
  iVar8 = __fixsfsi();
  uVar29 = ScreenElement::localToParentCoords(pSVar14,0,iVar8);
  iVar8 = *(int *)(this + 0xc);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_bc,uVar11,**(undefined4 **)(iVar23 + DAT_00216568)
             ,1,1,uVar29 & 0xffff | iVar8 << 0x10,0,0,9,0,0);
  *(ScreenElement **)(this + 0x108) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_bc);
  pIVar13 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar13,param_1[0xa4],'\t',true);
  *(ImageElement **)(this + 0xf0) = pIVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
  iVar8 = *(int *)(this + 0xc);
  uVar29 = *(uint *)(this + 0x10);
  pIVar13 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar13,param_1[0x7c],
             ((int)(uVar29 & 0xffff | iVar8 << 0x10) >> 0x11) << 0x10 |
             (int)(short)uVar29 >> 1 & 0xffffU,'\t',true);
  *(ImageElement **)(this + 0xec) = pIVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
  CapcomApp::getInstance();
  Vector<String>::elementAt((int)aSStack_b4);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00216570 + iVar8 * 4 + 0x216500) + 0x136) * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_b4,uVar9,0xffffffff,0,1,0,0,0,0x12,0,0);
  *(ScreenElement **)(this + 0x11c) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_b4);
  L_PrintLog((char *)(DAT_00216574 + 0x2164e0),(char *)(DAT_00216578 + 0x2164e2));
  pZVar15 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar15,'!',param_1[6],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xd4) = pZVar15;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
  iVar8 = CapcomApp::getInstance();
  uVar31 = __mulsf3(*(undefined4 *)(iVar8 + 0x44),DAT_0021657c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xd4),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
  if (param_5) {
    pZVar15 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar15,'\t',param_1[0xa8],(CImage *)0x0,0,0,true);
  }
  else {
    pZVar15 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar15,'\t',param_1[0xa7],(CImage *)0x0,0,0,true);
  }
  *(ZCImageButton **)(this + 0xd8) = pZVar15;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
  pZVar15 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar15,'\x12',param_1[0xb],(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xdc) = pZVar15;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
  String::String(aSStack_ac,(char *)(DAT_00216980 + 0x2165de));
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00216984 + iVar8 * 4 + 0x2165f6) + 0x136) * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_ac,uVar9,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x134) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_ac);
  pZVar15 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar15,'\x12',param_1[0xe3],(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xe0) = pZVar15;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
  pIVar13 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar13,param_1[0xeb],'\t',true);
  *(ImageElement **)(this + 0xf8) = pIVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
  String::String(aSStack_94,(char *)(DAT_00216988 + 0x21668e));
  Vector<String>::elementAt((int)aSStack_8c);
  String::operator+(aSStack_9c,aSStack_94,aSStack_8c);
  uVar2 = *(undefined1 *)(*(int *)(this + 0x60) + DAT_00216994);
  iVar8 = FUN_00212978(uVar2,param_6);
  __divsi3(**(int **)(iVar23 + DAT_00216998) * iVar8,uVar2);
  Vector<String>::elementAt((int)aSStack_84);
  String::operator+(aSStack_a4,aSStack_9c,aSStack_84);
  iVar25 = *(int *)(this + 0x60);
  iVar8 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_0021699c + iVar8 * 4 + 0x216762) + 0x136) * 4 + iVar25);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  puVar30 = *(undefined4 **)(iVar23 + DAT_002169a0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_a4,uVar9,*puVar30,1,1,0,0,0,0x21,0,0);
  *(ScreenElement **)(this + 0x118) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_a4);
  String::~String(aSStack_84);
  String::~String(aSStack_9c);
  String::~String(aSStack_8c);
  String::~String(aSStack_94);
  pvVar7 = operator_new(0x28);
  iVar8 = DAT_002169a4;
  *(undefined4 *)((int)pvVar7 + 8) = 0;
  *(undefined4 *)((int)pvVar7 + 4) = 0;
  *(undefined1 *)((int)pvVar7 + 0x18) = 0;
  uVar9 = *(undefined4 *)(iVar23 + iVar8);
  *(undefined4 *)((int)pvVar7 + 0x1c) = uVar9;
  *(void **)((int)pvVar7 + 0xc) = pvVar7;
  *(undefined4 *)((int)pvVar7 + 0x14) = 0;
  *(undefined4 *)((int)pvVar7 + 0x10) = 0;
  *(void **)(this + 0x150) = pvVar7;
  pvVar7 = operator_new(0x28);
  *(undefined4 *)((int)pvVar7 + 8) = 0;
  *(undefined4 *)((int)pvVar7 + 4) = 0;
  *(undefined1 *)((int)pvVar7 + 0x18) = 0;
  *(undefined4 *)((int)pvVar7 + 0x1c) = uVar9;
  *(void **)((int)pvVar7 + 0xc) = pvVar7;
  *(undefined4 *)((int)pvVar7 + 0x14) = 0;
  *(undefined4 *)((int)pvVar7 + 0x10) = 0;
  *(void **)(this + 0x154) = pvVar7;
  for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(*(int *)(this + 0x60) + DAT_00216994);
      iVar8 = iVar8 + 1) {
    puVar19 = (undefined1 *)operator_new(0x10);
    *(undefined4 *)(puVar19 + 4) = 10;
    pvVar7 = operator_new__(10);
    *(void **)(puVar19 + 0xc) = pvVar7;
    memset(pvVar7,0,*(size_t *)(puVar19 + 4));
    *(undefined4 *)(puVar19 + 8) = 0xffffffff;
    *puVar19 = (char)iVar8;
    puVar16 = (undefined1 *)operator_new(0x10);
    *(undefined4 *)(puVar16 + 4) = 10;
    pvVar7 = operator_new__(10);
    *(void **)(puVar16 + 0xc) = pvVar7;
    memset(pvVar7,0,*(size_t *)(puVar16 + 4));
    *puVar16 = (char)iVar8;
    *(undefined4 *)(puVar16 + 8) = 0xffffffff;
    uVar29 = 0;
    do {
      bVar6 = (bool)FUN_00212962(iVar8,uVar29 & 0xff,param_6);
      Vector<bool>::addElement((Vector<bool> *)(puVar19 + 4),bVar6);
      Vector<bool>::addElement((Vector<bool> *)(puVar16 + 4),false);
      uVar29 = uVar29 + 1;
    } while (uVar29 != 10);
    CapcomOrderableList<RecipeAndVariants*>::addOrdered(*(RecipeAndVariants **)(this + 0x150));
    CapcomOrderableList<RecipeAndVariants*>::addOrdered(*(RecipeAndVariants **)(this + 0x154));
  }
  L_PrintLog((char *)(DAT_002169a8 + 0x21684c),(char *)(DAT_002169ac + 0x21684e));
  local_19c = 0;
  do {
    iVar8 = *(int *)(this + 0x60);
    if (*(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150) + 0x14) <= local_19c) {
      FUN_00212978(*(undefined1 *)(iVar8 + DAT_00217194),param_6);
      String::valueOf((int)aSStack_4c);
      String::String(aSStack_44,(char *)(DAT_00217198 + 0x216e6a));
      String::operator+(aSStack_54,aSStack_4c,aSStack_44);
      String::valueOf((int)aSStack_3c);
      String::operator+(aSStack_5c,aSStack_54,aSStack_3c);
      iVar25 = *(int *)(this + 0x60);
      iVar8 = SmDev();
      uVar9 = *(undefined4 *)((*(int *)(DAT_0021719c + iVar8 * 4 + 0x216ef6) + 0x136) * 4 + iVar25);
      pSVar14 = (ScreenElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                ((BitmapTextElement *)pSVar14,aSStack_5c,uVar9,*puVar30,1,1,0,0,0,9,0,0);
      *(ScreenElement **)(this + 0x114) = pSVar14;
      ScreenElement::addChild((ScreenElement *)this,pSVar14);
      String::~String(aSStack_5c);
      String::~String(aSStack_3c);
      String::~String(aSStack_54);
      String::~String(aSStack_44);
      String::~String(aSStack_4c);
      L_PrintLog((char *)(DAT_002171a0 + 0x216f00),(char *)(DAT_002171a4 + 0x216f02));
      pIVar13 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar13,param_1[0xa3],'\t',true);
      *(ImageElement **)(this + 0xf4) = pIVar13;
      ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
      pZVar15 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar15,'\"',param_1[1],(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(this + 0xcc) = pZVar15;
      ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
      pZVar15 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar15,'\n',param_1[2],(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(this + 0xd0) = pZVar15;
      ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
      local_190 = 0;
      iVar25 = 0x8e;
      iVar8 = 0xa2;
      while( true ) {
        pCVar12 = param_1[iVar25];
        iVar10 = CImage::getWidth(pCVar12);
        iVar20 = CImage::getHeight(pCVar12);
        pZVar15 = (ZCImageButton *)operator_new(0xa0);
        ZCImageButton::ZCImageButton
                  (pZVar15,0,iVar10,iVar20,'\n',param_1[iVar25],(CImage *)0x0,0,0,param_1[iVar8],0,0
                   ,true);
        ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar15);
        Vector<ZCImageButton*>::addElement((Vector<ZCImageButton*> *)(this + 0xa8),pZVar15);
        pIVar13 = (ImageElement *)operator_new(0x98);
        ImageElement::ImageElement(pIVar13,param_1[0x1e],'$',true);
        ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar13);
        (**(code **)(*(int *)pIVar13 + 0x20))(pIVar13,0);
        Vector<ImageElement*>::addElement((Vector<ImageElement*> *)(this + 0xb4),pIVar13);
        iVar10 = local_190 + 1;
        if (iVar10 == 10) break;
        switch(local_190) {
        case 1:
          iVar8 = 0xa0;
          iVar25 = 0x43;
          local_190 = iVar10;
          break;
        case 2:
          iVar8 = 0x92;
          iVar25 = 0x39;
          local_190 = iVar10;
          break;
        case 3:
          iVar8 = 0x9c;
          iVar25 = 0x41;
          local_190 = iVar10;
          break;
        case 4:
          iVar8 = 0x90;
          iVar25 = 0x38;
          local_190 = iVar10;
          break;
        case 5:
          iVar8 = 0x94;
          iVar25 = 0x3a;
          local_190 = iVar10;
          break;
        case 6:
          iVar8 = 0x96;
          iVar25 = 0x3b;
          local_190 = iVar10;
          break;
        case 7:
          iVar8 = 0x98;
          iVar25 = 0x3d;
          local_190 = iVar10;
          break;
        case 8:
          iVar8 = 0x9e;
          iVar25 = 0x42;
          local_190 = iVar10;
          break;
        default:
          iVar8 = 0x9a;
          iVar25 = 0x3f;
          local_190 = iVar10;
        }
      }
      layout(this);
      setRecipe(this,0);
      iVar25 = DAT_002171ac;
      iVar8 = DAT_002171a8;
      this[0x14] = (RecipeBook)0x0;
      L_PrintLog((char *)(iVar8 + 0x21707e),(char *)(iVar25 + 0x217080));
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
      return this;
    }
    pbVar17 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
                                 local_19c);
    if (*(byte *)(*(int *)(iVar8 + 0x4e8) + (uint)*pbVar17 * 0x1c + 0x16) <=
        **(byte **)(iVar23 + DAT_002169b0)) {
      iVar8 = *(int *)(this + 0xc0);
      iVar25 = *(int *)(this + 0xc4) + 2;
      if (iVar8 < iVar25) {
        iVar8 = iVar8 * 2;
        if (iVar8 < iVar25) {
          iVar8 = iVar25;
        }
        Vector<int>::resize((Vector<int> *)(this + 0xc0),iVar8,-1);
      }
      iVar8 = *(int *)(this + 0xc4);
      *(int *)(this + 0xc4) = iVar8 + 1;
      *(int *)((iVar8 + 1) * 4 + *(int *)(this + 200)) = local_19c;
      pbVar17 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                  (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
                                   local_19c);
      pCVar12 = param_2[*(short *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + (uint)*pbVar17 * 0x1c +
                                  0x14)];
      pZVar15 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar15,'\x14',pCVar12,(CImage *)0x0,0,0,false);
      SmDev();
      uVar31 = SmDev();
      ImageButton::setScale((ImageButton *)pZVar15,(float)uVar31,(float)((ulonglong)uVar31 >> 0x20))
      ;
      pbVar17 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                  (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
                                   local_19c);
      sVar3 = *(short *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + (uint)*pbVar17 * 0x1c + 0x12);
      if (sVar3 == 0x8c) {
        iVar8 = SmDev();
        uVar9 = *(undefined4 *)(DAT_002169bc + iVar8 * 4 + 0x216966);
        iVar8 = SmDev();
        __mulsf3(uVar9,DAT_002169c0);
        uVar11 = *(undefined4 *)((int)&DAT_00216980 + DAT_002169c4 + iVar8 * 4);
        uVar9 = DAT_002169c0;
LAB_00216aa2:
        uVar31 = __mulsf3(uVar11,uVar9);
        ImageButton::setScale
                  ((ImageButton *)pZVar15,(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
      }
      else {
        if (sVar3 == 0x8d) {
          iVar8 = SmDev();
          uVar9 = *(undefined4 *)((int)&DAT_00216994 + DAT_002169c8 + iVar8 * 4 + 2);
          iVar8 = SmDev();
          __mulsf3(uVar9,DAT_002169cc);
          puVar22 = &UNK_0021697e + DAT_002169d0;
LAB_00216a9a:
          uVar11 = *(undefined4 *)(puVar22 + iVar8 * 4 + 0x30);
          uVar9 = DAT_00216d6c;
          goto LAB_00216aa2;
        }
        if (sVar3 == 0x91) {
          iVar8 = SmDev();
          uVar9 = *(undefined4 *)(DAT_00216d68 + iVar8 * 4 + 0x216a14);
          iVar8 = SmDev();
          __mulsf3(uVar9,DAT_00216d6c);
          puVar22 = (undefined *)(DAT_00216d70 + 0x2169fc);
          goto LAB_00216a9a;
        }
        if (sVar3 == 0xa2) {
          iVar8 = SmDev();
          uVar9 = *(undefined4 *)(DAT_00216d74 + iVar8 * 4 + 0x216a3c);
          iVar8 = SmDev();
          __mulsf3(uVar9,DAT_00216d6c);
          puVar22 = (undefined *)(DAT_00216d78 + 0x216a24);
          goto LAB_00216a9a;
        }
        if (sVar3 == 0xaf) {
          iVar8 = SmDev();
          uVar9 = *(undefined4 *)(DAT_00216d7c + iVar8 * 4 + 0x216a64);
          iVar8 = SmDev();
          __mulsf3(uVar9,DAT_00216d6c);
          puVar22 = (undefined *)(DAT_00216d80 + 0x216a4c);
          goto LAB_00216a9a;
        }
        if (sVar3 == 0xc4) {
          iVar8 = SmDev();
          uVar9 = *(undefined4 *)(DAT_00216d84 + iVar8 * 4 + 0x216a8c);
          iVar8 = SmDev();
          __mulsf3(uVar9,DAT_00216d6c);
          puVar22 = (undefined *)(DAT_00216d88 + 0x216a74);
          goto LAB_00216a9a;
        }
        if (sVar3 == 0xe4) {
          iVar8 = SmDev();
          uVar9 = *(undefined4 *)(DAT_00216d8c + iVar8 * 4 + 0x216ab4);
          iVar8 = SmDev();
          __mulsf3(uVar9,DAT_00216d6c);
          puVar22 = (undefined *)(DAT_00216d90 + 0x216a9c);
          goto LAB_00216a9a;
        }
      }
      iVar10 = *(int *)(pZVar15 + 0xc);
      uVar29 = *(uint *)(pZVar15 + 0x10);
      uVar9 = CImage::getWidth(param_1[0x7c]);
      iVar8 = SmDev();
      uVar28 = *(undefined4 *)(DAT_00216d94 + iVar8 * 4 + 0x216b1a);
      uVar11 = CImage::getHeight(param_1[0x7c]);
      iVar8 = SmDev();
      uVar21 = *(undefined4 *)(DAT_00216d98 + iVar8 * 4 + 0x216b4a);
      iVar8 = SmDev();
      uVar32 = *(undefined4 *)(DAT_00216d9c + iVar8 * 4 + 0x216b42);
      iVar8 = SmDev();
      uVar33 = *(undefined4 *)(DAT_00216da0 + iVar8 * 4 + 0x216b6a);
      pIVar13 = (ImageElement *)operator_new(0x98);
      pCVar12 = param_1[0x7c];
      uVar9 = __floatsisf(uVar9);
      __mulsf3(uVar9,uVar28);
      iVar8 = __fixsfsi();
      uVar9 = __floatsisf(uVar11);
      __mulsf3(uVar9,uVar21);
      iVar25 = __fixsfsi();
      ImageElement::ImageElement
                (pIVar13,pCVar12,
                 (int)(short)uVar29 >> 1 & 0xffffU |
                 ((int)(iVar10 << 0x10 | uVar29 & 0xffff) >> 0x11) << 0x10,iVar8,iVar25,
                 extraout_s0_01,extraout_s1_01,(uchar)uVar32,SUB41(uVar33,0));
      this_00 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(this_00,param_1[0x1e],'$',true);
      String::String(aSStack_7c,0);
      iVar25 = *(int *)(this + 0x60);
      iVar8 = SmDev();
      uVar9 = *(undefined4 *)((*(int *)(DAT_00216da4 + iVar8 * 4 + 0x216bbe) + 0x136) * 4 + iVar25);
      pBVar18 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar18,aSStack_7c,uVar9,0xffffffff,1,1,0,0,0,0x11,0,0);
      String::~String(aSStack_7c);
      pbVar17 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                  (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
                                   local_19c);
      bVar1 = *(byte *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + (uint)*pbVar17 * 0x1c + 0x18);
      if ((bVar1 == 4) || (bVar1 < 2)) {
        if (bVar1 == 4) {
          this_01 = (ImageElement *)operator_new(0x98);
          ImageElement::ImageElement(this_01,param_1[0xe4],'\t',true);
        }
        else {
          if (bVar1 == 5) goto LAB_00216c3c;
          this_01 = (ImageElement *)operator_new(0x98);
          ImageElement::ImageElement(this_01,param_1[0xa6],'\t',true);
        }
      }
      else if (bVar1 == 5) {
LAB_00216c3c:
        this_01 = (ImageElement *)operator_new(0x98);
        ImageElement::ImageElement(this_01,param_1[0x114],'\t',true);
      }
      else {
        this_01 = (ImageElement *)operator_new(0x98);
        ImageElement::ImageElement(this_01,param_1[0xa5],'\t',true);
      }
      (**(code **)(*(int *)this_00 + 0x20))(this_00,0);
      Vector<ImageElement*>::addElement((Vector<ImageElement*> *)(this + 0x78),pIVar13);
      Vector<ImageElement*>::addElement((Vector<ImageElement*> *)(this + 0x90),this_00);
      Vector<ImageElement*>::addElement((Vector<ImageElement*> *)(this + 0x9c),this_01);
      iVar8 = *(int *)(this + 0x84);
      iVar25 = *(int *)(this + 0x88) + 2;
      if (iVar8 < iVar25) {
        iVar8 = iVar8 * 2;
        if (iVar8 < iVar25) {
          iVar8 = iVar25;
        }
        Vector<BitmapTextElement*>::resize((Vector<BitmapTextElement*> *)(this + 0x84),iVar8,-1);
      }
      iVar8 = *(int *)(this + 0x88);
      *(int *)(this + 0x88) = iVar8 + 1;
      *(BitmapTextElement **)((iVar8 + 1) * 4 + *(int *)(this + 0x8c)) = pBVar18;
      (**(code **)(**(int **)(this + 0x68) + 0x2c))(*(int **)(this + 0x68),this_01);
      (**(code **)(*(int *)this_01 + 0x2c))(this_01,pZVar15);
      (**(code **)(*(int *)this_01 + 0x2c))(this_01,pIVar13);
      (**(code **)(*(int *)this_01 + 0x2c))(this_01,pBVar18);
      (**(code **)(*(int *)this_01 + 0x2c))(this_01,this_00);
      Vector<ZCImageButton*>::addElement((Vector<ZCImageButton*> *)(this + 0x6c),pZVar15);
      pbVar17 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                  (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),
                                   local_19c);
      if ((uint)*pbVar17 ==
          (int)*(short *)((*(byte *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + (uint)*pbVar17 * 0x1c
                                    + 0x16) - 1) * 2 + **(int **)(iVar23 + DAT_00216da8))) {
        String::valueOf((int)aSStack_6c);
        pcVar24 = *(code **)(*(int *)pBVar18 + 0x44);
        String::String(aSStack_74,aSStack_6c);
        (*pcVar24)(pBVar18,aSStack_74);
        String::~String(aSStack_74);
      }
      else {
        String::String(aSStack_6c,(char *)(DAT_00216dac + 0x216d4c));
        pcVar24 = *(code **)(*(int *)pBVar18 + 0x44);
        String::String(aSStack_64,aSStack_6c);
        (*pcVar24)(pBVar18,aSStack_64);
        String::~String(aSStack_64);
      }
      String::~String(aSStack_6c);
      uVar29 = 0;
      bVar6 = false;
      do {
        puVar19 = (undefined1 *)
                  CapcomOrderableList<RecipeAndVariants*>::get
                            (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),local_19c);
        uVar2 = *puVar19;
        iVar8 = FUN_00212962(uVar2,uVar29 & 0xff,param_6);
        if (iVar8 != 0) {
          bVar6 = true;
        }
        if (((param_5) && (iVar8 != 0)) &&
           (iVar8 = FUN_00212962(uVar2,uVar29 & 0xff,*(undefined4 *)(*(int *)(this + 0x60) + 0x1c)),
           iVar8 == 0)) {
          piVar27 = *(int **)(*(int *)(this + 0x98) + local_19c * 4);
          (**(code **)(*piVar27 + 0x20))(piVar27,1);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != 10);
      if (bVar6) {
        (**(code **)(*(int *)pIVar13 + 0x20))(pIVar13,0);
        (**(code **)(*(int *)pBVar18 + 0x20))(pBVar18,0);
      }
      else {
        pZVar15[0x92] = (ZCImageButton)0x1;
      }
    }
    local_19c = local_19c + 1;
  } while( true );
}


