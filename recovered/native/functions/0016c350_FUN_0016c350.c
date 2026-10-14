/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016c350 FUN_0016c350 */

void FUN_0016c350(void)

{
  int iVar1;
  CImage *pCVar2;
  ZCImageButton *pZVar3;
  ulong uVar4;
  ImageElement *pIVar5;
  TrueTypeTextElement *pTVar6;
  int iVar7;
  BitmapTextElement *pBVar8;
  RandomCafeElement *this;
  MessageElement *this_00;
  NoticeDialog *pNVar9;
  ConfirmDialog *this_01;
  BuyToxinDialog *this_02;
  InviteDialog *this_03;
  InviteContactList *this_04;
  ReferralCodeDialog *this_05;
  ScreenElement *this_06;
  TutorialArrow *this_07;
  TutorialSystem *this_08;
  uchar uVar10;
  int extraout_r1;
  int extraout_r1_00;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  int unaff_r4;
  ZombieCafe *this_09;
  int *piVar18;
  GameStateMap *unaff_r5;
  undefined4 uVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar20;
  undefined8 uVar21;
  GameStateMap *in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_0000001c;
  ccMat2x3 *in_stack_00000020;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000040;
  ccMat2x3 *in_stack_00000044;
  int *in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  ZCImageButton *in_stack_000001b4;
  ImageElement *in_stack_000001b8;
  ImageElement *in_stack_000001bc;
  ZCImageButton *in_stack_000001c0;
  ImageElement *in_stack_000001c4;
  BitmapTextElement *in_stack_000001c8;
  BitmapTextElement *in_stack_000001cc;
  TrueTypeTextElement *in_stack_000001d4;
  BitmapTextElement *in_stack_000001d8;
  int in_stack_000001ec;
  byte in_stack_000001f0;
  char in_stack_00000204;
  int in_stack_00000484;
  
  for (; unaff_r4 < in_stack_00000030 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x680);
      unaff_r4 = unaff_r4 + 1) {
    GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x000001b4);
    puVar14 = *(undefined1 **)(in_stack_0000001c + DAT_0016c6c0);
    this_09 = *(ZombieCafe **)(unaff_r5 + 0xc);
    in_stack_000001ec = unaff_r4;
    __aeabi_idivmod(unaff_r4,*puVar14);
    iVar7 = DAT_0016c6cc;
    uVar12 = **(int **)(in_stack_0000001c + DAT_0016c6c4) - 1;
    uVar15 = (uint)*(byte *)(*(int *)(this_09 + DAT_0016c6c8) + extraout_r1);
    if ((int)uVar12 < (int)(uint)*(byte *)(*(int *)(this_09 + DAT_0016c6c8) + extraout_r1)) {
      uVar15 = uVar12;
    }
    in_stack_000001f0 = (byte)uVar15;
    iVar13 = *(int *)(extraout_r1 * 4 + *(int *)(this_09 + DAT_0016c6cc));
    in_stack_00000204 = -(char)((iVar13 >> 0x1f) - iVar13 >> 0x1f);
    *(undefined1 *)((int)&stack0x00000000 + DAT_0016c6d0) = 0;
    if ((in_stack_0000002c == 0) &&
       (iVar13 = ZombieCafe::isEventCafeTheme(this_09,uVar15 & 0xff), iVar13 != 0)) {
      in_stack_000001f0 = 0;
    }
    iVar13 = ZombieCafe::isHeroCafeTheme(*(ZombieCafe **)(unaff_r5 + 0xc),(uint)in_stack_000001f0);
    if (iVar13 != 0) {
      in_stack_000001f0 = 0;
    }
    piVar18 = *(int **)(unaff_r5 + 0x14);
    pcVar16 = *(code **)(*piVar18 + 0x2c);
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),
                        *(int *)((uint)in_stack_000001f0 * 4 +
                                *(int *)(in_stack_0000001c + DAT_0016c6d4)),false);
    pZVar3 = (ZCImageButton *)operator_new(0xa0);
    in_stack_00000000 = (GameStateMap *)0x0;
    in_stack_00000004 = 0;
    ZCImageButton::ZCImageButton(pZVar3,'$',pCVar2,(CImage *)0x0,0,0,true);
    in_stack_000001b4 = pZVar3;
    (*pcVar16)(piVar18,pZVar3);
    piVar18 = *(int **)(unaff_r5 + 0x14);
    if (in_stack_00000204 == '\0') {
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      uVar19 = *(undefined4 *)(unaff_r5 + DAT_0016c960);
      String::String((String *)&stack0x000000b0,0);
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      in_stack_00000000 = (GameStateMap *)0x0;
      in_stack_00000004 = 0;
      TrueTypeTextElement::TrueTypeTextElement(pTVar6,&stack0x000000b0,uVar19,0xffffffff);
      in_stack_000001d4 = pTVar6;
      (*pcVar16)(piVar18,pTVar6);
      String::~String((String *)&stack0x000000b0);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*in_stack_00000048,in_stack_000001d4);
      L_PrintLog((char *)(DAT_0016c964 + 0x16c75e),(char *)(DAT_0016c968 + 0x16c760));
      sprintf(&stack0x00000384,(char *)(DAT_0016c96c + 0x16c76e),
              *(int *)(*in_stack_00000048 + 4) + 1);
      L_PrintLog((char *)(DAT_0016c970 + 0x16c77a),&stack0x00000384);
      pTVar6 = in_stack_000001d4;
      pcVar16 = *(code **)(*(int *)in_stack_000001d4 + 0x44);
      ZombieCafe::getEnemyCafeName((int)&stack0x000000b8);
      (*pcVar16)(pTVar6,&stack0x000000b8);
      String::~String((String *)&stack0x000000b8);
      in_stack_000001b8 = (ImageElement *)0x0;
      in_stack_000001c0 = (ZCImageButton *)0x0;
      in_stack_000001c4 = (ImageElement *)0x0;
      in_stack_000001c8 = (BitmapTextElement *)0x0;
      in_stack_000001cc = (BitmapTextElement *)0x0;
    }
    else {
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      uVar19 = *(undefined4 *)(unaff_r5 + DAT_0016c6d8);
      Vector<String>::elementAt((int)&stack0x00000078);
      iVar13 = *(int *)(unaff_r5 + 0xc);
      __aeabi_idivmod(in_stack_000001ec,*puVar14);
      uVar4 = __divsi3(*(undefined4 *)(extraout_r1_00 * 4 + *(int *)(iVar13 + iVar7)),1000);
      StringUtil::createTimeString((StringUtil *)&stack0x00000080,uVar4,'\x02');
      String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      in_stack_00000000 = (GameStateMap *)0x0;
      in_stack_00000004 = 0;
      TrueTypeTextElement::TrueTypeTextElement(pTVar6,&stack0x00000088,uVar19,0xffffffff);
      in_stack_000001d4 = pTVar6;
      (*pcVar16)(piVar18,pTVar6);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*in_stack_00000048,in_stack_000001d4);
      L_PrintLog((char *)(DAT_0016c6e0 + 0x16c4c6),(char *)(DAT_0016c6e4 + 0x16c4c8));
      sprintf(&stack0x00000384,(char *)(DAT_0016c6ec + 0x16c4d8),
              *(int *)(**(int **)(in_stack_0000001c + DAT_0016c6e8) + 4) + 1);
      L_PrintLog((char *)(DAT_0016c6f0 + 0x16c4e8),&stack0x00000384);
      piVar18 = *(int **)(unaff_r5 + 0x14);
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      pCVar2 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),0xe,false);
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,pCVar2,'\f',true);
      in_stack_000001b8 = pIVar5;
      (*pcVar16)(piVar18,pIVar5);
      iVar7 = DAT_0016c6f4;
      piVar18 = *(int **)(unaff_r5 + 0x14);
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      pCVar2 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_0016c6f4),0xb,false);
      pZVar3 = (ZCImageButton *)operator_new(0xa0);
      in_stack_00000000 = (GameStateMap *)0x0;
      in_stack_00000004 = 0;
      ZCImageButton::ZCImageButton(pZVar3,'$',pCVar2,(CImage *)0x0,0,0,true);
      in_stack_000001c0 = pZVar3;
      (*pcVar16)(piVar18,pZVar3);
      piVar18 = *(int **)(unaff_r5 + 0x14);
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      pCVar2 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + iVar7),0x24,false)
      ;
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,pCVar2,'\f',true);
      in_stack_000001c4 = pIVar5;
      (*pcVar16)(piVar18,pIVar5);
      piVar18 = *(int **)(unaff_r5 + 0x14);
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      String::String((String *)&stack0x00000090,0);
      iVar13 = *(int *)(unaff_r5 + 0xc);
      iVar7 = SmDev();
      uVar19 = *(undefined4 *)((*(int *)(DAT_0016c6f8 + iVar7 * 4 + 0x16c5c8) + 0x136) * 4 + iVar13)
      ;
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      in_stack_00000004 = 1;
      in_stack_00000000 = (GameStateMap *)0xffffffff;
      BitmapTextElement::BitmapTextElement(pBVar8,&stack0x00000090,uVar19,0xff000000);
      in_stack_000001c8 = pBVar8;
      (*pcVar16)(piVar18,pBVar8);
      String::~String((String *)&stack0x00000090);
      snprintf(&stack0x00000304,0x80,(char *)(DAT_0016c700 + 0x16c600),
               **(undefined4 **)(in_stack_0000001c + DAT_0016c6fc));
      pBVar8 = in_stack_000001c8;
      pcVar16 = *(code **)(*(int *)in_stack_000001c8 + 0x44);
      String::String((String *)&stack0x00000098,&stack0x00000304);
      (*pcVar16)(pBVar8,&stack0x00000098);
      String::~String((String *)&stack0x00000098);
      pZVar3 = in_stack_000001c0;
      in_stack_000001c8[0x7f] = (BitmapTextElement)0x11;
      pcVar16 = *(code **)(*(int *)in_stack_000001c0 + 0x2c);
      String::String((String *)&stack0x000000a0,0);
      iVar13 = *(int *)(unaff_r5 + 0xc);
      iVar7 = SmDev();
      uVar19 = *(undefined4 *)((*(int *)(DAT_0016c704 + iVar7 * 4 + 0x16c662) + 0x136) * 4 + iVar13)
      ;
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      in_stack_00000000 = (GameStateMap *)0xff000000;
      in_stack_00000004 = 1;
      BitmapTextElement::BitmapTextElement(pBVar8,&stack0x000000a0,uVar19,0xffffffff);
      in_stack_000001cc = pBVar8;
      (*pcVar16)(pZVar3,pBVar8);
      String::~String((String *)&stack0x000000a0);
      pBVar8 = in_stack_000001cc;
      pcVar16 = *(code **)(*(int *)in_stack_000001cc + 0x44);
      String::String((String *)&stack0x000000a8,(char *)(DAT_0016c708 + 0x16c696));
      (*pcVar16)(pBVar8,&stack0x000000a8);
      String::~String((String *)&stack0x000000a8);
      in_stack_000001cc[0x7f] = (BitmapTextElement)0x11;
    }
    in_stack_000001d4[0x7f] = (TrueTypeTextElement)0x11;
    TrueTypeTextElement::setBaseTransform(in_stack_000001d4,in_stack_00000044);
    pTVar6 = in_stack_000001d4;
    pcVar16 = *(code **)(*(int *)in_stack_000001d4 + 0x18);
    uVar19 = *(undefined4 *)(in_stack_000001b4 + 0xc);
    iVar7 = SmDev();
    uVar20 = __floatsidf(uVar19);
    uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016c958,DAT_0016c95c);
    uVar21 = __extendsfdf2(*(undefined4 *)(in_stack_00000040 + iVar7 * 4));
    __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar21,
             (int)((ulonglong)uVar21 >> 0x20));
    uVar19 = __fixdfsi();
    (*pcVar16)(pTVar6,uVar19,*(undefined4 *)(in_stack_000001b4 + 0x10));
    piVar18 = *(int **)(unaff_r5 + 0x14);
    pcVar16 = *(code **)(*piVar18 + 0x2c);
    Vector<String>::elementAt((int)&stack0x000000c0);
    String::valueOf((int)&stack0x000000c8);
    String::operator+((String *)&stack0x000000d0,&stack0x000000c0,&stack0x000000c8);
    iVar13 = *(int *)(unaff_r5 + 0xc);
    iVar7 = SmDev();
    uVar19 = *(undefined4 *)((*(int *)(DAT_0016c978 + iVar7 * 4 + 0x16c86a) + 0x136) * 4 + iVar13);
    pBVar8 = (BitmapTextElement *)operator_new(0xc0);
    in_stack_00000004 = 0;
    in_stack_00000000 = (GameStateMap *)0xff000000;
    BitmapTextElement::BitmapTextElement(pBVar8,&stack0x000000d0,uVar19,0xffffffff);
    in_stack_000001d8 = pBVar8;
    (*pcVar16)(piVar18,pBVar8);
    String::~String((String *)&stack0x000000d0);
    String::~String((String *)&stack0x000000c8);
    String::~String((String *)&stack0x000000c0);
    in_stack_000001d8[0x7f] = (BitmapTextElement)0x11;
    BitmapTextElement::setBaseTransform(in_stack_000001d8,in_stack_00000020);
    (**(code **)(*(int *)in_stack_000001d8 + 0x18))
              (in_stack_000001d8,*(undefined4 *)(in_stack_000001b4 + 0xc),
               *(undefined4 *)(in_stack_000001b4 + 0x10));
    GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x00000160,(MapCafe *)&stack0x000001b4);
    Vector<GameStateMap::MapCafe>::addElement
              ((Vector<GameStateMap::MapCafe> *)(unaff_r5 + 0xd0),&stack0x00000160);
    String::~String((String *)&stack0x00000190);
    String::~String((String *)&stack0x000001e4);
  }
  iVar7 = *(int *)(*(int *)(unaff_r5 + 0x44) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x698));
  if ((iVar7 < **(int **)(in_stack_0000001c + DAT_0016c97c)) && (0 < iVar7)) {
    (**(code **)(*(int *)unaff_r5 + 0x6c))(unaff_r5,0);
  }
  if (in_stack_0000002c != 0) {
    (**(code **)(*(int *)unaff_r5 + 0x70))(unaff_r5,in_stack_00000050);
  }
  GameStateMap::addWeekRaidShop(unaff_r5);
  GameStateMap::addEventRaidShop(unaff_r5);
  GameStateMap::addEventRaid2Shop(unaff_r5);
  GameStateMap::addEventRaid3Shop(unaff_r5);
  GameStateMap::addAmpouleRaidShop(unaff_r5);
  GameStateMap::addColosseum(unaff_r5);
  GameStateMap::addHeroShop(unaff_r5);
  for (iVar7 = 0; iVar7 < *(int *)(unaff_r5 + 0xd4) + 1; iVar7 = iVar7 + 1) {
    GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x000001b4);
    GameStateMap::MapCafe::MapCafe
              ((MapCafe *)&stack0x00000208,(MapCafe *)(*(int *)(unaff_r5 + 0xd8) + iVar7 * 0x54));
    GameStateMap::MapCafe::operator=((MapCafe *)&stack0x000001b4,(MapCafe *)&stack0x00000208);
    String::~String((String *)&stack0x00000238);
    iVar13 = ZombieCafe::isEventCafeTheme(*(ZombieCafe **)(unaff_r5 + 0xc),(uint)in_stack_000001f0);
    if (iVar13 != 0) {
      piVar18 = *(int **)(unaff_r5 + 0x14);
      pcVar16 = *(code **)(*piVar18 + 0x2c);
      pCVar2 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),0x23,false)
      ;
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,pCVar2,'\f',true);
      in_stack_000001bc = pIVar5;
      (*pcVar16)(piVar18,pIVar5);
      if (in_stack_00000204 != '\0') {
        (**(code **)(*(int *)in_stack_000001bc + 0x20))(in_stack_000001bc,0);
      }
      GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x0000025c,(MapCafe *)&stack0x000001b4);
      Vector<GameStateMap::MapCafe>::setElementAt
                ((Vector<GameStateMap::MapCafe> *)(unaff_r5 + 0xd0),&stack0x0000025c,iVar7);
      String::~String((String *)&stack0x0000028c);
    }
    String::~String((String *)&stack0x000001e4);
  }
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),1,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0;
  ZCImageButton::ZCImageButton(pZVar3,'$',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x24) = pZVar3;
  (*pcVar16)(piVar18,pZVar3);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),4,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0;
  ZCImageButton::ZCImageButton(pZVar3,'\n',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x28) = pZVar3;
  (*pcVar16)(piVar18,pZVar3);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),5,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0;
  ZCImageButton::ZCImageButton(pZVar3,'\"',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x2c) = pZVar3;
  (*pcVar16)(piVar18,pZVar3);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),6,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0;
  ZCImageButton::ZCImageButton(pZVar3,'\x12',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x38) = pZVar3;
  (*pcVar16)(piVar18,pZVar3);
  piVar18 = *(int **)(unaff_r5 + 0x38);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  Vector<String>::elementAt((int)&stack0x000000d8);
  iVar13 = *(int *)(unaff_r5 + 0xc);
  iVar7 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(DAT_0016cf10 + iVar7 * 4 + 0x16cb66) + 0x136) * 4 + iVar13);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  in_stack_00000000 = (GameStateMap *)0x1;
  in_stack_00000004 = 1;
  BitmapTextElement::BitmapTextElement(pBVar8,&stack0x000000d8,uVar19,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x80) = pBVar8;
  (*pcVar16)(piVar18,pBVar8);
  String::~String((String *)&stack0x000000d8);
  piVar18 = *(int **)(unaff_r5 + 0x38);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  String::String((String *)&stack0x000000e0,0);
  iVar13 = *(int *)(unaff_r5 + 0xc);
  iVar7 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(DAT_0016cf14 + iVar7 * 4 + 0x16cbc4) + 0x136) * 4 + iVar13);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  in_stack_00000004 = 1;
  in_stack_00000000 = (GameStateMap *)0xff000000;
  BitmapTextElement::BitmapTextElement(pBVar8,&stack0x000000e0,uVar19,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x84) = pBVar8;
  (*pcVar16)(piVar18,pBVar8);
  String::~String((String *)&stack0x000000e0);
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0016cf18) == '\0') {
    piVar18 = *(int **)(unaff_r5 + 0x84);
    pcVar16 = *(code **)(*piVar18 + 0x44);
    Vector<String>::elementAt((int)&stack0x000000e8);
    (*pcVar16)(piVar18,&stack0x000000e8);
    String::~String((String *)&stack0x000000e8);
  }
  FUN_001652d4(*(undefined4 *)(unaff_r5 + 0x80),
               ((int)*(short *)(*(int *)(unaff_r5 + 0x38) + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)(unaff_r5 + 0x38) + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)(unaff_r5 + 0x84) + 0x14))
            (*(int **)(unaff_r5 + 0x84),*(int *)(*(int *)(unaff_r5 + 0x38) + 0xc) / 2,
             (*(int *)(*(int *)(unaff_r5 + 0x38) + 0x10) * 3) / 2);
  piVar18 = *(int **)(unaff_r5 + 0x38);
  (**(code **)(*piVar18 + 0x18))(piVar18,piVar18[3],piVar18[4] << 1);
  ScreenElement::setOrder(*(ScreenElement **)(unaff_r5 + 0x28),100);
  ScreenElement::setOrder(*(ScreenElement **)(unaff_r5 + 0x2c),100);
  ScreenElement::setOrder(*(ScreenElement **)(unaff_r5 + 0x24),100);
  *(undefined4 *)(unaff_r5 + 0xa4) = 0;
  *(undefined4 *)(unaff_r5 + 0xa8) = 0;
  *(undefined4 *)(unaff_r5 + 0x420) = 0;
  unaff_r5[0x180] = (GameStateMap)0x0;
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),3,false);
  pZVar3 = (ZCImageButton *)operator_new(0xa0);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0;
  ZCImageButton::ZCImageButton(pZVar3,'$',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(unaff_r5 + 0x130) = pZVar3;
  (*pcVar16)(piVar18,pZVar3);
  *(undefined4 *)(*(int *)(unaff_r5 + 0x130) + 0x8c) = 0xff000000;
  piVar18 = *(int **)(unaff_r5 + 0x14);
  uVar19 = *(undefined4 *)(unaff_r5 + DAT_0016cf20);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  Vector<String>::elementAt((int)&stack0x000000f0);
  pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0;
  TrueTypeTextElement::TrueTypeTextElement(pTVar6,&stack0x000000f0,uVar19,0xffffffff);
  *(TrueTypeTextElement **)(unaff_r5 + 0x150) = pTVar6;
  (*pcVar16)(piVar18,pTVar6);
  String::~String((String *)&stack0x000000f0);
  iVar7 = DAT_0016cf2c;
  piVar18 = *(int **)(in_stack_0000001c + DAT_0016cf28);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar18,*(TrueTypeTextElement **)(unaff_r5 + 0x150));
  L_PrintLog((char *)(iVar7 + 0x16cd66),(char *)(DAT_0016cf30 + 0x16cd6a));
  sprintf(&stack0x00000384,(char *)(DAT_0016cf34 + 0x16cd78),*(int *)(*piVar18 + 4) + 1);
  L_PrintLog((char *)(iVar7 + 0x16cd66),&stack0x00000384);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x150) + 0x7f) = 0x11;
  TrueTypeTextElement::setBaseTransform
            (*(TrueTypeTextElement **)(unaff_r5 + 0x150),in_stack_00000044);
  piVar18 = *(int **)(unaff_r5 + 0x150);
  pcVar16 = *(code **)(*piVar18 + 0x18);
  uVar19 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0x130) + 0xc));
  iVar7 = SmDev();
  __addsf3(uVar19,*(undefined4 *)(iVar7 * 4 + *(int *)(in_stack_0000001c + DAT_0016cf38)));
  uVar19 = __fixsfsi();
  (*pcVar16)(piVar18,uVar19,*(undefined4 *)(*(int *)(unaff_r5 + 0x130) + 0x10));
  *(undefined4 *)(unaff_r5 + 0x154) = 0;
  *(undefined4 *)(unaff_r5 + 0x17c) = 0;
  *(undefined4 *)(unaff_r5 + 0x15c) = 0xffffffff;
  String::operator=((String *)(unaff_r5 + 0x160),0);
  *(undefined4 *)(unaff_r5 + 0x158) = 0xffffffff;
  GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x000002b0,(MapCafe *)(unaff_r5 + 0x130));
  Vector<GameStateMap::MapCafe>::addElement
            ((Vector<GameStateMap::MapCafe> *)(unaff_r5 + 0xc4),&stack0x000002b0);
  String::~String((String *)&stack0x000002e0);
  GameStateMap::updateList(unaff_r5);
  iVar7 = DAT_0016cf40;
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016cf3c) = 0;
  iVar13 = CCServer::IsConnected(*(void **)(*(int *)(unaff_r5 + 0xc) + iVar7));
  if (iVar13 != 0) {
    CCServer::UpdateFriends
              (*(void **)((int)*(void **)(unaff_r5 + 0xc) + iVar7),
               *(_func_void_void_ptr **)(in_stack_0000001c + DAT_0016cf44),
               *(void **)(unaff_r5 + 0xc));
  }
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  this = (RandomCafeElement *)operator_new(100);
  RandomCafeElement::RandomCafeElement(this,unaff_r5);
  *(RandomCafeElement **)(unaff_r5 + 0x3d0) = this;
  (*pcVar16)(piVar18,this);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  Vector<String>::elementAt((int)&stack0x000000f8);
  iVar13 = *(int *)(unaff_r5 + 0xc);
  iVar7 = SmDev();
  uVar19 = *(undefined4 *)((*(int *)(DAT_0016cf4c + iVar7 * 4 + 0x16ce9c) + 0x136) * 4 + iVar13);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  in_stack_00000000 = (GameStateMap *)0x1;
  in_stack_00000004 = 1;
  BitmapTextElement::BitmapTextElement(pBVar8,&stack0x000000f8,uVar19,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x3d4) = pBVar8;
  (*pcVar16)(piVar18,pBVar8);
  String::~String((String *)&stack0x000000f8);
  uVar19 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + DAT_0016cf50),false);
  *(undefined4 *)(unaff_r5 + 0x428) = uVar19;
  uVar19 = PackedImage::getImages(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f0),false);
  iVar7 = DAT_0016cf54;
  *(undefined4 *)(unaff_r5 + DAT_0016cf54) = uVar19;
  this_00 = (MessageElement *)operator_new(0x90);
  MessageElement::MessageElement(this_00,*(CImage ***)(unaff_r5 + 0x428),'\f');
  *(MessageElement **)(unaff_r5 + 0x430) = this_00;
  ScreenElement::setOrder((ScreenElement *)this_00,0x69);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + 0x430));
  pNVar9 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (pNVar9,*(CImage **)(*(int *)(unaff_r5 + iVar7) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x428) + 0x28),extraout_s0);
  iVar13 = DAT_0016d17c;
  *(NoticeDialog **)(unaff_r5 + DAT_0016d17c) = pNVar9;
  ScreenElement::setOrder((ScreenElement *)pNVar9,4);
  (**(code **)(**(int **)(unaff_r5 + iVar13) + 0x1c))(*(int **)(unaff_r5 + iVar13),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + iVar13));
  this_01 = (ConfirmDialog *)operator_new(0x9c);
  in_stack_00000000 = (GameStateMap *)0x0;
  in_stack_00000004 = 0x40000000;
  ConfirmDialog::ConfirmDialog
            (this_01,*(CImage **)(*(int *)(unaff_r5 + iVar7) + 0x14),
             *(CImage **)(*(int *)(unaff_r5 + 0x428) + 0x28),
             *(CImage **)(*(int *)(unaff_r5 + 0x428) + 0x44),0,extraout_s0_00,(CImage *)0x40000000);
  iVar7 = DAT_0016d180;
  *(ConfirmDialog **)(unaff_r5 + DAT_0016d180) = this_01;
  ScreenElement::setOrder((ScreenElement *)this_01,99);
  (**(code **)(**(int **)(unaff_r5 + iVar7) + 0x1c))(*(int **)(unaff_r5 + iVar7),0x12);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + iVar7));
  this_02 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_02);
  iVar7 = DAT_0016d184;
  *(BuyToxinDialog **)(unaff_r5 + DAT_0016d184) = this_02;
  ScreenElement::setOrder((ScreenElement *)this_02,0xffffffc8);
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))
            (*(int **)(unaff_r5 + 0x14),*(undefined4 *)(unaff_r5 + iVar7));
  (**(code **)(**(int **)(unaff_r5 + iVar7) + 0x1c))(*(int **)(unaff_r5 + iVar7),0x12);
  (**(code **)(**(int **)(unaff_r5 + iVar7) + 0x20))(*(int **)(unaff_r5 + iVar7),0);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  this_03 = (InviteDialog *)operator_new(0xd4);
  InviteDialog::InviteDialog(this_03,extraout_s0_01);
  *(InviteDialog **)(unaff_r5 + 0x438) = this_03;
  (*pcVar16)(piVar18,this_03);
  (**(code **)(**(int **)(unaff_r5 + 0x438) + 0x1c))(*(int **)(unaff_r5 + 0x438),0x12);
  ScreenElement::setOrder(*(ScreenElement **)(unaff_r5 + 0x438),5);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  this_04 = (InviteContactList *)operator_new(0xb4);
  InviteContactList::InviteContactList(this_04);
  iVar7 = DAT_0016d188;
  *(InviteContactList **)(unaff_r5 + DAT_0016d188) = this_04;
  (*pcVar16)(piVar18,this_04);
  (**(code **)(**(int **)(unaff_r5 + iVar7) + 0x1c))(*(int **)(unaff_r5 + iVar7),0x12);
  ScreenElement::setOrder(*(ScreenElement **)(unaff_r5 + 0x438),6);
  piVar18 = *(int **)(unaff_r5 + 0x14);
  pcVar16 = *(code **)(*piVar18 + 0x2c);
  this_05 = (ReferralCodeDialog *)operator_new(0xa4);
  ReferralCodeDialog::ReferralCodeDialog(this_05);
  *(ReferralCodeDialog **)(unaff_r5 + 0x448) = this_05;
  (*pcVar16)(piVar18,this_05);
  (**(code **)(**(int **)(unaff_r5 + 0x448) + 0x1c))(*(int **)(unaff_r5 + 0x448),0x12);
  ScreenElement::setOrder(*(ScreenElement **)(unaff_r5 + 0x448),7);
  this_06 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_06,(ScreenElement *)0x0);
  *(ScreenElement **)(unaff_r5 + DAT_0016d18c) = this_06;
  this_07 = (TutorialArrow *)operator_new(0x7c);
  TutorialArrow::TutorialArrow(this_07);
  *(TutorialArrow **)(unaff_r5 + 0x440) = this_07;
  iVar7 = DAT_0016d190;
  (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x2c))(*(int **)(unaff_r5 + 0x14),this_07);
  iVar13 = *(int *)(*(int *)(unaff_r5 + 0xc) + iVar7);
  uVar19 = *(undefined4 *)(unaff_r5 + 0x440);
  *(undefined4 *)(iVar13 + DAT_0016d194) = *(undefined4 *)(unaff_r5 + 0x430);
  *(undefined4 *)(iVar13 + 0x788) = uVar19;
  *(undefined4 *)(iVar13 + 0x778) = *(undefined4 *)(in_stack_0000001c + DAT_0016d198);
  *(GameStateMap **)(iVar13 + DAT_0016d19c) = unaff_r5;
  iVar13 = TutorialSystem::isTutorialCompleted
                     (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7),'%');
  if (iVar13 == 0) {
    TutorialSystem::setTutorialIncomplete
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7),'$');
    uVar10 = '\x1d';
    bVar11 = false;
    this_08 = *(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7);
  }
  else {
    iVar13 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7),'2');
    if (((iVar13 != 0) ||
        (iVar13 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7),'3'),
        iVar13 != 0)) ||
       (iVar13 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7),'4'), iVar13 != 0
       )) goto LAB_0016d1be;
    if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d1a0) != '\0') {
      GameStateMap::displayReferralDescription(unaff_r5);
      goto LAB_0016d1be;
    }
    iVar13 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(unaff_r5 + 0xc) + DAT_0016d1a4));
    if (iVar13 == 0) {
      this_08 = *(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7);
      uVar10 = '5';
    }
    else {
      this_08 = *(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar7);
      uVar10 = '3';
      if (*(int *)(unaff_r5 + 200) < 1) {
        uVar10 = '4';
      }
    }
    bVar11 = true;
  }
  TutorialSystem::triggerEvent(this_08,uVar10,bVar11);
LAB_0016d1be:
  if (unaff_r5[DAT_0016d4e8] != (GameStateMap)0x0) {
    pNVar9 = *(NoticeDialog **)(unaff_r5 + DAT_0016d4f0);
    Vector<String>::elementAt((int)&stack0x00000100);
    Vector<String>::elementAt((int)&stack0x00000108);
    in_stack_00000000 = unaff_r5;
    NoticeDialog::show(pNVar9,&stack0x00000100,&stack0x00000108,0);
    String::~String((String *)&stack0x00000108);
    String::~String((String *)&stack0x00000100);
  }
  unaff_r5[0x450] = (GameStateMap)0x0;
  if (*(int *)(*(int *)(unaff_r5 + 0x44) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x698)) < 1) {
    CapcomDate::now((CapcomDate *)&stack0x000001b4);
    iVar7 = CapcomDate::daysBetween
                      (*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x8a0),
                       *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x8a4),in_stack_000001b4,
                       in_stack_000001b8);
    if ((iVar7 != 0) &&
       (iVar7 = CapcomDate::secondsBetween
                          (*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d4f8),
                           *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d4f8 + 4),
                           in_stack_000001b4,in_stack_000001b8),
       **(short **)(in_stack_0000001c + DAT_0016d4fc) < iVar7)) {
      memcpy((void *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d4f8),&stack0x000001b4,7);
      (**(code **)(*(int *)unaff_r5 + 0x7c))(unaff_r5);
    }
  }
  ZombieCafe::checkTombstoneDayRecovery();
  CapcomDate::today((CapcomDate *)&stack0x00000110);
  iVar13 = CapcomDate::daysBetween
                     (*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d500),
                      *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d500 + 4),in_stack_00000110
                      ,in_stack_00000114);
  iVar7 = DAT_0016d504;
  if (0 < iVar13) {
    memcpy((void *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d500),&stack0x00000110,7);
    iVar1 = DAT_0016d50c;
    iVar13 = DAT_0016d508;
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016d508) = 0;
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + iVar1) = 0;
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + iVar7) = 0;
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x9d0) = 0;
    iVar17 = *(int *)(unaff_r5 + 0xc);
    if (*(char *)(iVar17 + DAT_0016d510) != '\0') {
      *(int *)(iVar17 + iVar13) =
           *(int *)(iVar17 + iVar13) + **(int **)(in_stack_0000001c + DAT_0016d514);
    }
    iVar13 = *(int *)(unaff_r5 + 0xc);
    if (*(char *)(iVar13 + DAT_0016d518) != '\0') {
      *(int *)(iVar13 + iVar7) =
           *(int *)(iVar13 + iVar7) + **(int **)(in_stack_0000001c + DAT_0016d51c);
    }
    iVar7 = *(int *)(unaff_r5 + 0xc);
    if (*(char *)(iVar7 + DAT_0016d520) != '\0') {
      *(int *)(iVar7 + iVar1) =
           *(int *)(iVar7 + iVar1) + **(int **)(in_stack_0000001c + DAT_0016d514);
    }
    iVar7 = *(int *)(unaff_r5 + 0xc);
    if (*(char *)(iVar7 + DAT_0016d524) != '\0') {
      *(int *)(iVar7 + 0x9d0) =
           *(int *)(iVar7 + 0x9d0) + **(int **)(in_stack_0000001c + DAT_0016d51c);
    }
  }
  if (in_stack_00000484 == **(int **)(in_stack_0000001c + DAT_0016d528)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


