/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b55d0 GameStateEventRaid3::addKillCount */

/* GameStateEventRaid3::addKillCount(int, int) */

void __thiscall GameStateEventRaid3::addKillCount(GameStateEventRaid3 *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x5c) <= DAT_001b55ec) {
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
  }
  iVar1 = DAT_001b55f0;
  iVar2 = *(int *)(this + 0x60);
  *(int *)(this + 0x60) = param_2 + iVar2;
  if (iVar1 < param_2 + iVar2) {
    *(int *)(this + 0x60) = iVar1;
  }
  return;
}


