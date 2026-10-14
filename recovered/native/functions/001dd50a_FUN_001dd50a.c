/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dd50a FUN_001dd50a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dd50a(void)

{
  int iVar1;
  undefined4 uVar2;
  String *this;
  HCOManager *this_00;
  int iVar3;
  uint uVar4;
  ZCImageButton *this_01;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  code *in_r3;
  code *pcVar5;
  int iVar6;
  ZombieCafe *this_02;
  HudElement *unaff_r5;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  float fVar10;
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
  undefined8 uVar11;
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
  float fVar12;
  int in_stack_00000010;
  int in_stack_0000017c;
  
  (*in_r3)();
  iVar1 = DAT_001dd6d4;
  if (*(int *)(unaff_r5 + 0x118) != *(int *)(*(int *)(unaff_r5 + 0x60) + DAT_001dd6d4)) {
    piVar7 = *(int **)(unaff_r5 + 0xd0);
    pcVar5 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)&stack0x00000028);
    (*pcVar5)(piVar7,&stack0x00000028);
    String::~String((String *)&stack0x00000028);
    *(undefined4 *)(unaff_r5 + 0x118) = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + iVar1);
  }
  iVar6 = *(int *)(unaff_r5 + 0x11c);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x60));
  if (iVar6 != iVar1) {
    piVar7 = *(int **)(unaff_r5 + 0xcc);
    pcVar5 = *(code **)(*piVar7 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x60));
    String::valueOf((int)&stack0x00000030);
    (*pcVar5)(piVar7,&stack0x00000030);
    String::~String((String *)&stack0x00000030);
    uVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0x60));
    *(undefined4 *)(unaff_r5 + 0x11c) = uVar2;
  }
  if (*(int *)(unaff_r5 + 0x120) != *(int *)(*(int *)(unaff_r5 + 0x60) + 0x680)) {
    piVar7 = *(int **)(unaff_r5 + 0xc4);
    pcVar5 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)&stack0x00000038);
    (*pcVar5)(piVar7,&stack0x00000038);
    String::~String((String *)&stack0x00000038);
    *(undefined4 *)(unaff_r5 + 0x120) = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0x680);
  }
  uVar8 = *(undefined4 *)(unaff_r5 + 0x124);
  uVar2 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(unaff_r5 + 0x60));
  iVar1 = __aeabi_fcmpeq(uVar8,uVar2);
  if (iVar1 == 0) {
    fVar10 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(unaff_r5 + 0x60));
    RatingBar::setValue(fVar10);
    uVar2 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(unaff_r5 + 0x60));
    *(undefined4 *)(unaff_r5 + 0x124) = uVar2;
  }
  uVar8 = *(undefined4 *)(unaff_r5 + 0x128);
  uVar2 = ObjectiveSystem::getRatingBonus();
  iVar1 = __aeabi_fcmpeq(uVar8,uVar2);
  if (iVar1 == 0) {
    uVar2 = ObjectiveSystem::getRatingBonus();
    *(undefined4 *)(unaff_r5 + 0x128) = uVar2;
    fVar10 = (float)ObjectiveSystem::getRatingBonus();
    RatingBar::setBonusValue(fVar10);
  }
  iVar1 = DAT_001dd6dc;
  if (*(int *)(unaff_r5 + 300) != *(int *)(*(ZombieCafe **)(unaff_r5 + 0x60) + DAT_001dd6dc)) {
    iVar6 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r5 + 0x60));
    iVar3 = *(int *)(unaff_r5 + 0x60);
    piVar7 = *(int **)(in_stack_00000010 + DAT_001dd6e0);
    if (iVar6 == 0) {
      piVar9 = *(int **)(unaff_r5 + 200);
      if (*(int *)(iVar3 + iVar1) < *(int *)(*(int *)(iVar3 + 0x680) * 4 + *piVar7)) {
        pcVar5 = *(code **)(*piVar9 + 0x44);
        String::valueOf((int)&stack0x00000050);
        String::String((String *)&stack0x00000058,(char *)(DAT_001dda68 + 0x1dd700));
        String::operator+((String *)&stack0x00000060,&stack0x00000050,&stack0x00000058);
        String::valueOf((long)&stack0x00000068);
        String::operator+((String *)&stack0x00000070,&stack0x00000060,&stack0x00000068);
        String::String((String *)&stack0x00000078,(char *)(DAT_001dda6c + 0x1dd732));
        String::operator+((String *)&stack0x00000080,&stack0x00000070,&stack0x00000078);
        (*pcVar5)(piVar9,&stack0x00000080);
        String::~String((String *)&stack0x00000080);
        String::~String((String *)&stack0x00000078);
        String::~String((String *)&stack0x00000070);
        String::~String((String *)&stack0x00000068);
        String::~String((String *)&stack0x00000060);
        String::~String((String *)&stack0x00000058);
        this = (String *)&stack0x00000050;
      }
      else {
        pcVar5 = *(code **)(*piVar9 + 0x44);
        String::String((String *)&stack0x00000048,
                       (String *)
                       (*(int *)(*(int *)(iVar3 + 0x4b0) + 8) +
                       **(int **)(in_stack_00000010 + DAT_001dd6e8) * 8));
        (*pcVar5)(piVar9,&stack0x00000048);
        this = (String *)&stack0x00000048;
      }
    }
    else {
      piVar9 = *(int **)(unaff_r5 + 200);
      pcVar5 = *(code **)(*piVar9 + 0x44);
      String::String((String *)&stack0x00000040,
                     (String *)
                     (*(int *)(*(int *)(iVar3 + 0x4b0) + 8) +
                     **(int **)(in_stack_00000010 + DAT_001dd6e4) * 8));
      (*pcVar5)(piVar9,&stack0x00000040);
      this = (String *)&stack0x00000040;
    }
    String::~String(this);
    if (*(int *)(*(int *)(unaff_r5 + 0x60) + iVar1) < *(int *)(unaff_r5 + 300)) {
      ProgressBar::setValue(*(ProgressBar **)(unaff_r5 + 0xf8),0,true);
    }
    *(undefined4 *)(unaff_r5 + 300) = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + iVar1);
    ProgressBar::setValue
              (*(ProgressBar **)(unaff_r5 + 0xf8),*(int *)(*(int *)(unaff_r5 + 0x60) + iVar1),false)
    ;
    ProgressBar::setMaximumValue
              (*(ProgressBar **)(unaff_r5 + 0xf8),
               *(int *)(*(int *)(*(int *)(unaff_r5 + 0x60) + 0x680) * 4 + *piVar7));
  }
  piVar7 = *(int **)(unaff_r5 + 0xdc);
  pcVar5 = *(code **)(*piVar7 + 0x44);
  String::valueOf((int)&stack0x00000088);
  String::operator+((String *)&stack0x00000090,&stack0x00000088);
  String::valueOf((int)&stack0x00000098);
  String::operator+((String *)&stack0x000000a0,&stack0x00000090,&stack0x00000098);
  (*pcVar5)(piVar7,&stack0x000000a0);
  String::~String((String *)&stack0x000000a0);
  String::~String((String *)&stack0x00000098);
  String::~String((String *)&stack0x00000090);
  String::~String((String *)&stack0x00000088);
  piVar7 = *(int **)(unaff_r5 + 0xd8);
  pcVar5 = *(code **)(*piVar7 + 0x44);
  String::valueOf((int)&stack0x000000a8);
  String::operator+((String *)&stack0x000000b0,&stack0x000000a8);
  String::valueOf((int)&stack0x000000b8);
  String::operator+((String *)&stack0x000000c0,&stack0x000000b0,&stack0x000000b8);
  (*pcVar5)(piVar7,&stack0x000000c0);
  String::~String((String *)&stack0x000000c0);
  String::~String((String *)&stack0x000000b8);
  String::~String((String *)&stack0x000000b0);
  String::~String((String *)&stack0x000000a8);
  piVar7 = *(int **)(unaff_r5 + 0xe0);
  pcVar5 = *(code **)(*piVar7 + 0x44);
  String::valueOf((int)&stack0x000000c8);
  String::operator+((String *)&stack0x000000d0,&stack0x000000c8);
  String::valueOf((int)&stack0x000000d8);
  String::operator+((String *)&stack0x000000e0,&stack0x000000d0,&stack0x000000d8);
  (*pcVar5)(piVar7,&stack0x000000e0);
  String::~String((String *)&stack0x000000e0);
  String::~String((String *)&stack0x000000d8);
  String::~String((String *)&stack0x000000d0);
  String::~String((String *)&stack0x000000c8);
  if (*(char *)(*(int *)(unaff_r5 + 0xf4) + 0x14) != '\0') {
    this_00 = (HCOManager *)HCOManager::getInstance();
    uVar2 = HCOManager::getHCORemainingTime(this_00);
    iVar1 = __divsi3(uVar2,1000);
    if (iVar1 < 1) {
      (**(code **)(**(int **)(unaff_r5 + 0xf0) + 0x20))(*(int **)(unaff_r5 + 0xf0),0);
      piVar7 = *(int **)(unaff_r5 + 0xf4);
      (**(code **)(*piVar7 + 0x20))(piVar7,0);
    }
    else {
      iVar6 = __divsi3(iVar1,DAT_001ddabc);
      if (iVar6 == 0) {
        if (DAT_001ddac0 < iVar1) {
          __aeabi_idivmod(iVar1,0xe10);
          uVar2 = __divsi3(iVar1,0xe10);
          uVar8 = __divsi3(extraout_r1,0x3c);
          __aeabi_idivmod(extraout_r1,0x3c);
          sprintf(&stack0x000000fc,(char *)(DAT_001ddac4 + 0x1dda0e),uVar2,uVar8);
        }
        else {
          uVar2 = __divsi3(iVar1,0x3c);
          __aeabi_idivmod(iVar1,0x3c);
          sprintf(&stack0x000000fc,(char *)(DAT_001ddac8 + 0x1dda34),uVar2,extraout_r1_00);
        }
      }
      else {
        sprintf(&stack0x000000fc,(char *)(DAT_001ddacc + 0x1dda44));
      }
      piVar7 = *(int **)(unaff_r5 + 0xf4);
      pcVar5 = *(code **)(*piVar7 + 0x44);
      String::String((String *)&stack0x000000e8,&stack0x000000fc);
      (*pcVar5)(piVar7,&stack0x000000e8);
      String::~String((String *)&stack0x000000e8);
    }
  }
  ScreenElement::tick((long)unaff_r5);
  this_02 = *(ZombieCafe **)(unaff_r5 + 0x60);
  iVar6 = ZombieCafe::unhandledPressOrLongEvent(this_02);
  iVar1 = DAT_001dde5c;
  if (iVar6 == 0) goto LAB_001ddea0;
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x88),*(long *)(this_02 + DAT_001dde5c),
                     extraout_s0,extraout_s1);
  uVar11 = CONCAT44(extraout_s1_00,extraout_s0_00);
  if (iVar6 != 0) {
    iVar6 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0xb);
    uVar11 = CONCAT44(extraout_s1_01,extraout_s0_01);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_01);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar6 = DAT_001dde5c;
  iVar3 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xa0),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  if (iVar3 == 0) {
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xa4),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + iVar6),extraout_s0_02,extraout_s1_02);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(unaff_r5 + 0x68);
      pcVar5 = *(code **)(unaff_r5 + 100);
      uVar8 = 0x13;
      goto LAB_001ddb96;
    }
    iVar6 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xa8),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + iVar6),extraout_s0_03,extraout_s1_03);
    uVar11 = CONCAT44(extraout_s1_04,extraout_s0_04);
    if (iVar6 != 0) {
      uVar2 = *(undefined4 *)(unaff_r5 + 0x68);
      pcVar5 = *(code **)(unaff_r5 + 100);
      uVar8 = 0x1b;
      goto LAB_001ddb96;
    }
  }
  else {
    uVar2 = *(undefined4 *)(unaff_r5 + 0x68);
    pcVar5 = *(code **)(unaff_r5 + 100);
    uVar8 = 0x1a;
LAB_001ddb96:
    iVar6 = (*pcVar5)(uVar2,uVar8);
    uVar11 = CONCAT44(extraout_s1_05,extraout_s0_05);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_05);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xb0),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = CONCAT44(extraout_s1_06,extraout_s0_06);
  if (iVar6 != 0) {
    iVar6 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x19);
    uVar11 = CONCAT44(extraout_s1_07,extraout_s0_07);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_07);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  if (*(ZCImageButton **)(unaff_r5 + 0xe8) != (ZCImageButton *)0x0) {
    iVar6 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xe8),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                       (float)((ulonglong)uVar11 >> 0x20));
    uVar11 = CONCAT44(extraout_s1_08,extraout_s0_08);
    if (iVar6 != 0) {
      uVar11 = L_PrintLog((char *)(DAT_001dde64 + 0x1ddc08),(char *)(DAT_001dde68 + 0x1ddc0a));
    }
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x90),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = CONCAT44(extraout_s1_09,extraout_s0_09);
  if (iVar6 != 0) {
    iVar6 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x10);
    uVar11 = CONCAT44(extraout_s1_10,extraout_s0_10);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_10);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x94),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = CONCAT44(extraout_s1_11,extraout_s0_11);
  if (iVar6 != 0) {
    iVar6 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x11);
    uVar11 = CONCAT44(extraout_s1_12,extraout_s0_12);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_12);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xec),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = CONCAT44(extraout_s1_13,extraout_s0_13);
  if (iVar6 != 0) {
    iVar6 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x17);
    uVar11 = CONCAT44(extraout_s1_14,extraout_s0_14);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_14);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xf0),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = CONCAT44(extraout_s1_15,extraout_s0_15);
  if (iVar6 != 0) {
    iVar6 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),0x18);
    uVar11 = CONCAT44(extraout_s1_16,extraout_s0_16);
    if (iVar6 != 0) {
      uVar11 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_16);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x98),
                     *(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),(float)uVar11,
                     (float)((ulonglong)uVar11 >> 0x20));
  if (iVar6 == 0) {
    uVar4 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x8c),
                       *(long *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde5c),extraout_s0_17,
                       extraout_s1_17);
    fVar10 = extraout_s0_18;
    fVar12 = extraout_s1_18;
    if ((uVar4 == 0) || (uVar4 = (uint)*(byte *)(*(int *)(unaff_r5 + 0x8c) + 0x14), uVar4 == 0)) {
      for (; (int)uVar4 < *(int *)(unaff_r5 + 0x70) + 1; uVar4 = uVar4 + 1) {
        this_01 = *(ZCImageButton **)(uVar4 * 4 + *(int *)(unaff_r5 + 0x74));
        if ((this_01[0x14] != (ZCImageButton)0x0) &&
           (iVar6 = ZCImageButton::contains
                              (this_01,*(long *)(*(int *)(unaff_r5 + 0x60) + iVar1),fVar10,fVar12),
           fVar10 = extraout_s0_20, fVar12 = extraout_s1_19, iVar6 != 0)) {
          iVar1 = (**(code **)(unaff_r5 + 100))(*(undefined4 *)(unaff_r5 + 0x68),uVar4);
          if (iVar1 != 0) {
            ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x60),extraout_s0_21);
            *(undefined1 *)(*(int *)(unaff_r5 + 0x60) + DAT_001dde60) = 1;
            HudElement::setButtonNewIndicator(unaff_r5,uVar4,false);
          }
          break;
        }
      }
      goto LAB_001ddea0;
    }
    uVar2 = *(undefined4 *)(unaff_r5 + 0x68);
    pcVar5 = *(code **)(unaff_r5 + 100);
    uVar8 = 0xc;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_r5 + 0x68);
    pcVar5 = *(code **)(unaff_r5 + 100);
    uVar8 = 0x12;
  }
  iVar1 = (*pcVar5)(uVar2,uVar8);
  if (iVar1 != 0) {
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


