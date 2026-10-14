/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022c458 Store::tick */

/* Store::tick(long) */

void __thiscall Store::tick(Store *this,long param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  ScreenElement *this_00;
  int iVar4;
  String *this_01;
  uchar uVar5;
  uint uVar6;
  Store SVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  Store *pSVar12;
  int iVar13;
  long lVar14;
  ZombieCafe *this_02;
  NoticeDialog *pNVar15;
  undefined4 uVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar17;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined8 uVar18;
  undefined4 uVar19;
  Store *pSStack_88;
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [60];
  
  this[0x65] = (Store)0x0;
  ScreenElement::tick((long)this);
  iVar13 = DAT_0022c7a0 + 0x22c478;
  if (this[0xd4] != (Store)0x0) {
    *(undefined4 *)(this + 0xd0) = 0;
    this[0xd4] = (Store)0x0;
  }
  if (1 < (byte)this[0x80] - 1) {
    FUN_0022cc9c();
  }
  if (this[0x14] == (Store)0x0) {
    FUN_0022cc9c();
  }
  iVar9 = *(int *)(this + 0x68);
  if (((*(int *)(iVar9 + DAT_0022c7a4) != 0) && (*(int *)(iVar9 + 0x4b8) == 0)) &&
     (this[100] == (Store)0x0)) {
    this[0xd4] = (Store)0x1;
  }
  if ((((*(char *)(iVar9 + DAT_0022c7a8) == '\0') && (iVar8 = *(int *)(iVar9 + 0x4b8), iVar8 != 0))
      && ((*(int *)(iVar9 + DAT_0022c7a4) == 0 &&
          ((iVar9 = ScreenElement::contains((ScreenElement *)this,iVar8 >> 0x10,(int)(short)iVar8),
           iVar9 != 0 &&
           (iVar9 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0xa8),
                               *(int *)(*(int *)(this + 0x68) + 0x4b8) >> 0x10,
                               (int)(short)*(int *)(*(int *)(this + 0x68) + 0x4b8),extraout_s0,
                               extraout_s1), iVar9 == 0)))))) &&
     (iVar9 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xac),
                         *(int *)(*(int *)(this + 0x68) + 0x4b8) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0x68) + 0x4b8),extraout_s0_00,
                         extraout_s1_00), iVar9 == 0)) {
    *(undefined4 *)(this + 0xd0) = 0;
    FUN_0022c594();
    return;
  }
  this_02 = *(ZombieCafe **)(this + 0x68);
  iVar9 = ZombieCafe::unhandledPressOrLongEvent(this_02);
  if (iVar9 == 0) {
    FUN_0022cd9c();
  }
  iVar9 = *(int *)(this_02 + DAT_0022c7a4);
  iVar9 = ScreenElement::contains((ScreenElement *)this,iVar9 >> 0x10,(int)(short)iVar9);
  if (iVar9 == 0) {
    FUN_0022cd9c();
    return;
  }
  uVar19 = 0x3f800000;
  iVar9 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0xa8),
                     *(int *)(*(int *)(this + 0x68) + DAT_0022c7a4) >> 0x10,
                     (int)(short)*(int *)(*(int *)(this + 0x68) + DAT_0022c7a4),extraout_s0_01,
                     extraout_s1_01);
  if (iVar9 == 0) {
    uVar19 = 0x3f800000;
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0xac),
                       *(int *)(*(int *)(this + 0x68) + DAT_0022c7a4) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0x68) + DAT_0022c7a4),extraout_s0_02,
                       extraout_s1_02);
    if (iVar9 != 0) {
      piVar3 = *(int **)(this + 0xb0);
      iVar8 = piVar3[2];
      iVar9 = piVar3[1] - (*(int *)(*(int *)(this + 0xb4) + 0xc) * 7 >> 3);
      goto LAB_0022c63a;
    }
    iVar9 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x88),
                       *(int *)(*(int *)(this + 0x68) + DAT_0022c7a4) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0x68) + DAT_0022c7a4),extraout_s0_03,
                       extraout_s1_03);
    uVar18 = CONCAT44(extraout_s1_04,extraout_s0_04);
    if (iVar9 == 0) {
      iVar9 = 0;
      pSStack_88 = this;
      do {
        iVar8 = ZCImageButton::contains
                          (*(ZCImageButton **)(pSStack_88 + 0x8c),
                           *(int *)(*(int *)(this + 0x68) + DAT_0022c7a4) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x68) + DAT_0022c7a4),(float)uVar18,
                           (float)((ulonglong)uVar18 >> 0x20));
        uVar18 = CONCAT44(extraout_s1_05,extraout_s0_05);
        if (iVar8 != 0) {
          ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_05);
          uVar18 = setCurrentTab(this,(uchar)iVar9);
          *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022c7a8) = 1;
          this[0xd4] = (Store)0x1;
        }
        iVar9 = iVar9 + 1;
        pSStack_88 = pSStack_88 + 4;
      } while (iVar9 != 7);
    }
    else {
      ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_04);
      close(this);
      *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022c7a8) = 1;
      this[0xd4] = (Store)0x1;
    }
  }
  else {
    piVar3 = *(int **)(this + 0xb0);
    iVar8 = piVar3[2];
    iVar9 = piVar3[1] + (*(int *)(*(int *)(this + 0xb4) + 0xc) * 7 >> 3);
LAB_0022c63a:
    fVar17 = (float)(**(code **)(*piVar3 + 0x14))
                              (piVar3,iVar9,iVar8,*(code **)(*piVar3 + 0x14),uVar19);
    ZombieCafe::playEffect(*(int *)(this + 0x68),fVar17);
    *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022c7a8) = 1;
  }
  iVar9 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(this + 0x68));
  if (iVar9 != 0) {
    iVar9 = *(int *)(*(int *)(this + 0xb0) + 0x38);
    for (iVar8 = 0; iVar8 < iVar9; iVar8 = iVar8 + 1) {
      this_00 = (ScreenElement *)ScreenElement::getChildAt(*(ScreenElement **)(this + 0xb0),iVar8);
      iVar4 = ScreenElement::contains
                        (this_00,*(int *)(*(int *)(this + 0x68) + DAT_0022c7a4) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0x68) + DAT_0022c7a4));
      iVar2 = DAT_0022c7ac;
      if (iVar4 != 0) {
        if (this_00[0x80] == (ScreenElement)0x0) {
          *(undefined4 *)(this + 0xd0) = 0;
          ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_06);
LAB_0022c8ee:
          *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022cb30) = 1;
          this[0x65] = (Store)0x1;
        }
        else {
          fVar17 = extraout_s0_06;
          if ((*(byte *)(*(int *)(this_00 + 0x68) + 0x44) - 3 < 2) ||
             ((iVar9 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(this + 0x68) + DAT_0022c7ac),'\x12')
              , iVar9 != 0 &&
              (iVar9 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(this + 0x68) + iVar2),'\x11'),
              fVar17 = extraout_s0_07, iVar9 != 0)))) {
            iVar9 = DAT_0022cb20;
            if ((*(char *)(*(int *)(this_00 + 0x68) + 0x44) == '\x04') &&
               ((iVar8 = TutorialSystem::isTutorialCompleted
                                   (*(TutorialSystem **)(*(int *)(this + 0x68) + DAT_0022cb20),
                                    '\x12'), fVar17 = extraout_s0_08, iVar8 != 0 &&
                (iVar9 = TutorialSystem::isTutorialCompleted
                                   (*(TutorialSystem **)(*(int *)(this + 0x68) + iVar9),'\x11'),
                fVar17 = extraout_s0_09, iVar9 == 0)))) {
              pNVar15 = *(NoticeDialog **)(this + 200);
              Vector<String>::elementAt((int)aSStack_68);
              Vector<String>::elementAt((int)aSStack_60);
              NoticeDialog::show(pNVar15,aSStack_68,aSStack_60,0,0);
              String::~String(aSStack_60);
              this_01 = aSStack_68;
            }
            else {
              iVar9 = DAT_0022cb20;
              if ((*(char *)(*(int *)(this_00 + 0x68) + 0x44) != '\x03') ||
                 ((iVar8 = TutorialSystem::isTutorialCompleted
                                     (*(TutorialSystem **)(*(int *)(this + 0x68) + DAT_0022cb20),
                                      '\x11'), fVar17 = extraout_s0_10, iVar8 == 0 ||
                  (iVar9 = TutorialSystem::isTutorialCompleted
                                     (*(TutorialSystem **)(*(int *)(this + 0x68) + iVar9),'\x12'),
                  fVar17 = extraout_s0_11, iVar9 != 0)))) {
                pSVar12 = this + 0xd0;
                *(undefined4 *)pSVar12 = *(undefined4 *)(this_00 + 0x68);
                ZombieCafe::playEffect(*(int *)(this + 0x68),fVar17);
                iVar9 = specialFurniture(this,*(FurnitureData **)pSVar12);
                if (iVar9 == 0) {
                  pSVar12 = this + 0xd4;
                }
                else {
                  cVar1 = *(char *)(*(int *)pSVar12 + 0x44);
                  if (cVar1 != '\a') {
                    if (cVar1 == '\f') {
                      SVar7 = (Store)0x3;
                    }
                    else {
                      if (cVar1 != '\x05') goto LAB_0022c8ee;
                      SVar7 = (Store)0x2;
                    }
                    this[100] = SVar7;
                    this[0xd4] = (Store)0x0;
                    *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022cb30) = 1;
                    this[0x65] = (Store)0x1;
                    goto LAB_0022c8ee;
                  }
                  this[100] = (Store)0x1;
                  this[0xd4] = (Store)0x0;
                  *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022cb30) = 1;
                  pSVar12 = this + 0x65;
                }
                *pSVar12 = (Store)0x1;
                goto LAB_0022c8ee;
              }
              pNVar15 = *(NoticeDialog **)(this + 200);
              Vector<String>::elementAt((int)aSStack_58);
              Vector<String>::elementAt((int)aSStack_50);
              NoticeDialog::show(pNVar15,aSStack_58,aSStack_50,0,0);
              String::~String(aSStack_50);
              this_01 = aSStack_58;
            }
          }
          else {
            pNVar15 = *(NoticeDialog **)(this + 200);
            Vector<String>::elementAt((int)aSStack_78);
            Vector<String>::elementAt((int)aSStack_70);
            NoticeDialog::show(pNVar15,aSStack_78,aSStack_70,0,0);
            String::~String(aSStack_70);
            this_01 = aSStack_78;
          }
          String::~String(this_01);
        }
        break;
      }
    }
  }
  if (this[100] == (Store)0x0) {
    this[0xd4] = (Store)0x1;
  }
  *(undefined1 *)(*(int *)(this + 0x68) + DAT_0022cb30) = 1;
  piVar3 = *(int **)(this + 0xb0);
  uVar19 = __floatsisf(piVar3[1]);
  __addsf3(uVar19,*(undefined4 *)(this + 0xb8));
  uVar19 = __fixsfsi();
  (**(code **)(*piVar3 + 0x14))(piVar3,uVar19,piVar3[2]);
  uVar16 = *(undefined4 *)(this + 0xb8);
  puVar10 = *(undefined4 **)(iVar13 + DAT_0022ce20);
  uVar19 = __floatsisf(param_1);
  uVar19 = __mulsf3(uVar19,*puVar10);
  iVar9 = __aeabi_fcmplt(uVar19,0x3f800000);
  if (iVar9 == 0) {
    uVar19 = 0x3f800000;
  }
  uVar19 = __subsf3(0x3f800000,uVar19);
  iVar9 = __mulsf3(uVar16,uVar19);
  *(int *)(this + 0xb8) = iVar9;
  iVar8 = __aeabi_fcmpge(iVar9,0);
  if (iVar8 == 0) {
    iVar9 = iVar9 + -0x80000000;
  }
  iVar13 = __aeabi_fcmplt(iVar9,**(undefined4 **)(iVar13 + DAT_0022ce24));
  if (iVar13 != 0) {
    *(undefined4 *)(this + 0xb8) = 0;
  }
  piVar3 = *(int **)(this + 0xb0);
  uVar11 = *(int *)(*(int *)(this + 0xb4) + 0xc) - piVar3[3];
  uVar11 = uVar11 & (int)(uVar11 - 1 | uVar11) >> 0x1f;
  uVar6 = uVar11;
  if (piVar3[1] < (int)uVar11) {
LAB_0022cc02:
    (**(code **)(*piVar3 + 0x14))(piVar3,uVar6,piVar3[2]);
    *(undefined4 *)(this + 0xb8) = 0;
  }
  else if (0 < piVar3[1]) {
    uVar6 = 0;
    goto LAB_0022cc02;
  }
  (**(code **)(**(int **)(this + 0xa8) + 0x20))
            (*(int **)(this + 0xa8),*(uint *)(*(int *)(this + 0xb0) + 4) >> 0x1f);
  (**(code **)(**(int **)(this + 0xac) + 0x20))
            (*(int **)(this + 0xac),(int)uVar11 < *(int *)(*(int *)(this + 0xb0) + 4));
  piVar3 = *(int **)(this + 0xa8);
  iVar13 = piVar3[3] * *(int *)(*(int *)(this + 0x68) + DAT_0022ce28);
  uVar6 = iVar13 >> 0x1f;
  uVar6 = (iVar13 >> 0x11) + uVar6 ^ uVar6;
  (**(code **)(*piVar3 + 0x14))
            (piVar3,uVar6 + *(int *)(this + 0xc0),
             *(int *)(this + 0x10) - (*(int *)(*(int *)(this + 0x84) + 0x10) >> 1));
  (**(code **)(**(int **)(this + 0xac) + 0x14))
            (*(int **)(this + 0xac),
             (*(int *)(*(int *)(this + 0x84) + 0xc) - *(int *)(this + 0xc0)) - uVar6,
             *(undefined4 *)(*(int *)(this + 0xa8) + 8));
  continueLoading(this);
  piVar3 = *(int **)(this + 0x7c);
  if (piVar3 == (int *)0x0) goto LAB_0022cd22;
  if (((char)piVar3[1] != '\0') && (iVar13 = (**(code **)(*piVar3 + 0x1c))(piVar3), iVar13 == 0)) {
    (**(code **)(*piVar3 + 8))(piVar3,param_1);
  }
  iVar9 = *(int *)(this + 0x7c);
  uVar6 = *(uint *)(iVar9 + 0x14);
  lVar14 = *(long *)(iVar9 + 8);
  iVar13 = __aeabi_ldivmod(uVar6 << 0x10,((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,
                           *(int *)(iVar9 + 0x10),*(int *)(iVar9 + 0x10) >> 0x1f);
  iVar13 = CapcomMath::interpolatePoints
                     (lVar14,*(long *)(iVar9 + 0xc),iVar13,*(int *)(iVar9 + 0x18));
  (**(code **)(*(int *)this + 0x14))(this,iVar13 >> 0x10,(int)(short)iVar13);
  iVar13 = (**(code **)(**(int **)(this + 0x7c) + 0x1c))();
  if (iVar13 == 0) goto LAB_0022cd22;
  if (this[0x80] == (Store)0x1) {
    uVar5 = '\x02';
LAB_0022cd0e:
    setState(this,uVar5);
  }
  else if (this[0x80] == (Store)0x3) {
    uVar5 = '\0';
    goto LAB_0022cd0e;
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
    *(undefined4 *)(this + 0x7c) = 0;
  }
LAB_0022cd22:
  if (*(char *)(*(int *)(this + 0x68) + DAT_0022ce2c) != '\0') {
    backClose(this);
  }
  return;
}


