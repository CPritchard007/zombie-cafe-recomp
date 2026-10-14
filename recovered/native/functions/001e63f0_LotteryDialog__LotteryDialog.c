/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e63f0 LotteryDialog::LotteryDialog */

/* LotteryDialog::LotteryDialog(GameStateCafe*, void (*)(void*, int, int)) */

void __thiscall
LotteryDialog::LotteryDialog
          (LotteryDialog *this,GameStateCafe *param_1,_func_void_void_ptr_int_int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uchar uVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  LotteryDialog *pLVar10;
  CImage *pCVar11;
  ImageElement *this_00;
  ZCImageButton *pZVar12;
  ScreenElement *pSVar13;
  char *pcVar14;
  LotteryDialog *pLVar15;
  int iVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  int *piVar25;
  undefined4 uVar26;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar27;
  undefined8 uVar28;
  LotteryDialog *local_1b0;
  String aSStack_188 [8];
  String aSStack_180 [8];
  String aSStack_178 [8];
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  int local_158 [15];
  int aiStack_11c [64];
  int local_1c;
  
  iVar18 = DAT_001e6794 + 0x1e63fc;
  local_1c = **(int **)(iVar18 + DAT_001e6798);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  pcVar5 = (char *)(DAT_001e67a0 + 0x1e641a);
  pcVar14 = (char *)(DAT_001e67a4 + 0x1e641c);
  *(int *)this = *(int *)(iVar18 + DAT_001e679c) + 8;
  L_PrintLog(pcVar5,pcVar14);
  iVar6 = CapcomApp::getInstance();
  uVar19 = *(undefined4 *)(iVar6 + 0x40);
  iVar6 = CapcomApp::getInstance();
  uVar23 = *(undefined4 *)(iVar6 + 0x50);
  iVar6 = CapcomApp::getInstance();
  uVar26 = *(undefined4 *)(iVar6 + 0x44);
  iVar6 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar6 + 0x50);
  CapcomApp::getInstance();
  iVar8 = CapcomApp::getInstance();
  uVar19 = __mulsf3(uVar19,uVar23);
  uVar7 = __mulsf3(uVar26,uVar7);
  iVar6 = DAT_001e67a8;
  uVar26 = *(undefined4 *)(iVar8 + 0x44);
  uVar27 = __extendsfdf2(uVar19);
  uVar28 = __extendsfdf2(uVar7);
  sprintf((char *)aiStack_11c,(char *)(iVar6 + 0x1e647a),(int)uVar27,
          (int)((ulonglong)uVar27 >> 0x20),(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
  L_PrintLog((char *)(DAT_001e67ac + 0x1e648c),(char *)aiStack_11c);
  iVar8 = DAT_001e67b4;
  iVar6 = DAT_001e67b0;
  uVar23 = __mulsf3(*(undefined4 *)(DAT_001e67b0 + 0x1e64c0),uVar7);
  *(undefined4 *)(iVar6 + 0x1e64d4) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e64e8),uVar7);
  *(undefined4 *)(iVar8 + 0x1e64fc) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6500),uVar7);
  *(undefined4 *)(iVar8 + 0x1e6514) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6518),uVar7);
  *(undefined4 *)(iVar8 + 0x1e652c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar6 + 0x1e64a8),uVar7);
  iVar8 = DAT_001e67b8;
  *(undefined4 *)(iVar6 + 0x1e64bc) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6540),uVar7);
  *(undefined4 *)(iVar8 + 0x1e6554) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6558),uVar7);
  *(undefined4 *)(iVar8 + 0x1e656c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6570),uVar7);
  *(undefined4 *)(iVar8 + 0x1e6584) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6588),uVar7);
  *(undefined4 *)(iVar8 + 0x1e659c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6528),uVar19);
  iVar6 = DAT_001e67bc;
  *(undefined4 *)(iVar8 + 0x1e653c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar6 + 0x1e6594),uVar7);
  *(undefined4 *)(iVar6 + 0x1e65a8) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar6 + 0x1e65ac),uVar7);
  *(undefined4 *)(iVar6 + 0x1e65c0) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar6 + 0x1e65c4),uVar7);
  *(undefined4 *)(iVar6 + 0x1e65d8) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar6 + 0x1e65dc),uVar7);
  iVar8 = DAT_001e67c0;
  *(undefined4 *)(iVar6 + 0x1e65f0) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e65e0),uVar7);
  *(undefined4 *)(iVar8 + 0x1e65f4) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e65f8),uVar7);
  *(undefined4 *)(iVar8 + 0x1e660c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6610),uVar7);
  *(undefined4 *)(iVar8 + 0x1e6624) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6628),uVar7);
  *(undefined4 *)(iVar8 + 0x1e663c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6568),uVar7);
  *(undefined4 *)(iVar8 + 0x1e657c) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6580),uVar7);
  *(undefined4 *)(iVar8 + 0x1e6594) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e6598),uVar7);
  *(undefined4 *)(iVar8 + 0x1e65ac) = uVar23;
  uVar23 = __mulsf3(*(undefined4 *)(iVar8 + 0x1e65b0),uVar7);
  *(undefined4 *)(iVar8 + 0x1e65c4) = uVar23;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(GameStateCafe **)(this + 100) = param_1;
  iVar9 = CapcomApp::getInstance();
  iVar8 = DAT_001e67c8;
  iVar6 = DAT_001e67c4;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar9 + 4);
  L_PrintLog((char *)(iVar8 + 0x1e65ee),(char *)(iVar6 + 0x1e65ec));
  iVar24 = *(int *)(iVar18 + DAT_001e67cc);
  iVar6 = *(int *)(iVar18 + DAT_001e67d4);
  iVar9 = *(int *)(iVar18 + DAT_001e67d0);
  iVar8 = 0;
  iVar20 = *(int *)(iVar18 + DAT_001e67d8);
  iVar21 = *(int *)(iVar18 + DAT_001e67dc);
  iVar22 = *(int *)(iVar18 + DAT_001e67e0);
  pLVar10 = this;
  pLVar15 = this;
  local_1b0 = this;
  do {
    pLVar15[0x200] = *(LotteryDialog *)(iVar9 + iVar8);
    pLVar15[DAT_001e67e4] = *(LotteryDialog *)(iVar20 + iVar8);
    *(undefined4 *)(pLVar10 + 0x224) = *(undefined4 *)(iVar21 + iVar8 * 4);
    *(undefined4 *)(pLVar10 + 0x26c) = *(undefined4 *)(iVar22 + iVar8 * 4);
    iVar16 = 0;
    do {
      *(undefined4 *)(local_1b0 + iVar16 + 0x2b4) = *(undefined4 *)(iVar24 + iVar16);
      iVar2 = DAT_001e67e8 + iVar16;
      puVar1 = (undefined4 *)(iVar6 + iVar16);
      iVar16 = iVar16 + 4;
      *(undefined4 *)(local_1b0 + iVar2) = *puVar1;
    } while (iVar16 != 0x2a8);
    local_1b0 = local_1b0 + 0x2a8;
    iVar8 = iVar8 + 1;
    pLVar15 = pLVar15 + 1;
    pLVar10 = pLVar10 + 4;
    iVar24 = iVar24 + 0x2a8;
    iVar6 = iVar6 + 0x2a8;
  } while (iVar8 != 0x12);
  L_PrintLog((char *)(DAT_001e67ec + 0x1e66b8),(char *)(DAT_001e67f0 + 0x1e66ba));
  pCVar11 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + 0x7f0),2,false);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar3 = __addsf3(uVar19,uVar19);
  bVar4 = (bool)__addsf3(uVar7,uVar7);
  uVar7 = 9;
  uVar19 = 0;
  ImageElement::ImageElement(this_00,pCVar11,extraout_s0,extraout_s1,uVar3,bVar4);
  *(ImageElement **)(this + 0x68) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x68) + 0xc),
             (int)*(short *)(*(int *)(this + 0x68) + 0x10),*(code **)(*(int *)this + 0x18),uVar7,
             uVar19);
  L_PrintLog((char *)(DAT_001e67f4 + 0x1e6728),(char *)(DAT_001e67f8 + 0x1e672a));
  iVar6 = DAT_001e67fc;
  pCVar11 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001e67fc),6,false);
  pZVar12 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar12,'!',pCVar11,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x6c) = pZVar12;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar12);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(undefined4 *)(this + 0xc),0);
  uVar27 = __addsf3(uVar26,uVar26);
  uVar27 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x6c),(float)uVar27,
                      (float)((ulonglong)uVar27 >> 0x20));
  if (*(char *)(*(int *)(this + 0x60) + DAT_001e6800) != '\0') {
    ImageButton::setScale
              (*(ImageButton **)(this + 0x6c),(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
  }
  pCVar11 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar6),0x76,false);
  pZVar12 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar12,'!',pCVar11,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x1c4) = pZVar12;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar12);
  (**(code **)(**(int **)(this + 0x1c4) + 0x14))
            (*(int **)(this + 0x1c4),*(int *)(this + 0xc) << 1,*(undefined4 *)(this + 0x10));
  (**(code **)(**(int **)(this + 0x1c4) + 0x20))(*(int **)(this + 0x1c4),1);
  String::String(aSStack_188,(char *)(DAT_001e6c34 + 0x1e685a));
  pSVar13 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar13,aSStack_188,*(undefined4 *)(*(int *)(this + 0x60) + 0x4e0)
             ,DAT_001e6c38,0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x70) = pSVar13;
  ScreenElement::addChild((ScreenElement *)this,pSVar13);
  String::~String(aSStack_188);
  piVar25 = *(int **)(this + 0x70);
  iVar8 = *(int *)(this + 0xc);
  uVar7 = *(undefined4 *)(this + 8);
  pcVar17 = *(code **)(*piVar25 + 0x14);
  iVar6 = SmDev();
  uVar7 = __floatsisf(uVar7);
  __addsf3(uVar7,*(undefined4 *)(DAT_001e6c3c + iVar6 * 4 + 0x1e68ea));
  uVar7 = __fixsfsi();
  (*pcVar17)(piVar25,iVar8 / 2,uVar7);
  L_PrintLog((char *)(DAT_001e6c40 + 0x1e68de),(char *)(DAT_001e6c44 + 0x1e68e0));
  *(_func_void_void_ptr_int_int **)(this + 0x74) = param_2;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  this[0x1d0] = (LotteryDialog)0x0;
  iVar6 = 0xf;
  pLVar10 = this;
  do {
    *(undefined4 *)(pLVar10 + 0x80) = 0;
    *(undefined4 *)(pLVar10 + 0xbc) = 0x3f800000;
    *(undefined4 *)(pLVar10 + 0xf8) = 0;
    *(undefined4 *)(pLVar10 + 0x134) = 0;
    iVar6 = iVar6 + -1;
    *(undefined4 *)(pLVar10 + 0x170) = 0;
    iVar8 = DAT_001e6c48;
    pLVar10 = pLVar10 + 4;
  } while (iVar6 != 0);
  this[DAT_001e6c4c] = (LotteryDialog)0x1;
  memcpy(local_158,(void *)(iVar8 + 0x1e6980),0x3c);
  piVar25 = local_158;
  pLVar10 = this + 0x80;
  do {
    iVar6 = *piVar25;
    piVar25 = piVar25 + 1;
    pCVar11 = (CImage *)
              PackedImage::getImage
                        (*(PackedImage **)(*(int *)(this + 0x60) + DAT_001e6c50),iVar6,false);
    pZVar12 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar12,'\x12',pCVar11,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)pLVar10 = pZVar12;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar12);
    uVar27 = (**(code **)(**(int **)pLVar10 + 0x20))(*(int **)pLVar10,0);
    ImageButton::setScale(*(ImageButton **)pLVar10,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20))
    ;
    pLVar10 = pLVar10 + 4;
  } while (piVar25 != aiStack_11c);
  uVar19 = __floatsisf(*(undefined4 *)(this + 0xc));
  uVar7 = __mulsf3(uVar19,DAT_001e6c58);
  *(undefined4 *)(this + 0xbc) = uVar7;
  uVar23 = __mulsf3(uVar19,0x3f000000);
  *(undefined4 *)(this + 0xc0) = uVar23;
  uVar26 = __mulsf3(uVar19,DAT_001e6c5c);
  uVar7 = DAT_001e6c60;
  *(undefined4 *)(this + 0xc4) = uVar26;
  uVar7 = __mulsf3(uVar19,uVar7);
  *(undefined4 *)(this + 200) = uVar7;
  *(undefined4 *)(this + 0xcc) = uVar23;
  uVar26 = __mulsf3(uVar19,DAT_001e6c64);
  uVar26 = __addsf3(uVar26,uVar19);
  *(undefined4 *)(this + 0xd0) = uVar26;
  uVar26 = __mulsf3(uVar19,DAT_001e6c68);
  uVar26 = __addsf3(uVar26,uVar19);
  *(undefined4 *)(this + 0xd4) = uVar26;
  uVar26 = __mulsf3(uVar19,DAT_001e6c6c);
  uVar26 = __addsf3(uVar26,uVar19);
  *(undefined4 *)(this + 0xd8) = uVar26;
  uVar26 = __addsf3(uVar7,uVar19);
  uVar7 = DAT_001e6c70;
  *(undefined4 *)(this + 0xdc) = uVar26;
  uVar7 = __mulsf3(uVar19,uVar7);
  uVar7 = __addsf3(uVar7,uVar19);
  *(undefined4 *)(this + 0xe0) = uVar7;
  uVar23 = __addsf3(uVar23,uVar19);
  *(undefined4 *)(this + 0xe4) = uVar23;
  uVar26 = __mulsf3(uVar19,DAT_001e6c74);
  uVar19 = __addsf3(uVar26,uVar19);
  *(undefined4 *)(this + 0xe8) = uVar19;
  *(undefined4 *)(this + 0xec) = uVar7;
  *(undefined4 *)(this + 0xf0) = uVar23;
  *(undefined4 *)(this + 0xf4) = uVar19;
  L_PrintLog((char *)(DAT_001e6c7c + 0x1e6a82),(char *)(DAT_001e6c78 + 0x1e6a80));
  String::String(aSStack_180,(char *)(DAT_001e6c80 + 0x1e6a8c));
  pSVar13 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar13,aSStack_180,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_001e6c84),0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x1b0) = pSVar13;
  ScreenElement::addChild((ScreenElement *)this,pSVar13);
  String::~String(aSStack_180);
  piVar25 = *(int **)(this + 0x1b0);
  uVar7 = *(undefined4 *)(this + 0xc);
  uVar23 = *(undefined4 *)(this + 8);
  pcVar17 = *(code **)(*piVar25 + 0x14);
  iVar6 = SmDev();
  uVar7 = __floatsisf(uVar7);
  uVar19 = __mulsf3(uVar7,0x3f000000);
  __addsf3(uVar19,uVar7);
  uVar7 = __fixsfsi();
  uVar19 = __floatsisf(uVar23);
  __addsf3(uVar19,*(undefined4 *)(DAT_001e6c88 + iVar6 * 4 + 0x1e6b50));
  uVar19 = __fixsfsi();
  (*pcVar17)(piVar25,uVar7,uVar19);
  String::String(aSStack_178,(char *)(DAT_001e6c8c + 0x1e6b24));
  pSVar13 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar13,aSStack_178,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_001e6c84),0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x1b4) = pSVar13;
  ScreenElement::addChild((ScreenElement *)this,pSVar13);
  String::~String(aSStack_178);
  piVar25 = *(int **)(this + 0x1b4);
  uVar7 = *(undefined4 *)(this + 0xc);
  uVar23 = *(undefined4 *)(this + 8);
  pcVar17 = *(code **)(*piVar25 + 0x14);
  iVar6 = SmDev();
  uVar7 = __floatsisf(uVar7);
  uVar19 = __mulsf3(uVar7,DAT_001e6c90);
  __addsf3(uVar19,uVar7);
  uVar7 = __fixsfsi();
  uVar19 = __floatsisf(uVar23);
  __addsf3(uVar19,*(undefined4 *)(DAT_001e6c94 + iVar6 * 4 + 0x1e6c18));
  uVar19 = __fixsfsi();
  (*pcVar17)(piVar25,uVar7,uVar19);
  String::String(aSStack_170,(char *)(DAT_001e6c98 + 0x1e6bbc));
  pSVar13 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar13,aSStack_170,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_001e6c84),0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x1b8) = pSVar13;
  ScreenElement::addChild((ScreenElement *)this,pSVar13);
  String::~String(aSStack_170);
  piVar25 = *(int **)(this + 0x1b8);
  uVar7 = *(undefined4 *)(this + 0xc);
  uVar23 = *(undefined4 *)(this + 8);
  pcVar17 = *(code **)(*piVar25 + 0x14);
  iVar6 = SmDev();
  uVar7 = __floatsisf(uVar7);
  uVar19 = __mulsf3(uVar7,DAT_001e6c90);
  __addsf3(uVar19,uVar7);
  uVar7 = __fixsfsi();
  uVar19 = __floatsisf(uVar23);
  __addsf3(uVar19,*(undefined4 *)(DAT_001e6eb0 + iVar6 * 4 + 0x1e6d1c));
  uVar19 = __fixsfsi();
  (*pcVar17)(piVar25,uVar7,uVar19);
  String::String(aSStack_168,(char *)(DAT_001e6eb4 + 0x1e6cc0));
  pSVar13 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar13,aSStack_168,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_001e6eb8),0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x1bc) = pSVar13;
  ScreenElement::addChild((ScreenElement *)this,pSVar13);
  String::~String(aSStack_168);
  piVar25 = *(int **)(this + 0x1bc);
  uVar7 = *(undefined4 *)(this + 0xc);
  uVar23 = *(undefined4 *)(this + 8);
  pcVar17 = *(code **)(*piVar25 + 0x14);
  iVar6 = SmDev();
  uVar7 = __floatsisf(uVar7);
  uVar19 = __mulsf3(uVar7,DAT_001e6ebc);
  __addsf3(uVar19,uVar7);
  uVar7 = __fixsfsi();
  uVar19 = __floatsisf(uVar23);
  __addsf3(uVar19,*(undefined4 *)(DAT_001e6ec0 + iVar6 * 4 + 0x1e6db4));
  uVar19 = __fixsfsi();
  (*pcVar17)(piVar25,uVar7,uVar19);
  String::String(aSStack_160,(char *)(DAT_001e6ec4 + 0x1e6d58));
  pSVar13 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar13,aSStack_160,
             *(undefined4 *)(*(int *)(this + 0x60) + DAT_001e6eb8),0xffffffff,1,1,0x12,0,0);
  *(ScreenElement **)(this + 0x1c0) = pSVar13;
  ScreenElement::addChild((ScreenElement *)this,pSVar13);
  String::~String(aSStack_160);
  piVar25 = *(int **)(this + 0x1c0);
  uVar7 = *(undefined4 *)(this + 0xc);
  uVar23 = *(undefined4 *)(this + 8);
  pcVar17 = *(code **)(*piVar25 + 0x14);
  iVar6 = SmDev();
  uVar7 = __floatsisf(uVar7);
  uVar19 = __mulsf3(uVar7,0x3fc00000);
  __addsf3(uVar19,uVar7);
  uVar7 = __fixsfsi();
  uVar19 = __floatsisf(uVar23);
  __addsf3(uVar19,*(undefined4 *)(&UNK_001e6e4e + DAT_001e6ec8 + iVar6 * 4));
  uVar19 = __fixsfsi();
  (*pcVar17)(piVar25,uVar7,uVar19);
  resetDisplayLottery();
  updateButtonPos(this);
  iVar8 = DAT_001e6ed0;
  iVar6 = DAT_001e6ecc;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  this[0x14] = (LotteryDialog)0x0;
  L_PrintLog((char *)(iVar6 + 0x1e6e0e),(char *)(iVar8 + 0x1e6e12));
  *(undefined4 *)(this + 0x1f8) = 0;
  if (local_1c != **(int **)(iVar18 + DAT_001e6ed4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


