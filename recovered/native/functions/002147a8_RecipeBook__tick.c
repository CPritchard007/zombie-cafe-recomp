/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002147a8 RecipeBook::tick */

/* RecipeBook::tick(long) */

void __thiscall RecipeBook::tick(RecipeBook *this,long param_1)

{
  RecipeBook *pRVar1;
  int iVar2;
  Recipe *this_00;
  String *this_01;
  RecipeSortDialog *this_02;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ZombieCafe *this_03;
  NoticeDialog *pNVar10;
  ConfirmDialog *pCVar11;
  int *piVar12;
  undefined4 *puVar13;
  code *pcVar14;
  undefined4 uVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float fVar16;
  undefined4 extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float fVar18;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined8 uVar17;
  float extraout_s1_08;
  float extraout_s1_09;
  String aSStack_90 [8];
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
  
  iVar9 = DAT_00214b2c + 0x2147b8;
  pRVar1 = this;
  if (this[0x14] == (RecipeBook)0x0) {
    pRVar1 = (RecipeBook *)FUN_00214fa6();
  }
  ScreenElement::tick((long)pRVar1);
  this_03 = *(ZombieCafe **)(this + 0x60);
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_03);
  iVar4 = DAT_00214b30;
  if (iVar2 == 0) {
    if ((this_03[DAT_00214f1c] == (ZombieCafe)0x0) && (*(long *)(this_03 + 0x4b8) != 0)) {
      fVar16 = extraout_s0;
      fVar18 = extraout_s1;
      if (((*(ZCImageButton **)(this + 0xcc) == (ZCImageButton *)0x0) ||
          (iVar4 = ZCImageButton::contains
                             (*(ZCImageButton **)(this + 0xcc),*(long *)(this_03 + 0x4b8),
                              extraout_s0,extraout_s1), fVar16 = extraout_s0_10,
          fVar18 = extraout_s1_08, iVar4 == 0)) &&
         (((*(ZCImageButton **)(this + 0xd0) == (ZCImageButton *)0x0 ||
           (iVar4 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0xd0),
                               *(long *)(*(int *)(this + 0x60) + 0x4b8),fVar16,fVar18), iVar4 == 0))
          && (iVar4 = ScreenElement::contains
                                (*(ScreenElement **)(this + 100),
                                 *(int *)(*(int *)(this + 0x60) + 0x4b8) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 0x60) + 0x4b8)), iVar4 != 0)))
         ) {
        iVar4 = *(int *)(this + 0x60);
        if ((int)**(short **)(iVar9 + DAT_00214fb0) < *(int *)(iVar4 + DAT_00214fb4)) {
          uVar5 = __floatsisf((*(int *)(iVar4 + 0x4b8) >> 0x10) -
                              (*(int *)(iVar4 + DAT_00214f20) >> 0x10));
          iVar2 = DAT_00214f1c;
          *(undefined4 *)(this + 0x14c) = uVar5;
          *(undefined1 *)(iVar4 + iVar2) = 1;
        }
        else {
          *(undefined4 *)(this + 0x14c) = 0;
        }
      }
      else {
        *(undefined1 *)(*(int *)(this + 0x60) + DAT_00214f1c) = 1;
      }
    }
    goto LAB_00214c44;
  }
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0xd4),*(long *)(this_03 + DAT_00214b30),extraout_s0,
                     extraout_s1);
  if (iVar2 == 0) {
    fVar16 = extraout_s0_00;
    fVar18 = extraout_s1_00;
    if (((*(ZCImageButton **)(this + 0xcc))[0x14] == (ZCImageButton)0x0) ||
       (iVar2 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0xcc),*(long *)(*(int *)(this + 0x60) + iVar4)
                           ,extraout_s0_00,extraout_s1_00), fVar16 = extraout_s0_02,
       fVar18 = extraout_s1_01, iVar2 == 0)) {
      if (((*(ZCImageButton **)(this + 0xd0))[0x14] == (ZCImageButton)0x0) ||
         (iVar2 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0xd0),
                             *(long *)(*(int *)(this + 0x60) + iVar4),fVar16,fVar18),
         fVar16 = extraout_s0_03, fVar18 = extraout_s1_02, iVar2 == 0)) {
        if (((*(ZCImageButton **)(this + 0xd8))[0x14] == (ZCImageButton)0x0) ||
           (iVar2 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0xd8),
                               *(long *)(*(int *)(this + 0x60) + iVar4),fVar16,fVar18),
           fVar16 = extraout_s0_04, fVar18 = extraout_s1_03, iVar2 == 0)) {
          if (((*(ZCImageButton **)(this + 0xdc))[0x14] == (ZCImageButton)0x0) ||
             (iVar2 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + 0xdc),
                                 *(long *)(*(int *)(this + 0x60) + iVar4),fVar16,fVar18),
             fVar16 = extraout_s0_05, fVar18 = extraout_s1_04, iVar2 == 0)) {
            if (((*(ZCImageButton **)(this + 0xe0))[0x14] == (ZCImageButton)0x0) ||
               (iVar2 = ZCImageButton::contains
                                  (*(ZCImageButton **)(this + 0xe0),
                                   *(long *)(*(int *)(this + 0x60) + iVar4),fVar16,fVar18),
               iVar2 == 0)) {
              iVar8 = 0;
              iVar2 = ScreenElement::contains
                                (*(ScreenElement **)(this + 100),
                                 *(int *)(*(int *)(this + 0x60) + iVar4) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 0x60) + iVar4));
              uVar17 = CONCAT44(extraout_s1_09,extraout_s0_11);
              fVar16 = extraout_s0_11;
              fVar18 = extraout_s1_09;
              if (iVar2 == 0) {
                uVar6 = 0;
                while( true ) {
                  if (*(int *)(this + 0xac) + 1 <= (int)uVar6) break;
                  iVar2 = ZCImageButton::contains
                                    (*(ZCImageButton **)(uVar6 * 4 + *(int *)(this + 0xb0)),
                                     *(long *)(*(int *)(this + 0x60) + iVar4),(float)uVar17,
                                     (float)((ulonglong)uVar17 >> 0x20));
                  uVar17 = CONCAT44(extraout_s1_06,extraout_s0_08);
                  if (iVar2 != 0) {
                    iVar2 = FUN_00212962(this[0x160],uVar6 & 0xff,*(undefined4 *)(this + 0x164));
                    uVar17 = CONCAT44(extraout_s1_07,extraout_s0_09);
                    if (iVar2 != 0) {
                      ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_09);
                      uVar17 = setVariant(this,uVar6);
                    }
                  }
                  uVar6 = uVar6 + 1;
                }
              }
              else {
                for (; iVar8 < *(int *)(this + 0x70) + 1; iVar8 = iVar8 + 1) {
                  iVar2 = ZCImageButton::containsBig
                                    (*(ZCImageButton **)(iVar8 * 4 + *(int *)(this + 0x74)),
                                     *(int *)(*(int *)(this + 0x60) + iVar4) >> 0x10,
                                     (int)(short)*(int *)(*(int *)(this + 0x60) + iVar4),fVar16,
                                     fVar18);
                  if (iVar2 != 0) {
                    pbVar3 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                               (*(CapcomOrderableList<RecipeAndVariants*> **)
                                                 (this + 0x150),iVar8);
                    fVar16 = (float)setRecipe(this,(uint)*pbVar3);
                    ZombieCafe::playEffect(*(int *)(this + 0x60),fVar16);
                    break;
                  }
                  fVar16 = extraout_s0_07;
                  fVar18 = extraout_s1_05;
                }
              }
            }
            else {
              ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_06);
              *(ushort *)(this + 0x170) = *(short *)(this + 0x170) + 1U & 1;
              sortRecipeBackgrounds(this,*(undefined4 *)(this + 0x16c));
            }
          }
          else {
            ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_05);
            this_02 = (RecipeSortDialog *)operator_new(0xa4);
            RecipeSortDialog::RecipeSortDialog(this_02,this);
            *(RecipeSortDialog **)(this + 0x168) = this_02;
            (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
            ScreenElement::setOrder(*(ScreenElement **)(this + 0x168),7);
            (**(code **)(*(int *)this + 0x2c))(this,*(undefined4 *)(this + 0x168));
            RecipeSortDialog::show();
          }
          goto LAB_00214c44;
        }
        ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_04);
        if (this[0x162] == (RecipeBook)0x0) {
          iVar4 = *(int *)(this + 0x60);
          this_00 = (Recipe *)(*(int *)(iVar4 + 0x4e8) + (uint)(byte)this[0x160] * 0x1c);
          if (*(int *)(iVar4 + 0x680) < (int)(uint)(byte)this_00[0x16]) {
            String::String(aSStack_90);
            Vector<String>::elementAt((int)aSStack_88);
            String::String(aSStack_80,(char *)(DAT_00214b3c + 0x2148ce));
            String::operator+(aSStack_78,aSStack_88,aSStack_80);
            String::valueOf((int)aSStack_70);
            String::operator+(aSStack_68,aSStack_78,aSStack_70);
            String::String(aSStack_60,(char *)(DAT_00214b40 + 0x214900));
            String::operator+(aSStack_58,aSStack_68,aSStack_60);
            String::operator=(aSStack_90,aSStack_58);
            String::~String(aSStack_58);
            String::~String(aSStack_60);
            String::~String(aSStack_68);
            String::~String(aSStack_70);
            String::~String(aSStack_78);
            String::~String(aSStack_80);
            String::~String(aSStack_88);
            pNVar10 = *(NoticeDialog **)(this + 0x144);
            String::String(aSStack_48,aSStack_90);
            Vector<String>::elementAt((int)aSStack_50);
            NoticeDialog::show(pNVar10,aSStack_48,aSStack_50,0,0);
            String::~String(aSStack_50);
            String::~String(aSStack_48);
            this_01 = aSStack_90;
          }
          else {
            iVar2 = *(int *)(iVar4 + DAT_00214b48);
            iVar4 = Recipe::getCost(this_00,(uchar)this[DAT_00214b4c]);
            if (iVar4 <= iVar2) goto LAB_00214f34;
            pNVar10 = *(NoticeDialog **)(this + 0x144);
            Vector<String>::elementAt((int)aSStack_40);
            Vector<String>::elementAt((int)aSStack_38);
            NoticeDialog::show(pNVar10,aSStack_40,aSStack_38,0,0);
            String::~String(aSStack_38);
            this_01 = aSStack_40;
          }
        }
        else {
LAB_00214f34:
          iVar4 = ZombieCafe::checkZombieFlowerEvent();
          if ((((iVar4 == 0) || (iVar4 = ZombieCafe::checkZombieFlowerEventTime(), iVar4 == 0)) ||
              (iVar4 = ZombieCafe::checkZombieFlowerEventLevel(*(ZombieCafe **)(this + 0x60)),
              iVar4 == 0)) || (this[0x162] != (RecipeBook)0x0)) {
            fVar16 = (float)TutorialSystem::triggerEvent
                                      (*(TutorialSystem **)(*(int *)(this + 0x60) + DAT_00214fac),
                                       '\x11',true);
            ZombieCafe::playEffect(*(int *)(this + 0x60),fVar16);
            goto LAB_00214f5c;
          }
          pCVar11 = *(ConfirmDialog **)(this + 0x148);
          String::String(aSStack_30,(char *)(DAT_00214b54 + 0x214a00));
          String::String(aSStack_28,(char *)(DAT_00214b58 + 0x214a0e));
          String::String(aSStack_20,(char *)(DAT_00214b5c + 0x214a18));
          ConfirmDialog::show(pCVar11,aSStack_30,aSStack_28,aSStack_20,
                              *(undefined4 *)(iVar9 + DAT_00214b60),
                              *(undefined4 *)(iVar9 + DAT_00214b64),this,0,1);
          String::~String(aSStack_20);
          String::~String(aSStack_28);
          this_01 = aSStack_30;
        }
        String::~String(this_01);
        goto LAB_00214c44;
      }
      piVar12 = *(int **)(this + 0x68);
      iVar2 = *piVar12;
      iVar4 = piVar12[1] - *(int *)(*(int *)(this + 100) + 0xc);
    }
    else {
      piVar12 = *(int **)(this + 0x68);
      iVar2 = *piVar12;
      iVar4 = piVar12[1] + *(int *)(*(int *)(this + 100) + 0xc);
    }
    (**(code **)(iVar2 + 0x14))(piVar12,iVar4,piVar12[2]);
  }
  else {
    iVar4 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x60) + DAT_00214b34),'\r');
    if (iVar4 == 0) goto LAB_00214c44;
    ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_01);
LAB_00214f5c:
    hide(SUB41(this,0));
  }
LAB_00214c44:
  piVar12 = *(int **)(this + 0x68);
  pcVar14 = *(code **)(*piVar12 + 0x14);
  uVar5 = __floatsisf(piVar12[1]);
  __addsf3(uVar5,*(undefined4 *)(this + 0x14c));
  uVar6 = __fixsfsi();
  uVar7 = *(int *)(*(int *)(this + 100) + 0xc) - piVar12[3];
  uVar7 = uVar7 & (int)(uVar7 - 1 | uVar7) >> 0x1f;
  if ((int)uVar7 <= (int)uVar6) {
    uVar7 = (int)(uVar6 - 1 | uVar6) >> 0x1f & uVar6;
  }
  (*pcVar14)(piVar12,uVar7,0);
  for (iVar4 = 0; iVar4 < *(int *)(this + 0xa0) + 1; iVar4 = iVar4 + 1) {
    piVar12 = *(int **)(iVar4 * 4 + *(int *)(this + 0xa4));
    iVar2 = piVar12[3];
    iVar8 = (int)(((uint)*(ushort *)(*(int *)(this + 0x68) + 4) + (uint)*(ushort *)(piVar12 + 1)) *
                 0x10000) >> 0x10;
    if ((iVar8 + iVar2 * 2 < 0 == SBORROW4(iVar8,iVar2 * -2)) &&
       (iVar8 == iVar2 * 8 || iVar8 + iVar2 * -8 < 0 != SBORROW4(iVar8,iVar2 * 8))) {
      pcVar14 = *(code **)(*piVar12 + 0x20);
      uVar5 = 1;
    }
    else {
      pcVar14 = *(code **)(*piVar12 + 0x20);
      uVar5 = 0;
    }
    (*pcVar14)(piVar12,uVar5);
  }
  uVar15 = *(undefined4 *)(this + 0x14c);
  puVar13 = *(undefined4 **)(iVar9 + DAT_00214f24);
  uVar5 = __floatsisf(param_1);
  uVar5 = __mulsf3(uVar5,*puVar13);
  iVar4 = __aeabi_fcmplt(uVar5,0x3f800000);
  if (iVar4 == 0) {
    uVar5 = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,uVar5);
  iVar4 = __mulsf3(uVar15,uVar5);
  *(int *)(this + 0x14c) = iVar4;
  iVar2 = __aeabi_fcmpge(iVar4,0);
  if (iVar2 == 0) {
    iVar4 = iVar4 + -0x80000000;
  }
  iVar9 = __aeabi_fcmplt(iVar4,**(undefined4 **)(iVar9 + DAT_00214f28));
  if (iVar9 != 0) {
    *(undefined4 *)(this + 0x14c) = 0;
  }
  piVar12 = *(int **)(this + 0xcc);
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 0x20))(piVar12,*(uint *)(*(int *)(this + 0x68) + 4) >> 0x1f);
  }
  piVar12 = *(int **)(this + 0xd0);
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 0x20))
              (piVar12,*(int *)(*(int *)(this + 100) + 0xc) <
                       *(int *)(*(int *)(this + 0x68) + 4) + *(int *)(*(int *)(this + 0x68) + 0xc));
  }
  piVar12 = *(int **)(this + 0xcc);
  if ((piVar12 != (int *)0x0) && (*(int *)(this + 0xd0) != 0)) {
    iVar4 = *(int *)(*(int *)(this + 0x60) + DAT_00214f2c) * piVar12[3];
    iVar9 = *(int *)(this + 100);
    uVar6 = iVar4 >> 0x1f;
    uVar6 = (iVar4 >> 0x12) + uVar6 ^ uVar6;
    (**(code **)(*piVar12 + 0x14))
              (piVar12,*(int *)(iVar9 + 4) - uVar6,
               (*(int *)(iVar9 + 0x10) - (*(int *)(iVar9 + 0x10) >> 0x1f) >> 1) +
               *(int *)(iVar9 + 8));
    iVar9 = *(int *)(this + 100);
    piVar12 = *(int **)(this + 0xd0);
    (**(code **)(*piVar12 + 0x14))
              (piVar12,*(int *)(iVar9 + 4) + *(int *)(iVar9 + 0xc) + uVar6,
               *(int *)(iVar9 + 0x10) / 2 + *(int *)(iVar9 + 8));
  }
  iVar9 = CImage::getHeight(*(CImage **)(*(int *)(this + 0x138) + 0x78));
  iVar9 = *(int *)(*(int *)(this + 0x60) + DAT_00214f2c) * iVar9;
  uVar6 = iVar9 >> 0x1f;
  uVar6 = (iVar9 >> 0x12) + uVar6 ^ uVar6;
  for (iVar9 = 0; iVar9 < *(int *)(this + 0x94) + 1; iVar9 = iVar9 + 1) {
    piVar12 = *(int **)(*(int *)(this + 0x98) + iVar9 * 4);
    if ((char)piVar12[5] != '\0') {
      (**(code **)(*piVar12 + 0x14))
                (piVar12,piVar12[1],
                 *(int *)(*(int *)(*(int *)(this + 0x74) + iVar9 * 4) + 8) - uVar6);
    }
  }
  for (iVar9 = 0; iVar9 < *(int *)(this + 0xb8) + 1; iVar9 = iVar9 + 1) {
    piVar12 = *(int **)(*(int *)(this + 0xbc) + iVar9 * 4);
    if ((char)piVar12[5] != '\0') {
      (**(code **)(*piVar12 + 0x14))
                (piVar12,piVar12[1],
                 *(int *)(*(int *)(*(int *)(this + 0xb0) + iVar9 * 4) + 8) - uVar6);
    }
  }
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_00214f1c) = 1;
  if (*(char *)(*(int *)(this + 0x60) + DAT_00214f30) == '\0') {
    FUN_00214fa6();
    return;
  }
  backClose(this);
  FUN_00214fa6();
  return;
}


