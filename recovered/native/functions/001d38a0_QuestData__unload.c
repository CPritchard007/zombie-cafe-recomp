/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d38a0 QuestData::unload */

/* QuestData::unload() */

void QuestData::unload(void)

{
  void *pvVar1;
  short *psVar2;
  Data *pDVar3;
  int *piVar4;
  int iVar5;
  
  psVar2 = *(short **)(DAT_001d3910 + 0x1d38ac);
  piVar4 = *(int **)(DAT_001d3914 + 0x1d38ae);
  for (iVar5 = 0; iVar5 < *psVar2; iVar5 = iVar5 + 1) {
    pvVar1 = *(void **)(*piVar4 + iVar5 * 0x5c + 0x2c);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = *(void **)(*piVar4 + iVar5 * 0x5c + 0x38);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    pDVar3 = (Data *)(iVar5 + *(int *)(iVar5 + -4) * 0x5c);
    while (pDVar3 != (Data *)*piVar4) {
      Data::~Data(pDVar3 + -0x5c);
      pDVar3 = pDVar3 + -0x5c;
    }
    operator_delete__(pDVar3 + -8);
  }
  *psVar2 = 0;
  *piVar4 = 0;
  return;
}


