/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc8b0 BuyToxinDialog::initContents */

/* BuyToxinDialog::initContents() */

void __thiscall BuyToxinDialog::initContents(BuyToxinDialog *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ImageElement *pIVar4;
  CImage *pCVar5;
  ZCImageButton *pZVar6;
  BitmapTextElement *pBVar7;
  ScreenElement *pSVar8;
  PackedImage *pPVar9;
  ImageElement *pIVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  long lVar13;
  int iVar14;
  CImage *pCVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 uVar19;
  int *piVar20;
  BuyToxinDialog *pBVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  void *pvVar26;
  int *piVar27;
  undefined4 *puVar28;
  code *pcVar29;
  int iVar30;
  int *piVar31;
  undefined4 *puVar32;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s1;
  undefined8 uVar75;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  int iStack_4;
  undefined4 *puVar33;
  int *piVar34;
  undefined4 *puVar35;
  int *piVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  int *piVar40;
  undefined4 *puVar41;
  int *piVar42;
  undefined4 *puVar43;
  int *piVar44;
  undefined4 *puVar45;
  int *piVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  int *piVar54;
  undefined4 *puVar55;
  int *piVar56;
  undefined4 *puVar57;
  undefined4 *puVar58;
  int *piVar59;
  undefined4 *puVar60;
  int *piVar61;
  undefined4 *puVar62;
  int *piVar63;
  undefined4 *puVar64;
  int *piVar65;
  undefined4 *puVar66;
  int *piVar67;
  undefined4 *puVar68;
  uchar *puVar69;
  undefined4 *puVar70;
  undefined4 *puVar71;
  int *piVar72;
  undefined4 *puVar73;
  int *piVar74;
  
  iVar2 = DAT_000bc9cc;
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar34 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar36 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar40 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar42 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar44 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar46 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar49 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar54 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar56 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar57 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar59 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar61 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar62 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar63 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar64 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar65 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar66 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar67 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar68 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar69 = &stack0xffffffec + DAT_000bc9cc;
  puVar70 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  puVar71 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar72 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  puVar73 = (undefined4 *)(&stack0xffffffec + DAT_000bc9cc);
  piVar74 = (int *)(&stack0xffffffec + DAT_000bc9cc);
  *(int *)(&stack0x00000020 + DAT_000bc9cc) = DAT_000bc9d4 + 0xbc8c4;
  puVar28 = *(undefined4 **)(DAT_000bc9d4 + 0xbc8c4 + DAT_000bc9d0);
  pcVar24 = (char *)(DAT_000bc9dc + 0xbc8cc);
  pcVar18 = (char *)(DAT_000bc9e0 + 0xbc8d0);
  *(undefined4 *)(&stack0xffffffec + DAT_000bc9d8 + DAT_000bc9cc) = *puVar28;
  L_PrintLog(pcVar18,pcVar24);
  L_PrintLog((char *)(DAT_000bc9e4 + 0xbc8e2),(char *)(DAT_000bc9e8 + 0xbc8e4));
  L_PrintLog(pcVar18,pcVar24);
  iVar3 = CapcomApp::getInstance();
  uVar19 = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  uVar19 = __mulsf3(uVar19,*(undefined4 *)(iVar3 + 0x50));
  *(undefined4 *)(&stack0x0000002c + iVar2) = uVar19;
  iVar3 = CapcomApp::getInstance();
  uVar19 = *(undefined4 *)(iVar3 + 0x44);
  iVar3 = CapcomApp::getInstance();
  uVar19 = __mulsf3(uVar19,*(undefined4 *)(iVar3 + 0x50));
  iVar3 = *(int *)(this + 0x68);
  uVar11 = *(undefined4 *)(iVar3 + DAT_000bc9ec);
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(&stack0x00000018 + iVar2) = uVar11;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(&stack0x00000038 + iVar2) = uVar19;
  uVar19 = PackedImage::getImage(*(PackedImage **)(iVar3 + 0x7f0),2,false);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar19;
  pIVar4 = (ImageElement *)operator_new(0x98);
  uVar19 = __addsf3(*(undefined4 *)(&stack0x0000002c + iVar2),
                    *(undefined4 *)(&stack0x0000002c + iVar2));
  *(undefined4 *)(&stack0x00000028 + iVar2) = uVar19;
  uVar19 = __addsf3(*(undefined4 *)(&stack0x00000038 + iVar2),
                    *(undefined4 *)(&stack0x00000038 + iVar2));
  *(undefined4 *)(&stack0x0000001c + iVar2) = uVar19;
  *puVar32 = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 **)(&stack0x00000078 + iVar2) = puVar28;
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(&stack0x00000010 + iVar2),extraout_s0,extraout_s1,
             (uchar)*(undefined4 *)(&stack0x00000028 + iVar2),
             SUB41(*(undefined4 *)(&stack0x0000001c + iVar2),0));
  iVar3 = *(int *)(&stack0x00000018 + iVar2);
  *(ImageElement **)(this + 0xd8) = pIVar4;
  iVar14 = *(int *)this;
  *(uint *)(&stack0x00000018 + iVar2) = (uint)(iVar3 == 0);
  (**(code **)(iVar14 + 0x2c))(this,pIVar4);
  uVar19 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x68) + 0x7f0),4,false);
  iVar14 = *(int *)(this + 0x68);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar19;
  if ((iVar3 == 0) == 0) {
    pcVar29 = *(code **)(*(int *)this + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(iVar14 + DAT_000bcdd8),6,
                        SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
    pZVar6 = (ZCImageButton *)operator_new(0xa0);
    uVar19 = *(undefined4 *)(&stack0x00000018 + iVar2);
    pCVar15 = *(CImage **)(&stack0x00000018 + iVar2);
    *puVar35 = uVar19;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar19;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar19;
    ZCImageButton::ZCImageButton
              (pZVar6,'!',pCVar5,pCVar15,*piVar36,*(int *)(&stack0xfffffff0 + iVar2),
               (bool)(&stack0xfffffff4)[iVar2]);
  }
  else {
    pcVar29 = *(code **)(*(int *)this + 0x2c);
    pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar14 + DAT_000bc9f0),6,false);
    pZVar6 = (ZCImageButton *)operator_new(0xa0);
    *puVar33 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
    ZCImageButton::ZCImageButton
              (pZVar6,'!',pCVar5,(CImage *)0x0,*piVar34,*(int *)(&stack0xfffffff0 + iVar2),
               (bool)(&stack0xfffffff4)[iVar2]);
  }
  *(ZCImageButton **)(this + 0xdc) = pZVar6;
  uVar75 = (*pcVar29)(this,pZVar6);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xdc),(float)uVar75,(float)((ulonglong)uVar75 >> 0x20));
  piVar20 = *(int **)(this + 0xd8);
  *(undefined4 *)(&stack0x0000003c + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
  String::String((String *)(&stack0x0000007c + iVar2),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                 **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcddc) * 8));
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*(int *)(this + 0x68) + 0x4e0);
  puVar28 = *(undefined4 **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcde0);
  uVar19 = *puVar28;
  *puVar37 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x11;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement
            (pBVar7,&stack0x0000007c + iVar2,*(undefined4 *)(&stack0x00000014 + iVar2),uVar19);
  *(BitmapTextElement **)(this + 0x98) = pBVar7;
  (**(code **)(&stack0x0000003c + iVar2))(piVar20,pBVar7);
  String::~String((String *)(&stack0x0000007c + iVar2));
  cVar1 = **(char **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcde4);
  *(char **)(&stack0x00000024 + iVar2) =
       *(char **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcde4);
  if (cVar1 != '\0') {
    piVar20 = *(int **)(this + 0xd8);
    *(undefined4 *)(&stack0x0000003c + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
    String::String((String *)(&stack0x00000084 + iVar2),
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                   **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcde8) * 8));
    pBVar7 = (BitmapTextElement *)operator_new(0xc0);
    uVar19 = *(undefined4 *)(*(int *)(this + 0x68) + DAT_000bcdec);
    uVar11 = *puVar28;
    *puVar38 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
    *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar2) = 0x11;
    *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
    BitmapTextElement::BitmapTextElement(pBVar7,&stack0x00000084 + iVar2,uVar19,uVar11);
    *(BitmapTextElement **)(this + 0x9c) = pBVar7;
    (**(code **)(&stack0x0000003c + iVar2))(piVar20,pBVar7);
    String::~String((String *)(&stack0x00000084 + iVar2));
  }
  iVar3 = SmDev();
  uVar19 = __fixsfsi(*(undefined4 *)
                      (iVar3 * 4 + *(int *)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcdf0)));
  piVar20 = *(int **)(this + 0xd8);
  *(undefined4 *)(&stack0x0000003c + iVar2) = uVar19;
  *(undefined4 *)(&stack0x00000044 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
  uVar19 = CImage::getWidth(*(CImage **)(&stack0x00000010 + iVar2));
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar19;
  uVar19 = __floatsisf(*(int *)(&stack0x0000003c + iVar2) << 1);
  uVar11 = CImage::getHeight(*(CImage **)(&stack0x00000010 + iVar2));
  *(undefined4 *)(&stack0x00000030 + iVar2) = uVar11;
  pSVar8 = (ScreenElement *)operator_new(0x60);
  uVar11 = __floatsisf(*(undefined4 *)(&stack0x00000014 + iVar2));
  uVar11 = __mulsf3(uVar11,*(undefined4 *)(&stack0x0000002c + iVar2));
  uVar11 = __addsf3(uVar11,uVar11);
  __subsf3(uVar11,uVar19);
  uVar11 = __fixsfsi();
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar11;
  uVar11 = __floatsisf(*(undefined4 *)(&stack0x00000030 + iVar2));
  uVar11 = __mulsf3(uVar11,*(undefined4 *)(&stack0x00000038 + iVar2));
  uVar11 = __addsf3(uVar11,uVar11);
  __subsf3(uVar11,uVar19);
  uVar19 = __fixsfsi();
  *puVar39 = uVar19;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x14;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ScreenElement::ScreenElement
            (pSVar8,0,0,*(int *)(&stack0x00000014 + iVar2),*piVar40,(&stack0xfffffff0)[iVar2],
             *(ScreenElement **)(&stack0xfffffff4 + iVar2));
  *(ScreenElement **)(this + 0x70) = pSVar8;
  (**(code **)(&stack0x00000044 + iVar2))(piVar20,pSVar8);
  piVar20 = *(int **)(this + 0xd8);
  *(undefined4 *)(&stack0x00000044 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
  uVar19 = CImage::getWidth(*(CImage **)(&stack0x00000010 + iVar2));
  uVar11 = CImage::getHeight(*(CImage **)(&stack0x00000010 + iVar2));
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar11;
  pIVar4 = (ImageElement *)operator_new(0x98);
  uVar19 = __floatsisf(uVar19);
  uVar19 = __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
  __addsf3(uVar19,uVar19);
  iVar3 = __fixsfsi();
  uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000014 + iVar2));
  uVar19 = __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
  __addsf3(uVar19,uVar19);
  uVar19 = __fixsfsi();
  uVar11 = *(undefined4 *)(&stack0x0000001c + iVar2);
  *puVar41 = uVar19;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar11;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000028 + iVar2);
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x14;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  ImageElement::ImageElement
            (pIVar4,*(CImage **)(&stack0x00000010 + iVar2),0,iVar3,*piVar42,extraout_s0_00,
             extraout_s1_00,(&stack0xfffffff0)[iVar2],(bool)(&stack0xfffffff4)[iVar2]);
  *(ImageElement **)(this + 0x7c) = pIVar4;
  (**(code **)(&stack0x00000044 + iVar2))(piVar20,pIVar4);
  *(undefined4 *)(*(int *)(this + 0x70) + 0x18) = 0xffffffff;
  piVar20 = *(int **)(this + 0x70);
  pcVar29 = *(code **)(*piVar20 + 0x2c);
  *(int *)(&stack0x00000028 + iVar2) = piVar20[3];
  pSVar8 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 9;
  iVar3 = *(int *)(&stack0x00000028 + iVar2);
  *puVar43 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ScreenElement::ScreenElement
            (pSVar8,0,0,iVar3,*piVar44,(&stack0xfffffff0)[iVar2],
             *(ScreenElement **)(&stack0xfffffff4 + iVar2));
  *(ScreenElement **)(this + 0x74) = pSVar8;
  (*pcVar29)(piVar20,pSVar8);
  piVar20 = *(int **)(this + 0x70);
  pcVar29 = *(code **)(*piVar20 + 0x2c);
  *(int *)(&stack0x00000028 + iVar2) = piVar20[3];
  pSVar8 = (ScreenElement *)operator_new(0x60);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 9;
  iVar3 = *(int *)(&stack0x00000028 + iVar2);
  *puVar45 = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  ScreenElement::ScreenElement
            (pSVar8,0,0,iVar3,*piVar46,(&stack0xfffffff0)[iVar2],
             *(ScreenElement **)(&stack0xfffffff4 + iVar2));
  *(ScreenElement **)(this + 0x78) = pSVar8;
  (*pcVar29)(piVar20,pSVar8);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  *(undefined4 *)(&stack0x00000028 + iVar2) = *(undefined4 *)(**(int **)(this + 0x78) + 0x2c);
  String::String((String *)(&stack0x0000008c + iVar2),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                 **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcdf4) * 8));
  iVar14 = *(int *)(*(int *)(this + 0x78) + 0xc);
  iVar3 = SmDev();
  iVar30 = *(int *)(this + 0x78);
  *(undefined4 *)(&stack0x00000044 + iVar2) =
       *(undefined4 *)(iVar3 * 4 + *(int *)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcdf8));
  *(undefined4 *)(&stack0x00000030 + iVar2) = *(undefined4 *)(iVar30 + 0xc);
  iVar25 = **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bcdfc);
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(iVar3 * 4 + iVar25);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar19 = *(undefined4 *)(*(int *)(this + 0x68) + DAT_000bcdec);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  iVar3 = *(int *)(&stack0x00000014 + iVar2);
  *(uint *)(&stack0xfffffff4 + iVar2) =
       *(uint *)(&stack0x00000044 + iVar2) & 0xffff | iVar14 / 2 << 0x10;
  *puVar47 = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0x00000030 + iVar2) + iVar3 * -2;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x11;
  BitmapTextElement::BitmapTextElement(pBVar7,&stack0x0000008c + iVar2,uVar19,0xff000000);
  *(BitmapTextElement **)(this + 0xac) = pBVar7;
  (**(code **)(&stack0x00000028 + iVar2))(iVar30,pBVar7);
  String::~String((String *)(&stack0x0000008c + iVar2));
  pCVar5 = *(CImage **)(&stack0x00000010 + iVar2);
  *(undefined1 *)(*(int *)(this + 0xac) + 0x7f) = 0x11;
  iVar3 = *(int *)(this + 0xd8);
  uVar19 = CImage::getHeight(pCVar5);
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar19;
  uVar19 = __floatsisf(*(undefined4 *)(iVar3 + 0x10));
  *(undefined4 *)(&stack0x00000028 + iVar2) = uVar19;
  uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar2));
  uVar19 = __mulsf3(uVar19,*(undefined4 *)(&stack0x0000001c + iVar2));
  uVar19 = __subsf3(*(undefined4 *)(&stack0x00000028 + iVar2),uVar19);
  pBVar21 = this + 0x98;
  piVar20 = *(int **)pBVar21;
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar19;
  uVar19 = __floatsisf(piVar20[4]);
  uVar19 = __subsf3(*(undefined4 *)(&stack0x00000010 + iVar2),uVar19);
  __divsf3(uVar19,DAT_000bce00);
  uVar19 = __fixsfsi();
  iVar14 = *(int *)(iVar3 + 0xc);
  iVar3 = *piVar20;
  *(undefined4 *)(&stack0x00000010 + iVar2) = uVar19;
  iVar14 = iVar14 >> 1;
  (**(code **)(iVar3 + 0x14))(piVar20,iVar14,*(undefined4 *)(&stack0x00000010 + iVar2));
  pcVar18 = *(char **)(&stack0x00000024 + iVar2);
  *(undefined1 *)(*(int *)pBVar21 + 0x7f) = 0x12;
  if (*pcVar18 != '\0') {
    (**(code **)(**(int **)(this + 0x9c) + 0x14))
              (*(int **)(this + 0x9c),iVar14,
               *(int *)(&stack0x00000010 + iVar2) + *(int *)(*(int *)pBVar21 + 0x10));
  }
  (**(code **)(**(int **)(this + 0x7c) + 0x14))
            (*(int **)(this + 0x7c),iVar14,
             *(int *)(*(int *)(this + 0xd8) + 0x10) - *(int *)(&stack0x00000010 + iVar2));
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),iVar14,
             *(int *)(*(int *)(this + 0x7c) + 8) - *(int *)(&stack0x0000003c + iVar2));
  *(undefined4 *)(&stack0x0000001c + iVar2) = *(undefined4 *)(**(int **)(this + 0x7c) + 0x2c);
  String::String((String *)(&stack0x00000094 + iVar2),(char *)(DAT_000bd0bc + 0xbce38));
  iVar3 = *(int *)(this + 0x7c);
  uVar22 = *(uint *)(iVar3 + 0x10);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar3 + 0xc);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar19 = *(undefined4 *)(*(int *)(this + 0x68) + 0x4e0);
  puVar28 = *(undefined4 **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd0c0);
  uVar11 = *puVar28;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(int *)(&stack0x00000028 + iVar2) =
       ((int)(uVar22 & 0xffff | *(int *)(&stack0x00000010 + iVar2) << 0x10) >> 0x11) << 0x10;
  *(uint *)(&stack0xfffffff4 + iVar2) =
       (int)(short)uVar22 >> 1 & 0xffffU | *(uint *)(&stack0x00000028 + iVar2);
  *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0x00000010 + iVar2) * 7 >> 3;
  *puVar48 = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x12;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  *(undefined4 **)(&stack0x00000060 + iVar2) = puVar28;
  BitmapTextElement::BitmapTextElement(pBVar7,&stack0x00000094 + iVar2,uVar19,uVar11);
  *(BitmapTextElement **)(this + 0xa8) = pBVar7;
  (**(code **)(&stack0x0000001c + iVar2))(iVar3,pBVar7);
  String::~String((String *)(&stack0x00000094 + iVar2));
  piVar20 = *(int **)(this + 0xa8);
  (**(code **)(*piVar20 + 0x20))(piVar20,0);
  *(undefined4 *)(&stack0x0000001c + iVar2) = *(undefined4 *)(**(int **)(this + 0x7c) + 0x2c);
  String::String((String *)(&stack0x0000009c + iVar2),(char *)(DAT_000bd0c4 + 0xbced2));
  iVar14 = *(int *)(this + 0x7c);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar14 + 0xc);
  uVar22 = *(uint *)(iVar14 + 0x10);
  pBVar7 = (BitmapTextElement *)operator_new(0xc0);
  uVar19 = *(undefined4 *)(*(int *)(this + 0x68) + 0x4e0);
  uVar11 = **(undefined4 **)(&stack0x00000060 + iVar2);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(uint *)(&stack0xfffffff4 + iVar2) =
       (int)(short)uVar22 >> 1 & 0xffffU |
       ((int)(uVar22 & 0xffff | *(int *)(&stack0x00000010 + iVar2) << 0x10) >> 0x11) << 0x10;
  iVar3 = *(int *)(&stack0x00000010 + iVar2);
  *puVar49 = 0;
  *(int *)(&stack0xfffffff8 + iVar2) = iVar3 * 7 >> 3;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x12;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  BitmapTextElement::BitmapTextElement(pBVar7,&stack0x0000009c + iVar2,uVar19,uVar11);
  *(BitmapTextElement **)(this + 0xa4) = pBVar7;
  (**(code **)(&stack0x0000001c + iVar2))(iVar14,pBVar7);
  String::~String((String *)(&stack0x0000009c + iVar2));
  piVar20 = *(int **)(this + 0xa4);
  pBVar21 = this + 0x88;
  (**(code **)(*piVar20 + 0x20))(piVar20,0);
  *(int *)(this + 200) = *(int *)(*(int *)(this + 0x68) + DAT_000bd0c8 + 4) + 1;
  puVar28 = (undefined4 *)operator_new__(0x18);
  *(undefined4 **)pBVar21 = puVar28;
  if (*(int *)(this + 200) == 0) {
    *puVar28 = 0;
    operator_delete(*(void **)pBVar21);
    *(undefined4 *)pBVar21 = 0;
    *(undefined4 *)(&stack0x0000002c + iVar2) = *(undefined4 *)(**(int **)(this + 0x7c) + 0x2c);
    String::String((String *)(&stack0x000000a4 + iVar2),
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                   **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd0cc) * 8));
    iVar14 = *(int *)(this + 0x7c);
    uVar22 = *(uint *)(iVar14 + 0x10);
    *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(iVar14 + 0xc);
    pBVar7 = (BitmapTextElement *)operator_new(0xc0);
    uVar19 = *(undefined4 *)(*(int *)(this + 0x68) + 0x4e0);
    uVar11 = **(undefined4 **)(&stack0x00000060 + iVar2);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
    *(uint *)(&stack0xfffffff4 + iVar2) =
         (int)(short)uVar22 >> 1 & 0xffffU |
         ((int)(uVar22 & 0xffff | *(int *)(&stack0x00000018 + iVar2) << 0x10) >> 0x11) << 0x10;
    iVar3 = *(int *)(&stack0x00000018 + iVar2);
    *puVar50 = 0;
    *(int *)(&stack0xfffffff8 + iVar2) = iVar3 * 7 >> 3;
    *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar2) = 0x12;
    *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
    BitmapTextElement::BitmapTextElement(pBVar7,&stack0x000000a4 + iVar2,uVar19,uVar11);
    *(BitmapTextElement **)(this + 0xa0) = pBVar7;
    (**(code **)(&stack0x0000002c + iVar2))(iVar14,pBVar7);
    String::~String((String *)(&stack0x000000a4 + iVar2));
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    FUN_000bdabe();
  }
  iVar14 = *(int *)(&stack0x00000018 + iVar2);
  *(undefined4 *)(this + 0xa0) = 0;
  iVar3 = DAT_000bd0d0;
  if (iVar14 == 0) {
    uVar19 = PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd0d4),3,
                        SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
    iVar3 = *(int *)(this + 0x68);
    iVar14 = *(int *)(&stack0x00000018 + iVar2);
    *(undefined4 *)(&stack0x00000070 + iVar2) = uVar19;
    pPVar9 = *(PackedImage **)(iVar3 + DAT_000bd0d4);
    uVar12 = (undefined1)iVar14;
  }
  else {
    uVar19 = PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd0d0),0x2e,false);
    iVar25 = *(int *)(this + 0x68);
    *(undefined4 *)(&stack0x00000070 + iVar2) = uVar19;
    iVar14 = 0x2d;
    pPVar9 = *(PackedImage **)(iVar25 + iVar3);
    uVar12 = false;
  }
  uVar19 = PackedImage::getImage(pPVar9,iVar14,(bool)uVar12);
  *(undefined4 *)(&stack0x00000074 + iVar2) = uVar19;
  *(undefined4 *)(&stack0x00000028 + iVar2) = 0xffffffff;
  *(undefined4 *)(&stack0x0000005c + iVar2) = 0;
  if (*(int *)(&stack0x00000028 + iVar2) == -1) {
    snprintf(&stack0x000000e4 + iVar2,0x20,(char *)(DAT_000bd380 + 0xbd0e6));
    *(undefined4 *)(&stack0x0000001c + iVar2) = 1;
  }
  else {
    pvVar26 = (void *)(*(int *)(*(int *)(this + 0x68) + DAT_000bd0c8 + 8) +
                      *(int *)(&stack0x00000028 + iVar2) * 0x5d8);
    memcpy(&stack0x0000075c + iVar2,pvVar26,0x5d8);
    *(undefined4 *)(&stack0x0000001c + iVar2) = *(undefined4 *)((int)pvVar26 + 0x5d0);
    memcpy(&stack0x00000184 + iVar2,&stack0x0000075c + iVar2,0x5d8);
    snprintf(&stack0x000000e4 + iVar2,0x20,(char *)(DAT_000bd0d8 + 0xbd0b6),
             *(undefined4 *)(&stack0x0000001c + iVar2));
  }
  String::String((String *)(&stack0x000000ac + iVar2),&stack0x000000e4 + iVar2);
  iVar30 = *(int *)(&stack0x00000020 + iVar2);
  iVar14 = **(int **)(iVar30 + DAT_000bd384);
  iVar3 = SmDev();
  iVar25 = *(int *)(iVar3 * 4 + iVar14);
  iVar14 = **(int **)(iVar30 + DAT_000bd388);
  iVar3 = SmDev();
  iVar14 = *(int *)(iVar3 * 4 + iVar14);
  pvVar26 = operator_new(0xc0);
  iVar3 = *(int *)(this + 0x68);
  *(void **)(&stack0x0000003c + iVar2) = pvVar26;
  *(uint *)(&stack0x00000010 + iVar2) = *(uint *)(&stack0x0000005c + iVar2) & 0xffff;
  uVar19 = *(undefined4 *)(iVar3 + 0x4e0);
  uVar11 = **(undefined4 **)(&stack0x00000060 + iVar2);
  iVar3 = *(int *)(&stack0x00000010 + iVar2);
  *puVar51 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x21;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  *(uint *)(&stack0xfffffff4 + iVar2) = iVar25 << 0x10 | iVar3 + iVar14 & 0xffffU;
  BitmapTextElement::BitmapTextElement
            (*(BitmapTextElement **)(&stack0x0000003c + iVar2),&stack0x000000ac + iVar2,uVar19,
             uVar11);
  String::~String((String *)(&stack0x000000ac + iVar2));
  ScreenElement::setOrder(*(ScreenElement **)(&stack0x0000003c + iVar2),1);
  (**(code **)(**(int **)(this + 0x74) + 0x2c))
            (*(int **)(this + 0x74),*(undefined4 *)(&stack0x0000003c + iVar2));
  piVar20 = *(int **)(this + 0x74);
  iVar3 = *(int *)(&stack0x00000020 + iVar2);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
  String::String((String *)(&stack0x000000b4 + iVar2),
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x68) + 0x4b0) + 8) +
                 **(int **)(iVar3 + DAT_000bd38c) * 8));
  iVar14 = **(int **)(iVar3 + DAT_000bd390);
  iVar3 = SmDev();
  iVar25 = *(int *)(iVar3 * 4 + iVar14);
  iVar14 = **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd394);
  iVar3 = SmDev();
  iVar14 = *(int *)(iVar3 * 4 + iVar14);
  pvVar26 = operator_new(0xc0);
  iVar3 = *(int *)(this + 0x68);
  *(void **)(&stack0x00000044 + iVar2) = pvVar26;
  uVar19 = *(undefined4 *)(iVar3 + 0x4e0);
  uVar11 = **(undefined4 **)(&stack0x00000060 + iVar2);
  *puVar52 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 9;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  *(uint *)(&stack0xfffffff4 + iVar2) =
       iVar25 << 0x10 | *(int *)(&stack0x00000010 + iVar2) + iVar14 & 0xffffU;
  BitmapTextElement::BitmapTextElement
            (*(BitmapTextElement **)(&stack0x00000044 + iVar2),&stack0x000000b4 + iVar2,uVar19,
             uVar11);
  (**(code **)(&stack0x00000014 + iVar2))(piVar20,*(undefined4 *)(&stack0x00000044 + iVar2));
  String::~String((String *)(&stack0x000000b4 + iVar2));
  piVar20 = *(int **)(this + 0x74);
  piVar27 = *(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd398);
  iVar3 = *(int *)(this + 0x68);
  piVar31 = *(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd39c);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
  if (*(int *)(&stack0x00000018 + iVar2) == 0) {
    uVar19 = PackedImage::getImage
                       (*(PackedImage **)(iVar3 + DAT_000bd3a4),0xb,
                        SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
    iVar14 = *piVar27;
    *(undefined4 *)(&stack0x00000030 + iVar2) = uVar19;
    iVar3 = SmDev();
    iVar25 = *piVar31;
    *(uint *)(&stack0x00000024 + iVar2) = (uint)*(ushort *)(iVar14 + iVar3 * 4);
    iVar3 = SmDev();
    *(uint *)(&stack0x0000004c + iVar2) =
         *(int *)(&stack0x00000010 + iVar2) + *(int *)(iVar3 * 4 + iVar25) & 0xffffU |
         *(int *)(&stack0x00000024 + iVar2) << 0x10;
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd3a4),0xb,
                        SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
    uVar19 = CImage::getWidth(pCVar5);
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd3a4),0xb,
                        SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
    uVar11 = CImage::getHeight(pCVar5);
    *(undefined4 *)(&stack0x00000024 + iVar2) = uVar11;
    pIVar4 = (ImageElement *)operator_new(0x98);
    uVar19 = __floatsisf(uVar19);
    __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
    iVar3 = __fixsfsi();
    uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000024 + iVar2));
    __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
    uVar19 = __fixsfsi();
    uVar17 = *(undefined4 *)(&stack0x0000002c + iVar2);
    uVar11 = *(undefined4 *)(&stack0x00000018 + iVar2);
    *puVar55 = uVar19;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar17;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000038 + iVar2);
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 9;
    *(undefined4 *)((int)&iStack_4 + iVar2) = uVar11;
    ImageElement::ImageElement
              (pIVar4,*(CImage **)(&stack0x00000030 + iVar2),*(long *)(&stack0x0000004c + iVar2),
               iVar3,*piVar56,extraout_s0_02,extraout_s1_02,(&stack0xfffffff0)[iVar2],
               (bool)(&stack0xfffffff4)[iVar2]);
  }
  else {
    uVar19 = PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_000bd3a0),0x2c,false);
    iVar14 = *piVar27;
    *(undefined4 *)(&stack0x00000030 + iVar2) = uVar19;
    iVar3 = SmDev();
    iVar25 = *piVar31;
    *(uint *)(&stack0x00000024 + iVar2) = (uint)*(ushort *)(iVar14 + iVar3 * 4);
    iVar3 = SmDev();
    *(uint *)(&stack0x0000004c + iVar2) =
         *(int *)(&stack0x00000010 + iVar2) + *(int *)(iVar3 * 4 + iVar25) & 0xffffU |
         *(int *)(&stack0x00000024 + iVar2) << 0x10;
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd3a0),0x2c,false);
    uVar19 = CImage::getWidth(pCVar5);
    pCVar5 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd3a0),0x2c,false);
    uVar11 = CImage::getHeight(pCVar5);
    *(undefined4 *)(&stack0x00000024 + iVar2) = uVar11;
    pIVar4 = (ImageElement *)operator_new(0x98);
    uVar19 = __floatsisf(uVar19);
    __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
    iVar3 = __fixsfsi();
    uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000024 + iVar2));
    __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
    uVar19 = __fixsfsi();
    uVar11 = *(undefined4 *)(&stack0x0000002c + iVar2);
    *puVar53 = uVar19;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar11;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 9;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000038 + iVar2);
    *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
    ImageElement::ImageElement
              (pIVar4,*(CImage **)(&stack0x00000030 + iVar2),*(long *)(&stack0x0000004c + iVar2),
               iVar3,*piVar54,extraout_s0_01,extraout_s1_01,(&stack0xfffffff0)[iVar2],
               (bool)(&stack0xfffffff4)[iVar2]);
  }
  (**(code **)(&stack0x00000014 + iVar2))(piVar20,pIVar4);
  iVar3 = 0;
  if (*(int *)(&stack0x00000028 + iVar2) == -1) {
    snprintf(&stack0x00000104 + iVar2,0x80,(char *)(DAT_000bd3a8 + 0xbd37c));
  }
  else {
    do {
      (&stack0x00000104)[iVar3 + iVar2] = (&stack0x00000184)[DAT_000bd71c + iVar3 + iVar2];
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x80);
  }
  strcpy(&stack0x00000104 + iVar2,(char *)(DAT_000bd720 + 0xbd3c8));
  iVar3 = *(int *)(this + 0x68);
  *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(*(int *)pIVar4 + 0x2c);
  String::String((String *)(&stack0x000000bc + iVar2),
                 (String *)
                 (*(int *)(*(int *)(iVar3 + 0x4b0) + 8) +
                 **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd724) * 8));
  iVar3 = *(int *)(pIVar4 + 0xc);
  uVar22 = *(uint *)(pIVar4 + 0x10);
  pvVar26 = operator_new(0xc0);
  uVar19 = *(undefined4 *)(*(int *)(this + 0x68) + DAT_000bd728);
  *(void **)(&stack0x0000004c + iVar2) = pvVar26;
  uVar11 = **(undefined4 **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd72c);
  *puVar57 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0x12;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar2) = 0;
  *(uint *)(&stack0xfffffff4 + iVar2) =
       (int)(short)uVar22 >> 1 & 0xffffU | ((int)(uVar22 & 0xffff | iVar3 << 0x10) >> 0x11) << 0x10;
  BitmapTextElement::BitmapTextElement
            (*(BitmapTextElement **)(&stack0x0000004c + iVar2),&stack0x000000bc + iVar2,uVar19,
             uVar11);
  (**(code **)(&stack0x00000014 + iVar2))(pIVar4,*(undefined4 *)(&stack0x0000004c + iVar2));
  String::~String((String *)(&stack0x000000bc + iVar2));
  iVar3 = DAT_000bd740;
  *(undefined4 *)(&stack0x000000d4 + iVar2) = 0;
  *(undefined4 *)(&stack0x000000d8 + iVar2) = 0;
  *(undefined4 *)(&stack0x000000dc + iVar2) = 0;
  *(undefined4 *)(&stack0x00000050 + iVar2) =
       *(undefined4 *)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd730);
  *(undefined4 *)(&stack0x00000030 + iVar2) =
       *(undefined4 *)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd734);
  if (DAT_000bd738 < *(int *)(&stack0x0000001c + iVar2)) {
    piVar20 = *(int **)(this + 0x74);
    iVar14 = *(int *)(this + 0x68);
    uVar19 = *(undefined4 *)(*piVar20 + 0x2c);
    if (*(int *)(&stack0x00000018 + iVar2) == 0) {
      *(undefined4 *)(&stack0x00000014 + iVar2) = uVar19;
      uVar19 = PackedImage::getImage
                         (*(PackedImage **)(iVar14 + DAT_000bd740),0x21,
                          SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
      *(undefined4 *)(&stack0x00000024 + iVar2) = uVar19;
      *(undefined4 *)(&stack0x00000034 + iVar2) = **(undefined4 **)(&stack0x00000050 + iVar2);
      iVar14 = SmDev();
      uVar19 = **(undefined4 **)(&stack0x00000030 + iVar2);
      *(uint *)(&stack0x00000034 + iVar2) =
           (uint)*(ushort *)(*(int *)(&stack0x00000034 + iVar2) + iVar14 * 4);
      *(undefined4 *)(&stack0x00000040 + iVar2) = uVar19;
      iVar14 = SmDev();
      *(uint *)(&stack0x00000054 + iVar2) =
           *(int *)(&stack0x00000010 + iVar2) +
           *(int *)(iVar14 * 4 + *(int *)(&stack0x00000040 + iVar2)) & 0xffffU |
           *(int *)(&stack0x00000034 + iVar2) << 0x10;
      pCVar5 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0x68) + iVar3),0x21,
                          SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
      uVar19 = CImage::getWidth(pCVar5);
      iVar14 = *(int *)(this + 0x68);
      *(undefined4 *)(&stack0x00000034 + iVar2) = uVar19;
      pCVar5 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(iVar14 + iVar3),0x21,
                          SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
      uVar19 = CImage::getHeight(pCVar5);
      *(undefined4 *)(&stack0x00000040 + iVar2) = uVar19;
      pIVar10 = (ImageElement *)operator_new(0x98);
      uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000034 + iVar2));
      __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
      uVar19 = __fixsfsi();
      *(undefined4 *)(&stack0x00000034 + iVar2) = uVar19;
      uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000040 + iVar2));
      __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
      uVar19 = __fixsfsi();
      uVar11 = *(undefined4 *)(&stack0x0000002c + iVar2);
      uVar17 = *(undefined4 *)(&stack0x00000038 + iVar2);
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
      uVar16 = *(undefined4 *)(&stack0x00000018 + iVar2);
      *puVar60 = uVar19;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar11;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar17;
      *(undefined4 *)((int)&iStack_4 + iVar2) = uVar16;
      ImageElement::ImageElement
                (pIVar10,*(CImage **)(&stack0x00000024 + iVar2),*(long *)(&stack0x00000054 + iVar2),
                 *(int *)(&stack0x00000034 + iVar2),*piVar61,extraout_s0_04,extraout_s1_04,
                 (&stack0xfffffff0)[iVar2],(bool)(&stack0xfffffff4)[iVar2]);
      pcVar29 = *(code **)(&stack0x00000014 + iVar2);
      *(ImageElement **)(&stack0x000000d4 + iVar2) = pIVar10;
    }
    else {
      *(undefined4 *)(&stack0x00000024 + iVar2) = uVar19;
      uVar19 = PackedImage::getImage(*(PackedImage **)(iVar14 + DAT_000bd73c),0x2b,false);
      *(undefined4 *)(&stack0x00000034 + iVar2) = uVar19;
      *(undefined4 *)(&stack0x00000014 + iVar2) = **(undefined4 **)(&stack0x00000050 + iVar2);
      iVar3 = SmDev();
      *(uint *)(&stack0x00000014 + iVar2) =
           (uint)*(ushort *)(*(int *)(&stack0x00000014 + iVar2) + iVar3 * 4);
      *(undefined4 *)(&stack0x00000040 + iVar2) = **(undefined4 **)(&stack0x00000030 + iVar2);
      iVar3 = SmDev();
      *(uint *)(&stack0x00000058 + iVar2) =
           *(int *)(&stack0x00000010 + iVar2) +
           *(int *)(iVar3 * 4 + *(int *)(&stack0x00000040 + iVar2)) & 0xffffU |
           *(int *)(&stack0x00000014 + iVar2) << 0x10;
      pCVar5 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0x68) + DAT_000bd73c),0x2b,false);
      uVar19 = CImage::getWidth(pCVar5);
      iVar3 = *(int *)(this + 0x68);
      *(undefined4 *)(&stack0x00000040 + iVar2) = uVar19;
      pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_000bd73c),0x2b,false);
      uVar19 = CImage::getHeight(pCVar5);
      *(undefined4 *)(&stack0x00000054 + iVar2) = uVar19;
      pvVar26 = operator_new(0x98);
      *(void **)(&stack0x00000014 + iVar2) = pvVar26;
      uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000040 + iVar2));
      __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
      uVar19 = __fixsfsi();
      *(undefined4 *)(&stack0x00000040 + iVar2) = uVar19;
      uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000054 + iVar2));
      __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
      uVar19 = __fixsfsi();
      uVar11 = *(undefined4 *)(&stack0x0000002c + iVar2);
      *puVar58 = uVar19;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar11;
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000038 + iVar2);
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
      *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
      ImageElement::ImageElement
                (*(ImageElement **)(&stack0x00000014 + iVar2),*(CImage **)(&stack0x00000034 + iVar2)
                 ,*(long *)(&stack0x00000058 + iVar2),*(int *)(&stack0x00000040 + iVar2),*piVar59,
                 extraout_s0_03,extraout_s1_03,(&stack0xfffffff0)[iVar2],
                 (bool)(&stack0xfffffff4)[iVar2]);
      pIVar10 = *(ImageElement **)(&stack0x00000014 + iVar2);
      pcVar29 = *(code **)(&stack0x00000024 + iVar2);
      *(ImageElement **)(&stack0x000000d4 + iVar2) = pIVar10;
    }
    (*pcVar29)(piVar20,pIVar10);
LAB_000bd844:
    if (*(int *)(&stack0x0000001c + iVar2) == 0x15e) {
      pPVar9 = *(PackedImage **)(*(int *)(this + 0x68) + 0x7f0);
      iVar3 = 9;
    }
    else if (*(int *)(&stack0x0000001c + iVar2) == 800) {
      pPVar9 = *(PackedImage **)(*(int *)(this + 0x68) + 0x7f0);
      iVar3 = 10;
    }
    else {
      pIVar10 = (ImageElement *)0x0;
      if (*(int *)(&stack0x0000001c + iVar2) != 2000) goto LAB_000bd962;
      pPVar9 = *(PackedImage **)(*(int *)(this + 0x68) + 0x7f0);
      iVar3 = 0xb;
    }
  }
  else {
    *(undefined4 *)(&stack0x00000024 + iVar2) = 3;
    if ((*(int *)(&stack0x0000001c + iVar2) < 200) &&
       (*(undefined4 *)(&stack0x00000024 + iVar2) = 2, *(int *)(&stack0x0000001c + iVar2) < 100)) {
      *(undefined4 *)(&stack0x00000024 + iVar2) = 1;
    }
    iVar14 = **(int **)(&stack0x00000050 + iVar2);
    iVar3 = SmDev();
    uVar19 = __floatsisf(*(undefined4 *)(iVar3 * 4 + iVar14));
    *(undefined4 *)(&stack0x00000014 + iVar2) = uVar19;
    piVar20 = *(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd744);
    iVar14 = *piVar20;
    iVar3 = SmDev();
    uVar19 = __floatsisf((*(int *)(&stack0x00000024 + iVar2) + -1) * *(int *)(iVar3 * 4 + iVar14));
    uVar19 = __mulsf3(uVar19,0x3f000000);
    __subsf3(*(undefined4 *)(&stack0x00000014 + iVar2),uVar19);
    uVar19 = __fixsfsi();
    *(undefined1 **)(&stack0x00000034 + iVar2) = &stack0x000000d4 + iVar2;
    *(undefined4 *)(&stack0x00000014 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000040 + iVar2) = uVar19;
    *(int **)(&stack0x00000054 + iVar2) = piVar20;
    do {
      piVar20 = *(int **)(this + 0x74);
      iVar3 = *(int *)(this + 0x68);
      *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
      if (*(int *)(&stack0x00000018 + iVar2) == 0) {
        uVar19 = PackedImage::getImage
                           (*(PackedImage **)(iVar3 + DAT_000bd958),0x22,
                            SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
        *(undefined4 *)(&stack0x00000064 + iVar2) = uVar19;
        iVar14 = **(int **)(&stack0x00000054 + iVar2);
        iVar3 = SmDev();
        iVar23 = *(int *)(iVar3 * 4 + iVar14);
        iVar25 = *(int *)(&stack0x00000014 + iVar2);
        iVar3 = *(int *)(&stack0x00000040 + iVar2);
        *(undefined4 *)(&stack0x00000048 + iVar2) = **(undefined4 **)(&stack0x00000030 + iVar2);
        iVar14 = SmDev();
        iVar30 = *(int *)(this + 0x68);
        *(uint *)(&stack0x0000006c + iVar2) =
             (iVar25 * iVar23 + iVar3) * 0x10000 |
             *(int *)(&stack0x00000010 + iVar2) +
             *(int *)(iVar14 * 4 + *(int *)(&stack0x00000048 + iVar2)) & 0xffffU;
        pCVar5 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(iVar30 + DAT_000bd958),0x22,
                            SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
        uVar19 = CImage::getWidth(pCVar5);
        iVar3 = *(int *)(this + 0x68);
        *(undefined4 *)(&stack0x00000048 + iVar2) = uVar19;
        pCVar5 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(iVar3 + DAT_000bd958),0x22,
                            SUB41(*(undefined4 *)(&stack0x00000018 + iVar2),0));
        uVar19 = CImage::getHeight(pCVar5);
        *(undefined4 *)(&stack0x00000068 + iVar2) = uVar19;
        pIVar10 = (ImageElement *)operator_new(0x98);
        uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000048 + iVar2));
        __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
        uVar19 = __fixsfsi();
        *(undefined4 *)(&stack0x00000048 + iVar2) = uVar19;
        uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000068 + iVar2));
        __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
        uVar19 = __fixsfsi();
        uVar17 = *(undefined4 *)(&stack0x0000002c + iVar2);
        uVar11 = *(undefined4 *)(&stack0x00000018 + iVar2);
        *puVar64 = uVar19;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar17;
        *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000038 + iVar2);
        *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
        *(undefined4 *)((int)&iStack_4 + iVar2) = uVar11;
        ImageElement::ImageElement
                  (pIVar10,*(CImage **)(&stack0x00000064 + iVar2),
                   *(long *)(&stack0x0000006c + iVar2),*(int *)(&stack0x00000048 + iVar2),*piVar65,
                   extraout_s0_06,extraout_s1_06,(&stack0xfffffff0)[iVar2],
                   (bool)(&stack0xfffffff4)[iVar2]);
        **(undefined4 **)(&stack0x00000034 + iVar2) = pIVar10;
      }
      else {
        uVar19 = PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_000bd73c),0x2a,false);
        *(undefined4 *)(&stack0x00000064 + iVar2) = uVar19;
        iVar14 = **(int **)(&stack0x00000054 + iVar2);
        iVar3 = SmDev();
        iVar23 = *(int *)(iVar3 * 4 + iVar14);
        iVar25 = *(int *)(&stack0x00000014 + iVar2);
        iVar3 = *(int *)(&stack0x00000040 + iVar2);
        *(undefined4 *)(&stack0x00000048 + iVar2) = **(undefined4 **)(&stack0x00000030 + iVar2);
        iVar14 = SmDev();
        iVar30 = *(int *)(this + 0x68);
        *(uint *)(&stack0x0000006c + iVar2) =
             (iVar25 * iVar23 + iVar3) * 0x10000 |
             *(int *)(&stack0x00000010 + iVar2) +
             *(int *)(iVar14 * 4 + *(int *)(&stack0x00000048 + iVar2)) & 0xffffU;
        pCVar5 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(iVar30 + DAT_000bd73c),0x2a,false);
        uVar19 = CImage::getWidth(pCVar5);
        iVar3 = *(int *)(this + 0x68);
        *(undefined4 *)(&stack0x00000048 + iVar2) = uVar19;
        pCVar5 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar3 + DAT_000bd73c),0x2a,false)
        ;
        uVar19 = CImage::getHeight(pCVar5);
        *(undefined4 *)(&stack0x00000068 + iVar2) = uVar19;
        pIVar10 = (ImageElement *)operator_new(0x98);
        uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000048 + iVar2));
        __mulsf3(uVar19,*(undefined4 *)(&stack0x0000002c + iVar2));
        uVar19 = __fixsfsi();
        *(undefined4 *)(&stack0x00000048 + iVar2) = uVar19;
        uVar19 = __floatsisf(*(undefined4 *)(&stack0x00000068 + iVar2));
        __mulsf3(uVar19,*(undefined4 *)(&stack0x00000038 + iVar2));
        uVar19 = __fixsfsi();
        uVar11 = *(undefined4 *)(&stack0x0000002c + iVar2);
        *puVar62 = uVar19;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar11;
        *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
        *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000038 + iVar2);
        *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
        ImageElement::ImageElement
                  (pIVar10,*(CImage **)(&stack0x00000064 + iVar2),
                   *(long *)(&stack0x0000006c + iVar2),*(int *)(&stack0x00000048 + iVar2),*piVar63,
                   extraout_s0_05,extraout_s1_05,(&stack0xfffffff0)[iVar2],
                   (bool)(&stack0xfffffff4)[iVar2]);
        **(undefined4 **)(&stack0x00000034 + iVar2) = pIVar10;
      }
      (**(code **)(&stack0x00000058 + iVar2))(piVar20,pIVar10);
      *(int *)(&stack0x00000014 + iVar2) = *(int *)(&stack0x00000014 + iVar2) + 1;
      *(int *)(&stack0x00000034 + iVar2) = *(int *)(&stack0x00000034 + iVar2) + 4;
    } while (*(int *)(&stack0x00000014 + iVar2) < *(int *)(&stack0x00000024 + iVar2));
    if (*(int *)(&stack0x0000001c + iVar2) == 0x32) {
      pPVar9 = *(PackedImage **)(*(int *)(this + 0x68) + 0x7f0);
      iVar3 = 7;
    }
    else {
      if (*(int *)(&stack0x0000001c + iVar2) != 0x7d) goto LAB_000bd844;
      pPVar9 = *(PackedImage **)(*(int *)(this + 0x68) + 0x7f0);
      iVar3 = 8;
    }
  }
  pCVar5 = (CImage *)PackedImage::getImage(pPVar9,iVar3,false);
  if (pCVar5 == (CImage *)0x0) {
    pIVar10 = (ImageElement *)0x0;
  }
  else {
    iVar14 = **(int **)(&stack0x00000050 + iVar2);
    iVar3 = SmDev();
    uVar19 = __floatsisf(*(undefined4 *)(iVar3 * 4 + iVar14));
    *(undefined4 *)(&stack0x0000001c + iVar2) = uVar19;
    piVar27 = *(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bd95c);
    *(int *)(&stack0x00000024 + iVar2) = *piVar27;
    iVar3 = SmDev();
    piVar20 = *(int **)(this + 0x74);
    *(int **)(&stack0x00000014 + iVar2) = piVar20;
    *(undefined4 *)(&stack0x00000034 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
    uVar19 = __floatsisf(*(int *)(iVar3 * 4 + *(int *)(&stack0x00000024 + iVar2)) * 3);
    uVar19 = __mulsf3(uVar19,0x3f000000);
    __subsf3(*(undefined4 *)(&stack0x0000001c + iVar2),uVar19);
    uVar22 = __fixsfsi();
    iVar14 = *piVar27;
    *(uint *)(&stack0x0000001c + iVar2) = uVar22 & 0xffff;
    iVar3 = SmDev();
    iVar25 = *(int *)(iVar3 * 4 + iVar14);
    iVar14 = *(int *)(&stack0x0000001c + iVar2);
    *(undefined4 *)(&stack0x0000001c + iVar2) = **(undefined4 **)(&stack0x00000030 + iVar2);
    iVar3 = SmDev();
    *(uint *)(&stack0x00000024 + iVar2) =
         (iVar14 + iVar25 * 4) * 0x10000 |
         *(int *)(&stack0x00000010 + iVar2) +
         *(int *)(iVar3 * 4 + *(int *)(&stack0x0000001c + iVar2)) & 0xffffU;
    uVar19 = CImage::getWidth(pCVar5);
    *(undefined4 *)(&stack0x0000001c + iVar2) = uVar19;
    uVar19 = CImage::getHeight(pCVar5);
    *(undefined4 *)(&stack0x00000030 + iVar2) = uVar19;
    pIVar10 = (ImageElement *)operator_new(0x98);
    lVar13 = *(long *)(&stack0x00000024 + iVar2);
    *puVar66 = *(undefined4 *)(&stack0x00000030 + iVar2);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x3f800000;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x3f800000;
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x12;
    *(undefined4 *)((int)&iStack_4 + iVar2) = 1;
    ImageElement::ImageElement
              (pIVar10,pCVar5,lVar13,*(int *)(&stack0x0000001c + iVar2),*piVar67,extraout_s0_07,
               extraout_s1_07,(&stack0xfffffff0)[iVar2],(bool)(&stack0xfffffff4)[iVar2]);
    (**(code **)(&stack0x00000034 + iVar2))(*(undefined4 *)(&stack0x00000014 + iVar2),pIVar10);
  }
LAB_000bd962:
  *(undefined4 *)(&stack0x00000024 + iVar2) = *(undefined4 *)(**(int **)(this + 0x74) + 0x2c);
  iVar14 = **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bdc3c);
  *(int **)(&stack0x0000001c + iVar2) = *(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bdc3c)
  ;
  iVar3 = SmDev();
  iVar3 = *(int *)(iVar3 * 4 + iVar14);
  iVar14 = *(int *)(this + 0x74);
  *(int *)(&stack0x00000014 + iVar2) = iVar14;
  uVar19 = *(undefined4 *)(iVar14 + 0xc);
  *(uint *)(&stack0x00000010 + iVar2) = *(int *)(&stack0x00000010 + iVar2) + iVar3 & 0xffff;
  *(undefined4 *)(&stack0x00000050 + iVar2) = uVar19;
  iVar14 = **(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bdc40);
  *(int **)(&stack0x00000030 + iVar2) = *(int **)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bdc40)
  ;
  iVar3 = SmDev();
  *(undefined4 *)(&stack0x00000034 + iVar2) = *(undefined4 *)(iVar3 * 4 + iVar14);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  *puVar68 = 9;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)((int)&iStack_4 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar6,*(long *)(&stack0x00000010 + iVar2),*(int *)(&stack0x00000050 + iVar2),
             *(int *)(&stack0x00000034 + iVar2),*puVar69,*(CImage **)(&stack0xfffffff0 + iVar2),
             *(CImage **)(&stack0xfffffff4 + iVar2),*(int *)(&stack0xfffffff8 + iVar2),
             *(int *)((int)&iStack_4 + iVar2),(bool)(&stack0x00000000)[iVar2]);
  iVar3 = *(int *)(&stack0x00000028 + iVar2);
  *(ZCImageButton **)((iVar3 + 1) * 4 + *(int *)(this + 0x88)) = pZVar6;
  *(int *)(&stack0x00000028 + iVar2) = iVar3 + 1;
  (**(code **)(&stack0x00000024 + iVar2))(*(undefined4 *)(&stack0x00000014 + iVar2),pZVar6);
  iVar14 = **(int **)(&stack0x00000030 + iVar2);
  iVar3 = SmDev();
  iVar3 = *(int *)(iVar3 * 4 + iVar14);
  *(ImageElement **)(&stack0x000000cc + iVar2) = pIVar4;
  *(ImageElement **)(&stack0x000000e0 + iVar2) = pIVar10;
  *(int *)(&stack0x0000005c + iVar2) = *(int *)(&stack0x0000005c + iVar2) + iVar3;
  *(undefined4 *)(&stack0x000000c4 + iVar2) = *(undefined4 *)(&stack0x0000003c + iVar2);
  *(undefined4 *)(&stack0x000000c8 + iVar2) = *(undefined4 *)(&stack0x00000044 + iVar2);
  *(undefined4 *)(&stack0x000000d0 + iVar2) = *(undefined4 *)(&stack0x0000004c + iVar2);
  uVar19 = *(undefined4 *)(&stack0x000000d4 + iVar2);
  uVar11 = *(undefined4 *)(&stack0x000000d8 + iVar2);
  *puVar70 = *(undefined4 *)(&stack0x000000d0 + iVar2);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar19;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar11;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = *(undefined4 *)(&stack0x000000dc + iVar2);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(&stack0x000000e0 + iVar2);
  Vector<BuyToxinDialog::BuyToxinListEntry>::addElement
            (this + 0xbc,*(undefined4 *)(&stack0x0000003c + iVar2),
             *(undefined4 *)(&stack0x00000044 + iVar2),pIVar4);
  if (*(int *)(&stack0x00000028 + iVar2) != 5) {
    FUN_000bd06e();
  }
  piVar20 = *(int **)(this + 0x74);
  iVar25 = piVar20[3];
  iVar14 = **(int **)(&stack0x0000001c + iVar2);
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(*piVar20 + 0x18);
  iVar3 = SmDev();
  (**(code **)(&stack0x00000018 + iVar2))
            (piVar20,iVar25,*(int *)(&stack0x0000005c + iVar2) + *(int *)(iVar3 * 4 + iVar14) * 2);
  piVar20 = *(int **)(this + 0xd8);
  pcVar29 = *(code **)(*piVar20 + 0x2c);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  pCVar5 = *(CImage **)(&stack0x00000070 + iVar2);
  *puVar71 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar6,'\x14',pCVar5,(CImage *)0x0,*piVar72,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x80) = pZVar6;
  (*pcVar29)(piVar20,pZVar6);
  piVar20 = *(int **)(this + 0xd8);
  *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(*piVar20 + 0x2c);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 1;
  pCVar5 = *(CImage **)(&stack0x00000074 + iVar2);
  *puVar73 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  ZCImageButton::ZCImageButton
            (pZVar6,'\x11',pCVar5,(CImage *)0x0,*piVar74,*(int *)(&stack0xfffffff0 + iVar2),
             (bool)(&stack0xfffffff4)[iVar2]);
  *(ZCImageButton **)(this + 0x84) = pZVar6;
  (**(code **)(&stack0x00000018 + iVar2))(piVar20,pZVar6);
  (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  iVar3 = SmDev();
  if ((iVar3 == 0) || (iVar3 = SmDev(), iVar3 == 5)) {
    iVar3 = *(int *)(this + 0xdc);
    (**(code **)(*(int *)this + 0x18))
              (this,(*(int *)(iVar3 + 0xc) >> 1) + *(int *)(*(int *)(this + 0xd8) + 0xc),
               (*(int *)(iVar3 + 0x10) >> 1) + *(int *)(*(int *)(this + 0xd8) + 0x10));
    pBVar21 = *(BuyToxinDialog **)(this + 0xdc);
    uVar19 = *(undefined4 *)(this + 0xc);
    uVar11 = 0;
    pcVar29 = *(code **)(*(int *)pBVar21 + 0x14);
  }
  else {
    piVar20 = *(int **)(this + 0xdc);
    pcVar29 = *(code **)(*piVar20 + 0x14);
    iVar3 = SmDev();
    uVar19 = __fixsfsi(*(undefined4 *)
                        (iVar3 * 4 + *(int *)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bdc48)));
    iVar3 = SmDev();
    uVar11 = __fixsfsi(*(undefined4 *)
                        (iVar3 * 4 + *(int *)(*(int *)(&stack0x00000020 + iVar2) + DAT_000bdc4c)));
    (*pcVar29)(piVar20,uVar19,uVar11);
    uVar19 = *(undefined4 *)(*(int *)(this + 0xd8) + 0xc);
    uVar11 = *(undefined4 *)(*(int *)(this + 0xd8) + 0x10);
    pcVar29 = *(code **)(*(int *)this + 0x18);
    pBVar21 = this;
  }
  (*pcVar29)(pBVar21,uVar19,uVar11);
  (**(code **)(**(int **)(this + 0xd8) + 0x14))
            (*(int **)(this + 0xd8),0,*(undefined4 *)(this + 0x10));
  piVar20 = *(int **)(&stack0x00000078 + iVar2);
  iVar2 = DAT_000bdc44 + iVar2;
  *(undefined4 *)(this + 0x6c) = 0;
  if (*(int *)(&stack0xffffffec + iVar2) != *piVar20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


