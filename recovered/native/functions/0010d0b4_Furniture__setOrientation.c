/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d0b4 Furniture::setOrientation */

/* Furniture::setOrientation(unsigned char) */

void __thiscall Furniture::setOrientation(Furniture *this,uchar param_1)

{
  undefined4 uVar1;
  
  this[0x34] = (Furniture)param_1;
  uVar1 = CImage::getSize(*(CImage **)
                           (*(short *)((int)*(int **)(this + 0x38) + (param_1 + 0x1c) * 2 + 4) * 4 +
                           **(int **)(this + 0x38)));
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


