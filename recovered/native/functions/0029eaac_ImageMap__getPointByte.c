/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029eaac ImageMap::getPointByte */

/* ImageMap::getPointByte(short, unsigned char) const */

uint __thiscall ImageMap::getPointByte(ImageMap *this,short param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 4;
  for (iVar1 = (int)param_1; iVar3 = *(int *)(this + 4), 0 < iVar1;
      iVar1 = (iVar1 + -1) * 0x10000 >> 0x10) {
    iVar2 = iVar2 + (uint)*(byte *)(iVar3 + iVar2) * 2 + 1;
  }
  iVar2 = iVar2 + (uint)param_2 * 2 + 1;
  return (uint)*(byte *)(iVar3 + iVar2) << 0x10 | (uint)*(byte *)(iVar3 + iVar2 + 1);
}


