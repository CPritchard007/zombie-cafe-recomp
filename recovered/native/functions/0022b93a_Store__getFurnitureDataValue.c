/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022b93a Store::getFurnitureDataValue */

/* Store::getFurnitureDataValue(FurnitureData*) */

int Store::getFurnitureDataValue(FurnitureData *param_1)

{
  return (uint)(byte)param_1[0x28] * 0x10000 + *(int *)(param_1 + 0x24);
}


