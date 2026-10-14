/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beb7e Cafe::compareCountersForAppropriateness */

/* Cafe::compareCountersForAppropriateness(Cafe::AppropriateCounterData*, ServingCounter*,
   ServingCounter*) */

int Cafe::compareCountersForAppropriateness
              (AppropriateCounterData *param_1,ServingCounter *param_2,ServingCounter *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = getAppropriatenessScore(param_1,param_2);
  iVar2 = getAppropriatenessScore(param_1,param_3);
  if (iVar1 == iVar2) {
    lVar3 = indexToStaggeredCoords(*(int *)(param_1 + 8));
    lVar3 = staggeredToDiamondCoords(lVar3);
    lVar4 = indexToStaggeredCoords((int)*(short *)(param_2 + 0x2c));
    lVar4 = staggeredToDiamondCoords(lVar4);
    lVar5 = indexToStaggeredCoords((int)*(short *)(param_3 + 0x2c));
    lVar5 = staggeredToDiamondCoords(lVar5);
    iVar1 = distanceBetweenDiamondCoords(lVar3,lVar4);
    iVar2 = distanceBetweenDiamondCoords(lVar3,lVar5);
  }
  return iVar1 - iVar2;
}


