/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b556 FUN_0015b556 */

void FUN_0015b556(void)

{
  int iVar1;
  int iVar2;
  GameStateCafe *this;
  GameStateLoading *this_00;
  GameStateGatya *extraout_r1;
  ZCImageButton *pZVar3;
  ZombieCafe *this_01;
  NoticeDialog *pNVar4;
  GameStateGatya *unaff_r5;
  int unaff_r6;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float fVar5;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  undefined4 extraout_s1;
  undefined8 uVar6;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  float fVar7;
  int in_stack_00000018;
  
  GameStateGatya::setSelectScreen_Buttons(unaff_r5);
  (**(code **)(*(int *)unaff_r5 + 0x10))(unaff_r5);
  *(undefined4 *)(unaff_r5 + DAT_0015b6c0) = 0x1000;
  GameStateGatya::loadTextureMessageOff(unaff_r5);
  FUN_0015c58a();
  this = DAT_0015b6a0;
  if (*(char *)(*(int *)(unaff_r5 + (int)DAT_0015b6a0) + 0x14) != '\0') {
    FUN_0015c58a();
  }
  if (*(char *)(*(int *)(unaff_r5 + DAT_0015b6e4) + 0x14) != '\0') {
    FUN_0015c58a();
  }
  this_01 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(this_01);
  if (iVar1 == 0) {
    FUN_0015cb5c();
  }
  if ((int)**(short **)(unaff_r6 + DAT_0015b6e8) < *(int *)(this_01 + DAT_0015b6ec)) {
    FUN_0015cb5c();
  }
  iVar1 = javaIsOpenFixWebView();
  uVar6 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar1 != 0) {
    uVar6 = FUN_0015c58a();
  }
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x208),
                     *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015b6f0),(float)uVar6,
                     (float)((ulonglong)uVar6 >> 0x20));
  uVar6 = CONCAT44(extraout_s1_00,extraout_s0_00);
  iVar1 = *(int *)(unaff_r5 + 0xc);
  if (iVar2 != 0) {
    iVar1 = 0;
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_00);
    in_stack_00000018 = *(int *)(unaff_r5 + 0xc);
    this = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)this);
    uVar6 = FUN_0015c50a();
  }
  pZVar3 = *(ZCImageButton **)(unaff_r5 + DAT_0015b6f4);
  if (pZVar3[0x14] == (ZCImageButton)0x0) {
    uVar6 = FUN_0015cb68();
  }
  iVar1 = ZCImageButton::contains
                    (pZVar3,*(long *)(iVar1 + DAT_0015b6f0),(float)uVar6,
                     (float)((ulonglong)uVar6 >> 0x20));
  if (iVar1 == 0) {
    FUN_0015cb68();
  }
  BuyToxinDialog::show(*(BuyToxinDialog **)(unaff_r5 + 0xed0));
  *(int *)(*(int *)(unaff_r5 + 0xed0) + 100) = DAT_0015b6f8 + 0x15b646;
  uVar6 = FUN_0015c58a();
  iVar1 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x80),
                     *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015b6f0),(float)uVar6,
                     (float)((ulonglong)uVar6 >> 0x20));
  if (iVar1 == 0) {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x9c),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba74),extraout_s0_01,
                       extraout_s1_01);
    if (iVar1 == 0) {
      pZVar3 = *(ZCImageButton **)(unaff_r5 + 0xb8);
      fVar5 = extraout_s0_02;
      fVar7 = extraout_s1_02;
      if (pZVar3 == (ZCImageButton *)0x0) {
        pZVar3 = (ZCImageButton *)FUN_0015cb84();
        fVar5 = extraout_s0_03;
        fVar7 = extraout_s1_03;
      }
      iVar1 = ZCImageButton::contains
                        (pZVar3,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba74),fVar5,fVar7);
      fVar5 = extraout_s0_04;
      if (iVar1 == 0) {
        fVar5 = (float)FUN_0015cb84();
      }
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar5);
      in_stack_00000018 = 2;
    }
    else {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_02);
      in_stack_00000018 = 1;
    }
  }
  else {
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_01);
  }
  GameStateGatya::setLineupWebWindow(unaff_r5,in_stack_00000018);
  pZVar3 = (ZCImageButton *)FUN_0015c58a();
  fVar5 = extraout_s0_05;
  fVar7 = extraout_s1_04;
  if (pZVar3[0x14] == (ZCImageButton)0x0) {
    pZVar3 = (ZCImageButton *)FUN_0015cb8e();
    fVar5 = extraout_s0_06;
    fVar7 = extraout_s1_05;
  }
  if (pZVar3[0x86] == (ZCImageButton)0x0) {
    pZVar3 = (ZCImageButton *)FUN_0015cb8e();
    fVar5 = extraout_s0_07;
    fVar7 = extraout_s1_06;
  }
  iVar1 = ZCImageButton::contains(pZVar3,*(long *)(*(int *)(unaff_r5 + 0xc) + 0xed0),fVar5,fVar7);
  fVar5 = extraout_s0_08;
  if (iVar1 == 0) {
    fVar5 = (float)FUN_0015cb8e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar5);
  printf((char *)(DAT_0015ba78 + 0x15b79e));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    pNVar4 = *(NoticeDialog **)(unaff_r5 + (int)this);
    String::String((String *)&stack0x000000f0,(char *)(DAT_0015ba7c + 0x15b7b4));
    Vector<String>::elementAt((int)&stack0x000000f8);
    NoticeDialog::show(pNVar4,&stack0x000000f0,&stack0x000000f8);
    String::~String((String *)&stack0x000000f8);
    FUN_0015c478(&stack0x000000f0);
  }
  iVar1 = *(int *)(unaff_r5 + 0xd0);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r5 + 0xd4) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba84)) {
      FUN_0015cb9a();
    }
    this = *(GameStateCafe **)(unaff_r5 + (int)this);
    Vector<String>::elementAt((int)&stack0x00000100);
    Vector<String>::elementAt((int)&stack0x00000108);
    iVar1 = 0;
    NoticeDialog::show((NoticeDialog *)this,&stack0x00000100,&stack0x00000108);
    String::~String((String *)&stack0x00000108);
    FUN_0015c478(&stack0x00000100);
  }
  if (iVar1 != 1) {
    FUN_0015cb9a();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(unaff_r5 + 0xd4) <= iVar1) {
    FUN_0015cb9a();
  }
  pNVar4 = *(NoticeDialog **)(unaff_r5 + (int)this);
  String::String((String *)&stack0x00000110,(char *)(DAT_0015ba8c + 0x15b866));
  Vector<String>::elementAt((int)&stack0x00000118);
  NoticeDialog::show(pNVar4,&stack0x00000110,&stack0x00000118);
  String::~String((String *)&stack0x00000118);
  FUN_0015c478(&stack0x00000110);
  pNVar4 = *(NoticeDialog **)(unaff_r5 + (int)this);
  String::String((String *)&stack0x00000120,(char *)(DAT_0015ba90 + 0x15b8a0));
  Vector<String>::elementAt((int)&stack0x00000128);
  NoticeDialog::show(pNVar4,&stack0x00000120,&stack0x00000128);
  String::~String((String *)&stack0x00000128);
  String::~String((String *)&stack0x00000120);
  FUN_0015c414(0x7000);
  *(undefined4 *)(unaff_r5 + DAT_0015ba98) = *(undefined4 *)(unaff_r5 + 0xe0);
  *(undefined4 *)(unaff_r5 + DAT_0015ba9c) = *(undefined4 *)(unaff_r5 + 0xe4);
  *(undefined4 *)(unaff_r5 + DAT_0015baa0) = *(undefined4 *)(unaff_r5 + 0xe8);
  GameStateGatya::buyConfirmed(unaff_r5,extraout_r1);
  pZVar3 = (ZCImageButton *)FUN_0015c58a();
  fVar5 = extraout_s0_09;
  fVar7 = extraout_s1_07;
  if (pZVar3[0x14] == (ZCImageButton)0x0) {
    pZVar3 = (ZCImageButton *)FUN_0015cbe6();
    fVar5 = extraout_s0_10;
    fVar7 = extraout_s1_08;
  }
  if (pZVar3[0x86] == (ZCImageButton)0x0) {
    pZVar3 = (ZCImageButton *)FUN_0015cbe6();
    fVar5 = extraout_s0_11;
    fVar7 = extraout_s1_09;
  }
  iVar1 = ZCImageButton::contains(pZVar3,*(long *)(pNVar4 + *(int *)(unaff_r5 + 0xc)),fVar5,fVar7);
  fVar5 = extraout_s0_12;
  if (iVar1 == 0) {
    fVar5 = (float)FUN_0015cbe6();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar5);
  printf((char *)(DAT_0015baa4 + 0x15b944));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    this = *(GameStateCafe **)(unaff_r5 + (int)this);
    String::String((String *)&stack0x00000130,(char *)(DAT_0015baa8 + 0x15b95a));
    Vector<String>::elementAt((int)&stack0x00000138);
    NoticeDialog::show((NoticeDialog *)this,&stack0x00000130,&stack0x00000138);
    String::~String((String *)&stack0x00000138);
    FUN_0015c478(&stack0x00000130);
  }
  iVar1 = *(int *)(unaff_r5 + 0xf0);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r5 + 0xf4) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba84)) {
      FUN_0015cbf2();
    }
    this = *(GameStateCafe **)(unaff_r5 + (int)this);
    Vector<String>::elementAt((int)&stack0x00000140);
    Vector<String>::elementAt((int)&stack0x00000148);
    iVar1 = 0;
    NoticeDialog::show((NoticeDialog *)this,&stack0x00000140,&stack0x00000148);
    String::~String((String *)&stack0x00000148);
    FUN_0015c478(&stack0x00000140);
  }
  if (iVar1 != 1) {
    FUN_0015cbf2();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(unaff_r5 + 0xf4) <= iVar1) {
    FUN_0015cbf2();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0015baac) == '\0') {
    FUN_0015cbf2();
  }
  pNVar4 = *(NoticeDialog **)(unaff_r5 + (int)this);
  String::String((String *)&stack0x00000150,(char *)(DAT_0015bab0 + 0x15ba12));
  Vector<String>::elementAt((int)&stack0x00000158);
  NoticeDialog::show(pNVar4,&stack0x00000150,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  FUN_0015c478(&stack0x00000150);
  pNVar4 = *(NoticeDialog **)(unaff_r5 + (int)pNVar4);
  String::String((String *)&stack0x00000160,(char *)(DAT_0015bab4 + 0x15ba48));
  Vector<String>::elementAt((int)&stack0x00000168);
  NoticeDialog::show(pNVar4,&stack0x00000160,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  String::~String((String *)&stack0x00000160);
  *(undefined4 *)(unaff_r5 + DAT_0015c1f4) = 0x7000;
  FUN_0015c58a();
  return;
}


