/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212734 Recipe::getBurnTimeSeconds */

/* Recipe::getBurnTimeSeconds(unsigned char) const */

int __thiscall Recipe::getBurnTimeSeconds(Recipe *this,uchar param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == '\x06') {
    iVar1 = getCookTimeSeconds(this,'\x06');
    iVar1 = iVar1 * 3;
  }
  else {
    iVar1 = getCookTimeSeconds(this,param_1);
    iVar1 = iVar1 << 1;
  }
  iVar2 = getCookTimeSeconds(this,param_1);
  iVar3 = iVar2 + 600;
  if (iVar2 + 600 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}


