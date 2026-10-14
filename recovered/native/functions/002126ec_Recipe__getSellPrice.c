/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002126ec Recipe::getSellPrice */

/* Recipe::getSellPrice(unsigned char) const */

int __thiscall Recipe::getSellPrice(Recipe *this,uchar param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(this + 0xe);
  iVar1 = iVar2 + 1;
  if ((param_1 != '\x03') && (iVar1 = iVar2 + 2, param_1 != '\x04')) {
    iVar1 = iVar2;
  }
  return iVar1;
}


