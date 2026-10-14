/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00207af4 PullMenuElement::tick */

/* PullMenuElement::tick(long) */

void __thiscall PullMenuElement::tick(PullMenuElement *this,long param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  PullMenuElement *pPVar11;
  int *piVar12;
  ZombieCafe *pZVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float fVar14;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar3 = SmDev();
  uVar4 = __mulsf3(*(undefined4 *)(iVar3 * 4 + *(int *)(DAT_00207eb0 + 0x207b0a + DAT_00207eb4)),0);
  iVar3 = *(int *)(this + 0x98);
  if (*(char *)(iVar3 + 0x14) != '\0') {
    pPVar11 = this + 0x90;
    iVar9 = param_1 + *(int *)pPVar11;
    *(int *)pPVar11 = iVar9;
    if (1000 < iVar9) {
      *(int *)pPVar11 = iVar9 + DAT_00207eb8;
    }
    iVar9 = __divsi3(*(int *)pPVar11 * 0x168,1000);
    iVar9 = CapcomMath::sin(iVar9);
    iVar5 = __divsi3(*(undefined4 *)(iVar3 + 0x10),3);
    iVar9 = iVar9 * iVar5 >> 0x10;
    *(int *)(this + 0x94) = iVar9;
    iVar5 = *(int *)(this + 0x74);
    uVar1 = *(undefined2 *)(iVar5 + 8);
    uVar2 = *(undefined2 *)(iVar5 + 4);
    uVar6 = __floatsisf(-(*(int *)(iVar5 + 0x10) / 2));
    uVar6 = __addsf3(uVar4,uVar6);
    uVar7 = __floatsisf(iVar9);
    __subsf3(uVar6,uVar7);
    uVar8 = __fixsfsi();
    uVar6 = CFPoint::add(CONCAT22(uVar2,uVar1),uVar8 & 0xffff);
    FUN_0020712e(iVar3,uVar6);
  }
  iVar3 = *(int *)(this + 0xa4);
  if (*(char *)(iVar3 + 0x14) != '\0') {
    pPVar11 = this + 0x9c;
    iVar9 = param_1 + *(int *)pPVar11;
    *(int *)pPVar11 = iVar9;
    if (1000 < iVar9) {
      *(int *)pPVar11 = iVar9 + DAT_00207eb8;
    }
    iVar9 = __divsi3(*(int *)pPVar11 * 0x168,1000);
    iVar9 = CapcomMath::sin(iVar9);
    iVar5 = __divsi3(*(undefined4 *)(iVar3 + 0x10),3);
    iVar9 = iVar9 * iVar5 >> 0x10;
    *(int *)(this + 0xa0) = iVar9;
    iVar5 = *(int *)(this + 0x78);
    uVar1 = *(undefined2 *)(iVar5 + 8);
    uVar2 = *(undefined2 *)(iVar5 + 4);
    uVar6 = __floatsisf(-(*(int *)(iVar5 + 0x10) / 2));
    uVar6 = __addsf3(uVar4,uVar6);
    uVar7 = __floatsisf(iVar9);
    __subsf3(uVar6,uVar7);
    uVar8 = __fixsfsi();
    uVar6 = CFPoint::add(CONCAT22(uVar2,uVar1),uVar8 & 0xffff);
    FUN_0020712e(iVar3,uVar6);
  }
  iVar3 = *(int *)(this + 0xb0);
  if (*(char *)(iVar3 + 0x14) != '\0') {
    pPVar11 = this + 0xa8;
    iVar9 = param_1 + *(int *)pPVar11;
    *(int *)pPVar11 = iVar9;
    if (1000 < iVar9) {
      *(int *)pPVar11 = iVar9 + DAT_00207eb8;
    }
    iVar9 = __divsi3(*(int *)pPVar11 * 0x168,1000);
    iVar9 = CapcomMath::sin(iVar9);
    iVar5 = __divsi3(*(undefined4 *)(iVar3 + 0x10),3);
    iVar9 = iVar9 * iVar5 >> 0x10;
    *(int *)(this + 0xac) = iVar9;
    iVar5 = *(int *)(this + 0x80);
    uVar1 = *(undefined2 *)(iVar5 + 8);
    uVar2 = *(undefined2 *)(iVar5 + 4);
    uVar6 = __floatsisf(-(*(int *)(iVar5 + 0x10) / 2));
    uVar6 = __addsf3(uVar4,uVar6);
    uVar7 = __floatsisf(iVar9);
    __subsf3(uVar6,uVar7);
    uVar8 = __fixsfsi();
    uVar6 = CFPoint::add(CONCAT22(uVar2,uVar1),uVar8 & 0xffff);
    FUN_0020712e(iVar3,uVar6);
  }
  iVar3 = *(int *)(this + 0xbc);
  if (*(char *)(iVar3 + 0x14) != '\0') {
    pPVar11 = this + 0xb4;
    iVar9 = param_1 + *(int *)pPVar11;
    *(int *)pPVar11 = iVar9;
    if (1000 < iVar9) {
      *(int *)pPVar11 = iVar9 + DAT_00207eb8;
    }
    iVar9 = __divsi3(*(int *)pPVar11 * 0x168,1000);
    iVar9 = CapcomMath::sin(iVar9);
    iVar5 = __divsi3(*(undefined4 *)(iVar3 + 0x10),3);
    iVar9 = iVar9 * iVar5 >> 0x10;
    *(int *)(this + 0xb8) = iVar9;
    iVar5 = *(int *)(this + 0x8c);
    uVar1 = *(undefined2 *)(iVar5 + 8);
    uVar2 = *(undefined2 *)(iVar5 + 4);
    uVar6 = __floatsisf(-(*(int *)(iVar5 + 0x10) / 2));
    uVar6 = __addsf3(uVar4,uVar6);
    uVar7 = __floatsisf(iVar9);
    __subsf3(uVar6,uVar7);
    uVar8 = __fixsfsi();
    uVar6 = CFPoint::add(CONCAT22(uVar2,uVar1),uVar8 & 0xffff);
    FUN_0020712e(iVar3,uVar6);
  }
  iVar3 = *(int *)(this + 200);
  if (*(char *)(iVar3 + 0x14) != '\0') {
    pPVar11 = this + 0xc0;
    iVar9 = param_1 + *(int *)pPVar11;
    *(int *)pPVar11 = iVar9;
    if (1000 < iVar9) {
      *(int *)pPVar11 = iVar9 + DAT_00207eb8;
    }
    iVar9 = __divsi3(*(int *)pPVar11 * 0x168,1000);
    iVar9 = CapcomMath::sin(iVar9);
    iVar5 = __divsi3(*(undefined4 *)(iVar3 + 0x10),3);
    iVar9 = iVar9 * iVar5 >> 0x10;
    *(int *)(this + 0xc4) = iVar9;
    iVar5 = *(int *)(this + 0x84);
    uVar1 = *(undefined2 *)(iVar5 + 8);
    uVar2 = *(undefined2 *)(iVar5 + 4);
    uVar6 = __floatsisf(-(*(int *)(iVar5 + 0x10) / 2));
    uVar4 = __addsf3(uVar4,uVar6);
    uVar6 = __floatsisf(iVar9);
    __subsf3(uVar4,uVar6);
    uVar8 = __fixsfsi();
    uVar4 = CFPoint::add(CONCAT22(uVar2,uVar1),uVar8 & 0xffff);
    FUN_0020712e(iVar3,uVar4);
  }
  if (*(int *)(this + 0xdc) != *(int *)(*(int *)(this + 100) + 0x680)) {
    *(int *)(this + 0xdc) = *(int *)(*(int *)(this + 100) + 0x680);
    piVar12 = *(int **)(this + 0xd4);
    pcVar10 = *(code **)(*piVar12 + 0x44);
    String::valueOf((int)aSStack_58);
    String::operator+(aSStack_50,(char *)aSStack_58);
    String::valueOf((int)aSStack_48);
    String::operator+(aSStack_40,aSStack_50,aSStack_48);
    (*pcVar10)(piVar12,aSStack_40);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
  }
  if (*(int *)(this + 0xd8) != *(int *)(*(int *)(this + 100) + DAT_00207ebc + 4) + 1) {
    piVar12 = *(int **)(this + 0xd4);
    pcVar10 = *(code **)(*piVar12 + 0x44);
    String::valueOf((int)aSStack_38);
    String::operator+(aSStack_30,(char *)aSStack_38);
    String::valueOf((int)aSStack_28);
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar10)(piVar12,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    *(int *)(this + 0xd8) = *(int *)(*(int *)(this + 100) + DAT_0020819c + 4) + 1;
  }
  ScreenElement::tick((long)this);
  iVar3 = *(int *)(this + 0xf4);
  if (iVar3 == 0x2000) {
    pZVar13 = *(ZombieCafe **)(this + 100);
    iVar3 = ZombieCafe::unhandledPressOrLongEvent(pZVar13);
    if (((iVar3 == 0) && (this[0x61] == (PullMenuElement)0x0)) ||
       ((iVar3 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x74),*(long *)(pZVar13 + DAT_002081a0),
                            extraout_s0_01,extraout_s1_00), fVar14 = extraout_s0_02, iVar3 == 0 &&
        (this[0x61] == (PullMenuElement)0x0)))) {
      piVar12 = *(int **)(this + 0xcc);
      uVar4 = __floatsisf(*(int *)(this + 0xc) - piVar12[3]);
      uVar6 = __floatsisf(piVar12[1]);
      iVar3 = __subsf3(uVar4,uVar6);
      uVar7 = __mulsf3(iVar3,0x3f000000);
      __addsf3(uVar6,uVar7);
      uVar6 = __fixsfsi();
      (**(code **)(*piVar12 + 0x14))(piVar12,uVar6,*(int *)(this + 0x10) - piVar12[4] / 2);
      piVar12 = *(int **)(this + 0xd0);
      (**(code **)(*piVar12 + 0x14))(piVar12,uVar6,piVar12[2]);
      iVar9 = __aeabi_fcmpge(iVar3,0);
      if (iVar9 == 0) {
        iVar3 = iVar3 + -0x80000000;
      }
      iVar3 = __aeabi_fcmple(iVar3,0x3f800000);
      if (iVar3 == 0) goto LAB_00208262;
      piVar12 = *(int **)(this + 0xcc);
      uVar4 = __fixsfsi(uVar4);
      (**(code **)(*piVar12 + 0x14))(piVar12,uVar4,*(int *)(this + 0x10) - piVar12[4] / 2);
      piVar12 = *(int **)(this + 0xd0);
      (**(code **)(*piVar12 + 0x14))(piVar12,uVar4,piVar12[2]);
      iVar3 = 0x80;
    }
    else {
LAB_002080f8:
      ZombieCafe::playEffect(*(int *)(this + 100),fVar14);
      *(undefined1 *)(*(int *)(this + 100) + DAT_002081a4) = 1;
      *(undefined1 *)(*(int *)(this + 0x74) + 0x89) = 0;
      this[0x61] = (PullMenuElement)0x0;
      iVar3 = 0x88;
    }
    iVar3 = iVar3 << 9;
LAB_00208260:
    *(int *)(this + 0xf4) = iVar3;
  }
  else {
    if (iVar3 < 0x2001) {
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0xf4) = 0x1000;
        goto LAB_00208262;
      }
      if (iVar3 != 0x1000) goto LAB_00208262;
      this[0xf8] = (PullMenuElement)0x0;
      pZVar13 = *(ZombieCafe **)(this + 100);
      iVar3 = ZombieCafe::unhandledPressOrLongEvent(pZVar13);
      if (((iVar3 != 0) || (this[0x60] != (PullMenuElement)0x0)) &&
         ((iVar3 = ZCImageButton::contains
                             (*(ZCImageButton **)(this + 0x74),*(long *)(pZVar13 + DAT_002081a0),
                              extraout_s0,extraout_s1), fVar14 = extraout_s0_00, iVar3 != 0 ||
          (this[0x60] != (PullMenuElement)0x0)))) {
LAB_0020815e:
        ZombieCafe::playEffect(*(int *)(this + 100),fVar14);
        *(undefined1 *)(*(int *)(this + 100) + DAT_002081a4) = 1;
        *(undefined1 *)(*(int *)(this + 0x74) + 0x89) = 1;
        setButtonNewIndicator(this,0,false);
        this[0xf9] = (PullMenuElement)0x1;
        this[0x60] = (PullMenuElement)0x0;
        *(undefined4 *)(this + 0xf4) = 0x2000;
        goto LAB_00208262;
      }
      pPVar11 = this + 0x61;
    }
    else {
      if (iVar3 != 0x10000) {
        if (iVar3 != 0x11000) goto LAB_00208262;
        pZVar13 = *(ZombieCafe **)(this + 100);
        iVar3 = ZombieCafe::unhandledPressOrLongEvent(pZVar13);
        if (((iVar3 != 0) || (this[0x60] != (PullMenuElement)0x0)) &&
           ((iVar3 = ZCImageButton::contains
                               (*(ZCImageButton **)(this + 0x74),*(long *)(pZVar13 + DAT_002081a0),
                                extraout_s0_05,extraout_s1_02), fVar14 = extraout_s0_06, iVar3 != 0
            || (this[0x60] != (PullMenuElement)0x0)))) goto LAB_0020815e;
        uVar7 = *(undefined4 *)(this + 0xf0);
        piVar12 = *(int **)(this + 0xcc);
        uVar4 = __floatsisf(piVar12[1]);
        iVar3 = __subsf3(uVar7,uVar4);
        uVar6 = __mulsf3(iVar3,0x3f000000);
        __addsf3(uVar4,uVar6);
        uVar4 = __fixsfsi();
        (**(code **)(*piVar12 + 0x14))(piVar12,uVar4,*(int *)(this + 0x10) - piVar12[4] / 2);
        piVar12 = *(int **)(this + 0xd0);
        (**(code **)(*piVar12 + 0x14))(piVar12,uVar4,piVar12[2]);
        iVar9 = __aeabi_fcmpge(iVar3,0);
        if (iVar9 == 0) {
          iVar3 = iVar3 + -0x80000000;
        }
        iVar3 = __aeabi_fcmple(iVar3,0x3f800000);
        if (iVar3 == 0) goto LAB_00208262;
        piVar12 = *(int **)(this + 0xcc);
        uVar4 = __fixsfsi(uVar7);
        (**(code **)(*piVar12 + 0x14))(piVar12,uVar4,*(int *)(this + 0x10) - piVar12[4] / 2);
        piVar12 = *(int **)(this + 0xd0);
        (**(code **)(*piVar12 + 0x14))(piVar12,uVar4,piVar12[2]);
        iVar3 = 0x1000;
        goto LAB_00208260;
      }
      this[0xf8] = (PullMenuElement)0x1;
      this[0xf9] = (PullMenuElement)0x0;
      pZVar13 = *(ZombieCafe **)(this + 100);
      iVar3 = ZombieCafe::unhandledPressOrLongEvent(pZVar13);
      if (((iVar3 != 0) || (this[0x61] != (PullMenuElement)0x0)) &&
         ((iVar3 = ZCImageButton::contains
                             (*(ZCImageButton **)(this + 0x74),*(long *)(pZVar13 + DAT_002081a0),
                              extraout_s0_03,extraout_s1_01), fVar14 = extraout_s0_04, iVar3 != 0 ||
          (this[0x61] != (PullMenuElement)0x0)))) goto LAB_002080f8;
      pPVar11 = this + 0x60;
    }
    *pPVar11 = (PullMenuElement)0x0;
  }
LAB_00208262:
  pZVar13 = *(ZombieCafe **)(this + 100);
  iVar9 = ZombieCafe::unhandledPressOrLongEvent(pZVar13);
  iVar3 = DAT_002083a8;
  if (iVar9 != 0) {
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x78),*(long *)(pZVar13 + DAT_002083a8),
                       extraout_s0_07,extraout_s1_03);
    if (iVar9 == 0) {
      iVar9 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x7c),*(long *)(*(int *)(this + 100) + iVar3),
                         extraout_s0_08,extraout_s1_04);
      if (iVar9 == 0) {
        iVar9 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x80),*(long *)(*(int *)(this + 100) + iVar3),
                           extraout_s0_10,extraout_s1_05);
        if (iVar9 == 0) {
          iVar9 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x84),
                             *(long *)(*(int *)(this + 100) + iVar3),extraout_s0_11,extraout_s1_06);
          if (iVar9 == 0) {
            iVar9 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x88),
                               *(long *)(*(int *)(this + 100) + iVar3),extraout_s0_12,extraout_s1_07
                              );
            if (iVar9 == 0) {
              iVar3 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0x8c),
                                 *(long *)(*(int *)(this + 100) + iVar3),extraout_s0_13,
                                 extraout_s1_08);
              if (iVar3 == 0) {
                return;
              }
              uVar4 = *(undefined4 *)(this + 0x6c);
              pcVar10 = *(code **)(this + 0x68);
              uVar6 = 6;
            }
            else {
              uVar4 = *(undefined4 *)(this + 0x6c);
              pcVar10 = *(code **)(this + 0x68);
              uVar6 = 5;
            }
          }
          else {
            uVar4 = *(undefined4 *)(this + 0x6c);
            pcVar10 = *(code **)(this + 0x68);
            uVar6 = 4;
          }
        }
        else {
          uVar4 = *(undefined4 *)(this + 0x6c);
          pcVar10 = *(code **)(this + 0x68);
          uVar6 = 3;
        }
      }
      else {
        uVar4 = *(undefined4 *)(this + 0x6c);
        pcVar10 = *(code **)(this + 0x68);
        uVar6 = 2;
      }
      iVar3 = (*pcVar10)(uVar4,uVar6);
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 100),extraout_s0_14);
        *(undefined1 *)(*(int *)(this + 100) + DAT_002083ac) = 1;
      }
    }
    else {
      iVar3 = (**(code **)(this + 0x68))(*(undefined4 *)(this + 0x6c),1);
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 100),extraout_s0_09);
        *(undefined1 *)(*(int *)(this + 100) + DAT_002083ac) = 1;
        setButtonNewIndicator(this,1,false);
      }
    }
  }
  return;
}


