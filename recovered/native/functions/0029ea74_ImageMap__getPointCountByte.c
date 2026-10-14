/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ea74 ImageMap::getPointCountByte */

/* ImageMap::getPointCountByte(short) const */

undefined1 __thiscall ImageMap::getPointCountByte(ImageMap *this,short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  for (iVar1 = (int)param_1; 0 < iVar1; iVar1 = (iVar1 + -1) * 0x10000 >> 0x10) {
    iVar2 = iVar2 + (uint)*(byte *)(*(int *)(this + 4) + iVar2) * 2 + 1;
  }
  return *(undefined1 *)(*(int *)(this + 4) + iVar2);
}


