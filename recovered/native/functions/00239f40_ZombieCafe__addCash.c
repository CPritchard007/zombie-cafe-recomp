/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239f40 ZombieCafe::addCash */

/* ZombieCafe::addCash(int) */

void __thiscall ZombieCafe::addCash(ZombieCafe *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00239f5c;
  iVar1 = DAT_00239f58;
  iVar2 = param_1 + *(int *)(this + DAT_00239f58);
  *(int *)(this + DAT_00239f58) = iVar2;
  if (iVar2 <= iVar3) {
    if (-1 < iVar2) {
      return;
    }
    iVar3 = 0;
  }
  *(int *)(this + iVar1) = iVar3;
  return;
}


