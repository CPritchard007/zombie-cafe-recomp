/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00105a64 EventRaidRewardScreen::EventRaidRewardScreen */

/* EventRaidRewardScreen::EventRaidRewardScreen(int, int, int, int, bool) */

void __thiscall
EventRaidRewardScreen::EventRaidRewardScreen
          (EventRaidRewardScreen *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  bool *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CImage *pCVar5;
  ImageElement *pIVar6;
  ScreenElement *pSVar7;
  String *this_00;
  PackedImage *this_01;
  ZCImageButton *this_02;
  BitmapTextElement *pBVar8;
  EventRaidRewardScreen *pEVar9;
  undefined *puVar10;
  ZombieCafe *this_03;
  int *piVar11;
  code *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined4 uStack_4;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int *piVar28;
  undefined4 *puVar29;
  
  iVar2 = DAT_00105dc0;
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  piVar21 = (int *)(&stack0xffffffec + DAT_00105dc0);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  piVar28 = (int *)(&stack0xffffffec + DAT_00105dc0);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_00105dc0);
  *(int *)(&stack0x00000014 + DAT_00105dc0) = DAT_00105dc8 + 0x105a7a;
  *(undefined4 *)(&stack0x000002e0 + DAT_00105dc0) =
       **(undefined4 **)(DAT_00105dc8 + 0x105a7a + DAT_00105dc4);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(*(int *)(&stack0x00000014 + iVar2) + DAT_00105dcc) + 8;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  *(int *)(this + 0x68) = param_1;
  *(int *)(this + 0x6c) = param_2;
  *(int *)(this + 0x70) = param_3;
  *(undefined4 *)(&stack0x00000018 + iVar2) = uVar4;
  iVar3 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(this + 0x74) = iVar3;
  pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f0),2,false);
  pIVar6 = (ImageElement *)operator_new(0x98);
  *puVar17 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  ImageElement::ImageElement
            (pIVar6,pCVar5,extraout_s0,extraout_s1,(uchar)DAT_00105dd0,(bool)(uchar)DAT_00105dd0);
  *(ImageElement **)(this + 0x7c) = pIVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x7c) + 0xc),
             *(int *)(*(int *)(this + 0x7c) + 0x10));
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_00105dd4),0x4c,false)
  ;
  pIVar6 = (ImageElement *)operator_new(0x98);
  *puVar18 = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_00,extraout_s1_00,'\0',false);
  *(ImageElement **)(this + 0xa8) = pIVar6;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar6);
  piVar11 = *(int **)(this + 0xa8);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  iVar3 = SmDev();
  iVar16 = *(int *)(this + 0x10);
  *(undefined4 *)(&stack0x0000001c + iVar2) =
       *(undefined4 *)(iVar3 * 4 + *(int *)(*(int *)(&stack0x00000014 + iVar2) + DAT_00105dd8));
  iVar13 = **(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_00105ddc);
  iVar3 = SmDev();
  (**(code **)(&stack0x0000000c + iVar2))
            (piVar11,*(undefined4 *)(&stack0x0000001c + iVar2),iVar16 - *(int *)(iVar3 * 4 + iVar13)
            );
  iVar3 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0x74));
  String::String((String *)(&stack0x00000028 + iVar2),(char *)(DAT_00105de0 + 0x105b6a));
  iVar16 = *(int *)(this + 0x74);
  iVar13 = SmDev();
  uVar4 = *(undefined4 *)((*(int *)(iVar13 * 4 + DAT_00105de4 + 0x105b7a) + 0x136) * 4 + iVar16);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,&stack0x00000028 + iVar2,uVar4,0xffffffff);
  *(ScreenElement **)(this + 0x88) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x00000028 + iVar2));
  pEVar9 = this + 0x88;
  if (iVar3 == 1) {
    piVar11 = *(int **)pEVar9;
    pcVar12 = *(code **)(*piVar11 + 0x44);
    String::String((String *)(&stack0x00000030 + iVar2),(char *)(DAT_00105de8 + 0x105bce));
    (*pcVar12)(piVar11,&stack0x00000030 + iVar2);
    this_00 = (String *)(&stack0x00000030 + iVar2);
LAB_00105f80:
    String::~String(this_00);
  }
  else {
    if (iVar3 == 2) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000038 + iVar2),(char *)(DAT_00105dec + 0x105bec));
      (*pcVar12)(piVar11,&stack0x00000038 + iVar2);
      this_00 = (String *)(&stack0x00000038 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 3) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000040 + iVar2),(char *)(DAT_00105df0 + 0x105c0a));
      (*pcVar12)(piVar11,&stack0x00000040 + iVar2);
      this_00 = (String *)(&stack0x00000040 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 4) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000048 + iVar2),(char *)(DAT_00105df4 + 0x105c28));
      (*pcVar12)(piVar11,&stack0x00000048 + iVar2);
      this_00 = (String *)(&stack0x00000048 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 5) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000050 + iVar2),(char *)(DAT_00105df8 + 0x105c46));
      (*pcVar12)(piVar11,&stack0x00000050 + iVar2);
      this_00 = (String *)(&stack0x00000050 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 6) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000058 + iVar2),(char *)(DAT_00105dfc + 0x105c64));
      (*pcVar12)(piVar11,&stack0x00000058 + iVar2);
      this_00 = (String *)(&stack0x00000058 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 7) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000060 + iVar2),(char *)(DAT_00105e00 + 0x105c82));
      (*pcVar12)(piVar11,&stack0x00000060 + iVar2);
      this_00 = (String *)(&stack0x00000060 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 8) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000068 + iVar2),(char *)(DAT_00105e04 + 0x105ca0));
      (*pcVar12)(piVar11,&stack0x00000068 + iVar2);
      this_00 = (String *)(&stack0x00000068 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 9) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000070 + iVar2),(char *)(DAT_00105e08 + 0x105cbe));
      (*pcVar12)(piVar11,&stack0x00000070 + iVar2);
      this_00 = (String *)(&stack0x00000070 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 10) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000078 + iVar2),(char *)(DAT_00105e0c + 0x105cdc));
      (*pcVar12)(piVar11,&stack0x00000078 + iVar2);
      this_00 = (String *)(&stack0x00000078 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0xb) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000080 + iVar2),(char *)(DAT_00105e10 + 0x105cfa));
      (*pcVar12)(piVar11,&stack0x00000080 + iVar2);
      this_00 = (String *)(&stack0x00000080 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0xc) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000088 + iVar2),(char *)(DAT_00105e14 + 0x105d18));
      (*pcVar12)(piVar11,&stack0x00000088 + iVar2);
      this_00 = (String *)(&stack0x00000088 + iVar2);
      goto LAB_00105f80;
    }
    pEVar9 = this + 0x88;
    if (iVar3 == 0xd) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000090 + iVar2),(char *)(DAT_00105e18 + 0x105d3a));
      (*pcVar12)(piVar11,&stack0x00000090 + iVar2);
      this_00 = (String *)(&stack0x00000090 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0xe) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000098 + iVar2),(char *)(DAT_00105e1c + 0x105d58));
      (*pcVar12)(piVar11,&stack0x00000098 + iVar2);
      this_00 = (String *)(&stack0x00000098 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0xf) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000a0 + iVar2),(char *)(DAT_00105e20 + 0x105d76));
      (*pcVar12)(piVar11,&stack0x000000a0 + iVar2);
      this_00 = (String *)(&stack0x000000a0 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x10) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000a8 + iVar2),(char *)(DAT_00105e24 + 0x105d94));
      (*pcVar12)(piVar11,&stack0x000000a8 + iVar2);
      this_00 = (String *)(&stack0x000000a8 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x11) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000b0 + iVar2),(char *)(DAT_00105e28 + 0x105db2));
      (*pcVar12)(piVar11,&stack0x000000b0 + iVar2);
      this_00 = (String *)(&stack0x000000b0 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x12) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000b8 + iVar2),(char *)(DAT_00105f40 + 0x105e3c));
      (*pcVar12)(piVar11,&stack0x000000b8 + iVar2);
      this_00 = (String *)(&stack0x000000b8 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x13) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000c0 + iVar2),(char *)(DAT_00105f44 + 0x105e5a));
      (*pcVar12)(piVar11,&stack0x000000c0 + iVar2);
      this_00 = (String *)(&stack0x000000c0 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x14) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000c8 + iVar2),(char *)(DAT_00105f48 + 0x105e78));
      (*pcVar12)(piVar11,&stack0x000000c8 + iVar2);
      this_00 = (String *)(&stack0x000000c8 + iVar2);
      goto LAB_00105f80;
    }
    pEVar9 = this + 0x88;
    if (iVar3 == 0x15) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000d0 + iVar2),(char *)(DAT_00105f4c + 0x105e9a));
      (*pcVar12)(piVar11,&stack0x000000d0 + iVar2);
      this_00 = (String *)(&stack0x000000d0 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x16) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000d8 + iVar2),(char *)(DAT_00105f50 + 0x105eb8));
      (*pcVar12)(piVar11,&stack0x000000d8 + iVar2);
      this_00 = (String *)(&stack0x000000d8 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x17) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000e0 + iVar2),(char *)(DAT_00105f54 + 0x105ed6));
      (*pcVar12)(piVar11,&stack0x000000e0 + iVar2);
      this_00 = (String *)(&stack0x000000e0 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x18) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000e8 + iVar2),(char *)(DAT_00105f58 + 0x105ef4));
      (*pcVar12)(piVar11,&stack0x000000e8 + iVar2);
      this_00 = (String *)(&stack0x000000e8 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x19) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000f0 + iVar2),(char *)(DAT_00105f5c + 0x105f12));
      (*pcVar12)(piVar11,&stack0x000000f0 + iVar2);
      this_00 = (String *)(&stack0x000000f0 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x1a) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x000000f8 + iVar2),(char *)(DAT_00105f60 + 0x105f30));
      (*pcVar12)(piVar11,&stack0x000000f8 + iVar2);
      this_00 = (String *)(&stack0x000000f8 + iVar2);
      goto LAB_00105f80;
    }
    if (iVar3 == 0x1b) {
      piVar11 = *(int **)pEVar9;
      pcVar12 = *(code **)(*piVar11 + 0x44);
      String::String((String *)(&stack0x00000100 + iVar2),(char *)(DAT_001062c8 + 0x105f74));
      (*pcVar12)(piVar11,&stack0x00000100 + iVar2);
      this_00 = (String *)(&stack0x00000100 + iVar2);
      goto LAB_00105f80;
    }
  }
  pSVar7 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x11;
  *puVar20 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ScreenElement::ScreenElement
            (pSVar7,0,0,0,*piVar21,(&stack0xfffffff0)[iVar2],
             *(ScreenElement **)(&stack0xfffffff4 + iVar2));
  *(ScreenElement **)(this + 0x78) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::String((String *)(&stack0x00000108 + iVar2),(char *)(DAT_001062cc + 0x105fb0));
  iVar13 = *(int *)(this + 0x74);
  iVar3 = SmDev();
  uVar14 = *(undefined4 *)((*(int *)(DAT_001062d0 + iVar3 * 4 + 0x105fd8) + 0x136) * 4 + iVar13);
  pSVar7 = (ScreenElement *)operator_new(0xc0);
  uVar4 = **(undefined4 **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001062d4);
  *puVar22 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar7,&stack0x00000108 + iVar2,uVar14,uVar4);
  *(ScreenElement **)(this + 0x8c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x00000108 + iVar2));
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001a8 + iVar2));
  String::String((String *)(&stack0x00000110 + iVar2),(char *)(DAT_001062d8 + 0x106014));
  StringBuffer::append(&stack0x000001a8 + iVar2,&stack0x00000110 + iVar2);
  String::~String((String *)(&stack0x00000110 + iVar2));
  String::valueOf((int)(&stack0x00000118 + iVar2));
  StringBuffer::append(&stack0x000001a8 + iVar2,&stack0x00000118 + iVar2);
  String::~String((String *)(&stack0x00000118 + iVar2));
  String::String((String *)(&stack0x00000120 + iVar2),(char *)(DAT_001062dc + 0x106042));
  StringBuffer::append(&stack0x000001a8 + iVar2,&stack0x00000120 + iVar2);
  String::~String((String *)(&stack0x00000120 + iVar2));
  piVar11 = *(int **)(this + 0x8c);
  pcVar12 = *(code **)(*piVar11 + 0x44);
  StringBuffer::toString();
  (*pcVar12)(piVar11,&stack0x00000128 + iVar2);
  String::~String((String *)(&stack0x00000128 + iVar2));
  String::String((String *)(&stack0x00000130 + iVar2),(char *)(DAT_001062e0 + 0x106078));
  iVar13 = **(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001062e4);
  *(int **)(&stack0x00000020 + iVar2) = *(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001062e4)
  ;
  iVar3 = SmDev();
  uVar4 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_001062e8 + iVar3 * 4 + 0x1060c2),0))
  ;
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  *puVar23 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  pbVar1 = &param_5 + iVar2;
  pbVar1[0] = false;
  pbVar1[1] = false;
  pbVar1[2] = false;
  pbVar1[3] = false;
  *(undefined4 *)((int)&param_4 + iVar2) = 0x11;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,&stack0x00000130 + iVar2,uVar4,0xffffffff);
  *(ScreenElement **)(this + 0x94) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x00000130 + iVar2));
  piVar15 = *(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_001062ec);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0x94));
  L_PrintLog((char *)(DAT_001062f0 + 0x1060f2),(char *)(DAT_001062f4 + 0x1060f4));
  sprintf(&stack0x000001e0 + iVar2,(char *)(DAT_001062f8 + 0x106102),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(DAT_001062fc + 0x10610e),&stack0x000001e0 + iVar2);
  piVar11 = *(int **)(this + 0x94);
  pcVar12 = *(code **)(*piVar11 + 0x18);
  iVar3 = SmDev();
  __addsf3(*(undefined4 *)(DAT_00106300 + iVar3 * 4 + 0x106170),0x42000000);
  uVar4 = __fixsfsi();
  (*pcVar12)(piVar11,uVar4,1000);
  piVar11 = *(int **)(this + 0x94);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  iVar3 = SmDev();
  iVar3 = *(int *)(DAT_00106304 + iVar3 * 4 + 0x1061b6);
  uVar4 = SmDev();
  *(undefined4 *)(&stack0x0000001c + iVar2) = uVar4;
  uVar4 = __floatsisf(iVar3 + DAT_00106308);
  __mulsf3(uVar4,*(undefined4 *)(&stack0x00000010 + iVar2));
  uVar4 = __fixsfsi();
  uVar14 = __floatsisf(*(int *)(DAT_0010630c + *(int *)(&stack0x0000001c + iVar2) * 4 + 0x1061f4) +
                       -10);
  __mulsf3(uVar14,*(undefined4 *)(&stack0x00000018 + iVar2));
  uVar14 = __fixsfsi();
  (**(code **)(&stack0x0000000c + iVar2))(piVar11,uVar4,uVar14);
  String::String((String *)(&stack0x00000138 + iVar2),(char *)(DAT_00106310 + 0x1061a0));
  iVar13 = **(int **)(&stack0x00000020 + iVar2);
  iVar3 = SmDev();
  uVar4 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_00106314 + iVar3 * 4 + 0x1061e4),0))
  ;
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  *puVar24 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  pbVar1 = &param_5 + iVar2;
  pbVar1[0] = false;
  pbVar1[1] = false;
  pbVar1[2] = false;
  pbVar1[3] = false;
  *(undefined4 *)((int)&param_4 + iVar2) = 0x11;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,&stack0x00000138 + iVar2,uVar4,0xffffffff);
  *(ScreenElement **)(this + 0x98) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x00000138 + iVar2));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar15,*(TrueTypeTextElement **)(this + 0x98));
  L_PrintLog((char *)(DAT_00106318 + 0x10620e),(char *)(DAT_0010631c + 0x106210));
  sprintf(&stack0x000001e0 + iVar2,(char *)(DAT_00106320 + 0x10621e),*(int *)(*piVar15 + 4) + 1);
  L_PrintLog((char *)(DAT_00106324 + 0x10622a),&stack0x000001e0 + iVar2);
  piVar11 = *(int **)(this + 0x98);
  pcVar12 = *(code **)(*piVar11 + 0x18);
  iVar3 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(DAT_00106328 + iVar3 * 4 + 0x10628a));
  (*pcVar12)(piVar11,uVar4,1000);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001c4 + iVar2));
  iVar3 = *(int *)(this + 0x68);
  if (iVar3 == 0) {
    String::String((String *)(&stack0x00000140 + iVar2),(char *)(DAT_0010632c + 0x106266));
    StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000140 + iVar2);
    String::~String((String *)(&stack0x00000140 + iVar2));
    String::valueOf((int)(&stack0x00000148 + iVar2));
    StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000148 + iVar2);
    String::~String((String *)(&stack0x00000148 + iVar2));
    piVar11 = *(int **)(this + 0x98);
    *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
    iVar3 = SmDev();
    iVar13 = *(int *)(DAT_00106330 + iVar3 * 4 + 0x1062b4);
    iVar3 = SmDev();
    uVar4 = __floatsisf(iVar13 + DAT_00106308);
    __mulsf3(uVar4,*(undefined4 *)(&stack0x00000010 + iVar2));
    uVar4 = __fixsfsi();
    puVar10 = &UNK_001062c6 + DAT_00106334;
LAB_0010654a:
    uVar14 = __floatsisf(*(int *)(puVar10 + iVar3 * 4 + 0x28) + -10);
    __mulsf3(uVar14,*(undefined4 *)(&stack0x00000018 + iVar2));
    uVar14 = __fixsfsi();
    (**(code **)(&stack0x0000000c + iVar2))(piVar11,uVar4,uVar14);
  }
  else {
    if (iVar3 == 2) {
      String::String((String *)(&stack0x00000150 + iVar2),
                     (String *)
                     (*(int *)(*(int *)(this + 0x70) * 4 +
                              *(int *)(*(int *)(this + 0x74) + DAT_00106668)) + DAT_0010666c));
      StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000150 + iVar2);
      String::~String((String *)(&stack0x00000150 + iVar2));
      piVar11 = *(int **)(this + 0x98);
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
      iVar3 = SmDev();
      iVar13 = *(int *)(DAT_00106670 + iVar3 * 4 + 0x106388);
      iVar3 = SmDev();
      uVar4 = __floatsisf(iVar13 + DAT_00106674);
      __mulsf3(uVar4,*(undefined4 *)(&stack0x00000010 + iVar2));
      uVar4 = __fixsfsi();
      puVar10 = (undefined *)(DAT_00106678 + 0x10639a);
      goto LAB_0010654a;
    }
    if (iVar3 - 5U < 2) {
      Recipe::getFullName((char)&stack0x00000158 + (char)iVar2);
      String::String((String *)(&stack0x00000160 + iVar2),(char *)(DAT_0010667c + 0x1063c4));
      MultiByteString::insertStringNextLine
                ((String *)(&stack0x00000160 + iVar2),(String *)(&stack0x00000158 + iVar2),0xc);
      String::String((String *)(&stack0x00000168 + iVar2),(String *)(&stack0x00000160 + iVar2));
      StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000168 + iVar2);
      String::~String((String *)(&stack0x00000168 + iVar2));
      piVar11 = *(int **)(this + 0x98);
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
      iVar3 = SmDev();
      iVar13 = *(int *)(DAT_00106680 + iVar3 * 4 + 0x10640e);
      iVar3 = SmDev();
      uVar4 = __floatsisf(iVar13 + DAT_00106674);
      __mulsf3(uVar4,*(undefined4 *)(&stack0x00000010 + iVar2));
      uVar4 = __fixsfsi();
      uVar14 = __floatsisf(*(int *)(DAT_00106684 + iVar3 * 4 + 0x10644a) + -10);
      __mulsf3(uVar14,*(undefined4 *)(&stack0x00000018 + iVar2));
      uVar14 = __fixsfsi();
      (**(code **)(&stack0x0000000c + iVar2))(piVar11,uVar4,uVar14);
      String::~String((String *)(&stack0x00000160 + iVar2));
      String::~String((String *)(&stack0x00000158 + iVar2));
    }
    else if (iVar3 == 8) {
      if (*(int *)(this + 0x6c) - 1U < 0x1e) {
        String::valueOf((int)(&stack0x00000170 + iVar2));
        StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000170 + iVar2);
        String::~String((String *)(&stack0x00000170 + iVar2));
        String::String((String *)(&stack0x00000178 + iVar2),(char *)(DAT_00106688 + 0x106476));
        StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000178 + iVar2);
        String::~String((String *)(&stack0x00000178 + iVar2));
        piVar11 = *(int **)(this + 0x98);
        *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
        iVar3 = SmDev();
        iVar13 = *(int *)(DAT_0010668c + iVar3 * 4 + 0x1064ae);
        iVar3 = SmDev();
        uVar4 = __floatsisf(iVar13 + DAT_00106674);
        __mulsf3(uVar4,*(undefined4 *)(&stack0x00000010 + iVar2));
        uVar4 = __fixsfsi();
        puVar10 = (undefined *)(DAT_00106690 + 0x1064c0);
        goto LAB_0010654a;
      }
    }
    else if ((iVar3 == 9) && (*(int *)(this + 0x6c) - 1U < 10)) {
      String::String((String *)(&stack0x00000180 + iVar2),(char *)(DAT_00106694 + 0x1064d4));
      StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000180 + iVar2);
      String::~String((String *)(&stack0x00000180 + iVar2));
      String::valueOf((int)(&stack0x00000188 + iVar2));
      StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000188 + iVar2);
      String::~String((String *)(&stack0x00000188 + iVar2));
      String::String((String *)(&stack0x00000190 + iVar2),(char *)(DAT_00106698 + 0x106502));
      StringBuffer::append(&stack0x000001c4 + iVar2,&stack0x00000190 + iVar2);
      String::~String((String *)(&stack0x00000190 + iVar2));
      piVar11 = *(int **)(this + 0x98);
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
      iVar3 = SmDev();
      iVar13 = *(int *)(DAT_0010669c + iVar3 * 4 + 0x10653a);
      iVar3 = SmDev();
      uVar4 = __floatsisf(iVar13 + DAT_00106674);
      __mulsf3(uVar4,*(undefined4 *)(&stack0x00000010 + iVar2));
      uVar4 = __fixsfsi();
      puVar10 = (undefined *)(DAT_001066a0 + 0x10654c);
      goto LAB_0010654a;
    }
  }
  piVar11 = *(int **)(this + 0x98);
  pcVar12 = *(code **)(*piVar11 + 0x44);
  StringBuffer::toString();
  (*pcVar12)(piVar11,&stack0x00000198 + iVar2);
  String::~String((String *)(&stack0x00000198 + iVar2));
  if ((*(int *)(this + 0x68) == 7) || (*(int *)(this + 0x68) == 3)) {
    (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),0);
    (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  }
  this_03 = *(ZombieCafe **)(this + 0x74);
  if (*(int *)(this + 0x68) - 5U < 2) {
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(this_03 + DAT_001066a4),
                        (int)*(short *)(*(int *)(this_03 + 0x4e8) + *(int *)(this + 0x6c) * 0x1c +
                                       0x14),true);
    iVar3 = SmDev();
    uVar4 = __mulsf3(*(undefined4 *)(&stack0x00000018 + iVar2),
                     *(undefined4 *)(DAT_001066a8 + iVar3 * 4 + 0x106624));
    *(undefined4 *)(pCVar5 + 0x2c) = uVar4;
    uVar4 = __divsf3(0x3f800000,uVar4);
    *(undefined4 *)(pCVar5 + 0x30) = uVar4;
    piVar11 = *(int **)(this + 0xa8);
    *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar11 + 0x2c);
    pIVar6 = (ImageElement *)operator_new(0x98);
    *puVar25 = 0x12;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    ImageElement::ImageElement
              (pIVar6,pCVar5,extraout_s0_01,extraout_s1_01,(uchar)DAT_001066ac,
               (bool)(uchar)DAT_001066ac);
    *(ImageElement **)(this + 0xac) = pIVar6;
    (**(code **)(&stack0x00000010 + iVar2))(piVar11,pIVar6);
    goto LAB_001066f8;
  }
  iVar3 = ZombieCafe::getEventRaid_Theme(this_03);
  iVar13 = *(int *)(this + 0x74);
  if (iVar3 == 1) {
    this_01 = *(PackedImage **)(iVar13 + DAT_001066b0);
    iVar3 = 0xe5;
  }
  else if (iVar3 == 2) {
    iVar3 = 0xee;
    this_01 = *(PackedImage **)(iVar13 + DAT_001066b0);
  }
  else {
    if (iVar3 == 3) {
      this_01 = *(PackedImage **)(iVar13 + DAT_001066b0);
    }
    else {
      if (iVar3 != 9) {
        this_01 = *(PackedImage **)(iVar13 + DAT_00106a38);
        iVar3 = 0xba;
        goto LAB_001066ba;
      }
      this_01 = *(PackedImage **)(iVar13 + DAT_001066b0);
    }
    iVar3 = 0x110;
  }
LAB_001066ba:
  pCVar5 = (CImage *)PackedImage::getImage(this_01,iVar3,false);
  piVar11 = *(int **)(this + 0xa8);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar11 + 0x2c);
  pIVar6 = (ImageElement *)operator_new(0x98);
  *puVar26 = 0x12;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  ImageElement::ImageElement(pIVar6,pCVar5,extraout_s0_02,extraout_s1_02,'\0',false);
  *(ImageElement **)(this + 0xac) = pIVar6;
  (**(code **)(&stack0x00000010 + iVar2))(piVar11,pIVar6);
LAB_001066f8:
  (**(code **)(**(int **)(this + 0xac) + 0x14))
            (*(int **)(this + 0xac),*(int *)(*(int *)(this + 0xa8) + 0xc) / 2,
             *(int *)(*(int *)(this + 0xa8) + 0x10) / 2);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_00106a38),10,false);
  this_02 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  *puVar27 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (this_02,'\x12',pCVar5,(CImage *)0x0,*piVar28,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0xb8) = this_02;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_02);
  iVar3 = *(int *)(this + 0x74);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(**(int **)(this + 0xb8) + 0x2c);
  String::String((String *)(&stack0x000001a0 + iVar2),
                 (String *)
                 (*(int *)(*(int *)(iVar3 + 0x4b0) + 8) +
                 **(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_00106a3c) * 8));
  iVar13 = *(int *)(this + 0x74);
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x0000000c + iVar2) =
       *(undefined4 *)((*(int *)(DAT_00106a40 + iVar3 * 4 + 0x1067d8) + 0x136) * 4 + iVar13);
  iVar3 = *(int *)(this + 0xb8);
  uVar14 = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(&stack0x0000001c + iVar2) = *(undefined4 *)(iVar3 + 0x10);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  uVar4 = *(undefined4 *)(&stack0x0000001c + iVar2);
  *puVar29 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  pbVar1 = &param_5 + iVar2;
  pbVar1[0] = false;
  pbVar1[1] = false;
  pbVar1[2] = false;
  pbVar1[3] = false;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar2) = uVar4;
  *(undefined4 *)((int)&param_4 + iVar2) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar14;
  BitmapTextElement::BitmapTextElement
            (pBVar8,&stack0x000001a0 + iVar2,*(undefined4 *)(&stack0x0000000c + iVar2),0xffffffff);
  *(BitmapTextElement **)(this + 0x90) = pBVar8;
  (**(code **)(&stack0x00000010 + iVar2))(iVar3,pBVar8);
  String::~String((String *)(&stack0x000001a0 + iVar2));
  piVar11 = *(int **)(this + 0x88);
  pcVar12 = *(code **)(*piVar11 + 0x14);
  iVar13 = *(int *)(*(int *)(this + 0x7c) + 0xc);
  iVar3 = SmDev();
  (*pcVar12)(piVar11,iVar13 / 2,*(undefined4 *)(DAT_00106a44 + iVar3 * 4 + 0x106862));
  piVar11 = *(int **)(this + 0x8c);
  iVar13 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(*piVar11 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(DAT_00106a48 + iVar3 * 4 + 0x106820));
  uVar14 = __mulsf3(*(undefined4 *)(&stack0x00000018 + iVar2),DAT_00106a4c);
  __addsf3(uVar4,uVar14);
  uVar4 = __fixsfsi();
  (**(code **)(&stack0x00000010 + iVar2))(piVar11,iVar13 / 2,uVar4);
  *(undefined1 *)(*(int *)(this + 0x90) + 0x7f) = 0x12;
  iVar3 = SmDev();
  if (iVar3 == 0) {
    piVar11 = *(int **)(this + 0xb8);
    (**(code **)(*piVar11 + 0x14))(piVar11,*(int *)(this + 0xc) / 2);
    iVar3 = *(int *)(*(int *)(this + 0x7c) + 0xc);
    iVar13 = *(int *)(*(int *)(this + 0xb8) + 0x10) / 2 + *(int *)(*(int *)(this + 0x7c) + 0x10);
  }
  else {
    piVar11 = *(int **)(this + 0xb8);
    (**(code **)(*piVar11 + 0x14))
              (piVar11,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar11[4] / 2);
    iVar3 = *(int *)(*(int *)(this + 0x7c) + 0xc);
    iVar13 = *(int *)(*(int *)(this + 0x7c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar3,iVar13);
  this[0xcc] = (EventRaidRewardScreen)0x1;
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000001c4 + iVar2));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000001a8 + iVar2));
  if (*(int *)(&stack0x000002e0 + iVar2) !=
      **(int **)(*(int *)(&stack0x00000014 + iVar2) + DAT_00106a50)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


