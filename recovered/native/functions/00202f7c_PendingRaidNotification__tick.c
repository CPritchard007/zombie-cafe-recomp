/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202f7c PendingRaidNotification::tick */

/* PendingRaidNotification::tick(long) */

void PendingRaidNotification::tick(long param_1)

{
  int iVar1;
  ZombieCafe *this;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar1 = CapcomApp::getInstance();
    this = *(ZombieCafe **)(iVar1 + 4);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
    if ((iVar1 != 0) &&
       (iVar1 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 100),*(long *)(this + DAT_00202ffc),
                           extraout_s0,extraout_s1), iVar1 != 0)) {
      ZombieCafe::playEffect((int)this,extraout_s0_00);
      if ((0 < *(int *)(*(int *)(param_1 + 0x68) + 0x1c)) &&
         (iVar1 = ZombieCafe::checkCafeLevelMax(this), iVar1 == 0)) {
        ZombieCafe::addXp(this,*(int *)(*(int *)(param_1 + 0x68) + 0x1c));
      }
      Quest::runQuest(*(int *)(this + 0x40),0x14,(int *)0xffffffff);
      Vector<RaidNotification*>::removeElement
                ((Vector<RaidNotification*> *)(this + DAT_00203000),
                 *(RaidNotification **)(param_1 + 0x68));
      PendingOrderDialog::show(*(PendingOrderDialog **)(param_1 + 0x60));
      this[DAT_00203004] = (ZombieCafe)0x1;
    }
  }
  return;
}


