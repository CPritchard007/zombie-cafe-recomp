/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020c678 RaidRewardScreen::RaidRewardScreen */

/* RaidRewardScreen::RaidRewardScreen(int, int, int, float, unsigned char, int, int, int, bool,
   void*, int, bool, int) */

RaidRewardScreen * __thiscall
RaidRewardScreen::RaidRewardScreen
          (RaidRewardScreen *this,int param_1,int param_2,int param_3,float param_4,uchar param_5,
          int param_6,int param_7,int param_8,bool param_9,void *param_10,int param_11,bool param_12
          ,int param_13)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uchar uVar8;
  bool bVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  CImage *pCVar15;
  ImageElement *pIVar16;
  ScreenElement *pSVar17;
  ZCImageButton *pZVar18;
  BitmapTextElement *pBVar19;
  String *pSVar20;
  char *pcVar21;
  undefined4 extraout_r1;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  int iVar29;
  int *piVar30;
  RaidRewardScreen *pRVar31;
  int *piVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  code *pcVar36;
  undefined4 uVar37;
  int iVar38;
  undefined4 uVar39;
  CImage *unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float fVar40;
  float extraout_s0_06;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar41;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  undefined3 in_stack_00000011;
  undefined3 in_stack_0000001d;
  undefined4 in_stack_00000024;
  RaidRewardScreen local_154;
  undefined4 local_148;
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [16];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  uVar23 = param_6 & 0xff;
  uVar24 = (uint)param_10 & 0xff;
  iVar27 = DAT_0020c730 + 0x20c696;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  pcVar10 = (char *)(DAT_0020c738 + 0x20c6b4);
  pcVar21 = (char *)(DAT_0020c73c + 0x20c6b6);
  *(int *)this = *(int *)(iVar27 + DAT_0020c734) + 8;
  L_PrintLog(pcVar10,pcVar21);
  iVar11 = CapcomApp::getInstance();
  uVar12 = *(undefined4 *)(iVar11 + 0x40);
  iVar11 = CapcomApp::getInstance();
  uVar13 = *(undefined4 *)(iVar11 + 0x50);
  iVar11 = CapcomApp::getInstance();
  uVar28 = *(undefined4 *)(iVar11 + 0x44);
  iVar11 = CapcomApp::getInstance();
  uVar28 = __mulsf3(uVar28,*(undefined4 *)(iVar11 + 0x50));
  iVar11 = DAT_0020c740;
  uVar14 = __floatsisf(*(undefined4 *)(DAT_0020c740 + 0x20c6e8));
  __mulsf3(uVar14,uVar28);
  uVar14 = __fixsfsi();
  *(undefined4 *)(this + 100) = in_stack_00000024;
  this[99] = param_13._0_1_;
  this[0x61] = (RaidRewardScreen)0x0;
  *(undefined4 *)(iVar11 + 0x20c6fc) = uVar14;
  this[0x62] = (RaidRewardScreen)0x0;
  if (_param_12 < 0x20) {
    if (_param_12 < 0xf) {
      if (7 < _param_12) goto LAB_0020c72c;
    }
    else {
LAB_0020c744:
      this[0x62] = (RaidRewardScreen)0x1;
    }
  }
  else {
    if (_param_12 != 0x20) {
      if (0xb3 < _param_12) goto LAB_0020c746;
      goto LAB_0020c744;
    }
LAB_0020c72c:
    this[0x61] = (RaidRewardScreen)0x1;
  }
LAB_0020c746:
  local_154 = SUB41(param_10,0);
  this[0xbc] = local_154;
  if (uVar24 == 0) {
    param_11 = 0;
  }
  __aeabi_idivmod(param_7,**(undefined1 **)(iVar27 + DAT_0020cb30));
  *(undefined4 *)(this + 0xb0) = extraout_r1;
  *(int *)(this + 0xb4) = param_8;
  *(undefined4 *)(this + 0xb8) = _param_9;
  iVar11 = CapcomApp::getInstance();
  iVar11 = *(int *)(iVar11 + 4);
  *(int *)(this + 0x68) = iVar11;
  this[0x60] = (RaidRewardScreen)0x0;
  pCVar15 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + 0x7f0),2,false);
  pIVar16 = (ImageElement *)operator_new(0x98);
  uVar12 = __mulsf3(uVar12,uVar13);
  uVar8 = __addsf3(uVar12,uVar12);
  bVar9 = (bool)__addsf3(uVar28,uVar28);
  ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0,extraout_s1,uVar8,bVar9);
  *(ImageElement **)(this + 0x6c) = pIVar16;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(*(int *)(this + 0x6c) + 0xc),
             *(int *)(*(int *)(this + 0x6c) + 0x10));
  String::String(aSStack_110,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                 **(int **)(iVar27 + DAT_0020cb34) * 8));
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(iVar11 * 4 + DAT_0020cb38 + 0x20c80e) + 0x136) * 4 + iVar29);
  pSVar17 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar17,aSStack_110,uVar13,0xffffffff,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x7c) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::~String(aSStack_110);
  pSVar17 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar17,0,0,0,0,'\x11',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x70) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::String(aSStack_108,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                 **(int **)(iVar27 + DAT_0020cb3c) * 8));
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_0020cb40 + iVar11 * 4 + 0x20c8b0) + 0x136) * 4 + iVar29);
  pSVar17 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar17,aSStack_108,uVar13,
             **(undefined4 **)(iVar27 + DAT_0020cb44),1,1,0x11,0,0);
  *(ScreenElement **)(this + 0x80) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::~String(aSStack_108);
  pCVar15 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cb48),0x4c,false);
  pIVar16 = (ImageElement *)operator_new(0x98);
  uVar8 = (uchar)uVar12;
  bVar9 = SUB41(uVar28,0);
  ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0_00,extraout_s1_00,uVar8,bVar9);
  *(ImageElement **)(this + 0x9c) = pIVar16;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
  pCVar15 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cb48),0x28,false);
  pIVar16 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0_01,extraout_s1_01,uVar8,bVar9);
  *(ImageElement **)(this + 0xa0) = pIVar16;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
  Recipe::getFullName((char)&stack0xffffffec + '\x14');
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  iVar35 = *(int *)(this + 0xc);
  uVar13 = *(undefined4 *)((*(int *)(DAT_0020cb4c + iVar11 * 4 + 0x20c9ae) + 0x136) * 4 + iVar29);
  iVar29 = *(int *)(*(int *)(this + 0x9c) + 0xc);
  iVar25 = **(int **)(iVar27 + DAT_0020cb50);
  iVar11 = SmDev();
  uVar1 = *(undefined1 *)(DAT_0020cb54 + 0x20c9f0 + iVar11);
  pSVar17 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar17,aSStack_100,uVar13,0xffffffff,0,1,0,
             (iVar35 - iVar29) - iVar25,0,9,uVar1,1);
  *(ScreenElement **)(this + 0x88) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::~String(aSStack_100);
  String::String(aSStack_f8,(char *)(DAT_0020cb58 + 0x20c9fe));
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_0020cb5c + iVar11 * 4 + 0x20ca3e) + 0x136) * 4 + iVar29);
  pSVar17 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar17,aSStack_f8,uVar13,0xffffffff,1,1,9,0,0);
  *(ScreenElement **)(this + 0x8c) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::~String(aSStack_f8);
  piVar30 = *(int **)(this + 0x8c);
  pcVar36 = *(code **)(*piVar30 + 0x18);
  iVar11 = SmDev();
  uVar13 = __fixsfsi(*(undefined4 *)(DAT_0020cb60 + iVar11 * 4 + 0x20cab2));
  (*pcVar36)(piVar30,uVar13,1000);
  pCVar15 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cb48),0x11e,false);
  pIVar16 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar16,pCVar15,'\f',false);
  *(ImageElement **)(this + 0x98) = pIVar16;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
  pIVar16 = *(ImageElement **)(this + 0x98);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)(DAT_0020cb64 + iVar11 * 4 + 0x20cb1c);
  iVar11 = SmDev();
  __mulsf3(uVar13,uVar28);
  uVar41 = __mulsf3(uVar28,*(undefined4 *)((int)&DAT_0020cb34 + DAT_0020cb68 + iVar11 * 4 + 2));
  ImageElement::setScale(pIVar16,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
  L_PrintLog((char *)(DAT_0020cb6c + 0x20cae8),(char *)(DAT_0020cb70 + 0x20caea));
  if (uVar24 == 0) {
    iVar11 = SmDev();
    if (iVar11 == 2) {
      String::String(aSStack_e8,*(String **)(iVar27 + DAT_0020cf18));
      pCVar15 = (CImage *)CImage::createImage(aSStack_e8,0);
      String::~String(aSStack_e8);
      pIVar16 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar16,pCVar15,'\f',true);
      *(ImageElement **)(this + 0x74) = pIVar16;
      ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
      String::String(aSStack_e0,*(String **)(iVar27 + DAT_0020cf10));
      pCVar15 = (CImage *)CImage::createImage(aSStack_e0,0);
      String::~String(aSStack_e0);
      pIVar16 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar16,pCVar15,'\f',true);
    }
    else {
      pCVar15 = (CImage *)
                PackedImage::getImage
                          (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cf14),0x24,false);
      pIVar16 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0_04,extraout_s1_04,uVar8,bVar9);
      *(ImageElement **)(this + 0x74) = pIVar16;
      ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
      pCVar15 = (CImage *)
                PackedImage::getImage
                          (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cf14),0x1d,false);
      pIVar16 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0_05,extraout_s1_05,uVar8,bVar9);
    }
    *(ImageElement **)(this + 0x78) = pIVar16;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
    FUN_0020db24();
  }
  else {
    pCVar15 = (CImage *)
              PackedImage::getImage
                        (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cb48),0x60,false);
    pIVar16 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0_02,extraout_s1_02,uVar8,bVar9);
    *(ImageElement **)(this + 0x74) = pIVar16;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
    iVar11 = SmDev();
    if (iVar11 == 2) {
      String::String(aSStack_f0,*(String **)(iVar27 + DAT_0020cf10));
      pCVar15 = (CImage *)CImage::createImage(aSStack_f0,0);
      String::~String(aSStack_f0);
      pIVar16 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar16,pCVar15,'\f',true);
    }
    else {
      pCVar15 = (CImage *)
                PackedImage::getImage
                          (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cf14),0x1d,false);
      pIVar16 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar16,pCVar15,extraout_s0_03,extraout_s1_03,uVar8,bVar9);
    }
    *(ImageElement **)(this + 0x78) = pIVar16;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
  }
  fVar40 = (float)L_PrintLog((char *)(DAT_0020cf1c + 0x20ccbe),(char *)(DAT_0020cf20 + 0x20ccc0));
  String::valueOf(aSStack_d8,fVar40);
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_0020cf24 + iVar11 * 4 + 0x20cd08) + 0x136) * 4 + iVar29);
  pSVar17 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar17,aSStack_d8,uVar13,0xffffffff,1,1,10,0,0);
  *(ScreenElement **)(this + 0x90) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::~String(aSStack_d8);
  String::valueOf((int)aSStack_c8);
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(DAT_0020cf2c + iVar11 * 4 + 0x20cdb6) + 0x136) * 4 + iVar29);
  pSVar17 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar17,aSStack_c8,uVar13,0xffffffff,1,1,10,0,0);
  *(ScreenElement **)(this + 0x94) = pSVar17;
  ScreenElement::addChild((ScreenElement *)this,pSVar17);
  String::~String(aSStack_c8);
  pCVar15 = (CImage *)
            PackedImage::getImage
                      (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cf14),0x7f,false);
  pZVar18 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar18,'$',pCVar15,(CImage *)0x0,0,0,false);
  pRVar31 = this + 0xac;
  *(ZCImageButton **)pRVar31 = pZVar18;
  uVar41 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar18);
  ImageButton::setScale(*(ImageButton **)pRVar31,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
  (**(code **)(**(int **)pRVar31 + 0x20))(*(int **)pRVar31,0);
  pCVar15 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020cf14),10,false);
  pZVar18 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar18,'\x12',pCVar15,(CImage *)0x0,0,0,false);
  pRVar31 = this + 0xa8;
  *(ZCImageButton **)pRVar31 = pZVar18;
  uVar41 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar18);
  ImageButton::setScale(*(ImageButton **)pRVar31,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
  pcVar36 = *(code **)(**(int **)pRVar31 + 0x2c);
  String::String(aSStack_c0,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                 **(int **)(iVar27 + DAT_0020cf30) * 8));
  iVar29 = *(int *)(this + 0x68);
  iVar11 = SmDev();
  uVar13 = *(undefined4 *)((*(int *)(iVar11 * 4 + DAT_0020cf34 + 0x20ce84) + 0x136) * 4 + iVar29);
  iVar11 = *(int *)(this + 0xa8);
  uVar14 = *(undefined4 *)(iVar11 + 0xc);
  uVar37 = *(undefined4 *)(iVar11 + 0x10);
  pBVar19 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar19,aSStack_c0,uVar13,0xffffffff,0,0,0,uVar14,uVar37,9,0,0);
  *(BitmapTextElement **)(this + 0x84) = pBVar19;
  (*pcVar36)(iVar11,pBVar19);
  String::~String(aSStack_c0);
  (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  if (uVar23 == 1) {
    piVar30 = *(int **)(this + 0x7c);
    pcVar36 = *(code **)(*piVar30 + 0x44);
    String::String(aSStack_80,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                   **(int **)(iVar27 + DAT_0020d26c) * 8));
    (*pcVar36)(piVar30,aSStack_80);
    String::~String(aSStack_80);
    piVar30 = *(int **)(this + 0x80);
    pcVar36 = *(code **)(*piVar30 + 0x44);
    String::String(aSStack_78,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                   **(int **)(iVar27 + DAT_0020d270) * 8));
    (*pcVar36)(piVar30,aSStack_78);
    String::~String(aSStack_78);
    (**(code **)(**(int **)(this + 0x70) + 0x18))
              (*(int **)(this + 0x70),*(undefined4 *)(*(int *)(this + 0x7c) + 0xc),3);
    iVar11 = *(int *)(this + 0x68);
    if (uVar24 == 0) {
      if ((this[0x61] == (RaidRewardScreen)0x0) && (this[0x62] == (RaidRewardScreen)0x0)) {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar11 + DAT_0020d24c),_param_12 + 0x6b,
                              (bool)local_154);
        *(undefined4 *)(unaff_r7 + 0x2c) = 0x3fc00000;
        *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d258;
        piVar30 = *(int **)(this + 0x88);
        pcVar36 = *(code **)(*piVar30 + 0x44);
        ZombieCafe::getEnemyCafeName((int)aSStack_58);
        (*pcVar36)(piVar30,aSStack_58);
        pSVar20 = aSStack_58;
      }
      else {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar11 + DAT_0020d24c),
                              *(int *)(_param_12 * 4 + *(int *)(iVar27 + DAT_0020d250)),false);
        if (this[99] == (RaidRewardScreen)0x0) {
          piVar30 = *(int **)(this + 0x88);
          pcVar36 = *(code **)(*piVar30 + 0x44);
          pcVar10 = (char *)ZombieCafe::getBossName(*(ZombieCafe **)(this + 0x68),_param_12);
          String::String(aSStack_60,pcVar10);
          (*pcVar36)(piVar30,aSStack_60);
          pSVar20 = aSStack_60;
        }
        else {
          piVar30 = *(int **)(this + 0x88);
          pcVar36 = *(code **)(*piVar30 + 0x44);
          String::String(aSStack_68,(char *)(DAT_0020d274 + 0x20d1dc));
          (*pcVar36)(piVar30,aSStack_68);
          pSVar20 = aSStack_68;
        }
      }
    }
    else {
      unaff_r7 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_0020d24c),0x8a,false);
      piVar30 = *(int **)(this + 0x88);
      pcVar36 = *(code **)(*piVar30 + 0x44);
      String::String(aSStack_70,(String *)(param_11 + 0x18));
      (*pcVar36)(piVar30,aSStack_70);
      pSVar20 = aSStack_70;
    }
  }
  else {
    if (uVar23 == 0) {
      CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this + 0x68) + 0x840));
      ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this + 0x68));
      CRAMHoover::endTrackEvent();
      piVar30 = *(int **)(this + 0x7c);
      pcVar36 = *(code **)(*piVar30 + 0x44);
      String::String(aSStack_b8,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                     **(int **)(iVar27 + DAT_0020d244) * 8));
      (*pcVar36)(piVar30,aSStack_b8);
      String::~String(aSStack_b8);
      if (param_2 == 0) {
        piVar30 = *(int **)(this + 0x80);
        pcVar36 = *(code **)(*piVar30 + 0x44);
        String::String(aSStack_b0,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                       **(int **)(iVar27 + DAT_0020d248) * 8));
        (*pcVar36)(piVar30,aSStack_b0);
        String::~String(aSStack_b0);
        iVar11 = *(int *)(this + 0x68);
        if (uVar24 == 0) {
          if ((this[0x61] == (RaidRewardScreen)0x0) && (this[0x62] == (RaidRewardScreen)0x0)) {
            unaff_r7 = (CImage *)
                       PackedImage::getImage
                                 (*(PackedImage **)(iVar11 + DAT_0020d24c),_param_12 + 0x6b,
                                  (bool)local_154);
            *(undefined4 *)(unaff_r7 + 0x2c) = 0x3fc00000;
            *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d258;
            piVar30 = *(int **)(this + 0x88);
            pcVar36 = *(code **)(*piVar30 + 0x44);
            ZombieCafe::getEnemyCafeName((int)aSStack_90);
            (*pcVar36)(piVar30,aSStack_90);
            pSVar20 = aSStack_90;
          }
          else {
            unaff_r7 = (CImage *)
                       PackedImage::getImage
                                 (*(PackedImage **)(iVar11 + DAT_0020d24c),
                                  *(int *)(_param_12 * 4 + *(int *)(iVar27 + DAT_0020d250)),false);
            if (this[99] == (RaidRewardScreen)0x0) {
              piVar30 = *(int **)(this + 0x88);
              pcVar36 = *(code **)(*piVar30 + 0x44);
              pcVar10 = (char *)ZombieCafe::getBossName(*(ZombieCafe **)(this + 0x68),_param_12);
              String::String(aSStack_98,pcVar10);
              (*pcVar36)(piVar30,aSStack_98);
              pSVar20 = aSStack_98;
            }
            else {
              piVar30 = *(int **)(this + 0x88);
              pcVar36 = *(code **)(*piVar30 + 0x44);
              String::String(aSStack_a0,(char *)(DAT_0020d254 + 0x20d032));
              (*pcVar36)(piVar30,aSStack_a0);
              pSVar20 = aSStack_a0;
            }
          }
        }
        else {
          unaff_r7 = (CImage *)
                     PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_0020d24c),0x8a,false);
          piVar30 = *(int **)(this + 0x88);
          pcVar36 = *(code **)(*piVar30 + 0x44);
          String::String(aSStack_a8,(String *)(param_11 + 0x18));
          (*pcVar36)(piVar30,aSStack_a8);
          pSVar20 = aSStack_a8;
        }
        String::~String(pSVar20);
      }
      else {
        piVar30 = *(int **)(this + 0x80);
        pcVar36 = *(code **)(*piVar30 + 0x44);
        String::String(aSStack_88,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                       **(int **)(iVar27 + DAT_0020d25c) * 8));
        (*pcVar36)(piVar30,aSStack_88);
        String::~String(aSStack_88);
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020d260),
                              (int)*(short *)(*(int *)(*(int *)(this + 0x68) + 0x4e8) +
                                              param_8 * 0x1c + 0x14),true);
        *(undefined4 *)(unaff_r7 + 0x2c) = DAT_0020d264;
        *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d268;
      }
      (**(code **)(**(int **)(this + 0x70) + 0x18))
                (*(int **)(this + 0x70),*(undefined4 *)(*(int *)(this + 0x7c) + 0xc),3);
      goto LAB_0020d434;
    }
    if (uVar23 != 2) goto LAB_0020d434;
    piVar30 = *(int **)(this + 0x7c);
    pcVar36 = *(code **)(*piVar30 + 0x44);
    String::String(aSStack_50,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                   **(int **)(iVar27 + DAT_0020d3cc) * 8));
    (*pcVar36)(piVar30,aSStack_50);
    String::~String(aSStack_50);
    (**(code **)(**(int **)(this + 0x70) + 0x18))
              (*(int **)(this + 0x70),*(undefined4 *)(*(int *)(this + 0x7c) + 0xc),3);
    if (param_2 != 0) {
      piVar30 = *(int **)(this + 0x80);
      pcVar36 = *(code **)(*piVar30 + 0x44);
      String::String(aSStack_20,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                     **(int **)(iVar27 + DAT_0020d7c8) * 8));
      (*pcVar36)(piVar30,aSStack_20);
      String::~String(aSStack_20);
      unaff_r7 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(*(int *)(this + 0x68) + DAT_0020d7cc),
                            (int)*(short *)(*(int *)(*(int *)(this + 0x68) + 0x4e8) + param_8 * 0x1c
                                           + 0x14),true);
      *(undefined4 *)(unaff_r7 + 0x2c) = DAT_0020d7d0;
      *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d7d4;
      goto LAB_0020d434;
    }
    piVar30 = *(int **)(this + 0x80);
    pcVar36 = *(code **)(*piVar30 + 0x44);
    String::String(aSStack_48,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                   **(int **)(iVar27 + DAT_0020d3d0) * 8));
    (*pcVar36)(piVar30,aSStack_48);
    String::~String(aSStack_48);
    iVar11 = *(int *)(this + 0x68);
    if (uVar24 == 0) {
      if ((this[0x61] == (RaidRewardScreen)0x0) && (this[0x62] == (RaidRewardScreen)0x0)) {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar11 + DAT_0020d3d4),_param_12 + 0x6b,
                              (bool)local_154);
        *(undefined4 *)(unaff_r7 + 0x2c) = 0x3fc00000;
        *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d3e0;
        piVar30 = *(int **)(this + 0x88);
        pcVar36 = *(code **)(*piVar30 + 0x44);
        ZombieCafe::getEnemyCafeName((int)aSStack_28);
        (*pcVar36)(piVar30,aSStack_28);
        pSVar20 = aSStack_28;
      }
      else {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar11 + DAT_0020d3d4),
                              *(int *)(_param_12 * 4 + *(int *)(iVar27 + DAT_0020d3d8)),false);
        if (this[99] == (RaidRewardScreen)0x0) {
          piVar30 = *(int **)(this + 0x88);
          pcVar36 = *(code **)(*piVar30 + 0x44);
          pcVar10 = (char *)ZombieCafe::getBossName(*(ZombieCafe **)(this + 0x68),_param_12);
          String::String(aSStack_30,pcVar10);
          (*pcVar36)(piVar30,aSStack_30);
          pSVar20 = aSStack_30;
        }
        else {
          piVar30 = *(int **)(this + 0x88);
          pcVar36 = *(code **)(*piVar30 + 0x44);
          String::String(aSStack_38,(char *)(DAT_0020d3dc + 0x20d362));
          (*pcVar36)(piVar30,aSStack_38);
          pSVar20 = aSStack_38;
        }
      }
    }
    else {
      unaff_r7 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(iVar11 + DAT_0020d3d4),0x8a,false);
      piVar30 = *(int **)(this + 0x88);
      pcVar36 = *(code **)(*piVar30 + 0x44);
      String::String(aSStack_40,(String *)(param_11 + 0x18));
      (*pcVar36)(piVar30,aSStack_40);
      pSVar20 = aSStack_40;
    }
  }
  String::~String(pSVar20);
LAB_0020d434:
  piVar32 = *(int **)(this + 0x9c);
  pcVar36 = *(code **)(*piVar32 + 0x14);
  iVar11 = SmDev();
  iVar22 = *(int *)(iVar27 + DAT_0020d7d8);
  iVar29 = *(int *)(this + 0x10);
  uVar13 = *(undefined4 *)(iVar11 * 4 + iVar22);
  piVar30 = *(int **)(iVar27 + DAT_0020d7dc);
  iVar25 = *piVar30;
  iVar11 = SmDev();
  (*pcVar36)(piVar32,uVar13,iVar29 - *(int *)(iVar11 * 4 + iVar25));
  pcVar36 = *(code **)(**(int **)(this + 0xa0) + 0x14);
  iVar38 = *(int *)(*(int *)(this + 0x9c) + 4);
  iVar11 = SmDev();
  iVar11 = *(int *)(iVar11 * 4 + *(int *)(iVar27 + DAT_0020d7e0));
  iVar29 = SmDev();
  iVar33 = *(int *)(iVar29 * 4 + *(int *)(iVar27 + DAT_0020d7e4));
  iVar29 = *(int *)(*(int *)(this + 0x9c) + 8);
  iVar26 = *(int *)(*(int *)(this + 0x9c) + 0x10);
  iVar25 = SmDev();
  iVar34 = *(int *)(iVar27 + DAT_0020d7e8);
  iVar35 = *(int *)(*(int *)(this + 0xa0) + 0x10);
  (*pcVar36)(*(int *)(this + 0xa0),iVar38 + iVar11 + iVar33 / 2,
             ((iVar29 - iVar26) + *(int *)(iVar25 * 4 + iVar34)) -
             ((int)(((uint)(iVar35 >> 0x1f) >> 0x1e) + iVar35) >> 2));
  iVar29 = *(int *)(this + 0x9c);
  iVar25 = *(int *)(iVar29 + 0x10);
  uVar13 = __floatsisf(*(int *)(iVar29 + 0xc) * 3 >> 2);
  uVar39 = *(undefined4 *)(unaff_r7 + 0x2c);
  uVar14 = __floatsisf((int)*(short *)(unaff_r7 + 0x20));
  uVar14 = __mulsf3(uVar14,uVar39);
  uVar37 = __floatsisf((int)*(short *)(unaff_r7 + 0x2a));
  uVar14 = __addsf3(uVar14,uVar37);
  uVar37 = __floatsisf((int)*(short *)(unaff_r7 + 0x26));
  __addsf3(uVar14,uVar37);
  __fixsfsi();
  uVar14 = __floatsisf();
  uVar14 = __divsf3(uVar13,uVar14);
  uVar13 = __floatsisf(iVar25 * 3 >> 2);
  uVar37 = __floatsisf((int)*(short *)(unaff_r7 + 0x22));
  uVar37 = __mulsf3(uVar37,uVar39);
  uVar39 = __floatsisf((int)*(short *)(unaff_r7 + 0x24));
  uVar37 = __addsf3(uVar37,uVar39);
  uVar39 = __floatsisf((int)*(short *)(unaff_r7 + 0x28));
  __addsf3(uVar37,uVar39);
  __fixsfsi();
  uVar37 = __floatsisf();
  uVar13 = __divsf3(uVar13,uVar37);
  iVar11 = __aeabi_fcmplt(uVar14,uVar13);
  if (iVar11 != 0) {
    uVar13 = uVar14;
  }
  iVar11 = __aeabi_fcmplt(uVar13,DAT_0020d7ec);
  if (iVar11 == 0) {
    uVar13 = DAT_0020d7ec;
  }
  iVar11 = __aeabi_fcmplt(uVar12,uVar28);
  local_148 = uVar12;
  if (iVar11 == 0) {
    local_148 = uVar28;
  }
  iVar38 = *(int *)(iVar29 + 8);
  iVar33 = *(int *)(*(int *)(this + 0xa0) + 4);
  iVar11 = SmDev();
  iVar11 = *(int *)(iVar34 + iVar11 * 4);
  iVar29 = SmDev();
  iVar29 = *(int *)(iVar29 * 4 + *(int *)(iVar27 + DAT_0020d7f0));
  sVar2 = *(short *)(unaff_r7 + 0x20);
  uVar39 = *(undefined4 *)(unaff_r7 + 0x2c);
  sVar3 = *(short *)(unaff_r7 + 0x2a);
  sVar4 = *(short *)(unaff_r7 + 0x26);
  sVar5 = *(short *)(unaff_r7 + 0x22);
  sVar6 = *(short *)(unaff_r7 + 0x24);
  sVar7 = *(short *)(unaff_r7 + 0x28);
  pIVar16 = (ImageElement *)operator_new(0x98);
  uVar13 = __mulsf3(uVar13,local_148);
  uVar14 = __floatsisf((int)sVar2);
  uVar14 = __mulsf3(uVar14,uVar39);
  uVar37 = __floatsisf((int)sVar3);
  uVar14 = __addsf3(uVar14,uVar37);
  uVar37 = __floatsisf((int)sVar4);
  __addsf3(uVar14,uVar37);
  __fixsfsi();
  uVar14 = __floatsisf();
  __mulsf3(uVar14,uVar13);
  iVar35 = __fixsfsi();
  uVar14 = __floatsisf((int)sVar5);
  uVar14 = __mulsf3(uVar14,uVar39);
  uVar37 = __floatsisf((int)sVar6);
  uVar14 = __addsf3(uVar14,uVar37);
  uVar37 = __floatsisf((int)sVar7);
  __addsf3(uVar14,uVar37);
  __fixsfsi();
  uVar14 = __floatsisf();
  __mulsf3(uVar14,uVar13);
  iVar26 = __fixsfsi();
  ImageElement::ImageElement
            (pIVar16,unaff_r7,(iVar38 - iVar25) + iVar11 + iVar29 / 2 & 0xffffU | iVar33 << 0x10,
             iVar35,iVar26,extraout_s0_06,extraout_s1_06,(uchar)uVar13,(bool)(uchar)uVar13);
  *(ImageElement **)(this + 0xa4) = pIVar16;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar16);
  piVar32 = *(int **)(this + 0x7c);
  iVar25 = *piVar30;
  pcVar36 = *(code **)(*piVar32 + 0x14);
  iVar29 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  iVar11 = SmDev();
  (*pcVar36)(piVar32,iVar29 / 2,*(undefined4 *)(iVar11 * 4 + iVar25));
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(int *)(this + 0xc) / 2,
             *(int *)(*(int *)(this + 0x7c) + 8) + *(int *)(*(int *)(this + 0x7c) + 0x10));
  __mulsf3(uVar12,DAT_0020d7f4);
  uVar12 = __fixsfsi();
  piVar32 = *(int **)(this + 0x70);
  iVar11 = *piVar32;
  uVar13 = __floatsisf(**(undefined1 **)(iVar27 + DAT_0020d7f8));
  __mulsf3(uVar13,uVar28);
  uVar13 = __fixsfsi();
  (**(code **)(iVar11 + 0x18))(piVar32,uVar12,uVar13);
  *(undefined4 *)(*(int *)(this + 0x70) + 0x18) = 0xffffffff;
  piVar32 = *(int **)(this + 0x80);
  iVar29 = *(int *)(this + 0xc);
  pcVar36 = *(code **)(*piVar32 + 0x14);
  uVar12 = *(undefined4 *)(*(int *)(this + 0x7c) + 8);
  iVar11 = SmDev();
  uVar12 = __floatsisf(uVar12);
  __addsf3(uVar12,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar27 + DAT_0020d7fc)));
  uVar12 = __fixsfsi();
  (*pcVar36)(piVar32,iVar29 / 2,uVar12);
  piVar32 = *(int **)(this + 0xac);
  iVar35 = *(int *)(this + 0xc);
  pcVar36 = *(code **)(*piVar32 + 0x14);
  iVar11 = SmDev();
  iVar27 = *(int *)(this + 0x10);
  iVar29 = *piVar30;
  iVar25 = *(int *)(iVar22 + iVar11 * 4);
  iVar11 = SmDev();
  (*pcVar36)(piVar32,iVar35 - iVar25,iVar27 - *(int *)(iVar11 * 4 + iVar29));
  piVar32 = *(int **)(this + 0x88);
  pSVar17 = *(ScreenElement **)(this + 0x9c);
  iVar27 = *(int *)(pSVar17 + 0xc);
  iVar11 = SmDev();
  iVar11 = ScreenElement::localToParentCoords(pSVar17,iVar27,*(int *)(iVar34 + iVar11 * 4));
  (**(code **)(*piVar32 + 0x14))(piVar32,iVar11 >> 0x10,(int)(short)iVar11);
  *(undefined1 *)(*(int *)(this + 0x88) + 0x7f) = 0x11;
  piVar32 = *(int **)(this + 0x8c);
  pSVar17 = *(ScreenElement **)(this + 0x9c);
  iVar27 = *(int *)(pSVar17 + 0xc);
  iVar11 = SmDev();
  iVar11 = ScreenElement::localToParentCoords
                     (pSVar17,iVar27,*(int *)(iVar11 * 4 + DAT_0020db54 + 0x20d880));
  (**(code **)(*piVar32 + 0x14))(piVar32,iVar11 >> 0x10,(int)(short)iVar11);
  *(undefined1 *)(*(int *)(this + 0x8c) + 0x7f) = 0x11;
  iVar11 = *(int *)(this + 0x8c);
  (**(code **)(**(int **)(this + 0x98) + 0x14))
            (*(int **)(this + 0x98),*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8));
  piVar32 = *(int **)(this + 0x78);
  pcVar36 = *(code **)(*piVar32 + 0x14);
  iVar35 = *(int *)(*(int *)(this + 0x9c) + 4);
  iVar22 = *(int *)(*(int *)(this + 0x9c) + 0xc);
  iVar27 = *(int *)(*(int *)(this + 0xac) + 8);
  iVar29 = *(int *)(*(int *)(this + 0xac) + 0x10);
  iVar25 = *piVar30;
  iVar11 = SmDev();
  (*pcVar36)(piVar32,iVar35 + iVar22,(iVar27 - iVar29) - *(int *)(iVar11 * 4 + iVar25));
  iVar11 = *(int *)(this + 0x78);
  piVar30 = *(int **)(this + 0x74);
  (**(code **)(*piVar30 + 0x14))
            (piVar30,*(int *)(iVar11 + 4) + (*(int *)(this + 0xc) - *(int *)(iVar11 + 4)) / 2,
             (*(int *)(iVar11 + 8) - *(int *)(iVar11 + 0x10) / 2) + piVar30[4] / 2);
  iVar11 = *(int *)(this + 0x78);
  (**(code **)(**(int **)(this + 0x94) + 0x14))
            (*(int **)(this + 0x94),*(int *)(iVar11 + 4) + *(int *)(iVar11 + 0xc),
             *(int *)(iVar11 + 8) - *(int *)(iVar11 + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x90) + 0x14))
            (*(int **)(this + 0x90),
             *(int *)(*(int *)(this + 0x74) + 4) + *(int *)(*(int *)(this + 0x74) + 0xc),
             *(undefined4 *)(*(int *)(this + 0x94) + 8));
  *(undefined1 *)(*(int *)(this + 0x84) + 0x7f) = 0x12;
  iVar11 = SmDev();
  if ((iVar11 == 0) || (iVar11 = SmDev(), iVar11 == 5)) {
    piVar30 = *(int **)(this + 0xa8);
    (**(code **)(*piVar30 + 0x14))(piVar30,*(int *)(this + 0xc) / 2,*(undefined4 *)(this + 0x10));
    iVar11 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar27 = *(int *)(*(int *)(this + 0xa8) + 0x10) / 2 + *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  else {
    piVar30 = *(int **)(this + 0xa8);
    (**(code **)(*piVar30 + 0x14))
              (piVar30,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar30[4] / 2);
    iVar11 = *(int *)(*(int *)(this + 0x6c) + 0xc);
    iVar27 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,iVar11,iVar27);
  return this;
}


