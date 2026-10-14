/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bd06e FUN_000bd06e */

void FUN_000bd06e(void)

{
  ushort uVar1;
  uchar uVar2;
  bool bVar3;
  int iVar4;
  BitmapTextElement *pBVar5;
  BitmapTextElement *pBVar6;
  CImage *pCVar7;
  CImage *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ImageElement *this;
  BitmapTextElement *pBVar11;
  ImageElement *pIVar12;
  PackedImage *this_00;
  ZCImageButton *pZVar13;
  bool bVar14;
  code *pcVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  void *__src;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int *unaff_r6;
  uint uVar24;
  int *piVar25;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  BitmapTextElement *in_stack_00000000;
  uchar uStack00000004;
  bool bStack00000008;
  undefined4 in_stack_0000000c;
  ImageElement *in_stack_00000010;
  int iStack00000028;
  int in_stack_0000002c;
  int iStack00000030;
  int in_stack_00000034;
  int iStack00000038;
  int in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 *puStack00000048;
  uint in_stack_0000004c;
  uint in_stack_00000070;
  undefined4 *in_stack_00000074;
  CImage *in_stack_00000084;
  CImage *in_stack_00000088;
  int *in_stack_0000008c;
  BitmapTextElement *in_stack_000000d8;
  BitmapTextElement *in_stack_000000dc;
  ImageElement *in_stack_000000e0;
  BitmapTextElement *in_stack_000000e4;
  ImageElement *in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  ImageElement *in_stack_000000f4;
  
  if (in_stack_0000003c == -1) {
    snprintf(&stack0x000000f8,0x20,(char *)(DAT_000bd380 + 0xbd0e6));
    iStack00000030 = 1;
  }
  else {
    __src = (void *)(*(int *)(unaff_r6[0x1a] + DAT_000bd0c8 + 8) + in_stack_0000003c * 0x5d8);
    memcpy(&stack0x00000770,__src,0x5d8);
    iStack00000030 = *(int *)((int)__src + 0x5d0);
    memcpy(&stack0x00000198,&stack0x00000770,0x5d8);
    snprintf(&stack0x000000f8,0x20,(char *)(DAT_000bd0d8 + 0xbd0b6),iStack00000030);
  }
  String::String((String *)&stack0x000000c0,&stack0x000000f8);
  iVar16 = **(int **)(in_stack_00000034 + DAT_000bd384);
  iVar4 = SmDev();
  iVar21 = *(int *)(iVar4 * 4 + iVar16);
  iVar16 = **(int **)(in_stack_00000034 + DAT_000bd388);
  iVar4 = SmDev();
  iVar4 = *(int *)(iVar4 * 4 + iVar16);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  uVar24 = in_stack_00000070 & 0xffff;
  in_stack_00000000 = (BitmapTextElement *)0x1;
  _uStack00000004 = (ImageElement *)0x1;
  _bStack00000008 = iVar21 << 0x10 | uVar24 + iVar4 & 0xffff;
  in_stack_0000000c = 0;
  in_stack_00000010 = (ImageElement *)0x0;
  BitmapTextElement::BitmapTextElement
            (pBVar5,&stack0x000000c0,*(undefined4 *)(unaff_r6[0x1a] + 0x4e0),*in_stack_00000074);
  String::~String((String *)&stack0x000000c0);
  ScreenElement::setOrder((ScreenElement *)pBVar5,1);
  (**(code **)(*(int *)unaff_r6[0x1d] + 0x2c))((int *)unaff_r6[0x1d],pBVar5);
  piVar17 = (int *)unaff_r6[0x1d];
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  String::String((String *)&stack0x000000c8,
                 (String *)
                 (*(int *)(*(int *)(unaff_r6[0x1a] + 0x4b0) + 8) +
                 **(int **)(in_stack_00000034 + DAT_000bd38c) * 8));
  iVar16 = **(int **)(in_stack_00000034 + DAT_000bd390);
  iVar4 = SmDev();
  iVar21 = *(int *)(iVar4 * 4 + iVar16);
  iVar16 = **(int **)(in_stack_00000034 + DAT_000bd394);
  iVar4 = SmDev();
  iVar4 = *(int *)(iVar4 * 4 + iVar16);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  in_stack_00000000 = (BitmapTextElement *)0x1;
  _uStack00000004 = (ImageElement *)0x1;
  _bStack00000008 = iVar21 << 0x10 | uVar24 + iVar4 & 0xffff;
  in_stack_0000000c = 0;
  in_stack_00000010 = (ImageElement *)0x0;
  BitmapTextElement::BitmapTextElement
            (pBVar6,&stack0x000000c8,*(undefined4 *)(unaff_r6[0x1a] + 0x4e0),*in_stack_00000074);
  (*pcVar15)(piVar17,pBVar6);
  String::~String((String *)&stack0x000000c8);
  uVar18 = _bStack00000008;
  uVar9 = _uStack00000004;
  piVar17 = (int *)unaff_r6[0x1d];
  piVar22 = *(int **)(in_stack_00000034 + DAT_000bd398);
  piVar25 = *(int **)(in_stack_00000034 + DAT_000bd39c);
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  uStack00000004 = (uchar)in_stack_00000040;
  uVar2 = uStack00000004;
  bStack00000008 = SUB41(in_stack_0000004c,0);
  bVar3 = bStack00000008;
  bVar14 = SUB41(in_stack_0000002c,0);
  _uStack00000004 = (ImageElement *)uVar9;
  _bStack00000008 = uVar18;
  if (in_stack_0000002c == 0) {
    pCVar7 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd3a4),0xb,bVar14);
    iVar16 = *piVar22;
    iVar4 = SmDev();
    uVar1 = *(ushort *)(iVar16 + iVar4 * 4);
    iVar16 = *piVar25;
    iVar4 = SmDev();
    iVar16 = *(int *)(iVar4 * 4 + iVar16);
    pCVar8 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd3a4),0xb,bVar14);
    uVar9 = CImage::getWidth(pCVar8);
    pCVar8 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd3a4),0xb,bVar14);
    uVar10 = CImage::getHeight(pCVar8);
    this = (ImageElement *)operator_new(0x98);
    uVar9 = __floatsisf(uVar9);
    __mulsf3(uVar9,in_stack_00000040);
    iVar4 = __fixsfsi();
    uVar9 = __floatsisf(uVar10);
    __mulsf3(uVar9,in_stack_0000004c);
    in_stack_00000000 = (BitmapTextElement *)__fixsfsi();
    _uStack00000004 = (ImageElement *)in_stack_00000040;
    _bStack00000008 = in_stack_0000004c;
    in_stack_0000000c = 9;
    in_stack_00000010 = (ImageElement *)in_stack_0000002c;
    ImageElement::ImageElement
              (this,pCVar7,uVar24 + iVar16 & 0xffff | (uint)uVar1 << 0x10,iVar4,
               (int)in_stack_00000000,extraout_s0_00,extraout_s1_00,uVar2,bVar3);
  }
  else {
    pCVar7 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd3a0),0x2c,false);
    iVar16 = *piVar22;
    iVar4 = SmDev();
    uVar1 = *(ushort *)(iVar16 + iVar4 * 4);
    iVar16 = *piVar25;
    iVar4 = SmDev();
    iVar16 = *(int *)(iVar4 * 4 + iVar16);
    pCVar8 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd3a0),0x2c,false);
    uVar9 = CImage::getWidth(pCVar8);
    pCVar8 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd3a0),0x2c,false);
    uVar10 = CImage::getHeight(pCVar8);
    this = (ImageElement *)operator_new(0x98);
    uVar9 = __floatsisf(uVar9);
    __mulsf3(uVar9,in_stack_00000040);
    iVar4 = __fixsfsi();
    uVar9 = __floatsisf(uVar10);
    __mulsf3(uVar9,in_stack_0000004c);
    in_stack_00000000 = (BitmapTextElement *)__fixsfsi();
    _uStack00000004 = (ImageElement *)in_stack_00000040;
    in_stack_0000000c = 9;
    _bStack00000008 = in_stack_0000004c;
    in_stack_00000010 = (ImageElement *)0x0;
    ImageElement::ImageElement
              (this,pCVar7,uVar24 + iVar16 & 0xffff | (uint)uVar1 << 0x10,iVar4,
               (int)in_stack_00000000,extraout_s0,extraout_s1,uVar2,bVar3);
  }
  (*pcVar15)(piVar17,this);
  iVar4 = 0;
  if (in_stack_0000003c == -1) {
    snprintf(&stack0x00000118,0x80,(char *)(DAT_000bd3a8 + 0xbd37c));
  }
  else {
    do {
      (&stack0x00000118)[iVar4] = (&stack0x00000198)[DAT_000bd71c + iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x80);
  }
  strcpy(&stack0x00000118,(char *)(DAT_000bd720 + 0xbd3c8));
  pcVar15 = *(code **)(*(int *)this + 0x2c);
  String::String((String *)&stack0x000000d0,
                 (String *)
                 (*(int *)(*(int *)(unaff_r6[0x1a] + 0x4b0) + 8) +
                 **(int **)(in_stack_00000034 + DAT_000bd724) * 8));
  iVar4 = *(int *)(this + 0xc);
  uVar18 = *(uint *)(this + 0x10);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  in_stack_00000000 = (BitmapTextElement *)0x1;
  _uStack00000004 = (ImageElement *)0x1;
  _bStack00000008 =
       (int)(short)uVar18 >> 1 & 0xffffU | ((int)(uVar18 & 0xffff | iVar4 << 0x10) >> 0x11) << 0x10;
  in_stack_0000000c = 0;
  in_stack_00000010 = (ImageElement *)0x0;
  BitmapTextElement::BitmapTextElement
            (pBVar11,&stack0x000000d0,*(undefined4 *)(unaff_r6[0x1a] + DAT_000bd728),
             **(undefined4 **)(in_stack_00000034 + DAT_000bd72c));
  (*pcVar15)(this,pBVar11);
  String::~String((String *)&stack0x000000d0);
  iVar4 = DAT_000bd740;
  in_stack_000000e8 = (ImageElement *)0x0;
  in_stack_000000ec = 0;
  in_stack_000000f0 = 0;
  piVar17 = *(int **)(in_stack_00000034 + DAT_000bd730);
  piVar22 = *(int **)(in_stack_00000034 + DAT_000bd734);
  if (DAT_000bd738 < iStack00000030) {
    piVar25 = (int *)unaff_r6[0x1d];
    pcVar15 = *(code **)(*piVar25 + 0x2c);
    if (in_stack_0000002c == 0) {
      pCVar7 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd740),0x21,bVar14);
      iVar16 = *piVar17;
      iVar21 = SmDev();
      uVar1 = *(ushort *)(iVar16 + iVar21 * 4);
      iVar21 = *piVar22;
      iVar16 = SmDev();
      iVar16 = *(int *)(iVar16 * 4 + iVar21);
      pCVar8 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + iVar4),0x21,bVar14);
      uVar9 = CImage::getWidth(pCVar8);
      pCVar8 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + iVar4),0x21,bVar14);
      uVar10 = CImage::getHeight(pCVar8);
      pIVar12 = (ImageElement *)operator_new(0x98);
      uVar9 = __floatsisf(uVar9);
      __mulsf3(uVar9,in_stack_00000040);
      iVar4 = __fixsfsi();
      uVar9 = __floatsisf(uVar10);
      __mulsf3(uVar9,in_stack_0000004c);
      in_stack_00000000 = (BitmapTextElement *)__fixsfsi();
      in_stack_0000000c = 0x12;
      _uStack00000004 = (ImageElement *)in_stack_00000040;
      _bStack00000008 = in_stack_0000004c;
      in_stack_00000010 = (ImageElement *)in_stack_0000002c;
      ImageElement::ImageElement
                (pIVar12,pCVar7,uVar24 + iVar16 & 0xffff | (uint)uVar1 << 0x10,iVar4,
                 (int)in_stack_00000000,extraout_s0_02,extraout_s1_02,uVar2,bVar3);
    }
    else {
      pCVar7 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd73c),0x2b,false);
      iVar16 = *piVar17;
      iVar4 = SmDev();
      uVar1 = *(ushort *)(iVar16 + iVar4 * 4);
      iVar4 = *piVar22;
      iVar16 = SmDev();
      iVar16 = *(int *)(iVar16 * 4 + iVar4);
      pCVar8 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd73c),0x2b,false);
      uVar9 = CImage::getWidth(pCVar8);
      pCVar8 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd73c),0x2b,false);
      uVar10 = CImage::getHeight(pCVar8);
      pIVar12 = (ImageElement *)operator_new(0x98);
      uVar9 = __floatsisf(uVar9);
      __mulsf3(uVar9,in_stack_00000040);
      iVar4 = __fixsfsi();
      uVar9 = __floatsisf(uVar10);
      __mulsf3(uVar9,in_stack_0000004c);
      in_stack_00000000 = (BitmapTextElement *)__fixsfsi();
      _uStack00000004 = (ImageElement *)in_stack_00000040;
      _bStack00000008 = in_stack_0000004c;
      in_stack_0000000c = 0x12;
      in_stack_00000010 = (ImageElement *)0x0;
      ImageElement::ImageElement
                (pIVar12,pCVar7,uVar24 + iVar16 & 0xffff | (uint)uVar1 << 0x10,iVar4,
                 (int)in_stack_00000000,extraout_s0_01,extraout_s1_01,uVar2,bVar3);
    }
    in_stack_000000e8 = pIVar12;
    (*pcVar15)(piVar25,pIVar12);
LAB_000bd844:
    if (iStack00000030 == 0x15e) {
      this_00 = *(PackedImage **)(unaff_r6[0x1a] + 0x7f0);
      iVar4 = 9;
    }
    else if (iStack00000030 == 800) {
      this_00 = *(PackedImage **)(unaff_r6[0x1a] + 0x7f0);
      iVar4 = 10;
    }
    else {
      pIVar12 = (ImageElement *)0x0;
      if (iStack00000030 != 2000) goto LAB_000bd962;
      this_00 = *(PackedImage **)(unaff_r6[0x1a] + 0x7f0);
      iVar4 = 0xb;
    }
  }
  else {
    iStack00000038 = 3;
    if ((iStack00000030 < 200) && (iStack00000038 = 2, iStack00000030 < 100)) {
      iStack00000038 = 1;
    }
    iVar16 = *piVar17;
    iVar4 = SmDev();
    uVar9 = __floatsisf(*(undefined4 *)(iVar4 * 4 + iVar16));
    piVar25 = *(int **)(in_stack_00000034 + DAT_000bd744);
    iVar16 = *piVar25;
    iVar4 = SmDev();
    puStack00000048 = &stack0x000000e8;
    uVar10 = __floatsisf((iStack00000038 + -1) * *(int *)(iVar4 * 4 + iVar16));
    uVar10 = __mulsf3(uVar10,0x3f000000);
    __subsf3(uVar9,uVar10);
    iVar4 = __fixsfsi();
    iStack00000028 = 0;
    do {
      piVar23 = (int *)unaff_r6[0x1d];
      pcVar15 = *(code **)(*piVar23 + 0x2c);
      if (in_stack_0000002c == 0) {
        pCVar7 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd958),0x22,bVar14)
        ;
        iVar21 = *piVar25;
        iVar16 = SmDev();
        iVar19 = *(int *)(iVar16 * 4 + iVar21);
        iVar21 = *piVar22;
        iVar16 = SmDev();
        iVar21 = *(int *)(iVar16 * 4 + iVar21);
        pCVar8 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd958),0x22,bVar14)
        ;
        uVar9 = CImage::getWidth(pCVar8);
        pCVar8 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd958),0x22,bVar14)
        ;
        uVar10 = CImage::getHeight(pCVar8);
        pIVar12 = (ImageElement *)operator_new(0x98);
        uVar9 = __floatsisf(uVar9);
        __mulsf3(uVar9,in_stack_00000040);
        iVar16 = __fixsfsi();
        uVar9 = __floatsisf(uVar10);
        __mulsf3(uVar9,in_stack_0000004c);
        in_stack_00000000 = (BitmapTextElement *)__fixsfsi();
        _uStack00000004 = (ImageElement *)in_stack_00000040;
        _bStack00000008 = in_stack_0000004c;
        in_stack_0000000c = 0x12;
        in_stack_00000010 = (ImageElement *)in_stack_0000002c;
        ImageElement::ImageElement
                  (pIVar12,pCVar7,
                   (iStack00000028 * iVar19 + iVar4) * 0x10000 | uVar24 + iVar21 & 0xffff,iVar16,
                   (int)in_stack_00000000,extraout_s0_04,extraout_s1_04,uVar2,bVar3);
        *puStack00000048 = pIVar12;
      }
      else {
        pCVar7 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd73c),0x2a,false);
        iVar21 = *piVar25;
        iVar16 = SmDev();
        iVar19 = *(int *)(iVar16 * 4 + iVar21);
        iVar21 = *piVar22;
        iVar16 = SmDev();
        iVar21 = *(int *)(iVar16 * 4 + iVar21);
        pCVar8 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd73c),0x2a,false);
        uVar9 = CImage::getWidth(pCVar8);
        pCVar8 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(unaff_r6[0x1a] + DAT_000bd73c),0x2a,false);
        uVar10 = CImage::getHeight(pCVar8);
        pIVar12 = (ImageElement *)operator_new(0x98);
        uVar9 = __floatsisf(uVar9);
        __mulsf3(uVar9,in_stack_00000040);
        iVar16 = __fixsfsi();
        uVar9 = __floatsisf(uVar10);
        __mulsf3(uVar9,in_stack_0000004c);
        in_stack_00000000 = (BitmapTextElement *)__fixsfsi();
        _uStack00000004 = (ImageElement *)in_stack_00000040;
        in_stack_0000000c = 0x12;
        _bStack00000008 = in_stack_0000004c;
        in_stack_00000010 = (ImageElement *)0x0;
        ImageElement::ImageElement
                  (pIVar12,pCVar7,
                   (iStack00000028 * iVar19 + iVar4) * 0x10000 | uVar24 + iVar21 & 0xffff,iVar16,
                   (int)in_stack_00000000,extraout_s0_03,extraout_s1_03,uVar2,bVar3);
        *puStack00000048 = pIVar12;
      }
      (*pcVar15)(piVar23,pIVar12);
      iStack00000028 = iStack00000028 + 1;
      puStack00000048 = puStack00000048 + 1;
    } while (iStack00000028 < iStack00000038);
    if (iStack00000030 == 0x32) {
      this_00 = *(PackedImage **)(unaff_r6[0x1a] + 0x7f0);
      iVar4 = 7;
    }
    else {
      if (iStack00000030 != 0x7d) goto LAB_000bd844;
      this_00 = *(PackedImage **)(unaff_r6[0x1a] + 0x7f0);
      iVar4 = 8;
    }
  }
  pCVar7 = (CImage *)PackedImage::getImage(this_00,iVar4,false);
  if (pCVar7 == (CImage *)0x0) {
    pIVar12 = (ImageElement *)0x0;
  }
  else {
    iVar16 = *piVar17;
    iVar4 = SmDev();
    uVar9 = __floatsisf(*(undefined4 *)(iVar4 * 4 + iVar16));
    piVar25 = *(int **)(in_stack_00000034 + DAT_000bd95c);
    iVar16 = *piVar25;
    iVar4 = SmDev();
    piVar17 = (int *)unaff_r6[0x1d];
    pcVar15 = *(code **)(*piVar17 + 0x2c);
    uVar10 = __floatsisf(*(int *)(iVar4 * 4 + iVar16) * 3);
    uVar10 = __mulsf3(uVar10,0x3f000000);
    __subsf3(uVar9,uVar10);
    uVar18 = __fixsfsi();
    iVar16 = *piVar25;
    iVar4 = SmDev();
    iVar19 = *(int *)(iVar4 * 4 + iVar16);
    iVar16 = *piVar22;
    iVar4 = SmDev();
    iVar21 = *(int *)(iVar4 * 4 + iVar16);
    iVar4 = CImage::getWidth(pCVar7);
    iVar16 = CImage::getHeight(pCVar7);
    pIVar12 = (ImageElement *)operator_new(0x98);
    _uStack00000004 = (ImageElement *)0x3f800000;
    _bStack00000008 = 0x3f800000;
    in_stack_0000000c = 0x12;
    in_stack_00000010 = (ImageElement *)0x1;
    in_stack_00000000 = (BitmapTextElement *)iVar16;
    ImageElement::ImageElement
              (pIVar12,pCVar7,((uVar18 & 0xffff) + iVar19 * 4) * 0x10000 | uVar24 + iVar21 & 0xffff,
               iVar4,iVar16,extraout_s0_05,extraout_s1_05,'\0',false);
    (*pcVar15)(piVar17,pIVar12);
  }
LAB_000bd962:
  pcVar15 = *(code **)(*(int *)unaff_r6[0x1d] + 0x2c);
  piVar17 = *(int **)(in_stack_00000034 + DAT_000bdc3c);
  iVar16 = *piVar17;
  iVar4 = SmDev();
  iVar16 = *(int *)(iVar4 * 4 + iVar16);
  iVar21 = unaff_r6[0x1d];
  iVar19 = *(int *)(iVar21 + 0xc);
  piVar22 = *(int **)(in_stack_00000034 + DAT_000bdc40);
  iVar20 = *piVar22;
  iVar4 = SmDev();
  iVar4 = *(int *)(iVar4 * 4 + iVar20);
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  in_stack_00000000 = (BitmapTextElement *)0x9;
  _uStack00000004 = (ImageElement *)0x0;
  _bStack00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = (ImageElement *)0x0;
  ZCImageButton::ZCImageButton
            (pZVar13,uVar24 + iVar16 & 0xffff,iVar19,iVar4,'\t',(CImage *)0x0,(CImage *)0x0,0,0,
             false);
  *(ZCImageButton **)((in_stack_0000003c + 1) * 4 + unaff_r6[0x22]) = pZVar13;
  (*pcVar15)(iVar21,pZVar13);
  iVar16 = *piVar22;
  iVar4 = SmDev();
  iVar4 = *(int *)(iVar4 * 4 + iVar16);
  _uStack00000004 = in_stack_000000e8;
  _bStack00000008 = in_stack_000000ec;
  in_stack_0000000c = in_stack_000000f0;
  in_stack_00000000 = pBVar11;
  in_stack_00000010 = pIVar12;
  in_stack_000000d8 = pBVar5;
  in_stack_000000dc = pBVar6;
  in_stack_000000e0 = this;
  in_stack_000000e4 = pBVar11;
  in_stack_000000f4 = pIVar12;
  Vector<BuyToxinDialog::BuyToxinListEntry>::addElement(unaff_r6 + 0x2f,pBVar5,pBVar6,this);
  if (in_stack_0000003c + 1 != 5) {
    FUN_000bd06e();
  }
  piVar22 = (int *)unaff_r6[0x1d];
  iVar19 = piVar22[3];
  iVar21 = *piVar17;
  pcVar15 = *(code **)(*piVar22 + 0x18);
  iVar16 = SmDev();
  (*pcVar15)(piVar22,iVar19,in_stack_00000070 + iVar4 + *(int *)(iVar16 * 4 + iVar21) * 2);
  piVar17 = (int *)unaff_r6[0x36];
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  _bStack00000008 = 1;
  in_stack_00000000 = (BitmapTextElement *)0x0;
  _uStack00000004 = (ImageElement *)0x0;
  ZCImageButton::ZCImageButton(pZVar13,'\x14',in_stack_00000084,(CImage *)0x0,0,0,true);
  unaff_r6[0x20] = (int)pZVar13;
  (*pcVar15)(piVar17,pZVar13);
  piVar17 = (int *)unaff_r6[0x36];
  pcVar15 = *(code **)(*piVar17 + 0x2c);
  pZVar13 = (ZCImageButton *)operator_new(0xa0);
  _bStack00000008 = 1;
  in_stack_00000000 = (BitmapTextElement *)0x0;
  _uStack00000004 = (ImageElement *)0x0;
  ZCImageButton::ZCImageButton(pZVar13,'\x11',in_stack_00000088,(CImage *)0x0,0,0,true);
  unaff_r6[0x21] = (int)pZVar13;
  (*pcVar15)(piVar17,pZVar13);
  (**(code **)(*(int *)unaff_r6[0x20] + 0x20))((int *)unaff_r6[0x20],0);
  (**(code **)(*(int *)unaff_r6[0x21] + 0x20))((int *)unaff_r6[0x21],0);
  iVar4 = SmDev();
  if ((iVar4 == 0) || (iVar4 = SmDev(), iVar4 == 5)) {
    iVar4 = unaff_r6[0x37];
    (**(code **)(*unaff_r6 + 0x18))
              (unaff_r6,(*(int *)(iVar4 + 0xc) >> 1) + *(int *)(unaff_r6[0x36] + 0xc),
               (*(int *)(iVar4 + 0x10) >> 1) + *(int *)(unaff_r6[0x36] + 0x10));
    piVar17 = (int *)unaff_r6[0x37];
    iVar4 = unaff_r6[3];
    uVar9 = 0;
    pcVar15 = *(code **)(*piVar17 + 0x14);
  }
  else {
    piVar17 = (int *)unaff_r6[0x37];
    pcVar15 = *(code **)(*piVar17 + 0x14);
    iVar4 = SmDev();
    uVar9 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(in_stack_00000034 + DAT_000bdc48)));
    iVar4 = SmDev();
    uVar10 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(in_stack_00000034 + DAT_000bdc4c)));
    (*pcVar15)(piVar17,uVar9,uVar10);
    iVar4 = *(int *)(unaff_r6[0x36] + 0xc);
    uVar9 = *(undefined4 *)(unaff_r6[0x36] + 0x10);
    pcVar15 = *(code **)(*unaff_r6 + 0x18);
    piVar17 = unaff_r6;
  }
  (*pcVar15)(piVar17,iVar4,uVar9);
  (**(code **)(*(int *)unaff_r6[0x36] + 0x14))((int *)unaff_r6[0x36],0,unaff_r6[4]);
  piVar17 = (int *)((int)&stack0x00000000 + DAT_000bdc44);
  unaff_r6[0x1b] = 0;
  if (*piVar17 != *in_stack_0000008c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


