/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023efcc ZombieCafe::getExperienceBoostType */

/* ZombieCafe::getExperienceBoostType() */

uint ZombieCafe::getExperienceBoostType(void)

{
  uint uVar1;
  
  uVar1 = **(uint **)(DAT_0023efec + 0x23efd2);
  if (((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 3)) {
    uVar1 = uVar1 & -(uint)(uVar1 == 4);
  }
  return uVar1;
}


