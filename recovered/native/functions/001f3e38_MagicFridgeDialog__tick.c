/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f3e38 MagicFridgeDialog::tick */

/* MagicFridgeDialog::tick(long) */

undefined8 __thiscall MagicFridgeDialog::tick(MagicFridgeDialog *this,long param_1)

{
  int iVar1;
  int iVar2;
  MagicFridgeDialog *pMVar3;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  MagicFridgeDialog *local_20;
  
  local_20 = this;
  if (this[0x14] != (MagicFridgeDialog)0x0) {
    pMVar3 = this + 0x98;
    ScreenElement::tick((long)this);
    iVar1 = DAT_001f3e9c;
    this_00 = *(ZombieCafe **)pMVar3;
    iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar2 != 0) {
      iVar2 = *(int *)(this_00 + DAT_001f3ea0);
      local_20 = (MagicFridgeDialog *)0x3f800000;
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x94),iVar2 >> 0x10,(int)(short)iVar2,
                         extraout_s0,extraout_s1);
      if (iVar2 != 0) {
        ZombieCafe::playEffect(*(int *)pMVar3,extraout_s0_00);
        (**(code **)(*(int *)this + 0x20))(this,0);
        *(undefined1 *)(*(int *)pMVar3 + iVar1) = 1;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x98) + iVar1) = 1;
  }
  return CONCAT44(param_1,local_20);
}


