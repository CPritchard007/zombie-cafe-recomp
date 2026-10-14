/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002934b8 HCOManager::getHCORemainingTime */

/* HCOManager::getHCORemainingTime() */

int __thiscall HCOManager::getHCORemainingTime(HCOManager *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = getHCOEnable(this);
  if (iVar1 != 0) {
    iVar1 = JSONGetGameInfo::getInstance();
    iVar4 = *(int *)(iVar1 + 0xc);
    Platform::getAppTime();
    iVar2 = __fixdfsi();
    iVar1 = *(int *)(this + 4);
    iVar3 = JSONGetGameInfo::getInstance();
    iVar1 = *(int *)(iVar3 + 0x10) * 0x3c + iVar1;
    if (0 < iVar1 - iVar4) {
      iVar1 = iVar4;
    }
    iVar1 = (iVar1 - iVar2) * 1000;
  }
  return iVar1;
}


