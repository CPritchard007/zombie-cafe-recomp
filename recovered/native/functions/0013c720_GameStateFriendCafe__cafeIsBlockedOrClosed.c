/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c720 GameStateFriendCafe::cafeIsBlockedOrClosed */

/* GameStateFriendCafe::cafeIsBlockedOrClosed() */

bool __thiscall GameStateFriendCafe::cafeIsBlockedOrClosed(GameStateFriendCafe *this)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  CFPathFinder *pCVar7;
  bool bVar8;
  float extraout_s0;
  float extraout_s0_00;
  int local_2c;
  
  iVar6 = DAT_0013c814 + 0x13c730;
  bVar8 = true;
  if (*(char *)(*(int *)(this + 0x34) + 100) != '\0') {
    for (local_2c = 0; local_2c < *(int *)(this + 0x130) + 1; local_2c = local_2c + 1) {
      iVar5 = *(int *)(local_2c * 4 + *(int *)(this + 0x134));
      cVar1 = *(char *)(*(int *)(iVar5 + 0x8c) + 0x44);
      if ((cVar1 != '\x03') && (cVar1 != '\x06')) {
        pCVar7 = *(CFPathFinder **)(iVar5 + 0x80);
        sVar2 = *(short *)(iVar5 + 0x2c);
        lVar4 = Cafe::diamondToStaggeredCoords
                          (**(int **)(iVar6 + DAT_0013c818) + -1,
                           **(int **)(iVar6 + DAT_0013c81c) + 1 + **(int **)(iVar6 + DAT_0013c820));
        iVar5 = Cafe::staggeredCoordsToIndex(lVar4);
        iVar3 = Character::getMSPerCostUnit();
        iVar5 = CFPathFinder::createPathTween(pCVar7,(int)sVar2,iVar5,extraout_s0,iVar3);
        if (iVar5 == 0) {
          return true;
        }
      }
    }
    pCVar7 = *(CFPathFinder **)(*(int *)(this + 0x128) + 0x80);
    sVar2 = *(short *)(*(int *)(this + 0x128) + 0x2c);
    lVar4 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar6 + DAT_0013c818) + -1,
                       **(int **)(iVar6 + DAT_0013c81c) + 1 + **(int **)(iVar6 + DAT_0013c820));
    iVar6 = Cafe::staggeredCoordsToIndex(lVar4);
    iVar5 = Character::getMSPerCostUnit();
    iVar6 = CFPathFinder::createPathTween(pCVar7,(int)sVar2,iVar6,extraout_s0_00,iVar5);
    bVar8 = iVar6 == 0;
  }
  return bVar8;
}


