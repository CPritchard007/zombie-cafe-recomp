/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be7c8 Cafe::getAppropriatenessScore */

/* Cafe::getAppropriatenessScore(Cafe::AppropriateCounterData*, ServingCounter*) */

int Cafe::getAppropriatenessScore(AppropriateCounterData *param_1,ServingCounter *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_2 + 0x70) + 1; iVar2 = iVar2 + 1) {
    puVar3 = *(ushort **)(iVar2 * 4 + *(int *)(param_2 + 0x74));
    iVar1 = iVar1 + *(int *)(puVar3 + 2);
    if ((iVar2 == *(int *)(param_2 + 0x70)) && ((uint)*puVar3 == *(uint *)(param_1 + 4))) {
      iVar1 = iVar1 + DAT_000be7f8;
    }
  }
  return iVar1;
}


