/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011953c GameStateCafe::addStove */

/* GameStateCafe::addStove(Cafe*, int, int, int) */

void __thiscall
GameStateCafe::addStove(GameStateCafe *this,Cafe *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  Furniture *this_00;
  long lVar2;
  FurnitureData *pFVar3;
  
  this_00 = (Furniture *)operator_new(0x8c);
  pFVar3 = *(FurnitureData **)(param_2 * 4 + *(int *)(param_1 + 0x94));
  Furniture::Furniture(this_00,pFVar3);
  *(int *)this_00 = *(int *)(DAT_001195c0 + 0x119566) + 8;
  this_00[0x81] = (Furniture)0x1;
  *(undefined4 *)(this_00 + 0x6c) = 0;
  *(undefined4 *)(this_00 + 0x78) = 0;
  *(undefined4 *)(this_00 + 0x70) = 0;
  *(undefined4 *)(this_00 + 0x74) = 0;
  *(undefined4 *)(this_00 + 100) = 0;
  *(FurnitureData **)(this_00 + 0x68) = pFVar3;
  *(undefined4 *)(this_00 + 0x88) = 0;
  *(undefined4 *)(this_00 + 0x7c) = 0;
  this_00[0x80] = (Furniture)0x1;
  this_00[0x82] = (Furniture)0x0;
  this_00[0x83] = (Furniture)0x0;
  *(undefined2 *)(this_00 + 0x84) = 0;
  lVar2 = Cafe::diamondToStaggeredCoords(param_3,param_4);
  sVar1 = Cafe::staggeredCoordsToIndex(lVar2);
  CafeObject::setTileIndex((CafeObject *)this_00,sVar1,param_1);
  Cafe::addFurniture(param_1,this_00);
  return;
}


