/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e0088 ColosseumRewardScreen::ColosseumRewardScreen */

/* ColosseumRewardScreen::ColosseumRewardScreen(int, long) */

void __thiscall
ColosseumRewardScreen::ColosseumRewardScreen(ColosseumRewardScreen *this,int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CImage *pCVar4;
  ImageElement *this_00;
  ScreenElement *pSVar5;
  String *pSVar6;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar7;
  int extraout_r1;
  int extraout_r1_00;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 *puVar13;
  float extraout_s0;
  float extraout_s1;
  undefined4 uStack_4;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined4 *puVar22;
  
  iVar1 = DAT_000e040c;
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  piVar16 = (int *)(&stack0xffffffec + DAT_000e040c);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  piVar21 = (int *)(&stack0xffffffec + DAT_000e040c);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_000e040c);
  *(long *)(&stack0x00000014 + DAT_000e040c) = param_2;
  *(int *)(&stack0x00000010 + DAT_000e040c) = DAT_000e0414 + 0xe009c;
  *(undefined4 *)(&stack0x00000220 + DAT_000e040c) =
       **(undefined4 **)(DAT_000e0414 + 0xe009c + DAT_000e0410);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e0418) + 8;
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar2 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  *(int *)(this + 100) = param_1;
  *(undefined4 *)(&stack0x00000018 + iVar1) = uVar3;
  iVar2 = CapcomApp::getInstance();
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(this + 0x68) = iVar2;
  this[0x60] = (ColosseumRewardScreen)0x0;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar2 + 0x7f0),2,false);
  this_00 = (ImageElement *)operator_new(0x98);
  *puVar13 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  ImageElement::ImageElement
            (this_00,pCVar4,extraout_s0,extraout_s1,(uchar)DAT_000e041c,(bool)(uchar)DAT_000e041c);
  *(ImageElement **)(this + 0x6c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  String::String((String *)(&stack0x00000028 + iVar1),(char *)(DAT_000e0420 + 0xe011a));
  iVar8 = *(int *)(this + 0x68);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(iVar2 * 4 + DAT_000e0424 + 0xe012a) + 0x136) * 4 + iVar8);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  *puVar14 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,&stack0x00000028 + iVar1,uVar3,0xffffffff);
  *(ScreenElement **)(this + 0x7c) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x00000028 + iVar1));
  pSVar5 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x11;
  *puVar15 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  ScreenElement::ScreenElement
            (pSVar5,0,0,0,*piVar16,(&stack0xfffffff0)[iVar1],
             *(ScreenElement **)(&stack0xfffffff4 + iVar1));
  *(ScreenElement **)(this + 0x70) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::String((String *)(&stack0x00000030 + iVar1),(char *)(DAT_000e0428 + 0xe0192));
  iVar8 = *(int *)(this + 0x68);
  iVar2 = SmDev();
  uVar10 = *(undefined4 *)((*(int *)(DAT_000e042c + iVar2 * 4 + 0xe01ba) + 0x136) * 4 + iVar8);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  uVar3 = **(undefined4 **)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e0430);
  *puVar17 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,&stack0x00000030 + iVar1,uVar10,uVar3);
  *(ScreenElement **)(this + 0x80) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x00000030 + iVar1));
  String::String((String *)(&stack0x00000038 + iVar1),(char *)(DAT_000e0434 + 0xe01ee));
  iVar2 = **(int **)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e0438);
  *(int **)(&stack0x0000001c + iVar1) = *(int **)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e0438)
  ;
  uVar3 = FontManager::addFont(iVar2,true);
  pSVar5 = (ScreenElement *)operator_new(0xe4);
  *puVar18 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar1) = 0x11;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar5,&stack0x00000038 + iVar1,uVar3,0xffffffff);
  *(ScreenElement **)(this + 0x8c) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x00000038 + iVar1));
  piVar11 = *(int **)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e043c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x8c));
  L_PrintLog((char *)(DAT_000e0440 + 0xe025a),(char *)(DAT_000e0444 + 0xe025c));
  sprintf(&stack0x00000120 + iVar1,(char *)(DAT_000e0448 + 0xe026a),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_000e044c + 0xe0276),&stack0x00000120 + iVar1);
  piVar9 = *(int **)(this + 0x8c);
  pcVar12 = *(code **)(*piVar9 + 0x18);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(DAT_000e0450 + iVar2 * 4 + 0xe02be));
  (*pcVar12)(piVar9,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000000e8 + iVar1));
  String::String((String *)(&stack0x00000040 + iVar1),(char *)(DAT_000e0454 + 0xe02ac));
  StringBuffer::append(&stack0x000000e8 + iVar1,&stack0x00000040 + iVar1);
  String::~String((String *)(&stack0x00000040 + iVar1));
  String::valueOf((int)(&stack0x00000048 + iVar1));
  StringBuffer::append(&stack0x000000e8 + iVar1,&stack0x00000048 + iVar1);
  String::~String((String *)(&stack0x00000048 + iVar1));
  piVar9 = *(int **)(this + 0x8c);
  pcVar12 = *(code **)(*piVar9 + 0x44);
  StringBuffer::toString();
  (*pcVar12)(piVar9,&stack0x00000050 + iVar1);
  String::~String((String *)(&stack0x00000050 + iVar1));
  String::String((String *)(&stack0x00000058 + iVar1),(char *)(DAT_000e0458 + 0xe02f8));
  uVar3 = FontManager::addFont(**(int **)(&stack0x0000001c + iVar1),true);
  pSVar5 = (ScreenElement *)operator_new(0xe4);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar1) = 0x11;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar5,&stack0x00000058 + iVar1,uVar3,0xffffffff);
  *(ScreenElement **)(this + 0x90) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x00000058 + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x90));
  L_PrintLog((char *)(DAT_000e045c + 0xe0358),(char *)(DAT_000e0460 + 0xe035a));
  sprintf(&stack0x00000120 + iVar1,(char *)(DAT_000e0464 + 0xe0368),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_000e0468 + 0xe0374),&stack0x00000120 + iVar1);
  piVar9 = *(int **)(this + 0x90);
  pcVar12 = *(code **)(*piVar9 + 0x18);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(DAT_000e046c + iVar2 * 4 + 0xe03bc));
  (*pcVar12)(piVar9,uVar3,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x00000104 + iVar1));
  String::String((String *)(&stack0x00000060 + iVar1),(char *)(DAT_000e0470 + 0xe03aa));
  StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000060 + iVar1);
  String::~String((String *)(&stack0x00000060 + iVar1));
  iVar2 = __divsi3(*(undefined4 *)(&stack0x00000014 + iVar1),DAT_000e0474);
  if (iVar2 == 0) {
    String::String((String *)(&stack0x00000068 + iVar1),(char *)(DAT_000e0478 + 0xe03ce));
    StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000068 + iVar1);
    pSVar6 = (String *)(&stack0x00000068 + iVar1);
  }
  else if (iVar2 < 10) {
    String::String((String *)(&stack0x00000070 + iVar1),(char *)(DAT_000e047c + 0xe03e8));
    StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000070 + iVar1);
    String::~String((String *)(&stack0x00000070 + iVar1));
    String::valueOf((int)(&stack0x00000078 + iVar1));
    StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000078 + iVar1);
    pSVar6 = (String *)(&stack0x00000078 + iVar1);
  }
  else {
    String::valueOf((int)(&stack0x00000080 + iVar1));
    StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000080 + iVar1);
    pSVar6 = (String *)(&stack0x00000080 + iVar1);
  }
  String::~String(pSVar6);
  String::String((String *)(&stack0x00000088 + iVar1),(char *)(DAT_000e0840 + 0xe049e));
  StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000088 + iVar1);
  String::~String((String *)(&stack0x00000088 + iVar1));
  iVar2 = __divsi3(*(undefined4 *)(&stack0x00000014 + iVar1),DAT_000e0844);
  if (iVar2 == 0) {
    String::String((String *)(&stack0x00000090 + iVar1),(char *)(DAT_000e0848 + 0xe04c2));
    StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000090 + iVar1);
    pSVar6 = (String *)(&stack0x00000090 + iVar1);
  }
  else {
    __aeabi_idivmod(iVar2,0x3c);
    if (extraout_r1 < 10) {
      String::String((String *)(&stack0x00000098 + iVar1),(char *)(DAT_000e084c + 0xe04e4));
      StringBuffer::append(&stack0x00000104 + iVar1,&stack0x00000098 + iVar1);
      String::~String((String *)(&stack0x00000098 + iVar1));
      String::valueOf((int)(&stack0x000000a0 + iVar1));
      StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000a0 + iVar1);
      pSVar6 = (String *)(&stack0x000000a0 + iVar1);
    }
    else {
      String::valueOf((int)(&stack0x000000a8 + iVar1));
      StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000a8 + iVar1);
      pSVar6 = (String *)(&stack0x000000a8 + iVar1);
    }
  }
  String::~String(pSVar6);
  String::String((String *)(&stack0x000000b0 + iVar1),(char *)(DAT_000e0850 + 0xe0524));
  StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000b0 + iVar1);
  String::~String((String *)(&stack0x000000b0 + iVar1));
  iVar2 = __divsi3(*(undefined4 *)(&stack0x00000014 + iVar1),1000);
  if (iVar2 == 0) {
    String::String((String *)(&stack0x000000b8 + iVar1),(char *)(DAT_000e0854 + 0xe054a));
    StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000b8 + iVar1);
    pSVar6 = (String *)(&stack0x000000b8 + iVar1);
  }
  else {
    __aeabi_idivmod(iVar2,0x3c);
    if (extraout_r1_00 < 10) {
      String::String((String *)(&stack0x000000c0 + iVar1),(char *)(DAT_000e0858 + 0xe056c));
      StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000c0 + iVar1);
      String::~String((String *)(&stack0x000000c0 + iVar1));
      String::valueOf((int)(&stack0x000000c8 + iVar1));
      StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000c8 + iVar1);
      pSVar6 = (String *)(&stack0x000000c8 + iVar1);
    }
    else {
      String::valueOf((int)(&stack0x000000d0 + iVar1));
      StringBuffer::append(&stack0x00000104 + iVar1,&stack0x000000d0 + iVar1);
      pSVar6 = (String *)(&stack0x000000d0 + iVar1);
    }
  }
  String::~String(pSVar6);
  piVar9 = *(int **)(this + 0x90);
  pcVar12 = *(code **)(*piVar9 + 0x44);
  StringBuffer::toString();
  (*pcVar12)(piVar9,&stack0x000000d8 + iVar1);
  String::~String((String *)(&stack0x000000d8 + iVar1));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_000e085c),10,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
  *puVar20 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  ZCImageButton::ZCImageButton
            (this_01,'\x12',pCVar4,(CImage *)0x0,*piVar21,*(int *)(&stack0xfffffff0 + iVar1),
             (bool)(&stack0xfffffff4)[iVar1]);
  *(ZCImageButton **)(this + 0xa8) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  iVar2 = *(int *)(this + 0x68);
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(**(int **)(this + 0xa8) + 0x2c);
  String::String((String *)(&stack0x000000e0 + iVar1),
                 (String *)
                 (*(int *)(*(int *)(iVar2 + 0x4b0) + 8) +
                 **(int **)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e0860) * 8));
  iVar8 = *(int *)(this + 0x68);
  iVar2 = SmDev();
  *(undefined4 *)(&stack0x0000001c + iVar1) =
       *(undefined4 *)((*(int *)(DAT_000e0864 + iVar2 * 4 + 0xe0674) + 0x136) * 4 + iVar8);
  iVar2 = *(int *)(this + 0xa8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(&stack0x00000020 + iVar1) = *(undefined4 *)(iVar2 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar3 = *(undefined4 *)(&stack0x00000020 + iVar1);
  *puVar22 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar3;
  *(undefined4 *)(&stack0x00000000 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar10;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x000000e0 + iVar1,*(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
  *(BitmapTextElement **)(this + 0x84) = pBVar7;
  (**(code **)(&stack0x00000014 + iVar1))(iVar2,pBVar7);
  String::~String((String *)(&stack0x000000e0 + iVar1));
  piVar9 = *(int **)(this + 0x7c);
  pcVar12 = *(code **)(*piVar9 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_000e0868 + iVar2 * 4 + 0xe06fe));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar12)(piVar9,iVar8 / 2,uVar3);
  piVar9 = *(int **)(this + 0x80);
  iVar8 = *(int *)(this + 0xc);
  pcVar12 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_000e086c + iVar2 * 4 + 0xe074a));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar12)(piVar9,iVar8 / 2,uVar3);
  piVar9 = *(int **)(this + 0x8c);
  iVar8 = *(int *)(this + 0xc);
  pcVar12 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_000e0870 + iVar2 * 4 + 0xe0718));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar12)(piVar9,iVar8 / 2,uVar3);
  piVar9 = *(int **)(this + 0x90);
  iVar8 = *(int *)(this + 0xc);
  pcVar12 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_000e0874 + iVar2 * 4 + 0xe0766));
  __mulsf3(uVar3,*(undefined4 *)(&stack0x00000018 + iVar1));
  uVar3 = __fixsfsi();
  (*pcVar12)(piVar9,iVar8 / 2,uVar3);
  *(undefined1 *)(*(int *)(this + 0x84) + 0x7f) = 0x12;
  iVar2 = SmDev();
  if (iVar2 == 0) {
    piVar9 = *(int **)(this + 0xa8);
    (**(code **)(*piVar9 + 0x14))(piVar9,*(int *)(this + 0xc) / 2);
    iVar2 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0xa8) + 0x10) / 2 + *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  else {
    piVar9 = *(int **)(this + 0xa8);
    (**(code **)(*piVar9 + 0x14))
              (piVar9,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar9[4] / 2);
    iVar2 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar2,iVar8);
  this[0xbc] = (ColosseumRewardScreen)0x1;
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x00000104 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000000e8 + iVar1));
  if (*(int *)(&stack0x00000220 + iVar1) ==
      **(int **)(*(int *)(&stack0x00000010 + iVar1) + DAT_000e0878)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


