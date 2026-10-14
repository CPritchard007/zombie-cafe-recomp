/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d131c Quest::runQuest */

/* Quest::runQuest(int, int, int*) */

void Quest::runQuest(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  
  iVar1 = DAT_001d138c;
  printf((char *)(DAT_001d1388 + 0x1d132a));
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0x20) + 1; local_28 = local_28 + 1) {
    piVar4 = *(int **)(local_28 * 4 + *(int *)(param_1 + 0x24));
    iVar3 = *piVar4;
    iVar2 = QuestData::getData(iVar3);
    if (*(char *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0xc)) + 4) == '\x02') {
      if ((uint)*(byte *)(iVar2 + 5) == param_2) {
        printf((char *)(iVar1 + 0x1d133a));
        checkQuestClear(param_1,(ActiveQuest *)*piVar4,(int)piVar4,param_3);
      }
    }
  }
  return;
}


