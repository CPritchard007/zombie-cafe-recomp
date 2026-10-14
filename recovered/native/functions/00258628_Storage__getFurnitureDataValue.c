/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00258628 Storage::getFurnitureDataValue */

/* Storage::getFurnitureDataValue(FurnitureData*) */

int Storage::getFurnitureDataValue(FurnitureData *param_1)

{
  return (uint)(byte)param_1[0x28] * 0x10000 + *(int *)(param_1 + 0x24);
}


