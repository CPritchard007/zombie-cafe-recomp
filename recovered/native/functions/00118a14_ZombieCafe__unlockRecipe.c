/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118a14 ZombieCafe::unlockRecipe */

/* ZombieCafe::unlockRecipe(int, unsigned char) */

void __thiscall ZombieCafe::unlockRecipe(ZombieCafe *this,int param_1,uchar param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = param_1 * 10 + (uint)param_2;
  iVar2 = iVar3 >> 3;
  pbVar4 = (byte *)(*(int *)(this + 0x1c) + iVar2);
  *pbVar4 = (byte)(1 << (iVar3 + iVar2 * -8 & 0xffU)) | *pbVar4;
  bVar1 = *(byte *)(*(int *)(this + 0x4e8) + param_1 * 0x1c + 0x18);
  if (((bVar1 != 4) && (1 < bVar1)) && (bVar1 != 5)) {
    CRAMHoover::beginTrackEvent(*(char **)(this + 0x840));
    addMixPanelHeader(this);
    CRAMHoover::endTrackEvent();
  }
  return;
}


