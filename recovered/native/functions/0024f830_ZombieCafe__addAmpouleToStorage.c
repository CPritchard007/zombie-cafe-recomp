/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f830 ZombieCafe::addAmpouleToStorage */

/* ZombieCafe::addAmpouleToStorage(int) */

undefined8 __thiscall ZombieCafe::addAmpouleToStorage(ZombieCafe *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ZombieCafe *local_20;
  
  iVar1 = *(int *)(this + 0x7e8);
  iVar3 = iVar1;
  local_20 = this;
  if (iVar1 != 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x100) + 1; iVar2 = iVar2 + 1) {
      local_20 = *(ZombieCafe **)
                  (*(int *)(iVar2 * 4 + *(int *)(iVar1 + 0x104)) * 4 + *(int *)(iVar1 + 0x94));
      if (local_20[0x44] == (ZombieCafe)0x10) {
        iVar3 = iVar3 + (uint)(*(int *)(local_20 + 0x24) == param_1);
      }
    }
    if (iVar3 < 9) {
      Vector<int>::addElement((Vector<int> *)(iVar1 + 0xfc),param_1);
      iVar3 = iVar3 + 1;
    }
  }
  return CONCAT44(local_20,iVar3);
}


