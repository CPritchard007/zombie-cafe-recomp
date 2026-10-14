/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002401a4 ZombieCafe::getEventRaid2_bonusRate */

/* ZombieCafe::getEventRaid2_bonusRate() */

undefined4 ZombieCafe::getEventRaid2_bonusRate(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(DAT_002401c4 + 0x2401ae) + 0xc);
  iVar1 = __aeabi_fcmpgt(uVar2,DAT_002401c8);
  if (iVar1 != 0) {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}


