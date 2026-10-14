/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023eff0 ZombieCafe::getExperienceBoostRate */

/* ZombieCafe::getExperienceBoostRate() */

int ZombieCafe::getExperienceBoostRate(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_0023f020 + 0x23eff6);
  if (iVar2 == 1) {
    iVar1 = 0xff;
  }
  else {
    if (iVar2 == 2) {
      return DAT_0023f024;
    }
    if (iVar2 == 3) {
      return 0x40800000;
    }
    iVar1 = 0xfe;
    if (iVar2 == 4) {
      return DAT_0023f028;
    }
  }
  return iVar1 << 0x16;
}


