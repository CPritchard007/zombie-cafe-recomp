/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001195c4 GameStateCafe::addServingCounter */

/* GameStateCafe::addServingCounter(Cafe*, int, int, int) */

void __thiscall
GameStateCafe::addServingCounter
          (GameStateCafe *this,Cafe *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  ServingCounter *this_00;
  long lVar2;
  
  this_00 = (ServingCounter *)operator_new(0x7c);
  ServingCounter::ServingCounter
            (this_00,*(FurnitureData **)(param_2 * 4 + *(int *)(param_1 + 0x94)));
  lVar2 = Cafe::diamondToStaggeredCoords(param_3,param_4);
  sVar1 = Cafe::staggeredCoordsToIndex(lVar2);
  CafeObject::setTileIndex((CafeObject *)this_00,sVar1,param_1);
  Cafe::addFurniture(param_1,(Furniture *)this_00);
  return;
}


