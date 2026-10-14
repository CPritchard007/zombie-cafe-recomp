/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011960e GameStateCafe::addWallDecor */

/* GameStateCafe::addWallDecor(Cafe*, int, int, int, unsigned char) */

ulonglong __thiscall
GameStateCafe::addWallDecor
          (GameStateCafe *this,Cafe *param_1,int param_2,int param_3,int param_4,uchar param_5)

{
  Furniture *pFVar1;
  long lVar2;
  int iVar3;
  
  pFVar1 = (Furniture *)operator_new(100);
  Furniture::Furniture(pFVar1,*(FurnitureData **)(param_2 * 4 + *(int *)(param_1 + 0x94)));
  lVar2 = Cafe::diamondToStaggeredCoords(param_3,param_4);
  iVar3 = Cafe::staggeredCoordsToIndex(lVar2);
  pFVar1 = *(Furniture **)(*(int *)(iVar3 * 4 + *(int *)param_1) + (param_5 + 2) * 4 + 4);
  if (pFVar1 != (Furniture *)0x0) {
    Cafe::addWallDecor((CafeWall *)param_1,pFVar1);
  }
  return (ulonglong)CONCAT14(param_5,this);
}


