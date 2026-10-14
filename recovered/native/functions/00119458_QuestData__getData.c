/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119458 QuestData::getData */

/* QuestData::getData(int) */

int QuestData::getData(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < param_1) && (param_1 < **(short **)(DAT_00119480 + 0x119466))) {
    iVar1 = **(int **)(DAT_00119484 + 0x119478) + param_1 * 0x5c;
  }
  return iVar1;
}


