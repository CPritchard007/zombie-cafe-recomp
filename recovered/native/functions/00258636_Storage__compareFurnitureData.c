/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00258636 Storage::compareFurnitureData */

/* Storage::compareFurnitureData(FurnitureData*, FurnitureData*) */

int Storage::compareFurnitureData(FurnitureData *param_1,FurnitureData *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = getFurnitureDataValue(param_1);
  iVar2 = getFurnitureDataValue(param_2);
  return iVar1 - iVar2;
}


