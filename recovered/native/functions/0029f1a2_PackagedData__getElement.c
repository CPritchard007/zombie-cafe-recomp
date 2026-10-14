/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f1a2 PackagedData::getElement */

/* PackagedData::getElement(int) const */

int __thiscall PackagedData::getElement(PackagedData *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 4);
  if ((param_1 < 0) || (iVar3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_1 < *(int *)(this + 8)) {
      pbVar2 = (byte *)(iVar3 + param_1 * 4 + 2);
      iVar1 = iVar3 + ((uint)pbVar2[2] << 0x10 | (uint)pbVar2[3] << 0x18 | (uint)*pbVar2 |
                      (uint)pbVar2[1] << 8) + *(int *)(this + 0xc);
    }
  }
  return iVar1;
}


