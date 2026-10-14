/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fad78 ZombieCafe::isRecipeUnlocked */

/* ZombieCafe::isRecipeUnlocked(int, unsigned char) const */

uint __thiscall ZombieCafe::isRecipeUnlocked(ZombieCafe *this,int param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 10 + (uint)param_2;
  iVar2 = iVar1 >> 3;
  return (int)(uint)*(byte *)(*(int *)(this + 0x1c) + iVar2) >> (iVar1 + iVar2 * -8 & 0xffU) & 1;
}


