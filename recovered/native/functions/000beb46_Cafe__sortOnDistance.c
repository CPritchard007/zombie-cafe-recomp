/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beb46 Cafe::sortOnDistance */

/* Cafe::sortOnDistance(long*, CafeObject*, CafeObject*) */

int Cafe::sortOnDistance(long *param_1,CafeObject *param_2,CafeObject *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = indexToStaggeredCoords((int)*(short *)(param_2 + 0x2c));
  lVar1 = staggeredToDiamondCoords(lVar1);
  lVar2 = indexToStaggeredCoords((int)*(short *)(param_3 + 0x2c));
  lVar2 = staggeredToDiamondCoords(lVar2);
  iVar3 = distanceBetweenDiamondCoords(*param_1,lVar1);
  iVar4 = distanceBetweenDiamondCoords(*param_1,lVar2);
  return iVar3 - iVar4;
}


