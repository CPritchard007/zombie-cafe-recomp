/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022b2ac Store::Store */

/* Store::Store(CImage**, FurnitureData**, short, NoticeDialog*, GameStateCafe*) */

Store * __thiscall
Store::Store(Store *this,CImage **param_1,FurnitureData **param_2,short param_3,
            NoticeDialog *param_4,GameStateCafe *param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CapcomTrueTypeFont *pCVar9;
  ImageElement *this_00;
  ZCImageButton *pZVar10;
  ScreenElement *pSVar11;
  undefined4 *puVar12;
  int iVar13;
  Store *pSVar14;
  code *pcVar15;
  int iVar16;
  int *piVar17;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar18;
  String aSStack_4c [8];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined3 uStack_2b;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar13 = DAT_0022b698;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar2 = DAT_0022b6a4;
  iVar13 = iVar13 + 0x22b2c6;
  pcVar1 = (char *)(DAT_0022b6a0 + 0x22b2ce);
  *(int *)this = *(int *)(iVar13 + DAT_0022b69c) + 8;
  L_PrintLog(pcVar1,(char *)(iVar2 + 0x22b2d4));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  iVar2 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar2 + 0x50);
  iVar2 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar2 + 0x44);
  iVar2 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar2 + 0x50);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(iVar2 + 4);
  *(CImage ***)(this + 0x70) = param_1;
  *(FurnitureData ***)(this + 0x74) = param_2;
  *(short *)(this + 0x78) = param_3;
  *(NoticeDialog **)(this + 200) = param_4;
  *(GameStateCafe **)(this + 0x6c) = param_5;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (Store)0x0;
  this[0xbc] = (Store)0xff;
  this[100] = (Store)0x0;
  *(undefined4 *)(this + 0xd0) = 0;
  String::String(aSStack_4c,*(String **)(iVar13 + DAT_0022b6a8));
  iVar16 = **(int **)(iVar13 + DAT_0022b6ac);
  iVar2 = SmDev();
  uVar8 = *(undefined4 *)(iVar2 * 4 + iVar16);
  pCVar9 = (CapcomTrueTypeFont *)operator_new(0x160);
  uVar8 = __floatsisf(uVar8);
  CapcomTrueTypeFont::CapcomTrueTypeFont(pCVar9,aSStack_4c,0,uVar8);
  *(CapcomTrueTypeFont **)(this + 0x60) = pCVar9;
  String::~String(aSStack_4c);
  L_PrintLog((char *)(DAT_0022b6b0 + 0x22b3b4),(char *)(DAT_0022b6b4 + 0x22b3b6));
  puVar12 = *(undefined4 **)(iVar13 + DAT_0022b6b8);
  local_44 = *puVar12;
  uStack_40 = puVar12[1];
  uStack_3c = puVar12[2];
  local_38 = puVar12[3];
  uStack_34 = puVar12[4];
  uStack_30 = puVar12[5];
  local_28 = puVar12[7];
  local_24 = puVar12[8];
  local_20 = puVar12[9];
  uStack_1c = puVar12[10];
  _local_2c = CONCAT31((int3)((uint)puVar12[6] >> 8),1);
  iVar16 = **(int **)(iVar13 + DAT_0022b6bc);
  iVar2 = SmDev();
  local_24 = __floatsisf(*(undefined4 *)(iVar2 * 4 + iVar16));
  local_28 = **(undefined4 **)(iVar13 + DAT_0022b6c0);
  *(undefined4 **)(*(int *)(this + 0x60) + 0x15c) = &local_44;
  this_00 = (ImageElement *)operator_new(0x98);
  uVar6 = __mulsf3(uVar6,uVar7);
  ImageElement::ImageElement
            (this_00,param_1[0x1a],extraout_s0,extraout_s1,(uchar)uVar3,SUB41(uVar6,0));
  *(ImageElement **)(this + 0x84) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  L_PrintLog((char *)(DAT_0022b6c4 + 0x22b438),(char *)(DAT_0022b6c8 + 0x22b43a));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',param_1[6],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x88) = pZVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  uVar18 = __mulsf3(uVar4,uVar5);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x88),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x7d],param_1[0x7e],0,0,false);
  *(ZCImageButton **)(this + 0x8c) = pZVar10;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  uVar18 = __mulsf3(uVar6,DAT_0022b6cc);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x8c),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x14],param_1[0x2f],0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x90),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x51],param_1[0x52],0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x94),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x16],param_1[0x31],0,0,false);
  *(ZCImageButton **)(this + 0x98) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x98),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x15],param_1[0x30],0,0,false);
  *(ZCImageButton **)(this + 0x9c) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x9c),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x17],param_1[0x32],0,0,false);
  *(ZCImageButton **)(this + 0xa0) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xa0),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\f',param_1[0x4f],param_1[0x50],0,0,false);
  *(ZCImageButton **)(this + 0xa4) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xa4),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pSVar11 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
  pSVar14 = this + 0xb4;
  *(ScreenElement **)pSVar14 = pSVar11;
  ScreenElement::addChild((ScreenElement *)this,pSVar11);
  (**(code **)(**(int **)pSVar14 + 0x1c))(*(int **)pSVar14,0xc);
  piVar17 = *(int **)pSVar14;
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  pSVar11 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar11,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xb0) = pSVar11;
  (*pcVar15)(piVar17,pSVar11);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\n',param_1[1],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa8) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xa8),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\"',param_1[2],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xac) = pZVar10;
  uVar18 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar10);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xac),(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  iVar13 = DAT_0022b74c;
  pcVar1 = (char *)(DAT_0022b744 + 0x22b6fa);
  *(undefined4 *)(this + 0xd8) = DAT_0022b748;
  L_PrintLog(pcVar1,(char *)(iVar13 + 0x22b6fe));
  return this;
}


