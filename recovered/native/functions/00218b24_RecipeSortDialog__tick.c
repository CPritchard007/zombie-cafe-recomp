/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00218b24 RecipeSortDialog::tick */

/* RecipeSortDialog::tick(long) */

void RecipeSortDialog::tick(long param_1)

{
  int iVar1;
  int iVar2;
  RecipeBook *pRVar3;
  code *pcVar4;
  int iVar5;
  ZombieCafe *this;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined4 uVar6;
  
  iVar1 = DAT_00218cc4;
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  this = *(ZombieCafe **)(param_1 + 100);
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(this);
  iVar5 = DAT_00218cc8;
  if (iVar2 != 0) {
    iVar2 = *(int *)(this + DAT_00218cc8);
    uVar6 = 0x3f800000;
    iVar2 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x70),iVar2 >> 0x10,(int)(short)iVar2,
                       extraout_s0,extraout_s1);
    if (iVar2 != 0) {
      ZombieCafe::playEffect(*(int *)(param_1 + 100),extraout_s0_00);
      (**(code **)(*(int *)param_1 + 0x20))(param_1,0);
      *(undefined1 *)(*(int *)(param_1 + 100) + iVar1) = 1;
      pcVar4 = *(code **)(**(int **)(param_1 + 0x60) + 0x34);
      (*pcVar4)(*(int **)(param_1 + 0x60),param_1,1,pcVar4,uVar6);
      *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x168) = 0;
      (**(code **)(*(int *)param_1 + 4))(param_1);
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 100) + iVar5);
    uVar6 = 0x3f800000;
    iVar2 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x74),iVar2 >> 0x10,(int)(short)iVar2,
                       extraout_s0_00,extraout_s1_00);
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 100) + iVar5);
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x78),iVar2 >> 0x10,(int)(short)iVar2,
                         extraout_s0_01,extraout_s1_01);
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 100) + iVar5);
        uVar6 = 0x3f800000;
        iVar2 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0x7c),iVar2 >> 0x10,(int)(short)iVar2,
                           extraout_s0_02,extraout_s1_02);
        if (iVar2 == 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 100) + iVar5);
          uVar6 = 0x3f800000;
          iVar2 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0x80),iVar2 >> 0x10,(int)(short)iVar2,
                             extraout_s0_03,extraout_s1_03);
          if (iVar2 == 0) {
            iVar5 = *(int *)(*(int *)(param_1 + 100) + iVar5);
            uVar6 = 0x3f800000;
            iVar5 = ZCImageButton::contains
                              (*(ZCImageButton **)(param_1 + 0x84),iVar5 >> 0x10,(int)(short)iVar5,
                               extraout_s0_04,extraout_s1_04);
            if (iVar5 == 0) goto LAB_00218cac;
            ZombieCafe::playEffect(*(int *)(param_1 + 100),extraout_s0_05);
            iVar5 = *(int *)(param_1 + 100);
            *(undefined1 *)(iVar5 + iVar1) = 1;
            RecipeBook::sortRecipeBackgrounds(*(RecipeBook **)(param_1 + 0x60),4,1,iVar5,uVar6);
            pRVar3 = *(RecipeBook **)(param_1 + 0x60);
            uVar6 = 4;
          }
          else {
            ZombieCafe::playEffect(*(int *)(param_1 + 100),extraout_s0_04);
            iVar5 = *(int *)(param_1 + 100);
            *(undefined1 *)(iVar5 + iVar1) = 1;
            RecipeBook::sortRecipeBackgrounds(*(RecipeBook **)(param_1 + 0x60),3,1,iVar5,uVar6);
            pRVar3 = *(RecipeBook **)(param_1 + 0x60);
            uVar6 = 3;
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(param_1 + 100),extraout_s0_03);
          iVar5 = *(int *)(param_1 + 100);
          *(undefined1 *)(iVar5 + iVar1) = 1;
          RecipeBook::sortRecipeBackgrounds(*(RecipeBook **)(param_1 + 0x60),2,1,iVar5,uVar6);
          pRVar3 = *(RecipeBook **)(param_1 + 0x60);
          uVar6 = 2;
        }
      }
      else {
        ZombieCafe::playEffect(*(int *)(param_1 + 100),extraout_s0_02);
        *(undefined1 *)(*(int *)(param_1 + 100) + iVar1) = 1;
        RecipeBook::sortRecipeBackgrounds(*(RecipeBook **)(param_1 + 0x60),1);
        pRVar3 = *(RecipeBook **)(param_1 + 0x60);
        uVar6 = 1;
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(param_1 + 100),extraout_s0_01);
      iVar5 = *(int *)(param_1 + 100);
      *(undefined1 *)(iVar5 + iVar1) = 1;
      RecipeBook::sortRecipeBackgrounds(*(RecipeBook **)(param_1 + 0x60),0,1,iVar5,uVar6);
      pRVar3 = *(RecipeBook **)(param_1 + 0x60);
      uVar6 = 0;
    }
    RecipeBook::setSortTypeText(pRVar3,uVar6);
  }
LAB_00218cac:
  setArrowPosition((RecipeSortDialog *)param_1,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x16c));
  *(undefined1 *)(*(int *)(param_1 + 100) + iVar1) = 1;
  return;
}


