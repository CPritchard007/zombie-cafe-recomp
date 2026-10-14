/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bed20 Cafe::setDoorOpen */

/* Cafe::setDoorOpen(bool, bool) */

void __thiscall Cafe::setDoorOpen(Cafe *this,bool param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float extraout_s0;
  float extraout_s0_00;
  
  if (this[100] != (Cafe)param_1) {
    this[100] = (Cafe)param_1;
    lVar1 = diamondToStaggeredCoords
                      (**(int **)(DAT_000bed94 + 0xbed3a) + -1,
                       **(int **)(DAT_000bed98 + 0xbed44) + 1 + **(int **)(DAT_000bed9c + 0xbed4e));
    iVar2 = staggeredCoordsToIndex(lVar1);
    iVar3 = getNextTileNE(iVar2);
    if (param_1) {
      this[0xe4] = (Cafe)0x0;
      CFPathFinder::linkNodes(*(CFPathFinder **)(this + 0x5c),iVar2,iVar3,extraout_s0);
    }
    else {
      this[0xe4] = (Cafe)0x1;
      this[0xe5] = (Cafe)param_2;
    }
    iVar2 = CapcomApp::getInstance();
    ZombieCafe::playEffect(*(int *)(iVar2 + 4),extraout_s0_00);
  }
  return;
}


