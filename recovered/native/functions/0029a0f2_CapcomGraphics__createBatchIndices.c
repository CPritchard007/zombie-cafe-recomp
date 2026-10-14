/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a0f2 CapcomGraphics::createBatchIndices */

/* CapcomGraphics::createBatchIndices(int) */

undefined8 __thiscall CapcomGraphics::createBatchIndices(CapcomGraphics *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(this + 0x20) != -1) {
    uVar1 = *(ushort *)(*(int *)(this + 0x20) * 2 + *(int *)(this + 0x24));
    uVar2 = uVar1 + 1;
    Vector<unsigned_short>::addElement((Vector<unsigned_short> *)(this + 0x1c),uVar1);
    Vector<unsigned_short>::addElement((Vector<unsigned_short> *)(this + 0x1c),uVar2);
  }
  for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
    Vector<unsigned_short>::addElement((Vector<unsigned_short> *)(this + 0x1c),uVar2);
    uVar2 = uVar2 + 1;
  }
  return CONCAT44(param_1,this);
}


