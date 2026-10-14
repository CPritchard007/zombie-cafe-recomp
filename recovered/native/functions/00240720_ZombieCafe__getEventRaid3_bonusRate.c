/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240720 ZombieCafe::getEventRaid3_bonusRate */

/* ZombieCafe::getEventRaid3_bonusRate() */

undefined4 ZombieCafe::getEventRaid3_bonusRate(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(DAT_00240740 + 0x24072a) + 0x8c);
  iVar1 = __aeabi_fcmpgt(uVar2,DAT_00240744);
  if (iVar1 != 0) {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}


