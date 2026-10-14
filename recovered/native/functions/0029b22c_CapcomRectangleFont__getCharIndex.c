/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b22c CapcomRectangleFont::getCharIndex */

/* CapcomRectangleFont::getCharIndex(char) */

int __thiscall CapcomRectangleFont::getCharIndex(CapcomRectangleFont *this,char param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = (uint)param_1;
  iVar3 = *(int *)(this + 4);
  iVar5 = 0;
  while ((uVar4 = (uint)*(byte *)(iVar3 + 6), uVar4 != 0 && (uVar4 <= uVar2))) {
    pbVar1 = (byte *)(iVar3 + 7);
    iVar3 = iVar3 + 3;
    if ((int)uVar2 < (int)(uVar4 + *pbVar1)) {
      return ((iVar5 + uVar2) - uVar4) * 2 + *(int *)(this + 0xc);
    }
    iVar5 = iVar5 + (uint)*pbVar1;
  }
  return -1;
}


