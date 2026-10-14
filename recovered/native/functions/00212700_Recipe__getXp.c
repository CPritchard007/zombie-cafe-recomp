/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212700 Recipe::getXp */

/* Recipe::getXp(unsigned char) const */

int __thiscall Recipe::getXp(Recipe *this,uchar param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(this + 0x10);
  if (param_1 == '\x01') {
    iVar1 = __divsi3(iVar2 * 0x6e,100);
    iVar2 = iVar2 + 1;
  }
  else {
    if (param_1 != '\x02') {
      return iVar2;
    }
    iVar1 = __divsi3(iVar2 * 0x78,100);
    iVar2 = iVar2 + 2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


