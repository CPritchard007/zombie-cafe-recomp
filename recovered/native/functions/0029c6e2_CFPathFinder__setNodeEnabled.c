/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c6e2 CFPathFinder::setNodeEnabled */

/* CFPathFinder::setNodeEnabled(int, bool) */

void __thiscall CFPathFinder::setNodeEnabled(CFPathFinder *this,int param_1,bool param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*(int *)(this + 0x18) + (param_1 >> 3));
  bVar1 = (byte)(1 << (param_1 + (param_1 >> 3) * -8 & 0xffU));
  if (param_2) {
    *pbVar2 = bVar1 | *pbVar2;
  }
  else {
    *pbVar2 = *pbVar2 & ~bVar1;
  }
  performSet(this,param_1);
  return;
}


