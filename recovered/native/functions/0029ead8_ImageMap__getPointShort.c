/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ead8 ImageMap::getPointShort */

/* ImageMap::getPointShort(short, unsigned char) const */

undefined4 __thiscall ImageMap::getPointShort(ImageMap *this,short param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 4;
  for (iVar1 = (int)param_1; iVar3 = *(int *)(this + 4), 0 < iVar1;
      iVar1 = (iVar1 + -1) * 0x10000 >> 0x10) {
    iVar2 = iVar2 + (uint)*(byte *)(iVar3 + iVar2) * 4 + 1;
  }
  iVar2 = iVar2 + (uint)param_2 * 4 + 1;
  iVar1 = iVar3 + iVar2;
  return CONCAT22(CONCAT11(*(undefined1 *)(iVar3 + iVar2),*(undefined1 *)(iVar1 + 1)),
                  CONCAT11(*(undefined1 *)(iVar1 + 2),*(undefined1 *)(iVar1 + 3)));
}


