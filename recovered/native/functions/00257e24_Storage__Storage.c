/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00257e24 Storage::Storage */

/* Storage::Storage(CImage**, FurnitureData**, short, NoticeDialog*) */

Storage * __thiscall
Storage::Storage(Storage *this,CImage **param_1,FurnitureData **param_2,short param_3,
                NoticeDialog *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CapcomTrueTypeFont *pCVar8;
  ImageElement *this_00;
  ScreenElement *pSVar9;
  int *piVar10;
  ZCImageButton *pZVar11;
  undefined4 *puVar12;
  int iVar13;
  Storage *pSVar14;
  code *pcVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar17;
  String aSStack_5c [8];
  String aSStack_54 [8];
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
  
  iVar13 = DAT_00258214;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar13 = iVar13 + 0x257e3e;
  *(int *)this = *(int *)(iVar13 + DAT_00258218) + 8;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
  *(CImage ***)(this + 0x74) = param_1;
  *(FurnitureData ***)(this + 0x7c) = param_2;
  *(NoticeDialog **)(this + 0xdc) = param_4;
  *(short *)(this + 0x80) = param_3;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar1 + 0x50);
  iVar1 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(this + 0x88) = 0;
  this[0x8c] = (Storage)0x0;
  this[0xd0] = (Storage)0xff;
  this[100] = (Storage)0x0;
  *(undefined4 *)(this + 0xe4) = 0;
  this[0xf0] = (Storage)0x0;
  this[0x65] = (Storage)0x0;
  this[0x6c] = (Storage)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  String::String(aSStack_5c,*(String **)(iVar13 + DAT_0025821c));
  iVar16 = **(int **)(iVar13 + DAT_00258220);
  iVar1 = SmDev();
  uVar7 = *(undefined4 *)(iVar1 * 4 + iVar16);
  pCVar8 = (CapcomTrueTypeFont *)operator_new(0x160);
  uVar7 = __floatsisf(uVar7);
  CapcomTrueTypeFont::CapcomTrueTypeFont(pCVar8,aSStack_5c,0,uVar7);
  *(CapcomTrueTypeFont **)(this + 0x60) = pCVar8;
  String::~String(aSStack_5c);
  puVar12 = *(undefined4 **)(iVar13 + DAT_00258224);
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
  iVar16 = **(int **)(iVar13 + DAT_00258228);
  iVar1 = SmDev();
  local_24 = __floatsisf(*(undefined4 *)(iVar1 * 4 + iVar16));
  local_28 = **(undefined4 **)(iVar13 + DAT_0025822c);
  *(undefined4 **)(*(int *)(this + 0x60) + 0x15c) = &local_44;
  this_00 = (ImageElement *)operator_new(0x98);
  uVar5 = __mulsf3(uVar5,uVar6);
  ImageElement::ImageElement
            (this_00,param_1[0x1a],extraout_s0,extraout_s1,(uchar)uVar2,SUB41(uVar5,0));
  *(ImageElement **)(this + 0x90) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_54,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar13 + DAT_00258230) * 8));
  iVar1 = *(int *)(this + 0x70);
  iVar13 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(iVar13 * 4 + DAT_00258234 + 0x257f94) + 0x136) * 4 + iVar1);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_54,uVar2,0xffffffff,0xff000000,1,1,10,0,0);
  *(ScreenElement **)(this + 0xbc) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_54);
  piVar10 = *(int **)(this + 0xbc);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  String::String(aSStack_4c,(char *)(DAT_00258238 + 0x257fec));
  iVar1 = *(int *)(this + 0x70);
  iVar13 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(iVar13 * 4 + DAT_0025823c + 0x257ffc) + 0x136) * 4 + iVar1);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_4c,uVar2,0xffffffff,0xff000000,0,1,10,0,0);
  *(ScreenElement **)(this + 0xc0) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_4c);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\x12',param_1[6],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  uVar17 = __mulsf3(uVar3,uVar4);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x94),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0x14],param_1[0x2f],0,0,false);
  *(ZCImageButton **)(this + 0x98) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0x51],param_1[0x52],0,0,false);
  *(ZCImageButton **)(this + 0x9c) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0x16],param_1[0x31],0,0,false);
  *(ZCImageButton **)(this + 0xa0) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0x15],param_1[0x30],0,0,false);
  *(ZCImageButton **)(this + 0xa4) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0x17],param_1[0x32],0,0,false);
  *(ZCImageButton **)(this + 0xa8) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0x4f],param_1[0x50],0,0,false);
  *(ZCImageButton **)(this + 0xac) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\f',param_1[0xdb],param_1[0xda],0,0,false);
  *(ZCImageButton **)(this + 0xb0) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  uVar17 = __mulsf3(uVar5,DAT_00258240);
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x98),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x9c),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xa0),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xa4),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xa8),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xac),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0xb0),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,(ScreenElement *)0x0);
  pSVar14 = this + 200;
  *(ScreenElement **)pSVar14 = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  (**(code **)(**(int **)pSVar14 + 0x1c))(*(int **)pSVar14,0xc);
  piVar10 = *(int **)pSVar14;
  pcVar15 = *(code **)(*piVar10 + 0x2c);
  pSVar9 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar9,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xc4) = pSVar9;
  (*pcVar15)(piVar10);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\n',param_1[1],(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xb4) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  pZVar11 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar11,'\"',param_1[2],(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xb8) = pZVar11;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar11);
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xec) = DAT_00258364;
  return this;
}


