/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c21a0 Cafe::createWallDecorationVector */

/* Cafe::createWallDecorationVector() */

Vector<Furniture*> * __thiscall Cafe::createWallDecorationVector(Cafe *this)

{
  Vector<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (Vector<Furniture*> *)operator_new(0xc);
  Vector<Furniture*>::Vector(this_00);
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x4c) + 1; iVar3 = iVar3 + 1) {
    iVar4 = *(int *)(*(int *)(iVar3 * 4 + *(int *)(this + 0x50)) + 0x44);
    if (iVar4 != 0) {
      iVar2 = *(int *)(this_00 + 4) + 2;
      if (*(int *)this_00 < iVar2) {
        iVar1 = *(int *)this_00 * 2;
        if (iVar1 < iVar2) {
          iVar1 = iVar2;
        }
        Vector<Furniture*>::resize(this_00,iVar1,-1);
      }
      iVar2 = *(int *)(this_00 + 4);
      *(int *)(this_00 + 4) = iVar2 + 1;
      *(int *)((iVar2 + 1) * 4 + *(int *)(this_00 + 8)) = iVar4;
    }
  }
  return this_00;
}


