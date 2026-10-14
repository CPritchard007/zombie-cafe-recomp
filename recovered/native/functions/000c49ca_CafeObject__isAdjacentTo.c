/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c49ca CafeObject::isAdjacentTo */

/* CafeObject::isAdjacentTo(int) */

bool __thiscall CafeObject::isAdjacentTo(CafeObject *this,int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = Cafe::getNextTileSE((int)*(short *)(this + 0x2c));
  bVar2 = true;
  if (((iVar1 != param_1) &&
      (iVar1 = Cafe::getNextTileSW((int)*(short *)(this + 0x2c)), iVar1 != param_1)) &&
     (iVar1 = Cafe::getNextTileNE((int)*(short *)(this + 0x2c)), iVar1 != param_1)) {
    iVar1 = Cafe::getNextTileNW((int)*(short *)(this + 0x2c));
    bVar2 = iVar1 == param_1;
  }
  return bVar2;
}


