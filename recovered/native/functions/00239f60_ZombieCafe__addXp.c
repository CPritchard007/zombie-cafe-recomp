/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239f60 ZombieCafe::addXp */

/* ZombieCafe::addXp(int) */

void __thiscall ZombieCafe::addXp(ZombieCafe *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00239f98;
  iVar1 = DAT_00239f94;
  iVar2 = *(int *)(this + DAT_00239f94);
  *(int *)(this + DAT_00239f94) = param_1 + iVar2;
  iVar3 = *(int *)((**(byte **)(iVar3 + 0x239f70) - 1) * 4 + **(int **)(DAT_00239f9c + 0x239f7a));
  if (iVar3 < param_1 + iVar2) {
    *(int *)(this + iVar1) = iVar3;
  }
  if (*(int *)(this + iVar1) < 0) {
    *(undefined4 *)(this + DAT_00239f94) = 0;
  }
  return;
}


