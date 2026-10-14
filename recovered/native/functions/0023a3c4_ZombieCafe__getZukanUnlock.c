/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a3c4 ZombieCafe::getZukanUnlock */

/* ZombieCafe::getZukanUnlock(int) */

uint __thiscall ZombieCafe::getZukanUnlock(ZombieCafe *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = doubleCharactorBugFixId(this,param_1);
  iVar2 = (int)(((uint)((int)uVar1 >> 0x1f) >> 0x1e) + uVar1) >> 2;
  uVar1 = DAT_0023a408 & uVar1;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  uVar1 = uVar1 * 2;
  printf((char *)(DAT_0023a40c + 0x23a3f0),iVar2,uVar1);
  return (int)(3 << (uVar1 & 0xff) & (uint)*(byte *)(*(int *)(this + DAT_0023a410 + 8) + iVar2)) >>
         (uVar1 & 0xff) & 0xff;
}


