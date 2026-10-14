/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f7dc0 NotificationOptions::tick */

/* NotificationOptions::tick(long) */

void __thiscall NotificationOptions::tick(NotificationOptions *this,long param_1)

{
  int iVar1;
  int iVar2;
  String *this_00;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ZombieCafe *this_01;
  int *piVar10;
  undefined4 *puVar11;
  NotificationOptions *pNVar12;
  code *pcVar13;
  undefined4 uVar14;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
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
  float fVar15;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar16;
  undefined4 extraout_s1_01;
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
  float fVar17;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (this[0x14] == (NotificationOptions)0x0) {
    return;
  }
  ScreenElement::tick((long)this);
  this_01 = *(ZombieCafe **)(this + 0x60);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_01);
  iVar6 = DAT_001f8180;
  iVar5 = DAT_001f8158;
  if (iVar1 == 0) {
    if ((this_01[DAT_001f8180] == (ZombieCafe)0x0) && (*(int *)(this_01 + 0x4b8) != 0)) {
      if ((int)**(short **)(DAT_001f8184 + 0x1f8136) < *(int *)(this_01 + DAT_001f8188)) {
        uVar3 = __floatsisf((int)(short)*(int *)(this_01 + 0x4b8) -
                            (int)*(short *)(this_01 + DAT_001f8158));
        *(undefined4 *)(this + 0xdc) = uVar3;
        this_01[iVar6] = (ZombieCafe)0x1;
      }
      else {
        *(undefined4 *)(this + 0xdc) = 0;
      }
    }
    goto LAB_001f8190;
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x78),*(long *)(this_01 + DAT_001f8158),extraout_s0,
                     extraout_s1);
  uVar16 = CONCAT44(extraout_s1_00,extraout_s0_00);
  if (iVar6 != 0) {
    uVar16 = (**(code **)(*(int *)this + 0x20))(this,0);
    *(undefined4 *)(this + 0xdc) = 0;
  }
  iVar6 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x70),*(long *)(*(int *)(this + 0x60) + iVar5),
                     (float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  uVar16 = CONCAT44(extraout_s1_01,extraout_s0_01);
  if (iVar6 != 0) {
    piVar10 = *(int **)(this + 0x84);
    iVar6 = piVar10[2] + *(int *)(*(int *)(this + 0x80) + 0x10);
    uVar16 = (**(code **)(*piVar10 + 0x14))(piVar10,iVar6 >> 0x10,iVar6 * 0x10000 >> 0x10);
  }
  iVar1 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x74),*(long *)(*(int *)(this + 0x60) + iVar5),
                     (float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  iVar6 = DAT_001f8158;
  if (iVar1 != 0) {
    piVar10 = *(int **)(this + 0x84);
    iVar5 = piVar10[2] - *(int *)(*(int *)(this + 0x80) + 0x10);
    (**(code **)(*piVar10 + 0x14))(piVar10,iVar5 >> 0x10,iVar5 * 0x10000 >> 0x10);
    goto LAB_001f8190;
  }
  iVar1 = ScreenElement::contains
                    (*(ScreenElement **)(this + 0x80),
                     *(int *)(*(int *)(this + 0x60) + DAT_001f8158) >> 0x10,
                     (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_001f8158));
  if (iVar1 == 0) goto LAB_001f8190;
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x8c),*(long *)(*(int *)(this + 0x60) + iVar6),
                     extraout_s0_02,extraout_s1_02);
  iVar1 = DAT_001f815c;
  iVar8 = *(int *)(this + 0x60);
  if (iVar2 != 0) {
    *(byte *)(iVar8 + DAT_001f815c) = *(byte *)(iVar8 + DAT_001f815c) ^ 1;
    if (*(char *)(*(int *)(this + 0x60) + iVar1) == '\0') {
      uVar3 = *(undefined4 *)(this + 100);
    }
    else {
      uVar3 = *(undefined4 *)(this + 0x68);
    }
    *(undefined4 *)(*(int *)(this + 0x8c) + 0x60) = uVar3;
    javaEnableRemoteNotification(*(undefined1 *)(*(int *)(this + 0x60) + iVar1));
    goto LAB_001f8190;
  }
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x94),*(long *)(iVar8 + iVar6),extraout_s0_03,
                     extraout_s1_03);
  iVar1 = DAT_001f8160;
  if (iVar2 != 0) {
    *(byte *)(*(int *)(this + 0x60) + DAT_001f8160) =
         *(byte *)(*(int *)(this + 0x60) + DAT_001f8160) ^ 1;
    if (*(char *)(*(int *)(this + 0x60) + iVar1) == '\0') {
      uVar3 = *(undefined4 *)(this + 100);
    }
    else {
      uVar3 = *(undefined4 *)(this + 0x68);
    }
    *(undefined4 *)(*(int *)(this + 0x94) + 0x60) = uVar3;
    *(undefined1 *)(*(int *)(this + 0x9c) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
    *(undefined1 *)(*(int *)(this + 0xa4) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
    *(undefined1 *)(*(int *)(this + 0xac) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
    *(undefined1 *)(*(int *)(this + 0xb4) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
    *(undefined1 *)(*(int *)(this + 0xbc) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
    *(undefined1 *)(*(int *)(this + 0xc4) + 0x86) = *(undefined1 *)(*(int *)(this + 0x60) + iVar1);
    cVar7 = *(char *)(*(int *)(this + 0x60) + iVar1);
    if (cVar7 != '\0') {
      cVar7 = *(char *)(*(int *)(this + 0x60) + DAT_001f8164);
    }
    *(char *)(*(int *)(this + 200) + 0x86) = cVar7;
    cVar7 = *(char *)(*(int *)(this + 0x60) + iVar1);
    if (cVar7 != '\0') {
      cVar7 = *(char *)(*(int *)(this + 0x60) + DAT_001f8164);
    }
    *(char *)(*(int *)(this + 0xd4) + 0x86) = cVar7;
    goto LAB_001f8190;
  }
  pNVar12 = this + 0x9c;
  fVar15 = extraout_s0_04;
  fVar17 = extraout_s1_04;
  if (((*(ZCImageButton **)pNVar12)[0x86] == (ZCImageButton)0x0) ||
     (iVar6 = ZCImageButton::contains
                        (*(ZCImageButton **)pNVar12,*(long *)(*(int *)(this + 0x60) + iVar6),
                         extraout_s0_04,extraout_s1_04), fVar15 = extraout_s0_05,
     fVar17 = extraout_s1_05, iVar6 == 0)) {
    pNVar12 = this + 0xa4;
    if (((*(ZCImageButton **)pNVar12)[0x86] != (ZCImageButton)0x0) &&
       (iVar6 = ZCImageButton::contains
                          (*(ZCImageButton **)pNVar12,*(long *)(*(int *)(this + 0x60) + iVar5),
                           fVar15,fVar17), fVar15 = extraout_s0_06, fVar17 = extraout_s1_06,
       iVar6 != 0)) {
      iVar5 = *(int *)(this + 0x60);
      iVar6 = DAT_001f816c;
      goto LAB_001f8010;
    }
    pNVar12 = this + 0xac;
    if (((*(ZCImageButton **)pNVar12)[0x86] != (ZCImageButton)0x0) &&
       (iVar6 = ZCImageButton::contains
                          (*(ZCImageButton **)pNVar12,*(long *)(*(int *)(this + 0x60) + iVar5),
                           fVar15,fVar17), fVar15 = extraout_s0_07, fVar17 = extraout_s1_07,
       iVar6 != 0)) {
      iVar5 = *(int *)(this + 0x60);
      iVar6 = DAT_001f8170;
      goto LAB_001f8010;
    }
    pNVar12 = this + 0xb4;
    if (((*(ZCImageButton **)pNVar12)[0x86] != (ZCImageButton)0x0) &&
       (iVar6 = ZCImageButton::contains
                          (*(ZCImageButton **)pNVar12,*(long *)(*(int *)(this + 0x60) + iVar5),
                           fVar15,fVar17), fVar15 = extraout_s0_08, fVar17 = extraout_s1_08,
       iVar6 != 0)) {
      iVar5 = *(int *)(this + 0x60);
      iVar6 = DAT_001f8174;
      goto LAB_001f8010;
    }
    pNVar12 = this + 0xbc;
    if (((*(ZCImageButton **)pNVar12)[0x86] != (ZCImageButton)0x0) &&
       (iVar6 = ZCImageButton::contains
                          (*(ZCImageButton **)pNVar12,*(long *)(*(int *)(this + 0x60) + iVar5),
                           fVar15,fVar17), fVar15 = extraout_s0_09, fVar17 = extraout_s1_09,
       iVar6 != 0)) {
      iVar5 = *(int *)(this + 0x60);
      iVar6 = DAT_001f8178;
      goto LAB_001f8010;
    }
    if (((*(ZCImageButton **)(this + 0xc4))[0x86] == (ZCImageButton)0x0) ||
       (iVar1 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0xc4),*(long *)(*(int *)(this + 0x60) + iVar5)
                           ,fVar15,fVar17), iVar6 = DAT_001f8164, fVar15 = extraout_s0_10,
       fVar17 = extraout_s1_10, iVar1 == 0)) {
      if (((*(ZCImageButton **)(this + 200))[0x86] == (ZCImageButton)0x0) ||
         (iVar6 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 200),
                             *(long *)(*(int *)(this + 0x60) + iVar5),fVar15,fVar17),
         fVar15 = extraout_s0_11, fVar17 = extraout_s1_11, iVar6 == 0)) {
        if (((*(ZCImageButton **)(this + 0xd4))[0x86] == (ZCImageButton)0x0) ||
           (iVar6 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0xd4),
                               *(long *)(*(int *)(this + 0x60) + iVar5),fVar15,fVar17),
           iVar5 = DAT_001f817c, iVar6 == 0)) goto LAB_001f8190;
        *(int *)(*(int *)(this + 0x60) + DAT_001f817c) =
             *(int *)(*(int *)(this + 0x60) + DAT_001f817c) + 1;
        if (0x17 < *(int *)(*(int *)(this + 0x60) + iVar5)) {
          *(undefined4 *)(*(int *)(this + 0x60) + iVar5) = 0;
        }
        piVar10 = *(int **)(this + 0xd8);
        pcVar13 = *(code **)(*piVar10 + 0x44);
        getTimeString((int)aSStack_20);
        (*pcVar13)(piVar10,aSStack_20);
        this_00 = aSStack_20;
      }
      else {
        *(int *)(*(int *)(this + 0x60) + 0x960) = *(int *)(*(int *)(this + 0x60) + 0x960) + 1;
        if (0x17 < *(int *)(*(int *)(this + 0x60) + 0x960)) {
          *(undefined4 *)(*(int *)(this + 0x60) + 0x960) = 0;
        }
        piVar10 = *(int **)(this + 0xcc);
        pcVar13 = *(code **)(*piVar10 + 0x44);
        getTimeString((int)aSStack_28);
        (*pcVar13)(piVar10,aSStack_28);
        this_00 = aSStack_28;
      }
      String::~String(this_00);
      goto LAB_001f8190;
    }
    *(byte *)(*(int *)(this + 0x60) + DAT_001f8164) =
         *(byte *)(*(int *)(this + 0x60) + DAT_001f8164) ^ 1;
    iVar5 = DAT_001f8160;
    cVar7 = *(char *)(*(int *)(this + 0x60) + DAT_001f8160);
    if (cVar7 != '\0') {
      cVar7 = *(char *)(*(int *)(this + 0x60) + iVar6);
    }
    *(char *)(*(int *)(this + 200) + 0x86) = cVar7;
    cVar7 = *(char *)(*(int *)(this + 0x60) + iVar5);
    if (cVar7 != '\0') {
      cVar7 = *(char *)(*(int *)(this + 0x60) + iVar6);
    }
    *(char *)(*(int *)(this + 0xd4) + 0x86) = cVar7;
    iVar5 = *(int *)(this + 0xc4);
  }
  else {
    iVar5 = *(int *)(this + 0x60);
    iVar6 = DAT_001f8168;
LAB_001f8010:
    *(byte *)(iVar5 + iVar6) = *(byte *)(iVar5 + iVar6) ^ 1;
    iVar5 = *(int *)pNVar12;
  }
  if (*(char *)(*(int *)(this + 0x60) + iVar6) == '\0') {
    uVar3 = *(undefined4 *)(this + 100);
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x68);
  }
  *(undefined4 *)(iVar5 + 0x60) = uVar3;
LAB_001f8190:
  piVar10 = *(int **)(this + 0x84);
  pcVar13 = *(code **)(*piVar10 + 0x14);
  uVar3 = __floatsisf(piVar10[2]);
  __addsf3(uVar3,*(undefined4 *)(this + 0xdc));
  uVar4 = __fixsfsi();
  iVar5 = DAT_001f830c;
  uVar9 = *(int *)(*(int *)(this + 0x80) + 0x10) - piVar10[4];
  uVar9 = uVar9 & (int)(uVar9 - 1 | uVar9) >> 0x1f;
  if ((int)uVar9 <= (int)uVar4) {
    uVar9 = (int)(uVar4 - 1 | uVar4) >> 0x1f & uVar4;
  }
  (*pcVar13)(piVar10,0,uVar9);
  puVar11 = *(undefined4 **)(iVar5 + 0x1f81d8);
  uVar14 = *(undefined4 *)(this + 0xdc);
  uVar3 = __floatsisf(param_1);
  uVar3 = __mulsf3(uVar3,*puVar11);
  iVar5 = __aeabi_fcmplt(uVar3,0x3f800000);
  if (iVar5 == 0) {
    uVar3 = 0x3f800000;
  }
  uVar3 = __subsf3(0x3f800000,uVar3);
  iVar5 = __mulsf3(uVar14,uVar3);
  *(int *)(this + 0xdc) = iVar5;
  iVar6 = __aeabi_fcmpge(iVar5,0);
  if (iVar6 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  iVar5 = __aeabi_fcmplt(iVar5,**(undefined4 **)(DAT_001f8310 + 0x1f822e));
  if (iVar5 != 0) {
    *(undefined4 *)(this + 0xdc) = 0;
  }
  (**(code **)(**(int **)(this + 0x70) + 0x20))
            (*(int **)(this + 0x70),*(uint *)(*(int *)(this + 0x84) + 8) >> 0x1f);
  (**(code **)(**(int **)(this + 0x74) + 0x20))
            (*(int **)(this + 0x74),
             *(int *)(*(int *)(this + 0x80) + 0x10) <
             *(int *)(*(int *)(this + 0x84) + 8) + *(int *)(*(int *)(this + 0x84) + 0x10));
  return;
}


