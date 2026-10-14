/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4f18 CafeWall::getTopLeft */

/* CafeWall::getTopLeft() const */

uint __thiscall CafeWall::getTopLeft(CafeWall *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  CImage *this_00;
  
  uVar5 = *(uint *)(this + 4);
  if (this[0x3a] == (CafeWall)0x0) {
    iVar1 = CImage::getHeight(*(CImage **)(*(int *)(this + 0x34) + *(short *)(this + 0x38) * 4));
    uVar3 = uVar5 - iVar1 & 0xffff;
    uVar4 = ((uVar5 >> 0x10) + (uint)**(byte **)(DAT_000c4f6c + 0xc4f5c)) * 0x10000;
  }
  else {
    this_00 = *(CImage **)(*(int *)(this + 0x34) + *(short *)(this + 0x38) * 4);
    iVar1 = CImage::getWidth(this_00);
    iVar2 = CImage::getHeight(this_00);
    uVar4 = uVar5 - iVar2 & 0xffff;
    uVar3 = ((uVar5 >> 0x10) - iVar1) * 0x10000;
  }
  return uVar3 | uVar4;
}


