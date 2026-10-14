/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016a53c GameStateMap::addEventRaidShop */

/* GameStateMap::addEventRaidShop() */

void __thiscall GameStateMap::addEventRaidShop(GameStateMap *this)

{
  int iVar1;
  ZombieCafe *this_00;
  int iVar2;
  undefined4 uVar3;
  TrueTypeTextElement *pTVar4;
  CImage *pCVar5;
  BitmapTextElement *pBVar6;
  ImageElement *this_01;
  undefined4 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int *piVar10;
  ZCImageButton *pZVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uStack_4;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined4 *puVar26;
  int *piVar27;
  undefined4 *puVar28;
  int *piVar29;
  undefined4 *puVar30;
  int *piVar31;
  undefined4 *puVar32;
  int *piVar33;
  undefined4 *puVar34;
  int *piVar35;
  undefined4 *puVar36;
  int *piVar37;
  undefined4 *puVar38;
  int *piVar39;
  undefined4 *puVar40;
  int *piVar41;
  undefined4 *puVar42;
  int *piVar43;
  undefined4 *puVar44;
  int *piVar45;
  undefined4 *puVar46;
  int *piVar47;
  undefined4 *puVar48;
  int *piVar49;
  undefined4 *puVar50;
  int *piVar51;
  undefined4 *puVar52;
  int *piVar53;
  undefined4 *puVar54;
  int *piVar55;
  undefined4 *puVar56;
  int *piVar57;
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
  
  iVar1 = DAT_0016a8dc;
  this_00 = *(ZombieCafe **)(this + 0xc);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar15 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar17 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar19 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar21 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar23 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar25 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar27 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar29 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar31 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar33 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar35 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar37 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar39 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar41 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar43 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar45 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar47 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar49 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar51 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar53 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar55 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar56 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar57 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar59 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar61 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar62 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar63 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar64 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar65 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar66 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  piVar67 = (int *)(&stack0xffffffec + DAT_0016a8dc);
  puVar68 = (undefined4 *)(&stack0xffffffec + DAT_0016a8dc);
  puVar8 = *(undefined4 **)(DAT_0016a8e0 + 0x16a54c);
  *(undefined4 *)(&stack0x00000210 + DAT_0016a8dc) = *puVar8;
  iVar2 = ZombieCafe::isEventRaid_Advent(this_00);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar8;
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x22c) = 0;
    FUN_0016b340();
  }
  iVar2 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  *(int *)(this + 0x264) = iVar2 + 1;
  this[0x268] = (GameStateMap)0x0;
  this[0x27c] = (GameStateMap)0x0;
  this[DAT_0016a8e4] = (GameStateMap)0x0;
  uVar3 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0xc));
  piVar10 = *(int **)(this + 0x14);
  uVar7 = *(undefined4 *)(this + DAT_0016a8e8);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar3;
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar7;
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(*piVar10 + 0x2c);
  String::String((String *)(&stack0x00000018 + iVar1),(char *)(DAT_0016a8ec + 0x16a59a));
  pTVar4 = (TrueTypeTextElement *)operator_new(0xe4);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x12;
  uVar3 = *(undefined4 *)(&stack0x00000004 + iVar1);
  *puVar13 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar4,&stack0x00000018 + iVar1,uVar3,0xffffffff);
  *(TrueTypeTextElement **)(this + 0x24c) = pTVar4;
  (**(code **)(&stack0x0000000c + iVar1))(piVar10,pTVar4);
  iVar2 = DAT_0016a8f0;
  String::~String((String *)(&stack0x00000018 + iVar1));
  iVar12 = DAT_0016a8f4;
  piVar10 = *(int **)(iVar2 + 0x16a5de);
  pZVar11 = (ZCImageButton *)0x24c;
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar10,*(TrueTypeTextElement **)(this + 0x24c));
  L_PrintLog((char *)(iVar12 + 0x16a5f2),(char *)(DAT_0016a8f8 + 0x16a5f6));
  sprintf(&stack0x00000110 + iVar1,(char *)(DAT_0016a8fc + 0x16a604),*(int *)(*piVar10 + 4) + 1);
  L_PrintLog((char *)(iVar12 + 0x16a5f2),&stack0x00000110 + iVar1);
  if (*(int *)(&stack0x00000008 + iVar1) == 2) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000020 + iVar1),(char *)(DAT_0016a900 + 0x16a622));
    (*pcVar9)(piVar10,&stack0x00000020 + iVar1);
    String::~String((String *)(&stack0x00000020 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x27,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar14 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar15,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 3) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000028 + iVar1),(char *)(DAT_0016a904 + 0x16a67c));
    (*pcVar9)(piVar10,&stack0x00000028 + iVar1);
    String::~String((String *)(&stack0x00000028 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x26,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar16 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar17,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016b040();
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 4) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000030 + iVar1),(char *)(DAT_0016a908 + 0x16a6d6));
    (*pcVar9)(piVar10,&stack0x00000030 + iVar1);
    String::~String((String *)(&stack0x00000030 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x28,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar18 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar19,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 5) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000038 + iVar1),(char *)(DAT_0016a90c + 0x16a730));
    (*pcVar9)(piVar10,&stack0x00000038 + iVar1);
    String::~String((String *)(&stack0x00000038 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar20 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar21,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016b040();
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 6) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000040 + iVar1),(char *)(DAT_0016a910 + 0x16a78a));
    (*pcVar9)(piVar10,&stack0x00000040 + iVar1);
    String::~String((String *)(&stack0x00000040 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x24,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar22 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar23,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 7) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000048 + iVar1),(char *)(DAT_0016a914 + 0x16a7e4));
    (*pcVar9)(piVar10,&stack0x00000048 + iVar1);
    String::~String((String *)(&stack0x00000048 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x28,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar24 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar25,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016b040();
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 8) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000050 + iVar1),(char *)(DAT_0016a918 + 0x16a83e));
    (*pcVar9)(piVar10,&stack0x00000050 + iVar1);
    String::~String((String *)(&stack0x00000050 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x28,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar26 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar27,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 9) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000058 + iVar1),(char *)(DAT_0016a91c + 0x16a896));
    (*pcVar9)(piVar10,&stack0x00000058 + iVar1);
    String::~String((String *)(&stack0x00000058 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x27,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar28 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar29,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016b040();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 10) {
    piVar10 = *(int **)(this + (int)pZVar11);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000060 + iVar1),(char *)(DAT_0016acb4 + 0x16a932));
    (*pcVar9)(piVar10,&stack0x00000060 + iVar1);
    String::~String((String *)(&stack0x00000060 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar30 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar31,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0xb) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000068 + iVar1),(char *)(DAT_0016acb8 + 0x16a98e));
    (*pcVar9)(piVar10,&stack0x00000068 + iVar1);
    String::~String((String *)(&stack0x00000068 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar32 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar33,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0xc) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000070 + iVar1),(char *)(DAT_0016acbc + 0x16a9ea));
    (*pcVar9)(piVar10,&stack0x00000070 + iVar1);
    String::~String((String *)(&stack0x00000070 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar34 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar35,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0xd) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000078 + iVar1),(char *)(DAT_0016acc0 + 0x16aa46));
    (*pcVar9)(piVar10,&stack0x00000078 + iVar1);
    String::~String((String *)(&stack0x00000078 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar36 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar37,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0xe) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000080 + iVar1),(char *)(DAT_0016acc4 + 0x16aaa2));
    (*pcVar9)(piVar10,&stack0x00000080 + iVar1);
    String::~String((String *)(&stack0x00000080 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar38 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar39,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0xf) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000088 + iVar1),(char *)(DAT_0016acc8 + 0x16aafe));
    (*pcVar9)(piVar10,&stack0x00000088 + iVar1);
    String::~String((String *)(&stack0x00000088 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar40 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar41,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x10) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000090 + iVar1),(char *)(DAT_0016accc + 0x16ab5a));
    (*pcVar9)(piVar10,&stack0x00000090 + iVar1);
    String::~String((String *)(&stack0x00000090 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar42 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar43,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x11) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x00000098 + iVar1),(char *)(DAT_0016acd0 + 0x16abb6));
    (*pcVar9)(piVar10,&stack0x00000098 + iVar1);
    String::~String((String *)(&stack0x00000098 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar44 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar45,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x12) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000a0 + iVar1),(char *)(DAT_0016acd4 + 0x16ac12));
    (*pcVar9)(piVar10,&stack0x000000a0 + iVar1);
    String::~String((String *)(&stack0x000000a0 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar46 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar47,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x13) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000a8 + iVar1),(char *)(DAT_0016acd8 + 0x16ac6e));
    (*pcVar9)(piVar10,&stack0x000000a8 + iVar1);
    String::~String((String *)(&stack0x000000a8 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar48 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar49,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x14) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000b0 + iVar1),(char *)(DAT_0016afcc + 0x16acf2));
    (*pcVar9)(piVar10,&stack0x000000b0 + iVar1);
    String::~String((String *)(&stack0x000000b0 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar50 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar51,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x15) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000b8 + iVar1),(char *)(DAT_0016afd0 + 0x16ad4e));
    (*pcVar9)(piVar10,&stack0x000000b8 + iVar1);
    String::~String((String *)(&stack0x000000b8 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar52 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar53,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x16) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000c0 + iVar1),(char *)(DAT_0016afd4 + 0x16adaa));
    (*pcVar9)(piVar10,&stack0x000000c0 + iVar1);
    String::~String((String *)(&stack0x000000c0 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar54 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar55,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x17) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000c8 + iVar1),(char *)(DAT_0016afd8 + 0x16ae06));
    (*pcVar9)(piVar10,&stack0x000000c8 + iVar1);
    String::~String((String *)(&stack0x000000c8 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar56 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar57,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x18) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000d0 + iVar1),(char *)(DAT_0016afdc + 0x16ae62));
    (*pcVar9)(piVar10,&stack0x000000d0 + iVar1);
    String::~String((String *)(&stack0x000000d0 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar58 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar59,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x19) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000d8 + iVar1),(char *)(DAT_0016afe0 + 0x16aebe));
    (*pcVar9)(piVar10,&stack0x000000d8 + iVar1);
    String::~String((String *)(&stack0x000000d8 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar60 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar61,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x1a) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000e0 + iVar1),(char *)(DAT_0016afe4 + 0x16af1a));
    (*pcVar9)(piVar10,&stack0x000000e0 + iVar1);
    String::~String((String *)(&stack0x000000e0 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(**(int **)(this + 0x14) + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar62 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar63,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    FUN_0016afba();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar1) == 0x1b) {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000e8 + iVar1),(char *)(DAT_0016afe8 + 0x16af76));
    (*pcVar9)(piVar10,&stack0x000000e8 + iVar1);
    String::~String((String *)(&stack0x000000e8 + iVar1));
    piVar10 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar10 + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar64 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar65,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    *(ZCImageButton **)(this + 0x22c) = pZVar11;
    (**(code **)(&stack0x00000004 + iVar1))(piVar10,pZVar11);
  }
  else {
    piVar10 = *(int **)(this + 0x24c);
    pcVar9 = *(code **)(*piVar10 + 0x44);
    String::String((String *)(&stack0x000000f0 + iVar1),(char *)(DAT_0016b350 + 0x16affc));
    (*pcVar9)(piVar10,&stack0x000000f0 + iVar1);
    String::~String((String *)(&stack0x000000f0 + iVar1));
    piVar10 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar10 + 0x2c);
    pCVar5 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x15,false);
    pZVar11 = (ZCImageButton *)operator_new(0xa0);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *puVar66 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    ZCImageButton::ZCImageButton
              (pZVar11,'$',pCVar5,(CImage *)0x0,*piVar67,*(int *)(&stack0xfffffff0 + iVar1),
               (bool)(&stack0xfffffff4)[iVar1]);
    *(ZCImageButton **)(this + 0x22c) = pZVar11;
    (**(code **)(&stack0x00000004 + iVar1))(piVar10,pZVar11);
  }
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined1 *)(*(int *)(this + 0x24c) + 0x7f) = 0x11;
  TrueTypeTextElement::setBaseTransform
            (*(TrueTypeTextElement **)(this + 0x24c),(ccMat2x3 *)(this + 0x3f0));
  piVar10 = *(int **)(this + 0x24c);
  pcVar9 = *(code **)(*piVar10 + 0x18);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x22c) + 0xc));
  iVar2 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_0016b354 + 0x16b0ac)));
  uVar3 = __fixsfsi();
  (*pcVar9)(piVar10,uVar3,*(undefined4 *)(*(int *)(this + 0x22c) + 0x10));
  iVar2 = SmDev();
  if ((iVar2 == 3) || (iVar2 = SmDev(), iVar2 == 4)) {
    *(undefined1 *)(*(int *)(this + 0x24c) + 0xc4) = 0;
  }
  piVar10 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar10 + 0x2c);
  Vector<String>::elementAt((int)(&stack0x000000f8 + iVar1));
  String::valueOf((int)(&stack0x00000100 + iVar1));
  String::operator+((String *)(&stack0x00000108 + iVar1),&stack0x000000f8 + iVar1,
                    &stack0x00000100 + iVar1);
  iVar12 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_0016b35c + iVar2 * 4 + 0x16b146) + 0x136) * 4 + iVar12);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  *puVar68 = 0xff000000;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0x11;
  BitmapTextElement::BitmapTextElement(pBVar6,&stack0x00000108 + iVar1,uVar3,0xffffffff);
  *(BitmapTextElement **)(this + 0x250) = pBVar6;
  (**(code **)(&stack0x00000004 + iVar1))(piVar10,pBVar6);
  String::~String((String *)(&stack0x00000108 + iVar1));
  String::~String((String *)(&stack0x00000100 + iVar1));
  String::~String((String *)(&stack0x000000f8 + iVar1));
  *(undefined1 *)(*(int *)(this + 0x250) + 0x7f) = 0x11;
  BitmapTextElement::setBaseTransform
            (*(BitmapTextElement **)(this + 0x250),(ccMat2x3 *)(this + 0x3d8));
  (**(code **)(**(int **)(this + 0x250) + 0x18))
            (*(int **)(this + 0x250),*(undefined4 *)(*(int *)(this + 0x22c) + 0xc),
             *(undefined4 *)(*(int *)(this + 0x22c) + 0x10));
  *(undefined4 *)(this + 0x278) = 0;
  piVar10 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(*piVar10 + 0x2c);
  pCVar5 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f8),0x2b,false);
  this_01 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_01,pCVar5,'\f',true);
  pcVar9 = *(code **)(&stack0x00000004 + iVar1);
  *(ImageElement **)(this + 0x234) = this_01;
  (*pcVar9)(piVar10,this_01);
  (**(code **)(**(int **)(this + 0x234) + 0x20))(*(int **)(this + 0x234),1);
  if (*(int *)(&stack0x00000008 + iVar1) != 8) {
    FUN_0016b340();
    return;
  }
  (**(code **)(**(int **)(this + 0x234) + 0x20))(*(int **)(this + 0x234),0);
  FUN_0016b340();
  return;
}


