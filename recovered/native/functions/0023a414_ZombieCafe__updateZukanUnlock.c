/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a414 ZombieCafe::updateZukanUnlock */

/* ZombieCafe::updateZukanUnlock(int, unsigned char) */

bool __thiscall ZombieCafe::updateZukanUnlock(ZombieCafe *this,int param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = doubleCharactorBugFixId(this,param_1);
  iVar3 = (int)(((uint)((int)uVar1 >> 0x1f) >> 0x1e) + uVar1) >> 2;
  uVar2 = (uint)*(byte *)(*(int *)(this + DAT_0023a468 + 8) + iVar3);
  uVar1 = uVar1 & DAT_0023a46c;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  uVar1 = (param_2 & 3) << ((uVar1 & 0x7f) << 1) & 0xff | uVar2;
  if ((-1 < iVar3) && (iVar3 <= *(int *)(this + DAT_0023a468 + 4))) {
    *(byte *)(*(int *)(this + DAT_0023a468 + 8) + iVar3) = (byte)uVar1;
  }
  return uVar2 != uVar1;
}


