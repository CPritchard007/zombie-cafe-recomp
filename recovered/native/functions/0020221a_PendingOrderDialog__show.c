/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020221a PendingOrderDialog::show */

/* PendingOrderDialog::show() */

void __thiscall PendingOrderDialog::show(PendingOrderDialog *this)

{
  (**(code **)(*(int *)this + 0x20))(this,1);
  clearItemElements(this);
  ZombieCafe::prunePendingOrders();
  ZombieCafe::prunePendingRaidNotifications();
  populateItemElements(this);
  populateActiveCookingList(this);
  populateDeliveryReadyList(this);
  updateWinTally(this);
  return;
}


