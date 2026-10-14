/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029347c HCOManager::getHCOEnable */

/* HCOManager::getHCOEnable() */

uint __thiscall HCOManager::getHCOEnable(HCOManager *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = JSONGetGameInfo::getInstance();
  uVar2 = *(uint *)(iVar1 + 4);
  if (uVar2 != 0) {
    iVar1 = JSONGetGameInfo::getInstance();
    iVar3 = *(int *)(iVar1 + 8);
    iVar1 = JSONGetGameInfo::getInstance();
    iVar4 = *(int *)(iVar1 + 0xc);
    Platform::getAppTime();
    iVar1 = __fixdfsi();
    uVar2 = 0;
    if ((0 < iVar1 - iVar3) && (iVar1 - iVar4 < 0)) {
      uVar2 = (uint)(*(int *)(this + 8) == 1);
    }
  }
  return uVar2;
}


