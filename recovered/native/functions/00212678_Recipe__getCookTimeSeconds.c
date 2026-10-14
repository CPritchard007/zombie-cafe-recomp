/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212678 Recipe::getCookTimeSeconds */

/* Recipe::getCookTimeSeconds(unsigned char) const */

int __thiscall Recipe::getCookTimeSeconds(Recipe *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = 0x36;
  if (((param_1 != '\b') && (iVar1 = 0x30, param_1 != '\t')) && (iVar1 = 0x3c, param_1 == '\a')) {
    iVar1 = 0x78;
  }
  return *(short *)(this + 10) * iVar1;
}


