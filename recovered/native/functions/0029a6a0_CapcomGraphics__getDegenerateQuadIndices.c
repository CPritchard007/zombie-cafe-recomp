/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a6a0 CapcomGraphics::getDegenerateQuadIndices */

/* CapcomGraphics::getDegenerateQuadIndices(int) */

undefined4 __thiscall CapcomGraphics::getDegenerateQuadIndices(CapcomGraphics *this,int param_1)

{
  short sVar1;
  int extraout_r1;
  int iVar2;
  Vector<unsigned_short> *this_00;
  
  this_00 = *(Vector<unsigned_short> **)(DAT_0029a6e4 + 0x29a6ac);
  iVar2 = *(int *)(this_00 + 4);
  while (iVar2 = iVar2 + 1, iVar2 < param_1 * 6 + -2) {
    __aeabi_idivmod(iVar2,6);
    sVar1 = __divsi3(iVar2,6);
    Vector<unsigned_short>::addElement
              (this_00,((short)iVar2 -
                       (short)((int)(((uint)(extraout_r1 >> 0x1f) >> 0x1e) + extraout_r1) >> 2)) +
                       sVar1 * -2);
  }
  return *(undefined4 *)(this_00 + 8);
}


