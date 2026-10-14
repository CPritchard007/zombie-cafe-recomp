/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022b948 Store::compareFurnitureData */

/* Store::compareFurnitureData(FurnitureData*, FurnitureData*) */

int Store::compareFurnitureData(FurnitureData *param_1,FurnitureData *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = getFurnitureDataValue(param_1);
  iVar2 = getFurnitureDataValue(param_2);
  return iVar1 - iVar2;
}


