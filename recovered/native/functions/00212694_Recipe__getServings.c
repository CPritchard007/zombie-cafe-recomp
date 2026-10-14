/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212694 Recipe::getServings */

/* Recipe::getServings(unsigned char) const */

int __thiscall Recipe::getServings(Recipe *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(this + 0xc) << 1;
  if (param_1 != '\x05') {
    iVar1 = (int)*(short *)(this + 0xc);
  }
  return iVar1;
}


