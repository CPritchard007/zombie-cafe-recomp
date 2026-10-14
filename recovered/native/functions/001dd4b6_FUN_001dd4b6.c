/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dd4b6 FUN_001dd4b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dd4b6(void)

{
  ZombieCafe *pZVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  String *this;
  HCOManager *this_00;
  uint uVar5;
  ZCImageButton *this_01;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  code *in_r3;
  int iVar6;
  int unaff_r4;
  int iVar7;
  code *pcVar8;
  HudElement *unaff_r5;
  undefined4 uVar9;
  int *piVar10;
  float fVar11;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined4 extraout_s0_04;
  float extraout_s0_05;
  undefined4 extraout_s0_06;
  float extraout_s0_07;
  undefined4 extraout_s0_08;
  undefined4 extraout_s0_09;
  float extraout_s0_10;
  undefined4 extraout_s0_11;
  float extraout_s0_12;
  undefined4 extraout_s0_13;
  float extraout_s0_14;
  undefined4 extraout_s0_15;
  float extraout_s0_16;
  float extraout_s0_17;
  float extraout_s0_18;
  float extraout_s0_19;
  float extraout_s0_20;
  float extraout_s0_21;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined8 uVar12;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 extraout_s1_08;
  undefined4 extraout_s1_09;
  undefined4 extraout_s1_10;
  undefined4 extraout_s1_11;
  undefined4 extraout_s1_12;
  undefined4 extraout_s1_13;
  undefined4 extraout_s1_14;
  undefined4 extraout_s1_15;
  undefined4 extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  float extraout_s1_19;
  float fVar13;
  int in_stack_00000010;
  int in_stack_0000017c;
  
  (*in_r3)();
  if (unaff_r5[unaff_r4] == (HudElement)0x0) {
    FUN_001dde8c();
  }
  pZVar1 = *(ZombieCafe **)(unaff_r5 + 0x60);
  if (*(int *)(pZVar1 + 0x680) < 8) {
    pZVar1 = (ZombieCafe *)FUN_001dde8c();
  }
  iVar2 = ZombieCafe::checkStaminaEventTime(pZVar1);
  if (iVar2 == 0) {
    FUN_001dde8c();
  }
  iVar7 = *(int *)(unaff_r5 + 0x110);
  piVar3 = *(int **)(unaff_r5 + 0x114);
  iVar2 = *(int *)(iVar7 + 8);
  if (*(char *)(iVar7 + 0x14) == '\0') {
    iVar6 = *piVar3;
  }
  else {
    iVar6 = *piVar3;
    iVar2 = iVar2 + *(int *)(iVar7 + 0x10);
  }
  (**(code **)(iVar6 + 0x14))(piVar3,*(undefined4 *)(iVar7 + 4),iVar2);
  (**(code **)(**(int **)(unaff_r5 + 0x114) + 0x20))(*(int **)(unaff_r5 + 0x114),1);
  iVar2 = DAT_001dd6d4;
  if (*(int *)(unaff_r5 + 0x118) != *(int *)(*(int *)(unaff_r5 + 0x60) + DAT_001dd6d4)) {
    piVar3 = *(int **)(unaff_r5 + 0xd0);
    pcVar8 = *(code **)(*piVar3 + 0x44);
    String::valueOf((int)&stack0x00000028);
    (*pcVar8)(piVar3,&stack0x00000028);
    String::~String((String *)&stack0x00000028);
    *(undefined4 *)(unaff_r5 + 0x118) = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + iVar2);
  }
  iVar7 = *(int *)(unaff_r5 + 0x11c);
  iVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x60));
  if (iVar7 != iVar2) {
    piVar3 = *(int **)(unaff_r5 + 0xcc);
    pcVar8 = *(code **)(*piVar3 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x60));
    String::valueOf((int)&stack0x00000030);
    (*pcVar8)(piVar3,&stack0x00000030);
    String::~String((String *)&stack0x00000030);
    uVar4 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x60));
    *(undefined4 *)(unaff_r5 + 0x11c) = uVar4;
  }
  if (*(int *)(unaff_r5 + 0x120) != *(int *)(*(int *)(unaff_r5 + 0x60) + 0x680)) {
    piVar3 = *(int **)(unaff_r5 + 0xc4);
    pcVar8 = *(code **)(*piVar3 + 0x44);
    String::valueOf((int)&stack0x00000038);
    (*pcVar8)(piVar3,&stack0x00000038);
    String::~String((String *)&stack0x00000038);
    *(undefined4 *)(unaff_r5 + 0x120) = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0x680);
  }
  uVar9 = *(undefined4 *)(unaff_r5 + 0x124);
  uVar4 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(unaff_r5 + 0x60));
  iVar2 = __aeabi_fcmpeq(uVar9,uVar4);
  if (iVar2 == 0) {
    fVar11 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(unaff_r5 + 0x60));
    RatingBar::setValue(fVar11);
    uVar4 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(unaff_r5 + 0x60));
    *(undefined4 *)(unaff_r5 + 0x124) = uVar4;
  }
  uVar9 = *(undefined4 *)(unaff_r5 + 0x128);
  uVar4 = ObjectiveSystem::getRatingBonus();
  iVar2 = __aeabi_fcmpeq(uVar9,uVar4);
  if (iVar2 == 0) {
    uVar4 = ObjectiveSystem::getRatingBonus();
    *(undefined4 *)(unaff_r5 + 0x128) = uVar4;
    fVar11 = (float)ObjectiveSystem::getRatingBonus();
    RatingBar::setBonusValue(fVar11);
  }
  iVar2 = DAT_001dd6dc;
  if (*(int *)(unaff_r5 + 300) != *(int *)(*(ZombieCafe **)(unaff_r5 + 0x60) + DAT_001dd6dc)) {
    iVar7 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0x60));
    iVar6 = *(int *)(unaff_r5 + 0x60);
    piVar3 = *(int **)(in_stack_00000010 + DAT_001dd6e0);
    if (iVar7 == 0) {
      piVar10 = *(int **)(unaff_r5 + 200);
      if (*(int *)(iVar6 + iVar2) < *(int *)(*(int *)(iVar6 + 0x680) * 4 + *piVar3)) {
        pcVar8 = *(code **)(*piVar10 + 0x44);
        String::valueOf((int)&stack0x00000050);
        String::String((String *)&stack0x00000058,(char *)(DAT_001dda68 + 0x1dd700));
        String::operator+((String *)&stack0x00000060,&stack0x00000050,&stack0x00000058);
        String::valueOf((long)&stack0x00000068);
        String::operator+((String *)&stack0x00000070,&stack0x00000060,&stack0x00000068);
        String::String((String *)&stack0x00000078,(char *)(DAT_001dda6c + 0x1dd732));
        String::operator+((String *)&stack0x00000080,&stack0x00000070,&stack0x00000078);
        (*pcVar8)(piVar10,&stack0x00000080);
        String::~String((String *)&stack0x00000080);
        String::~String((String *)&stack0x00000078);
        String::~String((String *)&stack0x00000070);
        String::~String((String *)&stack0x00000068);
        String::~String((String *)&stack0x00000060);
        String::~String((String *)&stack0x00000058);
        this = (String *)&stack0x00000050;
      }
      else {
        pcVar8 = *(code **)(*piVar10 + 0x44);
        String::String((String *)&stack0x00000048,
                       (String *)
                       (*(int *)(*(int *)(iVar6 + 0x4b0) + 8) +
                       **(int **)(in_stack_00000010 + DAT_001dd6e8) * 8));
        (*pcVar8)(piVar10,&stack0x00000048);
        this = (String *)&stack0x00000048;
      }
    }
    else {
      piVar10 = *(int **)(unaff_r5 + 200);
      pcVar8 = *(code **)(*piVar10 + 0x44);
      String::String((String *)&stack0x00000040,
                     (String *)
                     (*(int *)(*(int *)(iVar6 + 0x4b0) + 8) +
                     **(int **)(in_stack_00000010 + DAT_001dd6e4) * 8));
      (*pcVar8)(piVar10,&stack0x00000040);
      this = (String *)&stack0x00000040;
    }
    String::~String(this);
    if (*(int *)(*(int *)(unaff_r5 + 0x60) + iVar2) < *(int *)(unaff_r5 + 300)) {
      ProgressBar::setValue(*(ProgressBar **)(unaff_r5 + 0xf8),0,true);
    }
    *(undefined4 *)(unaff_r5 + 300) = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + iVar2);
    ProgressBar::setValue
              (*(ProgressBar **)(unaff_r5 + 0xf8),*(int *)(*(int *)(unaff_r5 + 0x60) + iVar2),false)
    ;
    ProgressBar::setMaximumValue
              (*(ProgressBar **)(unaff_r5 + 0xf8),
               *(int *)(*(int *)(*(int *)(unaff_r5 + 0x60) + 0x680) * 4 + *piVar3));
  }
  piVar3 = *(int **)(unaff_r5 + 0xdc);
  pcVar8 = *(code **)(*piVar3 + 0x44);
  String::valueOf((int)&stack0x00000088);
  String::operator+((String *)&stack0x00000090,&stack0x00000088);
  String::valueOf((int)&stack0x00000098);
  String::operator+((String *)&stack0x000000a0,&stack0x00000090,&stack0x00000098);
  (*pcVar8)(piVar3,&stack0x000000a0);
  String::~String((String *)&stack0x000000a0);
  String::~String((String *)&stack0x00000098);
  String::~String((String *)&stack0x00000090);
  String::~String((String *)&stack0x00000088);
  piVar3 = *(int **)(unaff_r5 + 0xd8);
  pcVar8 = *(code **)(*piVar3 + 0x44);
  String::valueOf((int)&stack0x000000a8);
  String::operator+((String *)&stack0x000000b0,&stack0x000000a8);
  String::valueOf((int)&stack0x000000b8);
  String::operator+((String *)&stack0x000000c0,&stack0x000000b0,&stack0x000000b8);
  (*pcVar8)(piVar3,&stack0x000000c0);
  String::~String((String *)&stack0x000000c0);
  String::~String((String *)&stack0x000000b8);
  String::~String((String *)&stack0x000000b0);
  String::~String((String *)&stack0x000000a8);
  piVar3 = *(int **)(unaff_r5 + 0xe0);
  pcVar8 = *(code **)(*piVar3 + 0x44);
  String::valueOf((int)&stack0x000000c8);
  String::operator+((String *)&stack0x000000d0,&stack0x000000c8);
  String::valueOf((int)&stack0x000000d8);
  String::operator+((String *)&stack0x000000e0,&stack0x000000d0,&stack0x000000d8);
  (*pcVar8)(piVar3,&stack0x000000e0);
  String::~String((String *)&stack0x000000e0);
  String::~String((String *)&stack0x000000d8);
  String::~String((String *)&stack0x000000d0);
  String::~String((String *)&stack0x000000c8);
  if (*(char *)(*(int *)(unaff_r5 + 0xf4) + 0x14) != '\0') {
    this_00 = (HCOManager *)HCOManager::getInstance();
    uVar4 = HCOManager::getHCORemainingTime(this_00);
    iVar2 = __divsi3(uVar4,1000);
    if (iVar2 < 1) {
      (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),0);
      piVar3 = *(int **)(unaff_r5 + 0xf4);
      (**(code **)(*piVar3 + 0x20))(piVar3,0);
    }
    else {
      iVar7 = __divsi3(iVar2,DAT_001ddabc);
      if (iVar7 == 0) {
        if (DAT_001ddac0 < iVar2) {
          __aeabi_idivmod(iVar2,0xe10);
          uVar4 = __divsi3(iVar2,0xe10);
          uVar9 = __divsi3(extraout_r1,0x3c);
          __aeabi_idivmod(extraout_r1,0x3c);
          sprintf(&stack0x000000fc,(char *)(DAT_001ddac4 + 0x1dda0e),uVar4,uVar9);
        }
        else {
          uVar4 = __divsi3(iVar2,0x3c);
          __aeabi_idivmod(iVar2,0x3c);
          sprintf(&stack0x000000fc,(char *)(DAT_001ddac8 + 0x1dda34),uVar4,extraout_r1_00);
        }
      }
      else {
        sprintf(&stack0x000000fc,(char *)(DAT_001ddacc + 0x1dda44));
      }
      piVar3 = *(int **)(unaff_r5 + 0xf4);
      pcVar8 = *(code **)(*piVar3 + 0x44);
      String::String((String *)&stack0x000000e8,&stack0x000000fc);
      (*pcVar8)(piVar3,&stack0x000000e8);
      String::~String((String *)&stack0x000000e8);
    }
  }
  ScreenElement::tick((long)unaff_r5);
  pZVar1 = *(ZombieCafe **)(unaff_r5 + 0x60);
  iVar7 = ZombieCafe::unhandledPressOrLongEvent(pZVar1);
  iVar2 = DAT_001dde5c;
  if (iVar7 == 0) goto LAB_001ddea0;
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x88),*(long *)(pZVar1 + DAT_001dde5c),
                     extraout_s0,extraout_s1);
  uVar12 = CONCAT44(extraout_s1_00,extraout_s0_00);
  if (iVar7 != 0) {
    iVar7 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0xb);
    uVar12 = CONCAT44(extraout_s1_01,extraout_s0_01);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_01);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar7 = DAT_001dde5c;
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xa0),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  if (iVar6 == 0) {
    iVar6 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xa4),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + iVar7),extraout_s0_02,extraout_s1_02);
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(unaff_r5 + 0x68);
      pcVar8 = *(code **)(unaff_r5 + 100);
      uVar9 = 0x13;
      goto LAB_001ddb96;
    }
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xa8),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + iVar7),extraout_s0_03,extraout_s1_03);
    uVar12 = CONCAT44(extraout_s1_04,extraout_s0_04);
    if (iVar7 != 0) {
      uVar4 = *(undefined4 *)(unaff_r5 + 0x68);
      pcVar8 = *(code **)(unaff_r5 + 100);
      uVar9 = 0x1b;
      goto LAB_001ddb96;
    }
  }
  else {
    uVar4 = *(undefined4 *)(unaff_r5 + 0x68);
    pcVar8 = *(code **)(unaff_r5 + 100);
    uVar9 = 0x1a;
LAB_001ddb96:
    iVar7 = (*pcVar8)(uVar4,uVar9);
    uVar12 = CONCAT44(extraout_s1_05,extraout_s0_05);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_05);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xb0),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  uVar12 = CONCAT44(extraout_s1_06,extraout_s0_06);
  if (iVar7 != 0) {
    iVar7 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x19);
    uVar12 = CONCAT44(extraout_s1_07,extraout_s0_07);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_07);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  if (*(ZCImageButton **)(unaff_r5 + 0xe8) != (ZCImageButton *)0x0) {
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xe8),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                       (float)((ulonglong)uVar12 >> 0x20));
    uVar12 = CONCAT44(extraout_s1_08,extraout_s0_08);
    if (iVar7 != 0) {
      uVar12 = L_PrintLog((char *)(DAT_001dde64 + 0x1ddc08),(char *)(DAT_001dde68 + 0x1ddc0a));
    }
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x90),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  uVar12 = CONCAT44(extraout_s1_09,extraout_s0_09);
  if (iVar7 != 0) {
    iVar7 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x10);
    uVar12 = CONCAT44(extraout_s1_10,extraout_s0_10);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_10);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x94),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  uVar12 = CONCAT44(extraout_s1_11,extraout_s0_11);
  if (iVar7 != 0) {
    iVar7 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x11);
    uVar12 = CONCAT44(extraout_s1_12,extraout_s0_12);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_12);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xec),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  uVar12 = CONCAT44(extraout_s1_13,extraout_s0_13);
  if (iVar7 != 0) {
    iVar7 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x17);
    uVar12 = CONCAT44(extraout_s1_14,extraout_s0_14);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_14);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xf0),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  uVar12 = CONCAT44(extraout_s1_15,extraout_s0_15);
  if (iVar7 != 0) {
    iVar7 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x18);
    uVar12 = CONCAT44(extraout_s1_16,extraout_s0_16);
    if (iVar7 != 0) {
      uVar12 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_16);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x98),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
  if (iVar7 == 0) {
    uVar5 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x8c),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde5c),extraout_s0_17,
                       extraout_s1_17);
    fVar11 = extraout_s0_18;
    fVar13 = extraout_s1_18;
    if ((uVar5 == 0) || (uVar5 = (uint)*(byte *)(*(int *)(unaff_r5 + 0x8c) + 0x14), uVar5 == 0)) {
      for (; (int)uVar5 < *(int *)(unaff_r5 + 0x70) + 1; uVar5 = uVar5 + 1) {
        this_01 = *(ZCImageButton **)(uVar5 * 4 + *(int *)(unaff_r5 + 0x74));
        if ((this_01[0x14] != (ZCImageButton)0x0) &&
           (iVar7 = ZCImageButton::contains
                              (this_01,*(long *)(*(int *)(unaff_r5 + 0x60) + iVar2),fVar11,fVar13),
           fVar11 = extraout_s0_20, fVar13 = extraout_s1_19, iVar7 != 0)) {
          iVar2 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),uVar5);
          if (iVar2 != 0) {
            ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_21);
            *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
            HudElement::setButtonNewIndicator(unaff_r5,uVar5,false);
          }
          break;
        }
      }
      goto LAB_001ddea0;
    }
    uVar4 = *(undefined4 *)(unaff_r5 + 0x68);
    pcVar8 = *(code **)(unaff_r5 + 100);
    uVar9 = 0xc;
  }
  else {
    uVar4 = *(undefined4 *)(unaff_r5 + 0x68);
    pcVar8 = *(code **)(unaff_r5 + 100);
    uVar9 = 0x12;
  }
  iVar2 = (*pcVar8)(uVar4,uVar9);
  if (iVar2 != 0) {
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_19);
    *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
  }
LAB_001ddea0:
  if (in_stack_0000017c == **(int **)(in_stack_00000010 + _DAT_001ddeb8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


