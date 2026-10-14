/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136798 GameStateColosseum::addKillCount */

/* GameStateColosseum::addKillCount(int) */

void __thiscall GameStateColosseum::addKillCount(GameStateColosseum *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_001367b8;
  if (10 < param_1) {
    param_1 = 1;
  }
  if (*(int *)(this + 0x58) <= DAT_001367b4) {
    iVar2 = *(int *)(this + 0x58) + param_1;
    *(int *)(this + 0x58) = iVar2;
    if (iVar1 < iVar2) {
      *(int *)(this + 0x58) = iVar1;
    }
  }
  return;
}


