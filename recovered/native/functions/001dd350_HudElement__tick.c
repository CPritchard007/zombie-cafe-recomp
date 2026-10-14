/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dd350 HudElement::tick */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HudElement::tick(long) */

void __thiscall HudElement::tick(HudElement *this,long param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ZombieCafe *pZVar8;
  int *piVar9;
  String *this_00;
  HCOManager *this_01;
  ZCImageButton *this_02;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  float fVar18;
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
  undefined8 uVar19;
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
  float fVar20;
  uint local_18c;
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  String aSStack_158 [8];
  String aSStack_150 [8];
  String aSStack_148 [8];
  String aSStack_140 [8];
  String aSStack_138 [8];
  String aSStack_130 [8];
  String aSStack_128 [8];
  String aSStack_120 [8];
  String aSStack_118 [8];
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  int local_a8;
  uint local_a4;
  int *local_a0;
  char acStack_9c [128];
  int local_1c;
  
  iVar13 = DAT_001dd6bc + 0x1dd35c;
  local_1c = **(int **)(iVar13 + DAT_001dd6c0);
  iVar15 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar15 + 0x40);
  CapcomApp::getInstance();
  for (iVar15 = 0; iVar15 < *(int *)(this + 0x80) + 1; iVar15 = iVar15 + 1) {
    Vector<HudElement::NewIndicator>::elementAt((int)&local_a8);
    piVar9 = local_a0;
    local_18c = local_a4;
    iVar10 = *(int *)(iVar15 * 4 + *(int *)(this + 0x74));
    iVar17 = local_a8;
    if ((char)local_a0[5] != '\0') {
      iVar17 = local_a8 + param_1;
      if (1000 < iVar17) {
        iVar17 = iVar17 + DAT_001dd6c4;
      }
      iVar5 = __divsi3(iVar17 * 0x168,1000);
      iVar3 = DAT_001dd6cc;
      iVar6 = DAT_001dd6c8;
      if (iVar5 < 0) {
        __aeabi_idivmod(-iVar5,0x168);
        local_18c = -*(int *)(iVar3 + extraout_r1_00 * 4 + 0x1dd428);
      }
      else {
        __aeabi_idivmod(iVar5,0x168);
        local_18c = *(int *)(iVar6 + extraout_r1 * 4 + 0x1dd40a);
      }
      iVar6 = __divsi3(piVar9[4],3);
      uVar1 = *(undefined2 *)(iVar10 + 8);
      uVar2 = *(ushort *)(iVar10 + 4);
      local_18c = (int)(local_18c * iVar6) >> 0x10;
      __mulsf3(uVar4,DAT_001dd6d0);
      uVar7 = __fixsfsi();
      uVar11 = (local_18c & 0xffff) + CONCAT22(uVar2,uVar1);
      (**(code **)(*piVar9 + 0x14))
                (piVar9,(int)(uVar11 & 0xffff | ((uVar7 & 0xffff) + (uint)uVar2) * 0x10000) >> 0x10,
                 (int)(short)uVar11);
    }
    if ((-1 < iVar15) && (iVar15 <= *(int *)(this + 0x80))) {
      piVar12 = (int *)(*(int *)(this + 0x84) + iVar15 * 0xc);
      *piVar12 = iVar17;
      piVar12[2] = (int)piVar9;
      piVar12[1] = local_18c;
    }
  }
  iVar15 = ZombieCafe::checkZombieFlowerEventBoost();
  if (iVar15 != 0) {
    iVar15 = 1;
  }
  (**(code **)(**(int **)(this + 0x10c) + 0x20))(*(int **)(this + 0x10c),iVar15);
  if (this[0x16a] == (HudElement)0x0) {
    FUN_001dde7c();
  }
  iVar15 = ZombieCafe::checkPowerUpBoost();
  if (iVar15 == 0) {
    FUN_001dde7c();
  }
  (**(code **)(**(int **)(this + 0x110) + 0x20))(*(int **)(this + 0x110),1);
  if (this[0x16a] == (HudElement)0x0) {
    FUN_001dde8c();
  }
  pZVar8 = *(ZombieCafe **)(this + 0x60);
  if (*(int *)(pZVar8 + 0x680) < 8) {
    pZVar8 = (ZombieCafe *)FUN_001dde8c();
  }
  iVar15 = ZombieCafe::checkStaminaEventTime(pZVar8);
  if (iVar15 == 0) {
    FUN_001dde8c();
  }
  iVar17 = *(int *)(this + 0x110);
  piVar9 = *(int **)(this + 0x114);
  iVar15 = *(int *)(iVar17 + 8);
  if (*(char *)(iVar17 + 0x14) == '\0') {
    iVar10 = *piVar9;
  }
  else {
    iVar10 = *piVar9;
    iVar15 = iVar15 + *(int *)(iVar17 + 0x10);
  }
  (**(code **)(iVar10 + 0x14))(piVar9,*(undefined4 *)(iVar17 + 4),iVar15);
  (**(code **)(**(int **)(this + 0x114) + 0x20))(*(int **)(this + 0x114),1);
  iVar15 = DAT_001dd6d4;
  if (*(int *)(this + 0x118) != *(int *)(*(int *)(this + 0x60) + DAT_001dd6d4)) {
    piVar9 = *(int **)(this + 0xd0);
    pcVar14 = *(code **)(*piVar9 + 0x44);
    String::valueOf((int)aSStack_170);
    (*pcVar14)(piVar9,aSStack_170);
    String::~String(aSStack_170);
    *(undefined4 *)(this + 0x118) = *(undefined4 *)(*(int *)(this + 0x60) + iVar15);
  }
  iVar17 = *(int *)(this + 0x11c);
  iVar15 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x60));
  if (iVar17 != iVar15) {
    piVar9 = *(int **)(this + 0xcc);
    pcVar14 = *(code **)(*piVar9 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x60));
    String::valueOf((int)aSStack_168);
    (*pcVar14)(piVar9,aSStack_168);
    String::~String(aSStack_168);
    uVar4 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x60));
    *(undefined4 *)(this + 0x11c) = uVar4;
  }
  if (*(int *)(this + 0x120) != *(int *)(*(int *)(this + 0x60) + 0x680)) {
    piVar9 = *(int **)(this + 0xc4);
    pcVar14 = *(code **)(*piVar9 + 0x44);
    String::valueOf((int)aSStack_160);
    (*pcVar14)(piVar9,aSStack_160);
    String::~String(aSStack_160);
    *(undefined4 *)(this + 0x120) = *(undefined4 *)(*(int *)(this + 0x60) + 0x680);
  }
  uVar16 = *(undefined4 *)(this + 0x124);
  uVar4 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0x60));
  iVar15 = __aeabi_fcmpeq(uVar16,uVar4);
  if (iVar15 == 0) {
    fVar18 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0x60));
    RatingBar::setValue(fVar18);
    uVar4 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0x60));
    *(undefined4 *)(this + 0x124) = uVar4;
  }
  uVar16 = *(undefined4 *)(this + 0x128);
  uVar4 = ObjectiveSystem::getRatingBonus();
  iVar15 = __aeabi_fcmpeq(uVar16,uVar4);
  if (iVar15 == 0) {
    uVar4 = ObjectiveSystem::getRatingBonus();
    *(undefined4 *)(this + 0x128) = uVar4;
    fVar18 = (float)ObjectiveSystem::getRatingBonus();
    RatingBar::setBonusValue(fVar18);
  }
  iVar15 = DAT_001dd6dc;
  if (*(int *)(this + 300) != *(int *)(*(ZombieCafe **)(this + 0x60) + DAT_001dd6dc)) {
    iVar17 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(this + 0x60));
    iVar10 = *(int *)(this + 0x60);
    piVar9 = *(int **)(iVar13 + DAT_001dd6e0);
    if (iVar17 == 0) {
      piVar12 = *(int **)(this + 200);
      if (*(int *)(iVar10 + iVar15) < *(int *)(*(int *)(iVar10 + 0x680) * 4 + *piVar9)) {
        pcVar14 = *(code **)(*piVar12 + 0x44);
        String::valueOf((int)aSStack_148);
        String::String(aSStack_140,(char *)(DAT_001dda68 + 0x1dd700));
        String::operator+(aSStack_138,aSStack_148,aSStack_140);
        String::valueOf((long)aSStack_130);
        String::operator+(aSStack_128,aSStack_138,aSStack_130);
        String::String(aSStack_120,(char *)(DAT_001dda6c + 0x1dd732));
        String::operator+(aSStack_118,aSStack_128,aSStack_120);
        (*pcVar14)(piVar12,aSStack_118);
        String::~String(aSStack_118);
        String::~String(aSStack_120);
        String::~String(aSStack_128);
        String::~String(aSStack_130);
        String::~String(aSStack_138);
        String::~String(aSStack_140);
        this_00 = aSStack_148;
      }
      else {
        pcVar14 = *(code **)(*piVar12 + 0x44);
        String::String(aSStack_150,
                       (String *)
                       (*(int *)(*(int *)(iVar10 + 0x4b0) + 8) +
                       **(int **)(iVar13 + DAT_001dd6e8) * 8));
        (*pcVar14)(piVar12,aSStack_150);
        this_00 = aSStack_150;
      }
    }
    else {
      piVar12 = *(int **)(this + 200);
      pcVar14 = *(code **)(*piVar12 + 0x44);
      String::String(aSStack_158,
                     (String *)
                     (*(int *)(*(int *)(iVar10 + 0x4b0) + 8) + **(int **)(iVar13 + DAT_001dd6e4) * 8
                     ));
      (*pcVar14)(piVar12,aSStack_158);
      this_00 = aSStack_158;
    }
    String::~String(this_00);
    if (*(int *)(*(int *)(this + 0x60) + iVar15) < *(int *)(this + 300)) {
      ProgressBar::setValue(*(ProgressBar **)(this + 0xf8),0,true);
    }
    *(undefined4 *)(this + 300) = *(undefined4 *)(*(int *)(this + 0x60) + iVar15);
    ProgressBar::setValue
              (*(ProgressBar **)(this + 0xf8),*(int *)(*(int *)(this + 0x60) + iVar15),false);
    ProgressBar::setMaximumValue
              (*(ProgressBar **)(this + 0xf8),
               *(int *)(*(int *)(*(int *)(this + 0x60) + 0x680) * 4 + *piVar9));
  }
  piVar9 = *(int **)(this + 0xdc);
  pcVar14 = *(code **)(*piVar9 + 0x44);
  String::valueOf((int)aSStack_110);
  String::operator+(aSStack_108,(char *)aSStack_110);
  String::valueOf((int)aSStack_100);
  String::operator+(aSStack_f8,aSStack_108,aSStack_100);
  (*pcVar14)(piVar9,aSStack_f8);
  String::~String(aSStack_f8);
  String::~String(aSStack_100);
  String::~String(aSStack_108);
  String::~String(aSStack_110);
  piVar9 = *(int **)(this + 0xd8);
  pcVar14 = *(code **)(*piVar9 + 0x44);
  String::valueOf((int)aSStack_f0);
  String::operator+(aSStack_e8,(char *)aSStack_f0);
  String::valueOf((int)aSStack_e0);
  String::operator+(aSStack_d8,aSStack_e8,aSStack_e0);
  (*pcVar14)(piVar9,aSStack_d8);
  String::~String(aSStack_d8);
  String::~String(aSStack_e0);
  String::~String(aSStack_e8);
  String::~String(aSStack_f0);
  piVar9 = *(int **)(this + 0xe0);
  pcVar14 = *(code **)(*piVar9 + 0x44);
  String::valueOf((int)aSStack_d0);
  String::operator+(aSStack_c8,(char *)aSStack_d0);
  String::valueOf((int)aSStack_c0);
  String::operator+(aSStack_b8,aSStack_c8,aSStack_c0);
  (*pcVar14)(piVar9,aSStack_b8);
  String::~String(aSStack_b8);
  String::~String(aSStack_c0);
  String::~String(aSStack_c8);
  String::~String(aSStack_d0);
  if (*(char *)(*(int *)(this + 0xf4) + 0x14) != '\0') {
    this_01 = (HCOManager *)HCOManager::getInstance();
    uVar4 = HCOManager::getHCORemainingTime(this_01);
    iVar15 = __divsi3(uVar4,1000);
    if (iVar15 < 1) {
      (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),0);
      piVar9 = *(int **)(this + 0xf4);
      (**(code **)(*piVar9 + 0x20))(piVar9,0);
    }
    else {
      iVar17 = __divsi3(iVar15,DAT_001ddabc);
      if (iVar17 == 0) {
        if (DAT_001ddac0 < iVar15) {
          __aeabi_idivmod(iVar15,0xe10);
          uVar4 = __divsi3(iVar15,0xe10);
          uVar16 = __divsi3(extraout_r1_01,0x3c);
          __aeabi_idivmod(extraout_r1_01,0x3c);
          sprintf(acStack_9c,(char *)(DAT_001ddac4 + 0x1dda0e),uVar4,uVar16,extraout_r1_02);
        }
        else {
          uVar4 = __divsi3(iVar15,0x3c);
          __aeabi_idivmod(iVar15,0x3c);
          sprintf(acStack_9c,(char *)(DAT_001ddac8 + 0x1dda34),uVar4,extraout_r1_03);
        }
      }
      else {
        sprintf(acStack_9c,(char *)(DAT_001ddacc + 0x1dda44));
      }
      piVar9 = *(int **)(this + 0xf4);
      pcVar14 = *(code **)(*piVar9 + 0x44);
      String::String(aSStack_b0,acStack_9c);
      (*pcVar14)(piVar9,aSStack_b0);
      String::~String(aSStack_b0);
    }
  }
  ScreenElement::tick((long)this);
  pZVar8 = *(ZombieCafe **)(this + 0x60);
  iVar17 = ZombieCafe::unhandledPressOrLongEvent(pZVar8);
  iVar15 = DAT_001dde5c;
  if (iVar17 == 0) goto LAB_001ddea0;
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0x88),*(long *)(pZVar8 + DAT_001dde5c),extraout_s0,
                      extraout_s1);
  uVar19 = CONCAT44(extraout_s1_00,extraout_s0_00);
  if (iVar17 != 0) {
    iVar17 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),0xb);
    uVar19 = CONCAT44(extraout_s1_01,extraout_s0_01);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_01);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar17 = DAT_001dde5c;
  iVar10 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0xa0),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  if (iVar10 == 0) {
    iVar10 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0xa4),*(long *)(*(int *)(this + 0x60) + iVar17),
                        extraout_s0_02,extraout_s1_02);
    if (iVar10 != 0) {
      uVar4 = *(undefined4 *)(this + 0x68);
      pcVar14 = *(code **)(this + 100);
      uVar16 = 0x13;
      goto LAB_001ddb96;
    }
    iVar17 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0xa8),*(long *)(*(int *)(this + 0x60) + iVar17),
                        extraout_s0_03,extraout_s1_03);
    uVar19 = CONCAT44(extraout_s1_04,extraout_s0_04);
    if (iVar17 != 0) {
      uVar4 = *(undefined4 *)(this + 0x68);
      pcVar14 = *(code **)(this + 100);
      uVar16 = 0x1b;
      goto LAB_001ddb96;
    }
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x68);
    pcVar14 = *(code **)(this + 100);
    uVar16 = 0x1a;
LAB_001ddb96:
    iVar17 = (*pcVar14)(uVar4,uVar16);
    uVar19 = CONCAT44(extraout_s1_05,extraout_s0_05);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_05);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0xb0),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar19 = CONCAT44(extraout_s1_06,extraout_s0_06);
  if (iVar17 != 0) {
    iVar17 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),0x19);
    uVar19 = CONCAT44(extraout_s1_07,extraout_s0_07);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_07);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  if (*(ZCImageButton **)(this + 0xe8) != (ZCImageButton *)0x0) {
    iVar17 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0xe8),*(long *)(*(int *)(this + 0x60) + iVar15),
                        (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    uVar19 = CONCAT44(extraout_s1_08,extraout_s0_08);
    if (iVar17 != 0) {
      uVar19 = L_PrintLog((char *)(DAT_001dde64 + 0x1ddc08),(char *)(DAT_001dde68 + 0x1ddc0a));
    }
  }
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0x90),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar19 = CONCAT44(extraout_s1_09,extraout_s0_09);
  if (iVar17 != 0) {
    iVar17 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),0x10);
    uVar19 = CONCAT44(extraout_s1_10,extraout_s0_10);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_10);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0x94),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar19 = CONCAT44(extraout_s1_11,extraout_s0_11);
  if (iVar17 != 0) {
    iVar17 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),0x11);
    uVar19 = CONCAT44(extraout_s1_12,extraout_s0_12);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_12);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0xec),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar19 = CONCAT44(extraout_s1_13,extraout_s0_13);
  if (iVar17 != 0) {
    iVar17 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),0x17);
    uVar19 = CONCAT44(extraout_s1_14,extraout_s0_14);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_14);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0xf0),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar19 = CONCAT44(extraout_s1_15,extraout_s0_15);
  if (iVar17 != 0) {
    iVar17 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),0x18);
    uVar19 = CONCAT44(extraout_s1_16,extraout_s0_16);
    if (iVar17 != 0) {
      uVar19 = ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_16);
      *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
    }
  }
  iVar17 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0x98),*(long *)(*(int *)(this + 0x60) + iVar15),
                      (float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  if (iVar17 == 0) {
    uVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x8c),
                       *(long *)(*(int *)(this + 0x60) + DAT_001dde5c),extraout_s0_17,extraout_s1_17
                      );
    fVar18 = extraout_s0_18;
    fVar20 = extraout_s1_18;
    if ((uVar7 == 0) || (uVar7 = (uint)*(byte *)(*(int *)(this + 0x8c) + 0x14), uVar7 == 0)) {
      for (; (int)uVar7 < *(int *)(this + 0x70) + 1; uVar7 = uVar7 + 1) {
        this_02 = *(ZCImageButton **)(uVar7 * 4 + *(int *)(this + 0x74));
        if ((this_02[0x14] != (ZCImageButton)0x0) &&
           (iVar17 = ZCImageButton::contains
                               (this_02,*(long *)(*(int *)(this + 0x60) + iVar15),fVar18,fVar20),
           fVar18 = extraout_s0_20, fVar20 = extraout_s1_19, iVar17 != 0)) {
          iVar15 = (**(code **)(this + 100))(*(undefined4 *)(this + 0x68),uVar7);
          if (iVar15 != 0) {
            ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_21);
            *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
            setButtonNewIndicator(this,uVar7,false);
          }
          break;
        }
      }
      goto LAB_001ddea0;
    }
    uVar4 = *(undefined4 *)(this + 0x68);
    pcVar14 = *(code **)(this + 100);
    uVar16 = 0xc;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x68);
    pcVar14 = *(code **)(this + 100);
    uVar16 = 0x12;
  }
  iVar15 = (*pcVar14)(uVar4,uVar16);
  if (iVar15 != 0) {
    ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_19);
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_001dde60) = 1;
  }
LAB_001ddea0:
  if (local_1c == **(int **)(iVar13 + _DAT_001ddeb8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


