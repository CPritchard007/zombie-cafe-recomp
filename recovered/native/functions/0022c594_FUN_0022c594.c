/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022c594 FUN_0022c594 */

void FUN_0022c594(void)

{
  char cVar1;
  int iVar2;
  ScreenElement *pSVar3;
  int iVar4;
  int *piVar5;
  ScreenElement *pSVar6;
  int iVar7;
  String *this;
  undefined4 uVar8;
  uchar uVar9;
  FurnitureData *pFVar10;
  uint uVar11;
  Store SVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  Store *pSVar16;
  Store *unaff_r5;
  int unaff_r6;
  long lVar17;
  int unaff_r7;
  ZombieCafe *this_00;
  NoticeDialog *pNVar18;
  undefined4 uVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar20;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined8 uVar21;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  if (unaff_r7 < in_stack_00000010) {
    pSVar3 = (ScreenElement *)
             ScreenElement::getChildAt((ScreenElement *)*in_stack_00000014,unaff_r7);
    pSVar6 = pSVar3;
    if (pSVar3[0x80] == (ScreenElement)0x0) {
      pSVar6 = (ScreenElement *)FUN_0022cd96();
    }
    iVar4 = ScreenElement::contains
                      (pSVar6,*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b8) >> 0x10,
                       (int)(short)*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b8));
    if (iVar4 == 0) {
      FUN_0022cd96();
    }
    pFVar10 = *(FurnitureData **)(pSVar3 + 0x68);
    *(FurnitureData **)(unaff_r5 + 0xd0) = pFVar10;
    iVar4 = Store::specialFurniture(unaff_r5,pFVar10);
    if (iVar4 == 0) {
      unaff_r5[100] = (Store)0x0;
    }
  }
  *(undefined4 *)(unaff_r5 + 0xb8) = 0;
  this_00 = *(ZombieCafe **)(unaff_r5 + 0x68);
  iVar4 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  if (iVar4 == 0) {
    FUN_0022cd9c();
  }
  iVar4 = *(int *)(this_00 + DAT_0022c7a4);
  iVar4 = ScreenElement::contains((ScreenElement *)unaff_r5,iVar4 >> 0x10,(int)(short)iVar4);
  if (iVar4 == 0) {
    FUN_0022cd9c();
    return;
  }
  iVar4 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0xa8),
                     *(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4) >> 0x10,
                     (int)(short)*(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4),extraout_s0,
                     extraout_s1);
  if (iVar4 == 0) {
    iVar4 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0xac),
                       *(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4) >> 0x10,
                       (int)(short)*(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4),extraout_s0_00
                       ,extraout_s1_00);
    if (iVar4 != 0) {
      piVar5 = *(int **)(unaff_r5 + 0xb0);
      iVar13 = piVar5[2];
      iVar4 = piVar5[1] - (*(int *)(*(int *)(unaff_r5 + 0xb4) + 0xc) * 7 >> 3);
      goto LAB_0022c63a;
    }
    iVar4 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x88),
                       *(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4) >> 0x10,
                       (int)(short)*(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4),extraout_s0_01
                       ,extraout_s1_01);
    uVar21 = CONCAT44(extraout_s1_02,extraout_s0_02);
    if (iVar4 == 0) {
      iVar4 = 0;
      pSVar16 = unaff_r5;
      do {
        iVar13 = ZCImageButton::contains
                           (*(ZCImageButton **)(pSVar16 + 0x8c),
                            *(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4) >> 0x10,
                            (int)(short)*(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4),
                            (float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
        uVar21 = CONCAT44(extraout_s1_03,extraout_s0_03);
        if (iVar13 != 0) {
          ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x68),extraout_s0_03);
          uVar21 = Store::setCurrentTab(unaff_r5,(uchar)iVar4);
          *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a8) = 1;
          unaff_r5[0xd4] = (Store)0x1;
        }
        iVar4 = iVar4 + 1;
        pSVar16 = pSVar16 + 4;
      } while (iVar4 != 7);
    }
    else {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x68),extraout_s0_02);
      Store::close(unaff_r5);
      *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a8) = 1;
      unaff_r5[0xd4] = (Store)0x1;
    }
  }
  else {
    piVar5 = *(int **)(unaff_r5 + 0xb0);
    iVar13 = piVar5[2];
    iVar4 = piVar5[1] + (*(int *)(*(int *)(unaff_r5 + 0xb4) + 0xc) * 7 >> 3);
LAB_0022c63a:
    fVar20 = (float)(**(code **)(*piVar5 + 0x14))(piVar5,iVar4,iVar13);
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x68),fVar20);
    *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a8) = 1;
  }
  iVar4 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(unaff_r5 + 0x68));
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(unaff_r5 + 0xb0) + 0x38);
    for (iVar13 = 0; iVar13 < iVar4; iVar13 = iVar13 + 1) {
      pSVar6 = (ScreenElement *)
               ScreenElement::getChildAt(*(ScreenElement **)(unaff_r5 + 0xb0),iVar13);
      iVar7 = ScreenElement::contains
                        (pSVar6,*(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4) >> 0x10,
                         (int)(short)*(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7a4));
      iVar2 = DAT_0022c7ac;
      if (iVar7 != 0) {
        if (pSVar6[0x80] == (ScreenElement)0x0) {
          *(undefined4 *)(unaff_r5 + 0xd0) = 0;
          ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x68),extraout_s0_04);
LAB_0022c8ee:
          *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022cb30) = 1;
          unaff_r5[0x65] = (Store)0x1;
        }
        else {
          fVar20 = extraout_s0_04;
          if ((*(byte *)(*(int *)(pSVar6 + 0x68) + 0x44) - 3 < 2) ||
             ((iVar4 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + DAT_0022c7ac),
                                  '\x12'), iVar4 != 0 &&
              (iVar4 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + iVar2),'\x11'),
              fVar20 = extraout_s0_05, iVar4 != 0)))) {
            iVar4 = DAT_0022cb20;
            if ((*(char *)(*(int *)(pSVar6 + 0x68) + 0x44) == '\x04') &&
               ((iVar13 = TutorialSystem::isTutorialCompleted
                                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + DAT_0022cb20),
                                     '\x12'), fVar20 = extraout_s0_06, iVar13 != 0 &&
                (iVar4 = TutorialSystem::isTutorialCompleted
                                   (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + iVar4),'\x11'),
                fVar20 = extraout_s0_07, iVar4 == 0)))) {
              pNVar18 = *(NoticeDialog **)(unaff_r5 + 200);
              Vector<String>::elementAt((int)&stack0x00000028);
              Vector<String>::elementAt((int)&stack0x00000030);
              NoticeDialog::show(pNVar18,&stack0x00000028,&stack0x00000030);
              String::~String((String *)&stack0x00000030);
              this = (String *)&stack0x00000028;
            }
            else {
              iVar4 = DAT_0022cb20;
              if ((*(char *)(*(int *)(pSVar6 + 0x68) + 0x44) != '\x03') ||
                 ((iVar13 = TutorialSystem::isTutorialCompleted
                                      (*(TutorialSystem **)
                                        (*(int *)(unaff_r5 + 0x68) + DAT_0022cb20),'\x11'),
                  fVar20 = extraout_s0_08, iVar13 == 0 ||
                  (iVar4 = TutorialSystem::isTutorialCompleted
                                     (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + iVar4),'\x12'
                                     ), fVar20 = extraout_s0_09, iVar4 != 0)))) {
                pSVar16 = unaff_r5 + 0xd0;
                *(int *)pSVar16 = *(int *)(pSVar6 + 0x68);
                ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x68),fVar20);
                iVar4 = Store::specialFurniture(unaff_r5,*(FurnitureData **)pSVar16);
                if (iVar4 == 0) {
                  pSVar16 = unaff_r5 + 0xd4;
                }
                else {
                  cVar1 = *(char *)(*(int *)pSVar16 + 0x44);
                  if (cVar1 != '\a') {
                    if (cVar1 == '\f') {
                      SVar12 = (Store)0x3;
                    }
                    else {
                      if (cVar1 != '\x05') goto LAB_0022c8ee;
                      SVar12 = (Store)0x2;
                    }
                    unaff_r5[100] = SVar12;
                    unaff_r5[0xd4] = (Store)0x0;
                    *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022cb30) = 1;
                    unaff_r5[0x65] = (Store)0x1;
                    goto LAB_0022c8ee;
                  }
                  unaff_r5[100] = (Store)0x1;
                  unaff_r5[0xd4] = (Store)0x0;
                  *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022cb30) = 1;
                  pSVar16 = unaff_r5 + 0x65;
                }
                *pSVar16 = (Store)0x1;
                goto LAB_0022c8ee;
              }
              pNVar18 = *(NoticeDialog **)(unaff_r5 + 200);
              Vector<String>::elementAt((int)&stack0x00000038);
              Vector<String>::elementAt((int)&stack0x00000040);
              NoticeDialog::show(pNVar18,&stack0x00000038,&stack0x00000040);
              String::~String((String *)&stack0x00000040);
              this = (String *)&stack0x00000038;
            }
          }
          else {
            pNVar18 = *(NoticeDialog **)(unaff_r5 + 200);
            Vector<String>::elementAt((int)&stack0x00000018);
            Vector<String>::elementAt((int)&stack0x00000020);
            NoticeDialog::show(pNVar18,&stack0x00000018,&stack0x00000020);
            String::~String((String *)&stack0x00000020);
            this = (String *)&stack0x00000018;
          }
          String::~String(this);
        }
        break;
      }
    }
  }
  if (unaff_r5[100] == (Store)0x0) {
    unaff_r5[0xd4] = (Store)0x1;
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0x68) + DAT_0022cb30) = 1;
  piVar5 = *(int **)(unaff_r5 + 0xb0);
  uVar8 = __floatsisf(piVar5[1]);
  __addsf3(uVar8,*(undefined4 *)(unaff_r5 + 0xb8));
  uVar8 = __fixsfsi();
  (**(code **)(*piVar5 + 0x14))(piVar5,uVar8,piVar5[2]);
  uVar19 = *(undefined4 *)(unaff_r5 + 0xb8);
  puVar14 = *(undefined4 **)(unaff_r6 + DAT_0022ce20);
  uVar8 = __floatsisf(in_stack_0000000c);
  uVar8 = __mulsf3(uVar8,*puVar14);
  iVar4 = __aeabi_fcmplt(uVar8,0x3f800000);
  if (iVar4 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar8 = __subsf3(0x3f800000,uVar8);
  iVar4 = __mulsf3(uVar19,uVar8);
  *(int *)(unaff_r5 + 0xb8) = iVar4;
  iVar13 = __aeabi_fcmpge(iVar4,0);
  if (iVar13 == 0) {
    iVar4 = iVar4 + -0x80000000;
  }
  iVar4 = __aeabi_fcmplt(iVar4,**(undefined4 **)(unaff_r6 + DAT_0022ce24));
  if (iVar4 != 0) {
    *(undefined4 *)(unaff_r5 + 0xb8) = 0;
  }
  piVar5 = *(int **)(unaff_r5 + 0xb0);
  uVar15 = *(int *)(*(int *)(unaff_r5 + 0xb4) + 0xc) - piVar5[3];
  uVar15 = uVar15 & (int)(uVar15 - 1 | uVar15) >> 0x1f;
  uVar11 = uVar15;
  if (piVar5[1] < (int)uVar15) {
LAB_0022cc02:
    (**(code **)(*piVar5 + 0x14))(piVar5,uVar11,piVar5[2]);
    *(undefined4 *)(unaff_r5 + 0xb8) = 0;
  }
  else if (0 < piVar5[1]) {
    uVar11 = 0;
    goto LAB_0022cc02;
  }
  (**(code **)(**(int **)(unaff_r5 + 0xa8) + 0x20))
            (*(int **)(unaff_r5 + 0xa8),*(uint *)(*(int *)(unaff_r5 + 0xb0) + 4) >> 0x1f);
  (**(code **)(**(int **)(unaff_r5 + 0xac) + 0x20))
            (*(int **)(unaff_r5 + 0xac),(int)uVar15 < *(int *)(*(int *)(unaff_r5 + 0xb0) + 4));
  piVar5 = *(int **)(unaff_r5 + 0xa8);
  iVar4 = piVar5[3] * *(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022ce28);
  uVar11 = iVar4 >> 0x1f;
  uVar11 = (iVar4 >> 0x11) + uVar11 ^ uVar11;
  (**(code **)(*piVar5 + 0x14))
            (piVar5,uVar11 + *(int *)(unaff_r5 + 0xc0),
             *(int *)(unaff_r5 + 0x10) - (*(int *)(*(int *)(unaff_r5 + 0x84) + 0x10) >> 1));
  (**(code **)(**(int **)(unaff_r5 + 0xac) + 0x14))
            (*(int **)(unaff_r5 + 0xac),
             (*(int *)(*(int *)(unaff_r5 + 0x84) + 0xc) - *(int *)(unaff_r5 + 0xc0)) - uVar11,
             *(undefined4 *)(*(int *)(unaff_r5 + 0xa8) + 8));
  Store::continueLoading(unaff_r5);
  piVar5 = *(int **)(unaff_r5 + 0x7c);
  if (piVar5 == (int *)0x0) goto LAB_0022cd22;
  if (((char)piVar5[1] != '\0') && (iVar4 = (**(code **)(*piVar5 + 0x1c))(piVar5), iVar4 == 0)) {
    (**(code **)(*piVar5 + 8))(piVar5,in_stack_0000000c);
  }
  iVar13 = *(int *)(unaff_r5 + 0x7c);
  uVar11 = *(uint *)(iVar13 + 0x14);
  lVar17 = *(long *)(iVar13 + 8);
  iVar4 = __aeabi_ldivmod(uVar11 << 0x10,((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10,
                          *(int *)(iVar13 + 0x10),*(int *)(iVar13 + 0x10) >> 0x1f);
  iVar4 = CapcomMath::interpolatePoints
                    (lVar17,*(long *)(iVar13 + 0xc),iVar4,*(int *)(iVar13 + 0x18));
  (**(code **)(*(int *)unaff_r5 + 0x14))(unaff_r5,iVar4 >> 0x10,(int)(short)iVar4);
  iVar4 = (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x1c))();
  if (iVar4 == 0) goto LAB_0022cd22;
  if (unaff_r5[0x80] == (Store)0x1) {
    uVar9 = '\x02';
LAB_0022cd0e:
    Store::setState(unaff_r5,uVar9);
  }
  else if (unaff_r5[0x80] == (Store)0x3) {
    uVar9 = '\0';
    goto LAB_0022cd0e;
  }
  if (*(int **)(unaff_r5 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_r5 + 0x7c) + 4))();
    *(undefined4 *)(unaff_r5 + 0x7c) = 0;
  }
LAB_0022cd22:
  if (*(char *)(*(int *)(unaff_r5 + 0x68) + DAT_0022ce2c) != '\0') {
    Store::backClose(unaff_r5);
  }
  return;
}


