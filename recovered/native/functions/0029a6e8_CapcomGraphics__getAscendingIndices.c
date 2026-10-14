/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a6e8 CapcomGraphics::getAscendingIndices */

/* CapcomGraphics::getAscendingIndices(int) */

undefined4 __thiscall CapcomGraphics::getAscendingIndices(CapcomGraphics *this,int param_1)

{
  int iVar1;
  Vector<unsigned_short> *this_00;
  
  this_00 = *(Vector<unsigned_short> **)(DAT_0029a70c + 0x29a6f2);
  iVar1 = *(int *)(this_00 + 4);
  while (iVar1 = iVar1 + 1, iVar1 < param_1) {
    Vector<unsigned_short>::addElement(this_00,(ushort)iVar1);
  }
  return *(undefined4 *)(this_00 + 8);
}


