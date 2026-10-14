/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ff580 FriendCafeHudElement::tick */

/* FriendCafeHudElement::tick(long) */

void __thiscall FriendCafeHudElement::tick(FriendCafeHudElement *this,long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ZCImageButton *this_00;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  FriendCafeHudElement *pFVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  code *pcVar13;
  ZombieCafe *this_01;
  int iVar14;
  int iVar15;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar16;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar17;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  float extraout_s1_10;
  float fVar18;
  int local_a4;
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar10 = *(int *)(this + 0x78);
  iVar11 = DAT_000ff6c0 + 0xff59a;
  for (iVar15 = 0; iVar15 < *(int *)(this + 0x90) + 1; iVar15 = iVar15 + 1) {
    piVar12 = (int *)(*(int *)(this + 0x94) + iVar15 * 0xc);
    local_a4 = piVar12[1];
    iVar14 = *piVar12;
    piVar12 = (int *)piVar12[2];
    iVar6 = *(int *)(iVar15 * 4 + *(int *)(this + 0x84));
    if ((char)piVar12[5] != '\0') {
      iVar14 = iVar14 + param_1;
      if (1000 < iVar14) {
        iVar14 = iVar14 + DAT_000ff6c4;
      }
      iVar2 = __divsi3(iVar14 * 0x168,1000);
      if (iVar2 < 0) {
        __aeabi_idivmod(-iVar2,0x168);
        local_a4 = -*(int *)(extraout_r1_00 * 4 + iVar11);
      }
      else {
        iVar7 = DAT_000ff6c8 + 0xff5f0;
        __aeabi_idivmod(iVar2,0x168);
        local_a4 = *(int *)(extraout_r1 * 4 + iVar7);
      }
      iVar2 = __divsi3(piVar12[4],3);
      local_a4 = local_a4 * iVar2 >> 0x10;
      sVar1 = *(short *)(iVar6 + 4);
      uVar4 = local_a4 + CONCAT22(sVar1,*(undefined2 *)(iVar6 + 8));
      (**(code **)(*piVar12 + 0x14))
                (piVar12,(int)((int)sVar1 << 0x10 | uVar4 & 0xffff) >> 0x10,(int)(short)uVar4);
    }
    if ((-1 < iVar15) && (iVar15 <= *(int *)(this + 0x90))) {
      piVar8 = (int *)(*(int *)(this + 0x94) + iVar15 * 0xc);
      *piVar8 = iVar14;
      piVar8[1] = local_a4;
      piVar8[2] = (int)piVar12;
    }
  }
  piVar12 = *(int **)(this + 0xc0);
  if ((char)piVar12[5] != '\0') {
    pFVar9 = this + 0xb8;
    iVar11 = param_1 + *(int *)pFVar9;
    *(int *)pFVar9 = iVar11;
    if (1000 < iVar11) {
      *(int *)pFVar9 = iVar11 + DAT_000ff6c4;
    }
    iVar11 = __divsi3(*(int *)pFVar9 * 0x168,1000);
    if (iVar11 < 0) {
      __aeabi_idivmod(-iVar11,0x168);
      iVar11 = -*(int *)(extraout_r1_02 * 4 + DAT_000ffa58 + 0xff6e0);
    }
    else {
      __aeabi_idivmod(iVar11,0x168);
      iVar11 = *(int *)(extraout_r1_01 * 4 + DAT_000ff6cc + 0xff6b8);
    }
    iVar15 = __divsi3(piVar12[4],3);
    iVar15 = iVar15 * iVar11 >> 0x10;
    *(int *)(this + 0xbc) = iVar15;
    iVar11 = *(int *)(this + 0xa4);
    uVar4 = (iVar15 + *(int *)(iVar11 + 0x10) / 2 & 0xffffU) +
            CONCAT22(*(ushort *)(iVar11 + 4),*(undefined2 *)(iVar11 + 8));
    (**(code **)(*piVar12 + 0x14))
              (piVar12,(int)(((-(*(int *)(iVar11 + 0xc) / 2) & 0xffffU) +
                             (uint)*(ushort *)(iVar11 + 4)) * 0x10000 | uVar4 & 0xffff) >> 0x10,
               (int)(short)uVar4);
  }
  if (*(int *)(this + 0xf0) != *(int *)(iVar10 + 0x14)) {
    piVar12 = *(int **)(this + 0xe4);
    pcVar13 = *(code **)(*piVar12 + 0x44);
    String::valueOf((int)aSStack_88);
    (*pcVar13)(piVar12,aSStack_88);
    String::~String(aSStack_88);
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(iVar10 + 0x14);
  }
  iVar11 = *(int *)(this + 0xf4);
  iVar10 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x70));
  if (iVar11 != iVar10) {
    piVar12 = *(int **)(this + 0xe8);
    pcVar13 = *(code **)(*piVar12 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x70));
    String::valueOf((int)aSStack_80);
    (*pcVar13)(piVar12,aSStack_80);
    String::~String(aSStack_80);
    uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x70));
    *(undefined4 *)(this + 0xf4) = uVar3;
  }
  ScreenElement::tick((long)this);
  piVar12 = *(int **)(this + 0xd4);
  pcVar13 = *(code **)(*piVar12 + 0x44);
  String::valueOf((int)aSStack_78);
  String::operator+(aSStack_70,(char *)aSStack_78);
  String::valueOf((int)aSStack_68);
  String::operator+(aSStack_60,aSStack_70,aSStack_68);
  (*pcVar13)(piVar12,aSStack_60);
  String::~String(aSStack_60);
  String::~String(aSStack_68);
  String::~String(aSStack_70);
  String::~String(aSStack_78);
  piVar12 = *(int **)(this + 0xd0);
  pcVar13 = *(code **)(*piVar12 + 0x44);
  String::valueOf((int)aSStack_58);
  String::operator+(aSStack_50,(char *)aSStack_58);
  String::valueOf((int)aSStack_48);
  String::operator+(aSStack_40,aSStack_50,aSStack_48);
  (*pcVar13)(piVar12,aSStack_40);
  String::~String(aSStack_40);
  String::~String(aSStack_48);
  String::~String(aSStack_50);
  String::~String(aSStack_58);
  piVar12 = *(int **)(this + 0xd8);
  pcVar13 = *(code **)(*piVar12 + 0x44);
  String::valueOf((int)aSStack_38);
  String::operator+(aSStack_30,(char *)aSStack_38);
  String::valueOf((int)aSStack_28);
  String::operator+(aSStack_20,aSStack_30,aSStack_28);
  (*pcVar13)(piVar12,aSStack_20);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  this_01 = *(ZombieCafe **)(this + 0x70);
  iVar11 = ZombieCafe::unhandledPressOrLongEvent(this_01);
  iVar10 = DAT_000ffaa8;
  if (iVar11 != 0) {
    iVar11 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0xa0),*(long *)(this_01 + DAT_000ffaa8),
                        extraout_s0,extraout_s1);
    uVar17 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar11 != 0) {
      fVar16 = (float)(**(code **)(this + 0x74))(*(undefined4 *)(this + 0x78),9);
      uVar17 = ZombieCafe::playEffect(*(int *)(this + 0x70),fVar16);
    }
    iVar11 = DAT_000ffaa8;
    iVar15 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0xa4),*(long *)(*(int *)(this + 0x70) + iVar10),
                        (float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
    if (iVar15 == 0) {
      iVar15 = ZCImageButton::contains
                         (*(ZCImageButton **)(this + 0x60),*(long *)(*(int *)(this + 0x70) + iVar11)
                          ,extraout_s0_01,extraout_s1_01);
      if (iVar15 == 0) {
        iVar15 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 100),
                            *(long *)(*(int *)(this + 0x70) + iVar11),extraout_s0_02,extraout_s1_02)
        ;
        if (iVar15 == 0) {
          iVar15 = ZCImageButton::contains
                             (*(ZCImageButton **)(this + 0xa8),
                              *(long *)(*(int *)(this + 0x70) + iVar11),extraout_s0_03,
                              extraout_s1_03);
          if (iVar15 == 0) {
            iVar15 = ZCImageButton::contains
                               (*(ZCImageButton **)(this + 0xac),
                                *(long *)(*(int *)(this + 0x70) + iVar11),extraout_s0_04,
                                extraout_s1_04);
            if (iVar15 == 0) {
              iVar15 = ZCImageButton::contains
                                 (*(ZCImageButton **)(this + 0xb0),
                                  *(long *)(*(int *)(this + 0x70) + iVar11),extraout_s0_05,
                                  extraout_s1_05);
              if (iVar15 == 0) {
                iVar15 = ZCImageButton::contains
                                   (*(ZCImageButton **)(this + 0xb4),
                                    *(long *)(*(int *)(this + 0x70) + iVar11),extraout_s0_06,
                                    extraout_s1_06);
                if (iVar15 == 0) {
                  iVar11 = ZCImageButton::contains
                                     (*(ZCImageButton **)(this + 0x6c),
                                      *(long *)(*(int *)(this + 0x70) + iVar11),extraout_s0_07,
                                      extraout_s1_07);
                  if ((iVar11 == 0) || (*(char *)(*(int *)(this + 0x6c) + 0x86) == '\0')) {
                    iVar11 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0x68),
                                        *(long *)(*(int *)(this + 0x70) + iVar10),extraout_s0_08,
                                        extraout_s1_08);
                    fVar16 = extraout_s0_10;
                    fVar18 = extraout_s1_10;
                    if (iVar11 == 0) {
                      while( true ) {
                        if (*(int *)(this + 0x80) + 1 <= iVar11) {
                          return;
                        }
                        this_00 = *(ZCImageButton **)(iVar11 * 4 + *(int *)(this + 0x84));
                        if ((this_00[0x14] != (ZCImageButton)0x0) &&
                           (iVar15 = ZCImageButton::contains
                                               (this_00,*(long *)(*(int *)(this + 0x70) + iVar10),
                                                fVar16,fVar18), fVar16 = extraout_s0_09,
                           fVar18 = extraout_s1_09, iVar15 != 0)) break;
                        iVar11 = iVar11 + 1;
                      }
                      ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_09);
                      (**(code **)(this + 0x74))(*(undefined4 *)(this + 0x78),iVar11);
                      setButtonNewIndicator(this,iVar11,false);
                      return;
                    }
                    ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_10);
                    uVar3 = *(undefined4 *)(this + 0x78);
                    pcVar13 = *(code **)(this + 0x74);
                    uVar5 = 7;
                  }
                  else {
                    ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_08);
                    uVar3 = *(undefined4 *)(this + 0x78);
                    pcVar13 = *(code **)(this + 0x74);
                    uVar5 = 8;
                  }
                }
                else {
                  ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_07);
                  uVar3 = *(undefined4 *)(this + 0x78);
                  pcVar13 = *(code **)(this + 0x74);
                  uVar5 = 0xd;
                }
              }
              else {
                ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_06);
                uVar3 = *(undefined4 *)(this + 0x78);
                pcVar13 = *(code **)(this + 0x74);
                uVar5 = 0xe;
              }
            }
            else {
              ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_05);
              uVar3 = *(undefined4 *)(this + 0x78);
              pcVar13 = *(code **)(this + 0x74);
              uVar5 = 0xc;
            }
          }
          else {
            ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_04);
            uVar3 = *(undefined4 *)(this + 0x78);
            pcVar13 = *(code **)(this + 0x74);
            uVar5 = 0xb;
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_03);
          uVar3 = *(undefined4 *)(this + 0x78);
          pcVar13 = *(code **)(this + 0x74);
          uVar5 = 6;
        }
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_02);
        uVar3 = *(undefined4 *)(this + 0x78);
        pcVar13 = *(code **)(this + 0x74);
        uVar5 = 5;
      }
      (*pcVar13)(uVar3,uVar5);
    }
    else {
      fVar16 = (float)(**(code **)(this + 0x74))(*(undefined4 *)(this + 0x78),10);
      ZombieCafe::playEffect(*(int *)(this + 0x70),fVar16);
    }
  }
  return;
}


