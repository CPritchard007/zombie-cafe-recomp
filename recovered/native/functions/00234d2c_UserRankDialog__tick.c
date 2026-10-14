/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234d2c UserRankDialog::tick */

/* UserRankDialog::tick(long) */

undefined8 __thiscall UserRankDialog::tick(UserRankDialog *this,long param_1)

{
  int iVar1;
  int iVar2;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  UserRankDialog *local_18;
  
  local_18 = this;
  if (this[0x14] != (UserRankDialog)0x0) {
    ScreenElement::tick((long)this);
    iVar1 = DAT_00234d88;
    this_00 = *(ZombieCafe **)(this + 0x68);
    iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar2 != 0) {
      iVar2 = *(int *)(this_00 + DAT_00234d8c);
      local_18 = (UserRankDialog *)0x3f800000;
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x78),iVar2 >> 0x10,(int)(short)iVar2,
                         extraout_s0,extraout_s1);
      if (iVar2 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_00);
        this[0x14] = (UserRankDialog)0x0;
        *(undefined1 *)(*(int *)(this + 0x68) + iVar1) = 1;
        (**(code **)(**(int **)(this + 0x6c) + 100))();
        goto LAB_00234d86;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x68) + iVar1) = 1;
  }
LAB_00234d86:
  return CONCAT44(param_1,local_18);
}


