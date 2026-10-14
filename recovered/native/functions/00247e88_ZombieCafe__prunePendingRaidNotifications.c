/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247e88 ZombieCafe::prunePendingRaidNotifications */

/* ZombieCafe::prunePendingRaidNotifications() */

undefined8 ZombieCafe::prunePendingRaidNotifications(void)

{
  int in_r0;
  undefined4 in_r1;
  int iVar1;
  Vector<RaidNotification*> *this;
  int iVar2;
  int local_18;
  undefined4 local_14;
  
  this = (Vector<RaidNotification*> *)(in_r0 + DAT_00247ecc);
  local_18 = in_r0;
  local_14 = in_r1;
  for (iVar2 = 0; iVar2 < *(int *)(this + 4) + 1; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(this + 8));
    CapcomDate::now((CapcomDate *)&local_18);
    iVar1 = CapcomDate::secondsBetween
                      (*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),local_18,local_14
                      );
    if (**(int **)(DAT_00247ed0 + 0x247eb0) < iVar1) {
      Vector<RaidNotification*>::removeElementAt(this,iVar2);
      iVar2 = iVar2 + -1;
    }
  }
  return CONCAT44(local_14,local_18);
}


