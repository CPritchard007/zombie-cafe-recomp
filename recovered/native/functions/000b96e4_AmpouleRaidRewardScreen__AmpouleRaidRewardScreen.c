/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b96e4 AmpouleRaidRewardScreen::AmpouleRaidRewardScreen */

/* AmpouleRaidRewardScreen::AmpouleRaidRewardScreen(int, int, int, int, bool) */

void __thiscall
AmpouleRaidRewardScreen::AmpouleRaidRewardScreen
          (AmpouleRaidRewardScreen *this,int param_1,int param_2,int param_3,int param_4,
          bool param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CImage *pCVar3;
  ImageElement *this_00;
  ScreenElement *pSVar4;
  ZCImageButton *this_01;
  BitmapTextElement *pBVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar15;
  String aSStack_1d4 [8];
  String aSStack_1cc [8];
  String aSStack_1c4 [8];
  String aSStack_1bc [8];
  String aSStack_1b4 [8];
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  String aSStack_19c [8];
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  StringBuffer aSStack_154 [28];
  StringBuffer aSStack_138 [28];
  char acStack_11c [256];
  int local_1c;
  
  iVar6 = DAT_000b9aac + 0xb96f4;
  local_1c = **(int **)(iVar6 + DAT_000b9ab0);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar7 = *(int *)(iVar6 + DAT_000b9ab4);
  *(int *)(this + 0x68) = param_1;
  *(int *)(this + 0x6c) = param_2;
  *(int *)this = iVar7 + 8;
  *(int *)(this + 0x70) = param_3;
  iVar7 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(iVar7 + 4);
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar7 = CapcomApp::getInstance();
  uVar1 = *(undefined4 *)(iVar7 + 0x44);
  iVar7 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar7 + 0x50);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + 0x7f0),2,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar3,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x7c) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x7c) + 0xc),
             *(int *)(*(int *)(this + 0x7c) + 0x10));
  String::String(aSStack_1d4,(char *)(DAT_000b9ab8 + 0xb9780));
  iVar8 = *(int *)(this + 0x74);
  iVar7 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(iVar7 * 4 + DAT_000b9abc + 0xb9790) + 0x136) * 4 + iVar8);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_1d4,uVar11,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x88) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_1d4);
  pSVar4 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar4,0,0,0,0,'\x11',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x78) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::String(aSStack_1cc,(char *)(DAT_000b9ac0 + 0xb97fc));
  iVar8 = *(int *)(this + 0x74);
  iVar7 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_000b9ac4 + iVar7 * 4 + 0xb9824) + 0x136) * 4 + iVar8);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_1cc,uVar11,**(undefined4 **)(iVar6 + DAT_000b9ac8),
             1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_1cc);
  StringBuffer::StringBuffer(aSStack_154);
  String::String(aSStack_1c4,(char *)(DAT_000b9acc + 0xb9860));
  StringBuffer::append(aSStack_154,aSStack_1c4);
  String::~String(aSStack_1c4);
  String::valueOf((int)aSStack_1bc);
  StringBuffer::append(aSStack_154,aSStack_1bc);
  String::~String(aSStack_1bc);
  String::String(aSStack_1b4,(char *)(DAT_000b9ad0 + 0xb988e));
  StringBuffer::append(aSStack_154,aSStack_1b4);
  String::~String(aSStack_1b4);
  piVar12 = *(int **)(this + 0x8c);
  pcVar9 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar9)(piVar12,aSStack_1ac);
  String::~String(aSStack_1ac);
  String::String(aSStack_1a4,(char *)(DAT_000b9ad4 + 0xb98c4));
  piVar12 = *(int **)(iVar6 + DAT_000b9ad8);
  iVar8 = *piVar12;
  iVar7 = SmDev();
  uVar11 = FontManager::addFont(iVar8,SUB41(*(undefined4 *)(DAT_000b9adc + iVar7 * 4 + 0xb990e),0));
  pSVar4 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar4,aSStack_1a4,uVar11,0xffffffff,0,0,0,0,0,0x11,0);
  *(ScreenElement **)(this + 0x94) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_1a4);
  piVar10 = *(int **)(iVar6 + DAT_000b9ae0);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x94));
  L_PrintLog((char *)(DAT_000b9ae4 + 0xb993c),(char *)(DAT_000b9ae8 + 0xb993e));
  sprintf(acStack_11c,(char *)(DAT_000b9aec + 0xb994c),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_000b9af0 + 0xb9958),acStack_11c);
  piVar13 = *(int **)(this + 0x94);
  pcVar9 = *(code **)(*piVar13 + 0x18);
  iVar7 = SmDev();
  uVar11 = __fixsfsi(*(undefined4 *)(DAT_000b9af4 + iVar7 * 4 + 0xb99b8));
  (*pcVar9)(piVar13,uVar11,1000);
  piVar13 = *(int **)(this + 0x94);
  pcVar9 = *(code **)(*piVar13 + 0x14);
  iVar7 = SmDev();
  uVar11 = *(undefined4 *)(DAT_000b9af8 + iVar7 * 4 + 0xb99f8);
  iVar7 = SmDev();
  (*pcVar9)(piVar13,uVar11,*(undefined4 *)(DAT_000b9afc + iVar7 * 4 + 0xb9a20));
  String::String(aSStack_19c,(char *)(DAT_000b9b00 + 0xb99b8));
  iVar8 = *piVar12;
  iVar7 = SmDev();
  uVar11 = FontManager::addFont(iVar8,SUB41(*(undefined4 *)(DAT_000b9b04 + iVar7 * 4 + 0xb99fc),0));
  pSVar4 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar4,aSStack_19c,uVar11,0xffffffff,0,0,0,0,0,0x11,0);
  *(ScreenElement **)(this + 0x98) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_19c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x98));
  L_PrintLog((char *)(DAT_000b9b08 + 0xb9a24),(char *)(DAT_000b9b0c + 0xb9a26));
  sprintf(acStack_11c,(char *)(DAT_000b9b10 + 0xb9a34),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(DAT_000b9b14 + 0xb9a40),acStack_11c);
  piVar12 = *(int **)(this + 0x98);
  pcVar9 = *(code **)(*piVar12 + 0x18);
  iVar7 = SmDev();
  uVar11 = __fixsfsi(*(undefined4 *)(DAT_000b9b18 + iVar7 * 4 + 0xb9aa0));
  (*pcVar9)(piVar12,uVar11,1000);
  StringBuffer::StringBuffer(aSStack_138);
  iVar7 = *(int *)(this + 0x68);
  if (iVar7 == 0) {
    String::String(aSStack_194,(char *)(DAT_000b9b1c + 0xb9a7c));
    StringBuffer::append(aSStack_138,aSStack_194);
    String::~String(aSStack_194);
    String::valueOf((int)aSStack_18c);
    StringBuffer::append(aSStack_138,aSStack_18c);
    String::~String(aSStack_18c);
    piVar12 = *(int **)(this + 0x98);
    pcVar9 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    uVar11 = *(undefined4 *)(DAT_000b9ebc + iVar7 * 4 + 0xb9b40);
    iVar7 = SmDev();
    iVar8 = DAT_000b9ec0 + 0xb9b3c;
  }
  else {
    if (iVar7 != 2) {
      if (iVar7 - 5U < 2) {
        Recipe::getFullName((char)&stack0xffffffec + 0x98);
        String::String(aSStack_174,(char *)(DAT_000b9ed4 + 0xb9bbc));
        MultiByteString::insertStringNextLine(aSStack_174,aSStack_17c,0xc);
        String::String(aSStack_16c,aSStack_174);
        StringBuffer::append(aSStack_138,aSStack_16c);
        String::~String(aSStack_16c);
        piVar12 = *(int **)(this + 0x98);
        pcVar9 = *(code **)(*piVar12 + 0x14);
        iVar7 = SmDev();
        uVar11 = *(undefined4 *)(DAT_000b9ed8 + iVar7 * 4 + 0xb9c34);
        iVar7 = SmDev();
        (*pcVar9)(piVar12,uVar11,*(undefined4 *)(DAT_000b9edc + iVar7 * 4 + 0xb9c2c));
        String::~String(aSStack_174);
        String::~String(aSStack_17c);
      }
      goto LAB_000b9c16;
    }
    String::String(aSStack_184,
                   (String *)
                   (*(int *)(*(int *)(this + 0x70) * 4 +
                            *(int *)(*(int *)(this + 0x74) + DAT_000b9ec4)) + DAT_000b9ec8));
    StringBuffer::append(aSStack_138,aSStack_184);
    String::~String(aSStack_184);
    piVar12 = *(int **)(this + 0x98);
    pcVar9 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    uVar11 = *(undefined4 *)(DAT_000b9ecc + iVar7 * 4 + 0xb9b8a);
    iVar7 = SmDev();
    iVar8 = DAT_000b9ed0 + 0xb9b86;
  }
  (*pcVar9)(piVar12,uVar11,*(undefined4 *)(iVar8 + iVar7 * 4 + 0x28));
LAB_000b9c16:
  piVar12 = *(int **)(this + 0x98);
  pcVar9 = *(code **)(*piVar12 + 0x44);
  StringBuffer::toString();
  (*pcVar9)(piVar12,aSStack_164);
  String::~String(aSStack_164);
  iVar7 = *(int *)(this + 0x68);
  if ((((iVar7 == 7) || (iVar7 == 3)) || (iVar7 == 1)) || (iVar7 == 8)) {
    (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),0);
    (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  }
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000b9ee0),10,false);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\x12',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xb8) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar15 = __mulsf3(uVar1,DAT_000b9ee4);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xb8),(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  pcVar9 = *(code **)(**(int **)(this + 0xb8) + 0x2c);
  String::String(aSStack_15c,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x74) + 0x4b0) + 8) +
                 **(int **)(iVar6 + DAT_000b9ee8) * 8));
  iVar8 = *(int *)(this + 0x74);
  iVar7 = SmDev();
  uVar11 = *(undefined4 *)((*(int *)(DAT_000b9eec + iVar7 * 4 + 0xb9d40) + 0x136) * 4 + iVar8);
  iVar7 = *(int *)(this + 0xb8);
  uVar2 = *(undefined4 *)(iVar7 + 0x10);
  uVar14 = *(undefined4 *)(iVar7 + 0xc);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar5,aSStack_15c,uVar11,0xffffffff,0,0,0,uVar14,uVar2,9,0,0);
  *(BitmapTextElement **)(this + 0x90) = pBVar5;
  (*pcVar9)(iVar7,pBVar5);
  String::~String(aSStack_15c);
  piVar12 = *(int **)(this + 0x88);
  pcVar9 = *(code **)(*piVar12 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x7c) + 0xc);
  iVar7 = SmDev();
  (*pcVar9)(piVar12,iVar8 / 2,*(undefined4 *)(DAT_000b9ef0 + iVar7 * 4 + 0xb9dca));
  piVar12 = *(int **)(this + 0x8c);
  iVar8 = *(int *)(this + 0xc);
  pcVar9 = *(code **)(*piVar12 + 0x14);
  iVar7 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(DAT_000b9ef4 + iVar7 * 4 + 0xb9d8a));
  __mulsf3(uVar2,uVar1);
  uVar1 = __fixsfsi();
  (*pcVar9)(piVar12,iVar8 / 2,uVar1);
  *(undefined1 *)(*(int *)(this + 0x90) + 0x7f) = 0x12;
  iVar7 = SmDev();
  if (iVar7 == 0) {
    piVar12 = *(int **)(this + 0xb8);
    (**(code **)(*piVar12 + 0x14))(piVar12,*(int *)(this + 0xc) / 2);
    iVar7 = *(int *)(*(int *)(this + 0x7c) + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0xb8) + 0x10) / 2 + *(int *)(*(int *)(this + 0x7c) + 0x10);
  }
  else {
    piVar12 = *(int **)(this + 0xb8);
    (**(code **)(*piVar12 + 0x14))
              (piVar12,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar12[4] / 2);
    iVar7 = *(int *)(*(int *)(this + 0x7c) + 0xc);
    iVar8 = *(int *)(*(int *)(this + 0x7c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar7,iVar8);
  this[0xcc] = (AmpouleRaidRewardScreen)0x1;
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_138);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_154);
  if (local_1c == **(int **)(iVar6 + DAT_000b9ef8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


