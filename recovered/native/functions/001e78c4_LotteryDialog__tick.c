/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e78c4 LotteryDialog::tick */

/* LotteryDialog::tick(long) */

undefined8 __thiscall LotteryDialog::tick(LotteryDialog *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  code *pcVar7;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
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
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float fVar8;
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
  float extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float fVar9;
  LotteryDialog *local_20;
  
  local_20 = this;
  if (this[0x14] == (LotteryDialog)0x0) goto LAB_001e7f18;
  if (this[0x1d0] != (LotteryDialog)0x0) {
    uVar1 = __addsf3(*(undefined4 *)(this + 0x1cc),DAT_001e7acc);
    uVar3 = DAT_001e7ad0;
    *(undefined4 *)(this + 0x1cc) = uVar1;
    iVar2 = __aeabi_fcmpge(uVar1,uVar3);
    if (iVar2 != 0) {
      this[0x1d0] = (LotteryDialog)0x0;
    }
    if (*(int *)(this + 0x1d4) == 0) {
      iVar2 = __fixsfsi(uVar1);
      if (iVar2 < 0) {
        __aeabi_idivmod(-iVar2,0x168);
        iVar2 = -*(int *)(DAT_001e7ad8 + extraout_r1_00 * 4 + 0x1e7944);
      }
      else {
        __aeabi_idivmod(iVar2,0x168);
        iVar2 = *(int *)(DAT_001e7ad4 + extraout_r1 * 4 + 0x1e792e);
      }
      iVar2 = __floatsisf(iVar2);
      uVar3 = __mulsf3(iVar2 + -0x80000000,0x37800000);
      uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
      uVar3 = __mulsf3(uVar3,uVar1);
      *(undefined4 *)(this + 0x1c8) = uVar3;
    }
    else {
      iVar5 = *(int *)(this + 0xc);
      local_20 = (LotteryDialog *)__floatsisf(-iVar5);
      iVar2 = __fixsfsi(uVar1);
      if (iVar2 < 0) {
        __aeabi_idivmod(-iVar2,0x168);
        iVar2 = -*(int *)(DAT_001e7ae0 + extraout_r1_02 * 4 + 0x1e79ac);
      }
      else {
        __aeabi_idivmod(iVar2,0x168);
        iVar2 = *(int *)(DAT_001e7adc + extraout_r1_01 * 4 + 0x1e7996);
      }
      uVar3 = __floatsisf(iVar2);
      uVar3 = __mulsf3(uVar3,0x37800000);
      uVar1 = __floatsisf(iVar5);
      uVar3 = __mulsf3(uVar3,uVar1);
      uVar3 = __addsf3(local_20,uVar3);
      *(undefined4 *)(this + 0x1c8) = uVar3;
    }
  }
  updateButtonPos(this);
  iVar2 = *(int *)(this + 0x1dc);
  *(int *)(this + 0x1dc) = iVar2 + 1;
  if (0x3b < iVar2 + 1) {
    *(undefined4 *)(this + 0x1dc) = 0;
  }
  iVar2 = 0;
  if (*(int *)(this + 0x1dc) < 0x15) {
    do {
      piVar4 = *(int **)(this + iVar2 + 0x134);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))(piVar4,0);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x3c);
  }
  else {
    do {
      piVar4 = *(int **)(this + iVar2 + 0x134);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))(piVar4,1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x3c);
  }
  if (this[0x14] == (LotteryDialog)0x0) goto LAB_001e7f18;
  ScreenElement::tick((long)this);
  iVar2 = DAT_001e7ae4;
  this_00 = *(ZombieCafe **)(this + 0x60);
  iVar5 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  if ((iVar5 != 0) && (this[0x1d0] == (LotteryDialog)0x0)) {
    local_20 = (LotteryDialog *)
               ZCImageButton::contains
                         (*(ZCImageButton **)(this + 0x6c),*(long *)(this_00 + DAT_001e7ae8),
                          extraout_s0,extraout_s1);
    iVar5 = DAT_001e7ae8;
    if (local_20 != (LotteryDialog *)0x0) {
      ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_00);
      (**(code **)(*(int *)this + 0x20))(this,0);
      (**(code **)(**(int **)(*(int *)(this + 100) + 0x78) + 0x34))
                (*(int **)(*(int *)(this + 100) + 0x78),this);
      *(undefined4 *)(*(int *)(this + 100) + 0xa4) = 0;
      *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
      (**(code **)(*(int *)this + 4))(this);
      goto LAB_001e7f18;
    }
    iVar6 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x1c4),
                       *(long *)(*(int *)(this + 0x60) + DAT_001e7ae8),extraout_s0_00,extraout_s1_00
                      );
    if (iVar6 == 0) {
      fVar8 = extraout_s0_01;
      fVar9 = extraout_s1_01;
      if (((*(int *)(this + 0x1d8) == 0) &&
          ((*(ZCImageButton **)(this + 0x80))[0x86] != (ZCImageButton)0x0)) &&
         (iVar6 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x80),
                             *(long *)(*(int *)(this + 0x60) + DAT_001e7e48),extraout_s0_01,
                             extraout_s1_01), fVar8 = extraout_s0_02, fVar9 = extraout_s1_02,
         iVar6 != 0)) {
        fVar8 = (float)L_PrintLog((char *)(DAT_001e7e50 + 0x1e7cee),
                                  (char *)(DAT_001e7e54 + 0x1e7cf0));
        ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
        iVar5 = 1;
      }
      else if ((*(int *)(this + 0x1d8) == 0) &&
              (iVar6 = ZCImageButton::contains
                                 (*(ZCImageButton **)(this + 0x88),
                                  *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
              fVar8 = extraout_s0_03, fVar9 = extraout_s1_03, iVar6 != 0)) {
        fVar8 = (float)L_PrintLog((char *)(DAT_001e7e58 + 0x1e7d14),
                                  (char *)(DAT_001e7e5c + 0x1e7d16));
        ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
        iVar5 = 2;
      }
      else {
        if ((*(int *)(this + 0x1d8) != 0) ||
           (iVar6 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x8c),
                               *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
           fVar8 = extraout_s0_04, fVar9 = extraout_s1_04, iVar6 == 0)) {
          if ((*(int *)(this + 0x1d8) == 1) &&
             (iVar6 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0x94),
                                 *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
             fVar8 = extraout_s0_05, fVar9 = extraout_s1_05, iVar6 != 0)) {
            L_PrintLog((char *)(DAT_001e7e68 + 0x1e7d4c),(char *)(DAT_001e7e6c + 0x1e7d4e));
            uVar1 = 5;
            *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
            uVar3 = *(undefined4 *)(this + 100);
            pcVar7 = *(code **)(this + 0x74);
            local_20 = (LotteryDialog *)0x1;
          }
          else if ((*(int *)(this + 0x1d8) == 1) &&
                  (iVar6 = ZCImageButton::contains
                                     (*(ZCImageButton **)(this + 0x98),
                                      *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                  fVar8 = extraout_s0_06, fVar9 = extraout_s1_06, iVar6 != 0)) {
            L_PrintLog((char *)(DAT_001e7e70 + 0x1e7d68),(char *)(DAT_001e7e74 + 0x1e7d6a));
            uVar1 = 6;
            *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
            uVar3 = *(undefined4 *)(this + 100);
            pcVar7 = *(code **)(this + 0x74);
            local_20 = (LotteryDialog *)0x1;
          }
          else if ((*(int *)(this + 0x1d8) == 1) &&
                  (iVar6 = ZCImageButton::contains
                                     (*(ZCImageButton **)(this + 0x9c),
                                      *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                  fVar8 = extraout_s0_07, fVar9 = extraout_s1_07, iVar6 != 0)) {
            L_PrintLog((char *)(DAT_001e7e78 + 0x1e7d84),(char *)(DAT_001e7e7c + 0x1e7d86));
            uVar1 = 7;
            *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
            uVar3 = *(undefined4 *)(this + 100);
            pcVar7 = *(code **)(this + 0x74);
            local_20 = (LotteryDialog *)0x1;
          }
          else {
            local_20 = *(LotteryDialog **)(this + 0x1d8);
            if ((local_20 == (LotteryDialog *)0x1) &&
               (iVar6 = ZCImageButton::contains
                                  (*(ZCImageButton **)(this + 0xa0),
                                   *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
               fVar8 = extraout_s0_08, fVar9 = extraout_s1_08, iVar6 != 0)) {
              L_PrintLog((char *)(DAT_001e7e80 + 0x1e7da0),(char *)(DAT_001e7e84 + 0x1e7da2));
              uVar1 = 8;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else if (((*(int *)(this + 0x1d8) == 0) &&
                     ((*(ZCImageButton **)(this + 0x84))[0x86] != (ZCImageButton)0x0)) &&
                    (iVar6 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0x84),
                                        *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                    fVar8 = extraout_s0_09, fVar9 = extraout_s1_09, iVar6 != 0)) {
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7e88 + 0x1e7dbe),
                                        (char *)(DAT_001e7e8c + 0x1e7dc0));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 1;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else if ((*(int *)(this + 0x1d8) == 2) &&
                    (iVar6 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0xa4),
                                        *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                    fVar8 = extraout_s0_10, fVar9 = extraout_s1_10, iVar6 != 0)) {
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7e90 + 0x1e7de2),
                                        (char *)(DAT_001e7e94 + 0x1e7de4));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 9;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else if ((*(int *)(this + 0x1d8) == 2) &&
                    (iVar6 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0xa8),
                                        *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                    fVar8 = extraout_s0_11, fVar9 = extraout_s1_11, iVar6 != 0)) {
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7e98 + 0x1e7e06),
                                        (char *)(DAT_001e7e9c + 0x1e7e08));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 10;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else if ((*(int *)(this + 0x1d8) == 2) &&
                    (iVar6 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0xac),
                                        *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                    fVar8 = extraout_s0_12, fVar9 = extraout_s1_12, iVar6 != 0)) {
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7ea0 + 0x1e7e2a),
                                        (char *)(DAT_001e7ea4 + 0x1e7e2c));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 0xb;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else if ((*(int *)(this + 0x1d8) == 3) &&
                    (iVar6 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0xb0),
                                        *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                    fVar8 = extraout_s0_13, fVar9 = extraout_s1_13, iVar6 != 0)) {
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7f1c + 0x1e7eb0),
                                        (char *)(DAT_001e7f20 + 0x1e7eb2));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 0xc;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else if ((*(int *)(this + 0x1d8) == 3) &&
                    (iVar6 = ZCImageButton::contains
                                       (*(ZCImageButton **)(this + 0xb4),
                                        *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                    fVar8 = extraout_s0_14, fVar9 = extraout_s1_14, iVar6 != 0)) {
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7f24 + 0x1e7ed4),
                                        (char *)(DAT_001e7f28 + 0x1e7ed6));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 0xd;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
            else {
              if ((*(int *)(this + 0x1d8) != 3) ||
                 (iVar5 = ZCImageButton::contains
                                    (*(ZCImageButton **)(this + 0xb8),
                                     *(long *)(*(int *)(this + 0x60) + iVar5),fVar8,fVar9),
                 iVar5 == 0)) goto LAB_001e7ccc;
              fVar8 = (float)L_PrintLog((char *)(DAT_001e7f2c + 0x1e7ef8),
                                        (char *)(DAT_001e7f30 + 0x1e7efa));
              ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
              uVar1 = 0xe;
              *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
              uVar3 = *(undefined4 *)(this + 100);
              pcVar7 = *(code **)(this + 0x74);
            }
          }
          (*pcVar7)(uVar3,uVar1,0xffffffff);
          goto LAB_001e7ccc;
        }
        fVar8 = (float)L_PrintLog((char *)(DAT_001e7e60 + 0x1e7d30),
                                  (char *)(DAT_001e7e64 + 0x1e7d32));
        ZombieCafe::playEffect(*(int *)(this + 0x60),fVar8);
        iVar5 = 3;
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_01);
      iVar5 = 0;
    }
    pageMove(this,iVar5);
    *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
  }
LAB_001e7ccc:
  *(undefined1 *)(*(int *)(this + 0x60) + iVar2) = 1;
  if (*(char *)(*(int *)(this + 0x60) + DAT_001e7e4c) != '\0') {
    backClose(this);
  }
LAB_001e7f18:
  return CONCAT44(param_1,local_20);
}


