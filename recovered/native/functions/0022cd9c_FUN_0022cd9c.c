/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022cd9c FUN_0022cd9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0022cd9c(void)

{
  char cVar1;
  String *this;
  undefined4 uVar2;
  int iVar3;
  uchar uVar4;
  uint uVar5;
  FurnitureData *pFVar6;
  ScreenElement SVar7;
  int iVar8;
  ZombieCafe *pZVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  ScreenElement *unaff_r5;
  long lVar13;
  int unaff_r6;
  NoticeDialog *pNVar14;
  undefined4 uVar15;
  undefined4 in_stack_0000000c;
  
  if ((*(char *)(*(int *)(unaff_r5 + 0x68) + DAT_0022ce30) == '\0') &&
     (iVar8 = *(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b8), iVar8 != 0)) {
    iVar8 = ScreenElement::contains(unaff_r5,iVar8 >> 0x10,(int)(short)iVar8);
    pZVar9 = *(ZombieCafe **)(unaff_r5 + 0x68);
    if (iVar8 == 0) {
      iVar3 = ZombieCafe::unhandledTouchUpEvent(pZVar9);
      iVar8 = DAT_0022cb20;
      if (((((iVar3 == 0) || (*(int *)(unaff_r5 + 0xd0) == 0)) ||
           (cVar1 = *(char *)(*(int *)(unaff_r5 + 0xd0) + 0x44), cVar1 == '\x04')) ||
          (cVar1 == '\x03')) ||
         ((iVar3 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(pZVar9 + DAT_0022cb20),'\x12'), iVar3 != 0 &&
          (iVar8 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + iVar8),'\x11'),
          iVar8 != 0)))) {
        pZVar9 = *(ZombieCafe **)(unaff_r5 + 0x68);
        iVar3 = ZombieCafe::unhandledTouchUpEvent(pZVar9);
        iVar8 = DAT_0022cb20;
        if (((iVar3 == 0) ||
            ((*(int *)(unaff_r5 + 0xd0) == 0 ||
             (*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x44) != '\x04')))) ||
           ((iVar3 = TutorialSystem::isTutorialCompleted
                               (*(TutorialSystem **)(pZVar9 + DAT_0022cb20),'\x12'), iVar3 == 0 ||
            (iVar8 = TutorialSystem::isTutorialCompleted
                               (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + iVar8),'\x11'),
            iVar8 != 0)))) {
          pZVar9 = *(ZombieCafe **)(unaff_r5 + 0x68);
          iVar3 = ZombieCafe::unhandledTouchUpEvent(pZVar9);
          iVar8 = DAT_0022cb20;
          if ((((iVar3 == 0) || (*(int *)(unaff_r5 + 0xd0) == 0)) ||
              (*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x44) != '\x03')) ||
             ((iVar3 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(pZVar9 + DAT_0022cb20),'\x11'), iVar3 == 0 ||
              (iVar8 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(unaff_r5 + 0x68) + iVar8),'\x12'),
              iVar8 != 0)))) {
            pFVar6 = *(FurnitureData **)(unaff_r5 + 0xd0);
            if ((pFVar6 != (FurnitureData *)0x0) &&
               (iVar8 = Store::specialFurniture((Store *)unaff_r5,pFVar6), iVar8 != 0)) {
              cVar1 = *(char *)(*(int *)(unaff_r5 + 0xd0) + 0x44);
              if (cVar1 == '\a') {
                SVar7 = (ScreenElement)0x1;
              }
              else if (cVar1 == '\f') {
                SVar7 = (ScreenElement)0x3;
              }
              else {
                if (cVar1 != '\x05') goto LAB_0022cb4c;
                SVar7 = (ScreenElement)0x2;
              }
              unaff_r5[100] = SVar7;
            }
            goto LAB_0022cb4c;
          }
          pNVar14 = *(NoticeDialog **)(unaff_r5 + 200);
          Vector<String>::elementAt((int)&stack0x00000068);
          Vector<String>::elementAt((int)&stack0x00000070);
          NoticeDialog::show(pNVar14,&stack0x00000068,&stack0x00000070);
          String::~String((String *)&stack0x00000070);
          this = (String *)&stack0x00000068;
        }
        else {
          pNVar14 = *(NoticeDialog **)(unaff_r5 + 200);
          Vector<String>::elementAt((int)&stack0x00000058);
          Vector<String>::elementAt((int)&stack0x00000060);
          NoticeDialog::show(pNVar14,&stack0x00000058,&stack0x00000060);
          String::~String((String *)&stack0x00000060);
          this = (String *)&stack0x00000058;
        }
      }
      else {
        pNVar14 = *(NoticeDialog **)(unaff_r5 + 200);
        Vector<String>::elementAt((int)&stack0x00000048);
        Vector<String>::elementAt((int)&stack0x00000050);
        NoticeDialog::show(pNVar14,&stack0x00000048,&stack0x00000050);
        String::~String((String *)&stack0x00000050);
        this = (String *)&stack0x00000048;
      }
      String::~String(this);
    }
    else {
      if ((int)**(short **)(unaff_r6 + _DAT_0022cb34) < *(int *)(pZVar9 + _DAT_0022cb38)) {
        uVar2 = __floatsisf((*(int *)(pZVar9 + 0x4b8) >> 0x10) -
                            (*(int *)(pZVar9 + _DAT_0022cb3c) >> 0x10));
        *(undefined4 *)(unaff_r5 + 0xb8) = uVar2;
      }
      pZVar9[DAT_0022cb30] = (ZombieCafe)0x1;
    }
  }
LAB_0022cb4c:
  piVar10 = *(int **)(unaff_r5 + 0xb0);
  uVar2 = __floatsisf(piVar10[1]);
  __addsf3(uVar2,*(undefined4 *)(unaff_r5 + 0xb8));
  uVar2 = __fixsfsi();
  (**(code **)(*piVar10 + 0x14))(piVar10,uVar2,piVar10[2]);
  uVar15 = *(undefined4 *)(unaff_r5 + 0xb8);
  puVar11 = *(undefined4 **)(unaff_r6 + DAT_0022ce20);
  uVar2 = __floatsisf(in_stack_0000000c);
  uVar2 = __mulsf3(uVar2,*puVar11);
  iVar8 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar8 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar8 = __mulsf3(uVar15,uVar2);
  *(int *)(unaff_r5 + 0xb8) = iVar8;
  iVar3 = __aeabi_fcmpge(iVar8,0);
  if (iVar3 == 0) {
    iVar8 = iVar8 + -0x80000000;
  }
  iVar8 = __aeabi_fcmplt(iVar8,**(undefined4 **)(unaff_r6 + DAT_0022ce24));
  if (iVar8 != 0) {
    *(undefined4 *)(unaff_r5 + 0xb8) = 0;
  }
  piVar10 = *(int **)(unaff_r5 + 0xb0);
  uVar12 = *(int *)(*(int *)(unaff_r5 + 0xb4) + 0xc) - piVar10[3];
  uVar12 = uVar12 & (int)(uVar12 - 1 | uVar12) >> 0x1f;
  uVar5 = uVar12;
  if (piVar10[1] < (int)uVar12) {
LAB_0022cc02:
    (**(code **)(*piVar10 + 0x14))(piVar10,uVar5,piVar10[2]);
    *(undefined4 *)(unaff_r5 + 0xb8) = 0;
  }
  else if (0 < piVar10[1]) {
    uVar5 = 0;
    goto LAB_0022cc02;
  }
  (**(code **)(**(int **)(unaff_r5 + 0xa8) + 0x20))
            (*(int **)(unaff_r5 + 0xa8),*(uint *)(*(int *)(unaff_r5 + 0xb0) + 4) >> 0x1f);
  (**(code **)(**(int **)(unaff_r5 + 0xac) + 0x20))
            (*(int **)(unaff_r5 + 0xac),(int)uVar12 < *(int *)(*(int *)(unaff_r5 + 0xb0) + 4));
  piVar10 = *(int **)(unaff_r5 + 0xa8);
  iVar8 = piVar10[3] * *(int *)(*(int *)(unaff_r5 + 0x68) + DAT_0022ce28);
  uVar5 = iVar8 >> 0x1f;
  uVar5 = (iVar8 >> 0x11) + uVar5 ^ uVar5;
  (**(code **)(*piVar10 + 0x14))
            (piVar10,uVar5 + *(int *)(unaff_r5 + 0xc0),
             *(int *)(unaff_r5 + 0x10) - (*(int *)(*(int *)(unaff_r5 + 0x84) + 0x10) >> 1));
  (**(code **)(**(int **)(unaff_r5 + 0xac) + 0x14))
            (*(int **)(unaff_r5 + 0xac),
             (*(int *)(*(int *)(unaff_r5 + 0x84) + 0xc) - *(int *)(unaff_r5 + 0xc0)) - uVar5,
             *(undefined4 *)(*(int *)(unaff_r5 + 0xa8) + 8));
  Store::continueLoading((Store *)unaff_r5);
  piVar10 = *(int **)(unaff_r5 + 0x7c);
  if (piVar10 == (int *)0x0) goto LAB_0022cd22;
  if (((char)piVar10[1] != '\0') && (iVar8 = (**(code **)(*piVar10 + 0x1c))(piVar10), iVar8 == 0)) {
    (**(code **)(*piVar10 + 8))(piVar10,in_stack_0000000c);
  }
  iVar3 = *(int *)(unaff_r5 + 0x7c);
  uVar5 = *(uint *)(iVar3 + 0x14);
  lVar13 = *(long *)(iVar3 + 8);
  iVar8 = __aeabi_ldivmod(uVar5 << 0x10,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                          *(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x10) >> 0x1f);
  iVar8 = CapcomMath::interpolatePoints(lVar13,*(long *)(iVar3 + 0xc),iVar8,*(int *)(iVar3 + 0x18));
  (**(code **)(*(int *)unaff_r5 + 0x14))(unaff_r5,iVar8 >> 0x10,(int)(short)iVar8);
  iVar8 = (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x1c))();
  if (iVar8 == 0) goto LAB_0022cd22;
  if (unaff_r5[0x80] == (ScreenElement)0x1) {
    uVar4 = '\x02';
LAB_0022cd0e:
    Store::setState((Store *)unaff_r5,uVar4);
  }
  else if (unaff_r5[0x80] == (ScreenElement)0x3) {
    uVar4 = '\0';
    goto LAB_0022cd0e;
  }
  if (*(int **)(unaff_r5 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_r5 + 0x7c) + 4))();
    *(undefined4 *)(unaff_r5 + 0x7c) = 0;
  }
LAB_0022cd22:
  if (*(char *)(*(int *)(unaff_r5 + 0x68) + DAT_0022ce2c) != '\0') {
    Store::backClose((Store *)unaff_r5);
  }
  return;
}


