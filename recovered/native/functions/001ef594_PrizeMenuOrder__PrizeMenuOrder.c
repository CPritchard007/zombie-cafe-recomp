/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef594 PrizeMenuOrder::PrizeMenuOrder */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001ef8c8) */
/* WARNING: Removing unreachable block (ram,0x001ef8c8) */
/* PrizeMenuOrder::PrizeMenuOrder(PrizeMenuDialog*, PrizeItemStatus, int, ConfirmDialog*) */

void __thiscall
PrizeMenuOrder::PrizeMenuOrder
          (PrizeMenuOrder *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uchar uVar2;
  CImage *pCVar3;
  ImageElement *pIVar4;
  ZCImageButton *this_00;
  BitmapTextElement *pBVar5;
  undefined4 uVar6;
  int extraout_r1;
  int extraout_r1_00;
  ScreenElement *pSVar7;
  PrizeMenuOrder *pPVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar31;
  undefined4 auStack_c [3];
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  
  iVar1 = DAT_001ef8dc;
  puVar16 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar17 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  piVar18 = (int *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar19 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar20 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar21 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar22 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar23 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar24 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar25 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar26 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar27 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar28 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar29 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  puVar30 = (undefined4 *)(&stack0xffffffe4 + DAT_001ef8dc);
  *(undefined4 *)(&stack0x00000310 + DAT_001ef8dc) = param_4;
  iVar9 = DAT_001ef8e0 + 0x1ef5a8;
  *(int *)(&stack0x00000020 + DAT_001ef8dc) = iVar9;
  *(undefined4 *)(&stack0x00000024 + DAT_001ef8dc) = param_1;
  *(undefined4 *)(&stack0x0000030c + DAT_001ef8dc) = param_3;
  puVar12 = *(undefined4 **)(iVar9 + DAT_001ef8e4);
  uVar15 = *(undefined4 *)(&stack0x00000330 + DAT_001ef8dc);
  *(undefined4 *)(&stack0x000002f0 + DAT_001ef8dc) = *puVar12;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar9 + DAT_001ef8e8) + 8;
  uVar6 = *(undefined4 *)(&stack0x00000310 + iVar1);
  uVar10 = *(undefined4 *)(&stack0x00000314 + iVar1);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(&stack0x0000030c + iVar1);
  *(undefined4 *)(this + 0xa0) = uVar6;
  *(undefined4 *)(this + 0xa4) = uVar10;
  uVar6 = *(undefined4 *)(&stack0x0000031c + iVar1);
  uVar10 = *(undefined4 *)(&stack0x00000320 + iVar1);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(&stack0x00000318 + iVar1);
  *(undefined4 *)(this + 0xac) = uVar6;
  *(undefined4 *)(this + 0xb0) = uVar10;
  uVar6 = *(undefined4 *)(&stack0x00000328 + iVar1);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(&stack0x00000324 + iVar1);
  *(undefined4 *)(this + 0xb8) = uVar6;
  uVar6 = *(undefined4 *)(&stack0x00000024 + iVar1);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x60) = uVar6;
  *(undefined4 *)(this + 0x8c) = uVar15;
  *(undefined4 **)(&stack0x00000030 + iVar1) = puVar12;
  iVar9 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar9 + 4);
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(&stack0x00000018 + iVar1) = uVar6;
  pCVar3 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)
                       (*(int *)(*(int *)(&stack0x00000024 + iVar1) + 0x60) + DAT_001ef8ec),199,
                      false);
  iVar9 = SmDev();
  uVar6 = *(undefined4 *)(DAT_001ef8f0 + iVar9 * 4 + 0x1ef63a);
  pIVar4 = (ImageElement *)operator_new(0x98);
  uVar2 = __mulsf3(uVar6,0x3fc00000);
  *puVar16 = 0xc;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,uVar2,false);
  *(ImageElement **)(this + 0x68) = pIVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
  piVar11 = *(int **)(this + 0x68);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
  iVar9 = SmDev();
  uVar10 = *(undefined4 *)(DAT_001ef8f4 + iVar9 * 4 + 0x1ef69a);
  uVar15 = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
  uVar6 = SmDev();
  *(undefined4 *)(&stack0x00000028 + iVar1) = uVar6;
  uVar6 = __floatsisf(uVar10);
  __mulsf3(uVar6,uVar15);
  uVar6 = __fixsfsi();
  uVar10 = __floatsisf(*(undefined4 *)
                        (DAT_001ef8f8 + *(int *)(&stack0x00000028 + iVar1) * 4 + 0x1ef6da));
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
  __addsf3(uVar10,0);
  uVar10 = __fixsfsi();
  (**(code **)(&stack0x0000001c + iVar1))(piVar11,uVar6,uVar10);
  *(undefined4 *)(this + 0xbc) = 0;
  this[0x98] = (PrizeMenuOrder)0x0;
  this[0x99] = (PrizeMenuOrder)0x0;
  if ((*(int *)(this + 0xa0) == 1) && (iVar9 = ZombieCafe::checkEventRaid2_half(), iVar9 == 0)) {
    this[0x99] = (PrizeMenuOrder)0x1;
  }
  piVar11 = *(int **)(*(int *)(&stack0x00000020 + iVar1) + DAT_001ef8fc);
  iVar13 = *piVar11;
  iVar9 = SmDev();
  uVar6 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_001ef900 + iVar9 * 4 + 0x1ef758),0))
  ;
  *(undefined4 *)(&stack0x0000001c + iVar1) = uVar6;
  iVar13 = *piVar11;
  iVar9 = SmDev();
  uVar6 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_001ef904 + iVar9 * 4 + 0x1ef78a),0))
  ;
  iVar9 = *(int *)(*(int *)(&stack0x00000018 + iVar1) + 0x1d4);
  iVar13 = *(int *)(this + 0xa4);
  *(undefined4 *)(&stack0x00000028 + iVar1) = uVar6;
  if (((iVar13 <= iVar9) &&
      (iVar13 = *(int *)(this + 0xac),
      iVar9 = ZombieCafe::getEventRaid2_prizeGetCounts
                        (*(ZombieCafe **)(&stack0x00000018 + iVar1),(int)*(short *)(this + 0x9c)),
      iVar9 < iVar13)) && (this[0x99] == (PrizeMenuOrder)0x0)) {
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)
                         (*(int *)(*(int *)(&stack0x00000024 + iVar1) + 0x60) + DAT_001ef8ec),0xb,
                        false);
    this_00 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xffffffec + iVar1) = 1;
    *puVar17 = 0;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (this_00,'$',pCVar3,(CImage *)0x0,*piVar18,*(int *)(&stack0xffffffe8 + iVar1),
               (bool)(&stack0xffffffec)[iVar1]);
    *(ZCImageButton **)(this + 0xbc) = this_00;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
    piVar11 = *(int **)(this + 0xbc);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
    iVar9 = SmDev();
    uVar10 = *(undefined4 *)(*(int *)(this + 0x60) + 0xac);
    *(int *)(&stack0x00000004 + iVar1) = *(int *)(&stack0x0000032c + iVar1) + -10;
    uVar6 = __floatsisf(*(undefined4 *)(DAT_001ef908 + iVar9 * 4 + 0x1ef7f4));
    uVar6 = __mulsf3(uVar6,uVar10);
    uVar10 = __mulsf3(uVar10,DAT_001ef90c);
    __subsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar11,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(**(int **)(this + 0xbc) + 0x2c);
    String::String((String *)(&stack0x00000038 + iVar1),(char *)(DAT_001ef910 + 0x1ef7e8));
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)
          ((*(int *)(DAT_001ef914 + iVar9 * 4 + 0x1ef80c) + 0x136) * 4 +
          *(int *)(&stack0x00000018 + iVar1));
    iVar9 = *(int *)(this + 0xbc);
    uVar10 = *(undefined4 *)(iVar9 + 0xc);
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(iVar9 + 0x10);
    pBVar5 = (BitmapTextElement *)operator_new(0xc0);
    uVar6 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *puVar19 = 0;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0;
    *(undefined4 *)((int)auStack_c + iVar1 + 8) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar1) = 0;
    *(undefined4 *)((int)auStack_c + iVar1) = uVar6;
    *(undefined4 *)((int)auStack_c + iVar1 + 4) = 0x12;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar10;
    BitmapTextElement::BitmapTextElement
              (pBVar5,&stack0x00000038 + iVar1,*(undefined4 *)(&stack0x00000004 + iVar1),0xffffffff)
    ;
    *(BitmapTextElement **)(this + 0x88) = pBVar5;
    (**(code **)(&stack0x00000008 + iVar1))(iVar9,pBVar5);
    uVar31 = String::~String((String *)(&stack0x00000038 + iVar1));
    ImageButton::setScale
              (*(ImageButton **)(this + 0xbc),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    iVar13 = *(int *)(this + 0x88);
    iVar9 = SmDev();
    *(undefined4 *)(iVar13 + 0xbc) = *(undefined4 *)(DAT_001ef918 + iVar9 * 4 + 0x1ef8a0);
    piVar11 = *(int **)(this + 0x88);
    (**(code **)(*piVar11 + 0x14))
              (piVar11,*(int *)(*(int *)(this + 0xbc) + 0xc) / 2,
               *(int *)(*(int *)(this + 0xbc) + 0x10) / 2);
    *(undefined1 *)(*(int *)(this + 0x88) + 0x7f) = 0x12;
    this[0x98] = (PrizeMenuOrder)0x1;
  }
  pSVar7 = *(ScreenElement **)(*(int *)(&stack0x00000024 + iVar1) + 0x60);
  piVar11 = *(int **)(*(int *)(&stack0x00000020 + iVar1) + DAT_001ef91c);
  iVar9 = DAT_001ef920;
  switch(*(undefined2 *)(this + 0xa8)) {
  case 5:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + DAT_001ef920),1,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)(this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)(this + 100),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)(this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f0640 + iVar9 * 4 + 0x1f04a4)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(DAT_001f0644 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f04ec)
                         + -0xf);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::String((String *)(&stack0x00000098 + iVar1),
                   (String *)
                   (*(int *)(*(int *)(&stack0x00000018 + iVar1) + 0x4e8) +
                   *(int *)(this + 0xb0) * 0x1c));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000098 + iVar1);
    String::~String((String *)(&stack0x00000098 + iVar1));
    String::String((String *)(&stack0x000000a0 + iVar1),(char *)(DAT_001f0648 + 0x1f04fc));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000a0 + iVar1);
    String::~String((String *)(&stack0x000000a0 + iVar1));
    String::valueOf((int)(&stack0x000000a8 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000a8 + iVar1);
    String::~String((String *)(&stack0x000000a8 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar25 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x000000b0 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)(this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x000000b0 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x78));
    L_PrintLog((char *)(DAT_001f064c + 0x1f0570),(char *)(DAT_001f0650 + 0x1f0572));
    sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f0654 + 0x1f0580),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_001f0658 + 0x1f058c),&stack0x000001f0 + iVar1);
    piVar11 = *(int **)(this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f065c + iVar9 * 4 + 0x1f0600)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(DAT_001f0660 + iVar9 * 4 + 0x1f0608);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(DAT_001f0664 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f066a));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar11,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    FUN_001f0a5e();
    return;
  case 6:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + DAT_001ef920),5,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)(this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)(this + 100),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)(this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f0844 + iVar9 * 4 + 0x1f06f4)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(DAT_001f0848 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f073c)
                         + -0xf);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::valueOf((int)(&stack0x000000b8 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000b8 + iVar1);
    String::~String((String *)(&stack0x000000b8 + iVar1));
    String::String((String *)(&stack0x000000c0 + iVar1),(char *)(DAT_001f084c + 0x1f073e));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000c0 + iVar1);
    String::~String((String *)(&stack0x000000c0 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar26 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x000000c8 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)(this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x000000c8 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x78));
    L_PrintLog((char *)(DAT_001f0850 + 0x1f0798),(char *)(DAT_001f0854 + 0x1f079a));
    sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f0858 + 0x1f07a8),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_001f085c + 0x1f07b4),&stack0x000001f0 + iVar1);
    piVar11 = *(int **)(this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f0860 + iVar9 * 4 + 0x1f0828)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(DAT_001f0864 + iVar9 * 4 + 0x1f0830);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(DAT_001f0868 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0892));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar11,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    FUN_001f0a5e();
    return;
  case 7:
    break;
  default:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + DAT_001ef920),2,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)(this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)(this + 100),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)(this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(iRam001efcec + iVar9 * 4 + 0x1ef9b0)
    ;
    *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    uVar6 = SmDev();
    iVar9 = *(int *)(this + 0x60);
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(iVar9 + 0xac);
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x0000000c + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x00000014 + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)
                         (iRam001efcf0 + *(int *)(&stack0x00000010 + iVar1) * 4 + 0x1efa00));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x00000008 + iVar1));
    uVar10 = __mulsf3(*(undefined4 *)(&stack0x00000008 + iVar1),uRam001efcf4);
    __subsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000004 + iVar1))(piVar14,*(undefined4 *)(&stack0x0000000c + iVar1),uVar6)
    ;
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::String((String *)(&stack0x00000040 + iVar1),(char *)(iRam001efcf8 + 0x1ef9f4));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000040 + iVar1);
    String::~String((String *)(&stack0x00000040 + iVar1));
    String::valueOf((int)(&stack0x00000048 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000048 + iVar1);
    String::~String((String *)(&stack0x00000048 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar20 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x00000050 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)(this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x00000050 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x78));
    L_PrintLog((char *)(iRam001efcfc + 0x1efa68),(char *)(iRam001efd00 + 0x1efa6a));
    sprintf(&stack0x000001f0 + iVar1,(char *)(iRam001efd04 + 0x1efa78),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(iRam001efd08 + 0x1efa84),&stack0x000001f0 + iVar1);
    piVar14 = *(int **)(this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001efd0c + iVar9 * 4 + 0x1efaf8)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(iRam001efd10 + iVar9 * 4 + 0x1efb00);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(iRam001efd14 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1efb62));
    pSVar7 = (ScreenElement *)(*(int *)(this + 0x60) + 0xac);
    __mulsf3(uVar6,*(undefined4 *)pSVar7);
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    FUN_001f0a5e();
    iVar9 = extraout_r1;
  case 1:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + iVar9),6,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)(this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)(this + 100),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)(this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001efd18 + iVar9 * 4 + 0x1efba2)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(iRam001efd1c + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1efbea)
                         + -0xf);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::String((String *)(&stack0x00000058 + iVar1),
                   (String *)
                   (*(int *)(*(int *)(this + 0xb0) * 4 +
                            *(int *)(*(int *)(*(int *)(*(int *)(this + 0x60) + 100) + 0x14) + 0x94))
                   + 0x2c));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000058 + iVar1);
    String::~String((String *)(&stack0x00000058 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar21 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x00000060 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)(this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x00000060 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x78));
    L_PrintLog((char *)(iRam001efd20 + 0x1efc3e),(char *)(iRam001efd24 + 0x1efc40));
    sprintf(&stack0x000001f0 + iVar1,(char *)(iRam001efd28 + 0x1efc4e),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(iRam001efd2c + 0x1efc5a),&stack0x000001f0 + iVar1);
    piVar11 = *(int **)(this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001efd30 + iVar9 * 4 + 0x1efcce)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(iRam001efd34 + iVar9 * 4 + 0x1efcd6);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(iRam001efd38 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1efd38));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar11,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    FUN_001f0a5e();
    iVar9 = 0xf7f7;
    piVar11 = (int *)0x1f0060;
    this = (PrizeMenuOrder *)0x1efd7c;
    pSVar7 = (ScreenElement *)0x1efd7c;
  case 2:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + iVar9),4,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)((ScreenElement *)this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)((ScreenElement *)this + 100),(float)uVar31,
               (float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)((ScreenElement *)this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001eff10 + iVar9 * 4 + 0x1efdc8)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(iRam001eff14 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1efe10)
                         + -0xf);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::String((String *)(&stack0x00000068 + iVar1),
                   (String *)
                   (*(int *)(*(int *)((ScreenElement *)this + 0xb0) * 4 +
                            *(int *)(*(int *)(&stack0x00000018 + iVar1) + iRam001eff18)) +
                   iRam001eff1c));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000068 + iVar1);
    String::~String((String *)(&stack0x00000068 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar22 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x00000070 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)((ScreenElement *)this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x00000070 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,
               *(TrueTypeTextElement **)((ScreenElement *)this + 0x78));
    L_PrintLog((char *)(iRam001eff20 + 0x1efe62),(char *)(iRam001eff24 + 0x1efe64));
    sprintf(&stack0x000001f0 + iVar1,(char *)(iRam001eff28 + 0x1efe72),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(iRam001eff2c + 0x1efe7e),&stack0x000001f0 + iVar1);
    piVar14 = *(int **)((ScreenElement *)this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001eff30 + iVar9 * 4 + 0x1efef2)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(iRam001eff34 + iVar9 * 4 + 0x1efefa);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(iRam001eff38 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1eff5a));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    piVar11 = (int *)__fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,*(undefined4 *)(&stack0x00000004 + iVar1));
    FUN_001f0a5e();
    pSVar7 = (ScreenElement *)(extraout_r1_00 << 0x1d);
    iVar9 = 0;
    this = (PrizeMenuOrder *)pSVar7;
  case 3:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + iVar9),3,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)((ScreenElement *)this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)((ScreenElement *)this + 100),(float)uVar31,
               (float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)((ScreenElement *)this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001f0204 + iVar9 * 4 + 0x1effc8)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(iRam001f0208 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0010)
                         + -0xf);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)
                         (*(int *)(*(int *)(&stack0x00000024 + iVar1) + 0x60) + iRam001f020c),
                        *(byte *)(*(int *)(*(int *)((ScreenElement *)this + 0xb0) * 4 +
                                          *(int *)(*(int *)(&stack0x00000018 + iVar1) + iRam001f0210
                                                  )) + 0xb40) + 0x107,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)((ScreenElement *)this + 0x74) = pIVar4;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    uVar31 = __mulsf3(*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac),uRam001f0214);
    ImageElement::setScale
              (*(ImageElement **)((ScreenElement *)this + 0x74),(float)uVar31,
               (float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)((ScreenElement *)this + 0x74);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001f0218 + iVar9 * 4 + 0x1f00b8)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(iRam001f021c + iVar9 * 4 + 0x1f00c0);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(iRam001f0220 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0122));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::String((String *)(&stack0x00000078 + iVar1),
                   (String *)
                   (*(int *)(*(int *)((ScreenElement *)this + 0xb0) * 4 +
                            *(int *)(*(int *)(&stack0x00000018 + iVar1) + iRam001f0210)) +
                   iRam001f0224));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000078 + iVar1);
    String::~String((String *)(&stack0x00000078 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar23 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x00000080 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)((ScreenElement *)this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x00000080 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,
               *(TrueTypeTextElement **)((ScreenElement *)this + 0x78));
    L_PrintLog((char *)(iRam001f0228 + 0x1f014a),(char *)(iRam001f022c + 0x1f014c));
    sprintf(&stack0x000001f0 + iVar1,(char *)(iRam001f0230 + 0x1f015a),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(iRam001f0234 + 0x1f0166),&stack0x000001f0 + iVar1);
    piVar11 = *(int **)((ScreenElement *)this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x74) + 0xc);
    *(undefined4 *)(&stack0x0000002c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(iRam001f0238 + iVar9 * 4 + 0x1f01e0)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(iRam001f023c + iVar9 * 4 + 0x1f01e8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(int *)(&stack0x00000010 + iVar1) + *(int *)(&stack0x0000002c + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    iVar9 = iVar9 / 2;
    uVar6 = __floatsisf(iVar9 - *(int *)(iRam001f0240 + *(int *)(&stack0x00000014 + iVar1) * 4 +
                                        0x1f024e));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar11,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    FUN_001f0a5e();
    iVar9 = iVar9 * 0x200000;
    piVar11 = *(int **)(iVar9 + 4);
    pSVar7 = (ScreenElement *)((iVar9 + 0x14U >> 0xb) << 0x11);
    iVar9 = 0x5780000;
    this = (PrizeMenuOrder *)pSVar7;
  case 4:
    pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + iVar9),7,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)((ScreenElement *)this + 100) = pIVar4;
    uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    ImageElement::setScale
              (*(ImageElement **)((ScreenElement *)this + 100),(float)uVar31,
               (float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)((ScreenElement *)this + 100);
    iVar13 = piVar14[3];
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f061c + iVar9 * 4 + 0x1f02d0)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar13 / 2);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(DAT_001f0620 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0318)
                         + -0xf);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::String((String *)(&stack0x00000088 + iVar1),
                   (String *)
                   (*(int *)(*(int *)((ScreenElement *)this + 0xb0) * 4 +
                            *(int *)(*(int *)(*(int *)(*(int *)((ScreenElement *)this + 0x60) + 100)
                                             + 0x14) + 0x94)) + 0x2c));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000088 + iVar1);
    String::~String((String *)(&stack0x00000088 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar24 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x00000090 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
    *(ScreenElement **)((ScreenElement *)this + 0x78) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x00000090 + iVar1));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,
               *(TrueTypeTextElement **)((ScreenElement *)this + 0x78));
    L_PrintLog((char *)(DAT_001f0624 + 0x1f036c),(char *)(DAT_001f0628 + 0x1f036e));
    sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f062c + 0x1f037c),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_001f0630 + 0x1f0388),&stack0x000001f0 + iVar1);
    piVar11 = *(int **)((ScreenElement *)this + 0x78);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f0634 + iVar9 * 4 + 0x1f03fc)
    ;
    *(undefined4 *)(&stack0x0000000c + iVar1) =
         *(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xa8);
    iVar9 = SmDev();
    iVar9 = *(int *)(DAT_001f0638 + iVar9 * 4 + 0x1f0404);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
    uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
    __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
    uVar6 = __fixsfsi();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar6 = __floatsisf(iVar9 / 2 -
                        *(int *)(DAT_001f063c + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0466));
    __mulsf3(uVar6,*(undefined4 *)(*(int *)((ScreenElement *)this + 0x60) + 0xac));
    uVar6 = __fixsfsi();
    (**(code **)(&stack0x00000008 + iVar1))(piVar11,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6)
    ;
    FUN_001f0a5e();
    return;
  }
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(pSVar7 + DAT_001ef920),10,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x14',true);
  *(ImageElement **)(this + 100) = pIVar4;
  uVar31 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
  ImageElement::setScale
            (*(ImageElement **)(this + 100),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
  piVar14 = *(int **)(this + 100);
  iVar13 = piVar14[3];
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f0ac0 + iVar9 * 4 + 0x1f08f8);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
  uVar6 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
  uVar6 = __floatsisf(iVar13 / 2);
  uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar1));
  __addsf3(uVar6,uVar10);
  uVar6 = __fixsfsi();
  uVar10 = __floatsisf(*(int *)(DAT_001f0ac4 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0940) +
                       -0xf);
  __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
  uVar10 = __fixsfsi();
  (**(code **)(&stack0x00000008 + iVar1))(piVar14,uVar6,uVar10);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
  String::String((String *)(&stack0x000000d0 + iVar1),(char *)(DAT_001f0ac8 + 0x1f0928));
  StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000d0 + iVar1);
  String::~String((String *)(&stack0x000000d0 + iVar1));
  String::valueOf((int)(&stack0x000000d8 + iVar1));
  StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000d8 + iVar1);
  String::~String((String *)(&stack0x000000d8 + iVar1));
  String::String((String *)(&stack0x000000e0 + iVar1),(char *)(DAT_001f0acc + 0x1f095a));
  StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000e0 + iVar1);
  String::~String((String *)(&stack0x000000e0 + iVar1));
  StringBuffer::toString();
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  *puVar27 = 1;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
  *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,&stack0x000000e8 + iVar1,
             *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
  *(ScreenElement **)(this + 0x78) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x000000e8 + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x78));
  L_PrintLog((char *)(DAT_001f0ad0 + 0x1f09b4),(char *)(DAT_001f0ad4 + 0x1f09b6));
  sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f0ad8 + 0x1f09c4),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_001f0adc + 0x1f09d0),&stack0x000001f0 + iVar1);
  piVar14 = *(int **)(this + 0x78);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(*(int *)(this + 100) + 0xc);
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(DAT_001f0ae0 + iVar9 * 4 + 0x1f0a44);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
  iVar9 = SmDev();
  iVar9 = *(int *)(DAT_001f0ae4 + iVar9 * 4 + 0x1f0a4c);
  uVar6 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar1) = uVar6;
  uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar1));
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar6;
  uVar6 = __floatsisf(*(undefined4 *)(&stack0x00000004 + iVar1));
  uVar6 = __mulsf3(uVar6,*(undefined4 *)(&stack0x0000000c + iVar1));
  __addsf3(*(undefined4 *)(&stack0x00000010 + iVar1),uVar6);
  uVar6 = __fixsfsi();
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
  uVar6 = __floatsisf(iVar9 / 2 -
                      *(int *)(DAT_001f0ae8 + *(int *)(&stack0x00000014 + iVar1) * 4 + 0x1f0aae));
  __mulsf3(uVar6,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
  uVar6 = __fixsfsi();
  (**(code **)(&stack0x00000008 + iVar1))(piVar14,*(undefined4 *)(&stack0x00000004 + iVar1),uVar6);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000001d4 + iVar1));
  if (*(int *)(this + 0xa0) == 1) {
    if (this[0x99] != (PrizeMenuOrder)0x0) goto LAB_001f0b4e;
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)
                         (*(int *)(*(int *)(&stack0x00000024 + iVar1) + 0x60) + DAT_001f0aec),8,
                        false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)(this + 0x6c) = pIVar4;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    uVar31 = __mulsf3(*(undefined4 *)(*(int *)(this + 0x60) + 0xac),DAT_001f0af0);
    ImageElement::setScale
              (*(ImageElement **)(this + 0x6c),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)(this + 0x6c);
  }
  else {
    if (*(int *)(this + 0xa0) != 2) goto LAB_001f0b4e;
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)
                         (*(int *)(*(int *)(&stack0x00000024 + iVar1) + 0x60) + DAT_001f0ec8),9,
                        false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x14',false);
    *(ImageElement **)(this + 0x70) = pIVar4;
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    uVar31 = __mulsf3(*(undefined4 *)(*(int *)(this + 0x60) + 0xac),DAT_001f0ecc);
    ImageElement::setScale
              (*(ImageElement **)(this + 0x70),(float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    piVar14 = *(int **)(this + 0x70);
  }
  iVar9 = *(int *)(this + 100);
  (**(code **)(*piVar14 + 0x14))
            (piVar14,*(undefined4 *)(iVar9 + 4),*(int *)(iVar9 + 8) - *(int *)(iVar9 + 0x10));
LAB_001f0b4e:
  if ((*(int *)(this + 0xa0) == 1) && (this[0x99] == (PrizeMenuOrder)0x0)) {
    CapcomDate::from1970Offset
              ((CapcomDate *)(&stack0x000001b8 + iVar1),
               *(ulong *)(*(int *)(*(int *)(&stack0x00000020 + iVar1) + DAT_001f0ed0) + 4));
    CapcomDate::addSeconds((int)(&stack0x000001b8 + iVar1));
    CapcomDate::addDays((CapcomDate *)(&stack0x000001b8 + iVar1),2);
    StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
    String::valueOf((int)(&stack0x000000f0 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000f0 + iVar1);
    String::~String((String *)(&stack0x000000f0 + iVar1));
    String::String((String *)(&stack0x000000f8 + iVar1),(char *)(DAT_001f0ed8 + 0x1f0baa));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x000000f8 + iVar1);
    String::~String((String *)(&stack0x000000f8 + iVar1));
    String::valueOf((int)(&stack0x00000100 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000100 + iVar1);
    String::~String((String *)(&stack0x00000100 + iVar1));
    String::String((String *)(&stack0x00000108 + iVar1),(char *)(DAT_001f0edc + 0x1f0bda));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000108 + iVar1);
    String::~String((String *)(&stack0x00000108 + iVar1));
    String::valueOf((int)(&stack0x00000110 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000110 + iVar1);
    String::~String((String *)(&stack0x00000110 + iVar1));
    String::String((String *)(&stack0x00000118 + iVar1),(char *)(DAT_001f0ee0 + 0x1f0c0a));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000118 + iVar1);
    String::~String((String *)(&stack0x00000118 + iVar1));
    if ((byte)(&stack0x000001bd)[iVar1] < 10) {
      String::valueOf((int)(&stack0x00000120 + iVar1));
      StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000120 + iVar1);
      String::~String((String *)(&stack0x00000120 + iVar1));
    }
    String::valueOf((int)(&stack0x00000128 + iVar1));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000128 + iVar1);
    String::~String((String *)(&stack0x00000128 + iVar1));
    String::String((String *)(&stack0x00000130 + iVar1),(char *)(DAT_001f0ee4 + 0x1f0c58));
    StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000130 + iVar1);
    String::~String((String *)(&stack0x00000130 + iVar1));
    StringBuffer::toString();
    pSVar7 = (ScreenElement *)operator_new(0xe4);
    *puVar28 = 1;
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
    *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar7,&stack0x00000138 + iVar1,
               *(undefined4 *)(&stack0x0000001c + iVar1),DAT_001f0ee8);
    *(ScreenElement **)(this + 0x84) = pSVar7;
    ScreenElement::addChild((ScreenElement *)this,pSVar7);
    String::~String((String *)(&stack0x00000138 + iVar1));
    piVar14 = *(int **)(*(int *)(&stack0x00000020 + iVar1) + DAT_001f0eec);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar14,*(TrueTypeTextElement **)(this + 0x84));
    L_PrintLog((char *)(DAT_001f0ef0 + 0x1f0cbe),(char *)(DAT_001f0ef4 + 0x1f0cc0));
    sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f0ef8 + 0x1f0cce),*(int *)(*piVar14 + 4) + 1);
    L_PrintLog((char *)(DAT_001f0efc + 0x1f0cda),&stack0x000001f0 + iVar1);
    piVar14 = *(int **)(this + 0x84);
    *(undefined4 *)(&stack0x00000024 + iVar1) = *(undefined4 *)(*piVar14 + 0x14);
    uVar10 = *(undefined4 *)(*(int *)(this + 100) + 0xc);
    iVar9 = SmDev();
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(DAT_001f0f00 + iVar9 * 4 + 0x1f0d50)
    ;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
    uVar6 = SmDev();
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar6;
    uVar6 = __floatsisf(uVar10);
    uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000008 + iVar1));
    uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x00000004 + iVar1));
    __addsf3(uVar6,uVar10);
    uVar6 = __fixsfsi();
    uVar10 = __floatsisf(*(int *)(DAT_001f0f04 + *(int *)(&stack0x0000000c + iVar1) * 4 + 0x1f0d7e)
                         + -0x33);
    __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
    uVar10 = __fixsfsi();
    (**(code **)(&stack0x00000024 + iVar1))(piVar14,uVar6,uVar10);
    CapcomLinkedList<String>::~CapcomLinkedList
              ((CapcomLinkedList<String> *)(&stack0x000001d4 + iVar1));
  }
  iVar13 = *(int *)(this + 0xac);
  iVar9 = ZombieCafe::getEventRaid2_prizeGetCounts
                    (*(ZombieCafe **)(&stack0x00000018 + iVar1),(int)*(short *)(this + 0x9c));
  pPVar8 = this + 0x99;
  if (iVar13 - iVar9 < 1) {
    FUN_001f17e8();
  }
  if (*pPVar8 != (PrizeMenuOrder)0x0) {
    FUN_001f17e8();
  }
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001b8 + iVar1));
  String::valueOf((int)(&stack0x00000140 + iVar1));
  StringBuffer::append(&stack0x000001b8 + iVar1,&stack0x00000140 + iVar1);
  String::~String((String *)(&stack0x00000140 + iVar1));
  String::String((String *)(&stack0x00000148 + iVar1),(char *)(DAT_001f0f08 + 0x1f0dae));
  StringBuffer::append(&stack0x000001b8 + iVar1,&stack0x00000148 + iVar1);
  String::~String((String *)(&stack0x00000148 + iVar1));
  StringBuffer::toString();
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  *puVar29 = 1;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
  *(undefined4 *)(&stack0xffffffec + iVar1) = 0xc;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,&stack0x00000150 + iVar1,
             *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
  *(ScreenElement **)(this + 0x7c) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x00000150 + iVar1));
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x7c));
  L_PrintLog((char *)(DAT_001f0f0c + 0x1f0e08),(char *)(DAT_001f0f10 + 0x1f0e0a));
  sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f0f14 + 0x1f0e18),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_001f0f18 + 0x1f0e24),&stack0x000001f0 + iVar1);
  piVar11 = *(int **)(this + 0x7c);
  *(undefined4 *)(&stack0x00000024 + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
  uVar10 = *(undefined4 *)(*(int *)(this + 100) + 0xc);
  iVar9 = SmDev();
  uVar15 = *(undefined4 *)(DAT_001f0f1c + iVar9 * 4 + 0x1f0e96);
  *(undefined4 *)(&stack0x00000028 + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
  uVar6 = SmDev();
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar6;
  uVar6 = __floatsisf(uVar10);
  uVar10 = __floatsisf(uVar15);
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x00000028 + iVar1));
  __addsf3(uVar6,uVar10);
  uVar6 = __fixsfsi();
  uVar10 = __floatsisf(*(int *)(DAT_001f0f20 + *(int *)(&stack0x00000008 + iVar1) * 4 + 0x1f0ec2) +
                       -0xf);
  __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
  uVar10 = __fixsfsi();
  (**(code **)(&stack0x00000024 + iVar1))(piVar11,uVar6,uVar10);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x000001d4 + iVar1));
  String::String((String *)(&stack0x00000158 + iVar1),(char *)(DAT_001f0f24 + 0x1f0ea8));
  StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000158 + iVar1);
  String::~String((String *)(&stack0x00000158 + iVar1));
  ZombieCafe::getEventRaid2_prizeGetCounts
            (*(ZombieCafe **)(&stack0x00000018 + iVar1),(int)*(short *)(this + 0x9c));
  String::valueOf((int)(&stack0x00000160 + iVar1));
  StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000160 + iVar1);
  String::~String((String *)(&stack0x00000160 + iVar1));
  String::String((String *)(&stack0x00000168 + iVar1),(char *)(DAT_001f122c + 0x1f0f4c));
  StringBuffer::append(&stack0x000001d4 + iVar1,&stack0x00000168 + iVar1);
  String::~String((String *)(&stack0x00000168 + iVar1));
  StringBuffer::toString();
  pSVar7 = (ScreenElement *)operator_new(0xe4);
  *puVar30 = 1;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = 1;
  *(undefined4 *)(&stack0xffffffec + iVar1) = 0x24;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar7,&stack0x00000170 + iVar1,
             *(undefined4 *)(&stack0x0000001c + iVar1),0xffffffff);
  *(ScreenElement **)(this + 0x80) = pSVar7;
  ScreenElement::addChild((ScreenElement *)this,pSVar7);
  String::~String((String *)(&stack0x00000170 + iVar1));
  piVar11 = *(int **)(*(int *)(&stack0x00000020 + iVar1) + DAT_001f1230);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x80));
  L_PrintLog((char *)(DAT_001f1234 + 0x1f0fb0),(char *)(DAT_001f1238 + 0x1f0fb2));
  sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_001f123c + 0x1f0fc0),*(int *)(*piVar11 + 4) + 1);
  L_PrintLog((char *)(DAT_001f1240 + 0x1f0fcc),&stack0x000001f0 + iVar1);
  piVar11 = *(int **)(this + 0x80);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(*piVar11 + 0x14);
  uVar10 = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
  iVar9 = SmDev();
  *(undefined4 *)(&stack0x00000020 + iVar1) = *(undefined4 *)(DAT_001f1244 + iVar9 * 4 + 0x1f0ff2);
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(*(int *)(this + 0x60) + 0xa8);
  uVar6 = SmDev();
  *(undefined4 *)(&stack0x00000024 + iVar1) = uVar6;
  uVar6 = __floatsisf(*(undefined4 *)(&stack0x0000032c + iVar1));
  uVar10 = __mulsf3(uVar10,DAT_001f1248);
  uVar6 = __subsf3(uVar6,uVar10);
  uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000020 + iVar1));
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(&stack0x00000018 + iVar1));
  __subsf3(uVar6,uVar10);
  uVar6 = __fixsfsi();
  uVar10 = __floatsisf(*(int *)(DAT_001f124c + *(int *)(&stack0x00000024 + iVar1) * 4 + 0x1f1080) +
                       -0xf);
  __mulsf3(uVar10,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
  uVar10 = __fixsfsi();
  (**(code **)(&stack0x0000001c + iVar1))(piVar11,uVar6,uVar10);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000001d4 + iVar1));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x000001b8 + iVar1));
  iVar9 = SmDev();
  uVar6 = __floatsisf(*(undefined4 *)(&UNK_001f151e + DAT_001f1654 + iVar9 * 4));
  __mulsf3(uVar6,*(undefined4 *)(*(int *)(this + 0x60) + 0xac));
  iVar9 = __fixsfsi();
  ScreenElement::setSize((ScreenElement *)this,*(int *)(&stack0x0000032c + iVar1),iVar9);
  if (*(int *)(&stack0x000002f0 + iVar1) != **(int **)(&stack0x00000030 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
                    /* WARNING: Could not recover jumptable at 0x001f1808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&stack0x00000308 + iVar1))();
  return;
}


