/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fbc48 FridgeDialog::tick */

/* FridgeDialog::tick(long) */

void __thiscall FridgeDialog::tick(FridgeDialog *this,long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  String *this_00;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ScreenElement *this_01;
  uint uVar8;
  FridgeDialog FVar9;
  ZombieCafe *this_02;
  FridgeDialog *pFVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  ConfirmDialog *pCVar14;
  code *pcVar15;
  undefined4 uVar16;
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
  float fVar17;
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
  float fVar18;
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
  
  iVar2 = CapcomApp::getInstance();
  iVar13 = DAT_000fbfdc;
  uVar3 = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x44);
  iVar13 = iVar13 + 0xfbc66;
  if (this[0x14] == (FridgeDialog)0x0) {
    FUN_000fc47a();
  }
  ScreenElement::tick((long)this);
  this_02 = *(ZombieCafe **)(this + 0x60);
  if (this_02[DAT_000fbfe0] != (ZombieCafe)0x0) goto LAB_000fc136;
  iVar7 = ZombieCafe::pressEvent(this_02);
  iVar2 = DAT_000fbfe4;
  if (iVar7 == 0) {
    if (*(int *)(this_02 + 0x4b8) != 0) {
      if ((int)**(short **)(iVar13 + DAT_000fc3a0) < *(int *)(this_02 + DAT_000fc3a4)) {
        uVar5 = __floatsisf((*(int *)(this_02 + 0x4b8) >> 0x10) -
                            (*(int *)(this_02 + DAT_000fc3a8) >> 0x10));
        iVar2 = DAT_000fc3ac;
        *(undefined4 *)(this + 0xe0) = uVar5;
        this_02[iVar2] = (ZombieCafe)0x1;
      }
      else {
        *(undefined4 *)(this + 0xe0) = 0;
      }
    }
    goto LAB_000fc136;
  }
  iVar7 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x7c),*(long *)(this_02 + DAT_000fbfe4),extraout_s0,
                     extraout_s1);
  if (iVar7 != 0) {
    ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_00);
LAB_000fbf5a:
    hide(this);
    goto LAB_000fc136;
  }
  fVar17 = extraout_s0_00;
  fVar18 = extraout_s1_00;
  if (((*(ZCImageButton **)(this + 0x74))[0x14] == (ZCImageButton)0x0) ||
     (iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x74),*(long *)(*(int *)(this + 0x60) + iVar2),
                         extraout_s0_00,extraout_s1_00), fVar17 = extraout_s0_01,
     fVar18 = extraout_s1_01, iVar7 == 0)) {
    if (((*(ZCImageButton **)(this + 0x78))[0x14] == (ZCImageButton)0x0) ||
       (iVar7 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x78),*(long *)(*(int *)(this + 0x60) + iVar2)
                           ,fVar17,fVar18), fVar17 = extraout_s0_02, fVar18 = extraout_s1_02,
       iVar7 == 0)) {
      if (((*(ZCImageButton **)(this + 0x80))[0x14] == (ZCImageButton)0x0) ||
         (iVar7 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x80),
                             *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18),
         fVar17 = extraout_s0_03, fVar18 = extraout_s1_03, iVar7 == 0)) {
        if (((*(ZCImageButton **)(this + 0x84))[0x14] != (ZCImageButton)0x0) &&
           (iVar7 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x84),
                               *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18),
           fVar17 = extraout_s0_04, fVar18 = extraout_s1_04, iVar7 != 0)) {
          iVar2 = *(int *)(this + 0xe4) + 1;
          goto LAB_000fbdc6;
        }
        if (((*(ZCImageButton **)(this + 0x88))[0x14] != (ZCImageButton)0x0) &&
           (iVar7 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x88),
                               *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18),
           fVar17 = extraout_s0_05, fVar18 = extraout_s1_05, iVar7 != 0)) {
          iVar2 = *(int *)(this + 0xe4) + 2;
          goto LAB_000fbdc6;
        }
        if (((*(ZCImageButton **)(this + 0x8c))[0x14] != (ZCImageButton)0x0) &&
           (iVar7 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x8c),
                               *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18),
           fVar17 = extraout_s0_06, fVar18 = extraout_s1_06, iVar7 != 0)) {
          iVar2 = *(int *)(this + 0xe4) + 3;
          goto LAB_000fbdc6;
        }
        if (((*(ZCImageButton **)(this + 0x90))[0x14] != (ZCImageButton)0x0) &&
           (iVar7 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x90),
                               *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18),
           fVar17 = extraout_s0_07, fVar18 = extraout_s1_07, iVar7 != 0)) {
          iVar2 = *(int *)(this + 0xe4) + 4;
          goto LAB_000fbdc6;
        }
        if (((*(ScreenElement **)(this + 0xec))[0x14] != (ScreenElement)0x0) &&
           (iVar7 = ScreenElement::contains
                              (*(ScreenElement **)(this + 0xec),
                               *(int *)(*(int *)(this + 0x60) + iVar2) >> 0x10,
                               (int)(short)*(int *)(*(int *)(this + 0x60) + iVar2)),
           fVar17 = extraout_s0_08, fVar18 = extraout_s1_08, iVar7 != 0)) {
          String::String(aSStack_80,
                         (String *)
                         (*(int *)(*(int *)(this + 0xe8) * 4 + *(int *)(*(int *)(this + 200) + 8)) +
                         0xc));
          iVar2 = operator==(aSStack_80,0);
          FVar9 = (FridgeDialog)0x1;
          if (iVar2 == 0) {
            FVar9 = this[0xd1];
          }
          String::~String(aSStack_80);
          if (FVar9 != (FridgeDialog)0x0) {
            serveRecipe(this);
            if (this[0xd1] == (FridgeDialog)0x0) {
              GameStateCafe::checkForFridgeAddCounter
                        (*(GameStateCafe **)(*(int *)(this + 0x60) + 8));
            }
            goto LAB_000fc136;
          }
          pCVar14 = *(ConfirmDialog **)(this + 0xd8);
          Vector<String>::elementAt((int)aSStack_78);
          Vector<String>::elementAt((int)aSStack_70);
          Vector<String>::elementAt((int)aSStack_68);
          ConfirmDialog::show(pCVar14,aSStack_78,aSStack_70,aSStack_68,
                              *(undefined4 *)(iVar13 + DAT_000fbffc),this);
          String::~String(aSStack_68);
          String::~String(aSStack_70);
          this_00 = aSStack_78;
LAB_000fc0f6:
          String::~String(this_00);
          goto LAB_000fc136;
        }
        if (((*(ZCImageButton **)(this + 0x94))[0x14] == (ZCImageButton)0x0) ||
           (iVar7 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x94),
                               *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18),
           fVar17 = extraout_s0_09, fVar18 = extraout_s1_09, iVar7 == 0)) {
          if (((*(ZCImageButton **)(this + 0x98))[0x14] != (ZCImageButton)0x0) &&
             (iVar7 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0x98),
                                 *(long *)(*(int *)(this + 0x60) + iVar2),fVar17,fVar18), iVar7 != 0
             )) {
            ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_10);
            *(undefined4 *)(this + 0xe4) = 0;
            goto LAB_000fbf28;
          }
          if (((*(ScreenElement **)(this + 0xf0))[0x14] != (ScreenElement)0x0) &&
             (iVar7 = ScreenElement::contains
                                (*(ScreenElement **)(this + 0xf0),
                                 *(int *)(*(int *)(this + 0x60) + iVar2) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 0x60) + iVar2)), iVar7 != 0))
          {
            *(short *)(this + 0xce) = (short)*(undefined4 *)(this + 0xe8);
            this[0xd0] = (FridgeDialog)0x1;
            goto LAB_000fbf5a;
          }
          if (((*(ScreenElement **)(this + 0xf4))[0x14] == (ScreenElement)0x0) ||
             (iVar7 = ScreenElement::contains
                                (*(ScreenElement **)(this + 0xf4),
                                 *(int *)(*(int *)(this + 0x60) + iVar2) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 0x60) + iVar2)), iVar7 == 0))
          {
            if (((*(ScreenElement **)(this + 0xf8))[0x14] == (ScreenElement)0x0) ||
               (iVar7 = ScreenElement::contains
                                  (*(ScreenElement **)(this + 0xf8),
                                   *(int *)(*(int *)(this + 0x60) + iVar2) >> 0x10,
                                   (int)(short)*(int *)(*(int *)(this + 0x60) + iVar2)), iVar7 == 0)
               ) {
              if ((((*(ScreenElement **)(this + 0xfc))[0x14] == (ScreenElement)0x0) ||
                  (iVar2 = ScreenElement::contains
                                     (*(ScreenElement **)(this + 0xfc),
                                      *(int *)(*(int *)(this + 0x60) + iVar2) >> 0x10,
                                      (int)(short)*(int *)(*(int *)(this + 0x60) + iVar2)),
                  iVar2 == 0)) || (this[0xd1] != (FridgeDialog)0x0)) goto LAB_000fc136;
              pCVar14 = *(ConfirmDialog **)(this + 0xd8);
              String::String(aSStack_20,(char *)(DAT_000fc398 + 0xfc0aa));
              Vector<String>::elementAt((int)aSStack_30);
              Vector<String>::elementAt((int)aSStack_28);
              ConfirmDialog::show(pCVar14,aSStack_20,aSStack_30,aSStack_28,
                                  *(undefined4 *)(iVar13 + DAT_000fc39c),this);
              String::~String(aSStack_28);
              String::~String(aSStack_30);
              this_00 = aSStack_20;
            }
            else {
              if (this[0xd1] != (FridgeDialog)0x0) goto LAB_000fc136;
              pCVar14 = *(ConfirmDialog **)(this + 0xd8);
              String::String(aSStack_38,(char *)(DAT_000fc388 + 0xfc036));
              Vector<String>::elementAt((int)aSStack_48);
              Vector<String>::elementAt((int)aSStack_40);
              ConfirmDialog::show(pCVar14,aSStack_38,aSStack_48,aSStack_40,
                                  *(undefined4 *)(iVar13 + DAT_000fc394),this);
              String::~String(aSStack_40);
              String::~String(aSStack_48);
              this_00 = aSStack_38;
            }
          }
          else {
            if (this[0xd1] != (FridgeDialog)0x0) goto LAB_000fc136;
            pCVar14 = *(ConfirmDialog **)(this + 0xd8);
            String::String(aSStack_50,(char *)(DAT_000fc004 + 0xfbf8c));
            Vector<String>::elementAt((int)aSStack_60);
            Vector<String>::elementAt((int)aSStack_58);
            ConfirmDialog::show(pCVar14,aSStack_50,aSStack_60,aSStack_58,
                                *(undefined4 *)(iVar13 + DAT_000fc008),this);
            String::~String(aSStack_58);
            String::~String(aSStack_60);
            this_00 = aSStack_50;
          }
          goto LAB_000fc0f6;
        }
        ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_09);
        iVar7 = *(int *)(*(int *)(this + 200) + 4);
        iVar2 = SmDev();
        *(int *)(this + 0xe4) = (iVar7 + 1) - *(int *)(DAT_000fc000 + iVar2 * 4 + 0xfbefe);
        recipeTopCheck(this);
        setPage(this,*(int *)(this + 0xe4));
        *(undefined4 *)(this + 0xe8) = *(undefined4 *)(*(int *)(this + 200) + 4);
        recipeTopCheck(this);
      }
      else {
        iVar2 = *(int *)(this + 0xe4);
LAB_000fbdc6:
        *(int *)(this + 0xe8) = iVar2;
      }
      setSelectRecipeInfo(this);
      goto LAB_000fc136;
    }
    iVar7 = *(int *)(this + 0xe4);
    iVar2 = SmDev();
    *(int *)(this + 0xe4) = iVar7 + *(int *)(DAT_000fbfec + iVar2 * 4 + 0xfbd40);
  }
  else {
    pFVar10 = this + 0xe4;
    iVar7 = *(int *)pFVar10;
    iVar2 = SmDev();
    iVar7 = iVar7 - *(int *)(DAT_000fbfe8 + iVar2 * 4 + 0xfbd0a);
    *(int *)pFVar10 = iVar7;
    if (iVar7 < 0) {
      *(undefined4 *)pFVar10 = 0;
    }
  }
LAB_000fbf28:
  recipeTopCheck(this);
  setPage(this,*(int *)(this + 0xe4));
LAB_000fc136:
  piVar11 = *(int **)(this + 0xa0);
  pcVar15 = *(code **)(*piVar11 + 0x14);
  uVar5 = __floatsisf(piVar11[1]);
  __addsf3(uVar5,*(undefined4 *)(this + 0xe0));
  uVar6 = __fixsfsi();
  uVar8 = *(int *)(*(int *)(this + 0x9c) + 0xc) - piVar11[3];
  uVar8 = uVar8 & (int)(uVar8 - 1 | uVar8) >> 0x1f;
  if ((int)uVar8 <= (int)uVar6) {
    uVar8 = (int)(uVar6 - 1 | uVar6) >> 0x1f & uVar6;
  }
  (*pcVar15)(piVar11,uVar8,0);
  uVar16 = *(undefined4 *)(this + 0xe0);
  puVar12 = *(undefined4 **)(iVar13 + DAT_000fc3b0);
  uVar5 = __floatsisf(param_1);
  uVar5 = __mulsf3(uVar5,*puVar12);
  iVar2 = __aeabi_fcmplt(uVar5,0x3f800000);
  if (iVar2 == 0) {
    uVar5 = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,uVar5);
  iVar2 = __mulsf3(uVar16,uVar5);
  *(int *)(this + 0xe0) = iVar2;
  iVar7 = __aeabi_fcmpge(iVar2,0);
  if (iVar7 == 0) {
    iVar2 = iVar2 + -0x80000000;
  }
  iVar13 = __aeabi_fcmplt(iVar2,**(undefined4 **)(iVar13 + DAT_000fc3b4));
  if (iVar13 != 0) {
    *(undefined4 *)(this + 0xe0) = 0;
  }
  uVar5 = __floatsisf(*(undefined4 *)(*(int *)(this + 0xa0) + 4));
  iVar13 = SmDev();
  uVar16 = __floatsisf(*(undefined4 *)(DAT_000fc3b8 + iVar13 * 4 + 0xfc216));
  uVar3 = __mulsf3(uVar16,uVar3);
  __divsf3(uVar5,uVar3);
  iVar13 = __fixsfsi();
  uVar6 = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
  if (*(uint *)(this + 0xe4) != uVar6) {
    *(uint *)(this + 0xe4) = uVar6;
    setRecipeButton(this);
  }
  iVar13 = *(int *)(*(int *)(this + 0xa0) + 4);
  if (iVar13 != 0) {
    iVar13 = 1;
  }
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),iVar13);
  piVar11 = *(int **)(this + 0x78);
  bVar1 = -*(int *)(*(int *)(this + 0xa0) + 4) <
          *(int *)(*(int *)(this + 0xa0) + 0xc) - *(int *)(*(int *)(this + 0x9c) + 0xc);
  if (bVar1) {
    pcVar15 = *(code **)(*piVar11 + 0x20);
  }
  else {
    pcVar15 = *(code **)(*piVar11 + 0x20);
  }
  (*pcVar15)(piVar11,bVar1);
  iVar13 = DAT_000fc3bc;
  piVar11 = *(int **)(this + 0x74);
  iVar2 = *(int *)(*(int *)(this + 0x60) + DAT_000fc3bc) * piVar11[3];
  uVar6 = iVar2 >> 0x1f;
  uVar6 = (iVar2 >> 0x12) + uVar6 ^ uVar6;
  iVar2 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x6c),uVar6,
                     *(int *)(*(ScreenElement **)(this + 0x6c) + 0x10) >> 1);
  (**(code **)(*piVar11 + 0x14))(piVar11,iVar2 >> 0x10,(int)(short)iVar2);
  this_01 = *(ScreenElement **)(this + 0x6c);
  piVar11 = *(int **)(this + 0x78);
  iVar2 = ScreenElement::localToParentCoords
                    (this_01,*(int *)(this_01 + 0xc) - uVar6,*(int *)(this_01 + 0x10) >> 1);
  (**(code **)(*piVar11 + 0x14))(piVar11,iVar2 >> 0x10,(int)(short)iVar2);
  piVar11 = *(int **)(this + 0x70);
  iVar2 = piVar11[1];
  iVar7 = *(int *)(*(int *)(this + 0x60) + iVar13) * piVar11[4];
  uVar6 = iVar7 >> 0x1f;
  pcVar15 = *(code **)(*piVar11 + 0x14);
  iVar13 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_000fc3c0 + iVar13 * 4 + 0xfc320));
  uVar3 = __mulsf3(uVar3,uVar4);
  uVar4 = __floatsisf((iVar7 >> 0x12) + uVar6 ^ uVar6);
  __addsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  (*pcVar15)(piVar11,iVar2,uVar3);
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_000fc3ac) = 1;
  if (*(char *)(*(int *)(this + 0x60) + DAT_000fc3c4) != '\0') {
    backClose(this);
    FUN_000fc47a();
    return;
  }
  FUN_000fc47a();
  return;
}


