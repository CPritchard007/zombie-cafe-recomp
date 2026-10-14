/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025874a Storage::specialFurniture */

/* Storage::specialFurniture(FurnitureData*) */

bool __thiscall Storage::specialFurniture(Storage *this,FurnitureData *param_1)

{
  FurnitureData FVar1;
  bool bVar2;
  
  FVar1 = param_1[0x44];
  if ((FVar1 == (FurnitureData)0x7) || (FVar1 == (FurnitureData)0x5)) {
    bVar2 = true;
  }
  else {
    bVar2 = FVar1 == (FurnitureData)0xc;
  }
  return bVar2;
}


