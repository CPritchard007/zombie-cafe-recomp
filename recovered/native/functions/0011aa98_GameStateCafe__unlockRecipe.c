/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011aa98 GameStateCafe::unlockRecipe */

/* GameStateCafe::unlockRecipe(unsigned char, unsigned char) */

ulonglong __thiscall GameStateCafe::unlockRecipe(GameStateCafe *this,uchar param_1,uchar param_2)

{
  int iVar1;
  RecipeUnlockedDialog *this_00;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  ZombieCafe *this_01;
  GameStateCafe *pGVar7;
  
  uVar5 = (uint)param_2;
  uVar3 = (uint)param_1;
  this_01 = *(ZombieCafe **)(this + 0xc);
  if (((uVar5 < 10) && (uVar3 < (byte)this_01[DAT_0011ab60])) &&
     (iVar1 = ZombieCafe::isRecipeUnlocked(this_01,uVar3,param_2), iVar1 == 0)) {
    ZombieCafe::unlockRecipe(this_01,uVar3,param_2);
    RecipeBook::unlockRecipe(*(RecipeBook **)(this + 0x94),param_1,param_2);
    PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(this + 0xcc),1,true);
    pGVar7 = this + 0xdc;
    PullMenuElement::ifIsCloseNewIndicatorPull();
    if (*(RecipeUnlockedDialog **)pGVar7 == (RecipeUnlockedDialog *)0x0) {
      this_00 = (RecipeUnlockedDialog *)operator_new(0xa4);
      RecipeUnlockedDialog::RecipeUnlockedDialog(this_00,uVar3,uVar5);
      *(RecipeUnlockedDialog **)pGVar7 = this_00;
      iVar1 = *(int *)(*(int *)(this + 0xc) + 0x10);
      (**(code **)(*(int *)this_00 + 0x14))
                (this_00,(iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1,(int)(short)iVar1 / 2);
      (**(code **)(**(int **)pGVar7 + 0x1c))(*(int **)pGVar7,0x12);
      ScreenElement::setOrder(*(ScreenElement **)pGVar7,(int)**(char **)(DAT_0011ab64 + 0x11ab30));
      piVar2 = *(int **)(this + 0x78);
      uVar4 = *(undefined4 *)pGVar7;
      pcVar6 = *(code **)(*piVar2 + 0x2c);
    }
    else {
      RecipeUnlockedDialog::setRecipe(*(RecipeUnlockedDialog **)pGVar7,uVar3,uVar5);
      piVar2 = *(int **)pGVar7;
      uVar4 = 1;
      pcVar6 = *(code **)(*piVar2 + 0x20);
    }
    (*pcVar6)(piVar2,uVar4);
  }
  return (ulonglong)CONCAT14(param_2,this);
}


