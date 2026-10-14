/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d40d4 QuestDialog::QuestDialog */

/* QuestDialog::QuestDialog(GameStateCafe*) */

QuestDialog * __thiscall QuestDialog::QuestDialog(QuestDialog *this,GameStateCafe *param_1)

{
  int iVar1;
  char *__s;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CImage *pCVar5;
  ImageElement *pIVar6;
  ScreenElement *pSVar7;
  ZCImageButton *pZVar8;
  code *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  short *psVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar17;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_001d4250 + 0x1d40e2;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  __s = (char *)(DAT_001d4258 + 0x1d40fa);
  *(int *)this = *(int *)(iVar1 + DAT_001d4254) + 8;
  *(undefined4 *)(this + 0xa4) = 0;
  *(QuestDialog **)(this + 0xa8) = this + 0xa0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  puts(__s);
  *(GameStateCafe **)(this + 100) = param_1;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar2 + 4);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(iVar2 + 0x40);
  iVar3 = CapcomApp::getInstance();
  iVar2 = DAT_001d425c;
  uVar12 = *(undefined4 *)(iVar3 + 0x44);
  puVar10 = (undefined4 *)(DAT_001d425c + 0x1d4130);
  *(undefined4 *)(this + 0xc4) = uVar12;
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x1d4148));
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1d415c) = uVar4;
  uVar4 = __floatsisf(*puVar10);
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1d4144) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x1d4160));
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  uVar15 = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)(iVar2 + 0x1d4174) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x1d4178));
  __mulsf3(uVar4,uVar15);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1d418c) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x1d4190));
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1d41a4) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x1d41a8));
  __mulsf3(uVar4,uVar15);
  uVar4 = __fixsfsi();
  iVar3 = DAT_001d4260;
  *(undefined4 *)(iVar2 + 0x1d41bc) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 + 0x1d41c0));
  __mulsf3(uVar4,uVar15);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar3 + 0x1d41d4) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 + 0x1d41d8));
  __mulsf3(uVar4,uVar15);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar3 + 0x1d41ec) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 + 0x1d41f0));
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  iVar2 = DAT_001d4264;
  *(undefined4 *)(iVar3 + 0x1d4204) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)((int)&DAT_001d4260 + iVar2));
  __mulsf3(uVar4,uVar15);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar2 + 0x1d4274) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 + 0x1d4208));
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  *(undefined4 *)(iVar3 + 0x1d421c) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 + 0x1d4220));
  __mulsf3(uVar4,uVar15);
  uVar4 = __fixsfsi();
  iVar2 = DAT_001d4268;
  *(undefined4 *)(iVar3 + 0x1d4234) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x1d423c));
  __mulsf3(uVar4,uVar12);
  uVar4 = __fixsfsi();
  iVar3 = DAT_001d426c;
  *(undefined4 *)((int)&DAT_001d4250 + iVar2) = uVar4;
  psVar13 = *(short **)(iVar1 + iVar3);
  for (iVar2 = 0; iVar2 < *psVar13; iVar2 = iVar2 + 1) {
    piVar11 = (int *)QuestData::getData(iVar2);
    Quest::checkQuestState(*(Quest **)(*(int *)(this + 0x60) + 0x40),*piVar11);
    piVar11 = (int *)QuestData::getData(iVar2);
    Quest::changedQuestState(*(Quest **)(*(int *)(this + 0x60) + 0x40),*piVar11,1,2);
  }
  this[0xb4] = (QuestDialog)0x0;
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  uVar4 = 9;
  uVar12 = 1;
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x68) = pIVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x68) + 0xc),
             (int)*(short *)(*(int *)(this + 0x68) + 0x10),*(code **)(*(int *)this + 0x18),uVar4,
             uVar12);
  pSVar7 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar7,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x88) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  iVar1 = *(int *)(this + 0xc);
  Vector<String>::elementAt((int)aSStack_30);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(iVar2 * 4 + DAT_001d4724 + 0x1d434e) + 0x136) * 4 + iVar3);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_30,uVar4,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xbc) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_30);
  piVar11 = *(int **)(this + 0x88);
  pcVar9 = *(code **)(*piVar11 + 0x14);
  iVar16 = *(int *)(*(int *)(this + 0xbc) + 0x10);
  iVar2 = SmDev();
  iVar3 = iVar1 * 7 >> 3;
  iVar14 = iVar1 - iVar3 >> 1;
  (*pcVar9)(piVar11,iVar14,iVar14 + iVar16 / 2 + *(int *)(DAT_001d4728 + iVar2 * 4 + 0x1d43d2));
  piVar11 = *(int **)(this + 0x88);
  iVar16 = *(int *)(this + 0x10);
  pcVar9 = *(code **)(*piVar11 + 0x18);
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0x10);
  iVar2 = SmDev();
  (*pcVar9)(piVar11,iVar3,
            ((iVar16 + iVar14 * -2) - iVar1) - *(int *)(DAT_001d472c + iVar2 * 4 + 0x1d440c));
  piVar11 = *(int **)(this + 0x88);
  pcVar9 = *(code **)(*piVar11 + 0x2c);
  pSVar7 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar7,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x8c) = pSVar7;
  (*pcVar9)(piVar11,pSVar7);
  piVar11 = *(int **)(this + 0x88);
  pcVar9 = *(code **)(*piVar11 + 0x2c);
  pSVar7 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar7,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x9c) = pSVar7;
  (*pcVar9)(piVar11,pSVar7);
  (**(code **)(**(int **)(this + 0x8c) + 0x18))(*(int **)(this + 0x8c),iVar3,0);
  (**(code **)(**(int **)(this + 0x9c) + 0x18))(*(int **)(this + 0x9c),iVar3,0);
  iVar2 = DAT_001d4730;
  uVar4 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001d4730),0xb,false);
  *(undefined4 *)(this + 0x90) = uVar4;
  uVar4 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0x12,false);
  *(undefined4 *)(this + 0x94) = uVar4;
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0x1e,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar6,pCVar5,'\t',true);
  *(ImageElement **)(this + 0x98) = pIVar6;
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),6,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'!',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(undefined4 *)(this + 0xc),0);
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',*(CImage **)(this + 0x90),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x70) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  piVar11 = *(int **)(this + 0x70);
  uVar4 = __divsi3(*(int *)(this + 0xc) << 2,10);
  uVar17 = (**(code **)(*piVar11 + 0x14))(piVar11,uVar4,*(int *)(this + 0x10) - piVar11[4] / 2);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x70),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',*(CImage **)(this + 0x90),(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x74) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  uVar4 = __divsi3(*(int *)(this + 0xc) * 6,10);
  piVar11 = *(int **)(this + 0x74);
  uVar17 = (**(code **)(*piVar11 + 0x14))(piVar11,uVar4,*(int *)(this + 0x10) - piVar11[4] / 2);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x74),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x68) + 0xc),
             *(int *)(*(int *)(this + 0x70) + 0x10) / 2 + *(int *)(*(int *)(this + 0x68) + 0x10));
  Vector<String>::elementAt((int)aSStack_28);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_001d4738 + iVar2 * 4 + 0x1d45fa) + 0x136) * 4 + iVar3);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_28,uVar4,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x78) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_28);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),*(undefined4 *)(*(int *)(this + 0x70) + 4),
             *(int *)(*(int *)(this + 0x70) + 8) + 10);
  Vector<String>::elementAt((int)aSStack_20);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(DAT_001d4740 + iVar2 * 4 + 0x1d4668) + 0x136) * 4 + iVar3);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,aSStack_20,uVar4,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x7c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),*(undefined4 *)(*(int *)(this + 0x74) + 4),
             *(int *)(*(int *)(this + 0x74) + 8) + 10);
  ScreenElement::addChild((ScreenElement *)this,*(ScreenElement **)(this + 0x98));
  piVar11 = *(int **)(this + 0x98);
  iVar2 = __divsi3(*(int *)(this + 0xc) << 2,10);
  iVar1 = *(int *)(this + 0x70);
  iVar3 = __divsi3(*(undefined4 *)(iVar1 + 0xc),3);
  (**(code **)(*piVar11 + 0x14))
            (piVar11,iVar2 + iVar3,*(int *)(this + 0x10) - *(int *)(iVar1 + 0x10));
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  *(undefined4 *)(this + 0xb8) = 0;
  iVar2 = DAT_001d4730;
  this[0x14] = (QuestDialog)0x0;
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),3,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x80) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar2),0,false)
  ;
  pZVar8 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar8,'\x12',pCVar5,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x84) = pZVar8;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar8);
  iVar2 = *(int *)(this + 0x88);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
  iVar2 = *(int *)(this + 0x88);
  uVar17 = (**(code **)(**(int **)(this + 0x84) + 0x14))
                     (*(int **)(this + 0x84),*(undefined4 *)(iVar2 + 4),
                      *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x80),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x84),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),1);
  (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
  buttonCleanUp(this,*(ZCImageButton **)(this + 0x70));
  updateTitle();
  return this;
}


