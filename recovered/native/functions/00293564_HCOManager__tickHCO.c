/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293564 HCOManager::tickHCO */

/* HCOManager::tickHCO() */

int __thiscall HCOManager::tickHCO(HCOManager *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = getHCOEnable(this);
  if (iVar1 != 0) {
    iVar2 = getHCORemainingTime(this);
    iVar1 = 1;
    if (iVar2 < 0) {
      *(undefined4 *)(this + 8) = 2;
      save();
    }
  }
  return iVar1;
}


