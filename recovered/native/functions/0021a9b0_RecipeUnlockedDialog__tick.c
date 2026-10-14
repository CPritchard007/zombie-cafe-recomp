/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021a9b0 RecipeUnlockedDialog::tick */

/* RecipeUnlockedDialog::tick(long) */

undefined8 __thiscall RecipeUnlockedDialog::tick(RecipeUnlockedDialog *this,long param_1)

{
  int iVar1;
  int iVar2;
  RecipeUnlockedDialog *pRVar3;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  RecipeUnlockedDialog *local_20;
  
  local_20 = this;
  if (this[0x14] != (RecipeUnlockedDialog)0x0) {
    pRVar3 = this + 0x98;
    ScreenElement::tick((long)this);
    this_00 = *(ZombieCafe **)pRVar3;
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    iVar2 = DAT_0021aa68;
    if (iVar1 != 0) {
      iVar1 = *(int *)(this_00 + DAT_0021aa68);
      local_20 = (RecipeUnlockedDialog *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x90),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0,extraout_s1);
      if (iVar1 == 0) {
        iVar2 = *(int *)(*(int *)pRVar3 + iVar2);
        local_20 = (RecipeUnlockedDialog *)0x3f800000;
        iVar2 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x94),iVar2 >> 0x10,(int)(short)iVar2,
                           extraout_s0_00,extraout_s1_00);
        if (iVar2 != 0) {
          ZombieCafe::postStory
                    (*(ZombieCafe **)pRVar3,*(_func_void_void_ptr **)(DAT_0021aa74 + 0x21aa54),
                     *(void **)(*(ZombieCafe **)pRVar3 + 8));
        }
      }
      else {
        ZombieCafe::playEffect(*(int *)pRVar3,extraout_s0_00);
        (**(code **)(*(int *)this + 0x20))(this,0);
        TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)pRVar3 + DAT_0021aa6c),'/',false);
        if (*(code **)(this + 0x9c) != (code *)0x0) {
          (**(code **)(this + 0x9c))(*(undefined4 *)(this + 0xa0));
        }
        *(undefined1 *)(*(int *)(this + 0x98) + DAT_0021aa70) = 1;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x98) + DAT_0021aa70) = 1;
  }
  return CONCAT44(param_1,local_20);
}


