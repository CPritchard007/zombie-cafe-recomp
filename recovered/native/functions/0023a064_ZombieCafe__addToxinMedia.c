/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a064 ZombieCafe::addToxinMedia */

/* ZombieCafe::addToxinMedia(int) */

void __thiscall ZombieCafe::addToxinMedia(ZombieCafe *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0023a080;
  iVar1 = param_1 + *(int *)(this + 0x498);
  *(int *)(this + 0x498) = iVar1;
  if (iVar1 <= iVar2) {
    if (-1 < iVar1) {
      return;
    }
    iVar2 = 0;
  }
  *(int *)(this + 0x498) = iVar2;
  return;
}


